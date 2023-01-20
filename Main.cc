#include <iostream>
#include <string>
#include <memory>

// Server
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "Include/Services/ClientService.hpp"
#include "Include/Services/InvoiceService.hpp"
#include "Include/Services/ProductService.hpp"

int32_t main()
{
  const std::string server_address = "0.0.0.0:2023";
  grpc::EnableDefaultHealthCheckService(true);

  GrpcProject::Repositories::Database database;

  grpc::ServerBuilder server_builder;

  server_builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

  GrpcProject::Services::ClientService service_client { database };
  GrpcProject::Services::InvoiceService service_invoice { database };
  GrpcProject::Services::ProductService service_product { database };
  server_builder.RegisterService(std::addressof(service_client));
  server_builder.RegisterService(std::addressof(service_invoice));
  server_builder.RegisterService(std::addressof(service_product));

  std::unique_ptr<grpc::Server> server{server_builder.BuildAndStart()};

  std::clog << "Server Listening On: " << server_address << std::endl;

  server->Wait();

  return EXIT_SUCCESS;
}