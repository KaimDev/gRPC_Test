#ifndef ACB0D396_E2A7_43D8_AD3C_9203839B7D88
#define ACB0D396_E2A7_43D8_AD3C_9203839B7D88

#include <iostream>
#include <string>
#include <vector>
#include <grpc++/grpc++.h>
#include "Services/ClientService.grpc.pb.h"
#include "Repositories/Database.hpp"

namespace GrpcProject::Services
{
  class ClientService final : public GrpcProject::Protos::Services::ClientService::Service
  {
  public:
    ClientService(GrpcProject::Repositories::Database &database);
    ~ClientService() = default;

    virtual ::grpc::Status CreateClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) override;

    virtual ::grpc::Status ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response) override;

    virtual ::grpc::Status InvoiceClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response) override;

  private:
    GrpcProject::Repositories::Database& m_database;
  };
}

#endif /* ACB0D396_E2A7_43D8_AD3C_9203839B7D88 */
