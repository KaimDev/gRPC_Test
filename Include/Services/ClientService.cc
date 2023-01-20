#include "ClientService.hpp"
#include "Models/Client.hpp"

namespace GrpcProject::Services
{
  ClientService::ClientService(GrpcProject::Repositories::Database &database)
    : m_database { database }
  {
  }

  ::grpc::Status ClientService::CreateClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response)
  {
    GrpcProject::Models::Client client { request->id(), request->name(), request->phone(), request->email()};

    auto& client_repo = m_database.Clients();

    client_repo.AddClient(client);

    response->set_is_success(true);

    return ::grpc::Status::OK;
  }

  ::grpc::Status ClientService::ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response)
  {
    auto& client_repo = m_database.Clients();

    for (const auto& client : client_repo)
    {
      auto grpc_client = response->add_clients();
      grpc_client->set_id(client.id);
      grpc_client->set_name(client.name);
      grpc_client->set_phone(client.phone);
      grpc_client->set_email(client.email);
    }

    return ::grpc::Status::OK;
  }

  ::grpc::Status ClientService::InvoiceClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response)
  {
    auto& invoice_repo = m_database.Invoices();

    auto invoice_client = invoice_repo.FindByInvoiceByClientId(request->id());

    response->set_id(invoice_client.value().id);
    response->set_name(invoice_client.value().name);
    response->set_address(invoice_client.value().address);
    response->set_client_id(invoice_client.value().client_id);

    return ::grpc::Status::OK;
  }

}
