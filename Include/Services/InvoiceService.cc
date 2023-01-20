#include "InvoiceService.hpp"

namespace GrpcProject::Services
{

  InvoiceService::InvoiceService(GrpcProject::Repositories::Database& database)
    : m_database { database }
  {

  }

  ::grpc::Status InvoiceService::RegsterInvoice(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Invoice* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response)
  {
    auto& invoice_repo = m_database.Invoices();

    GrpcProject::Models::Invoice invoice
    {
      .id = request->id(),
      .name = request->name(),
      .address = request->address(),
      .client_id = request->client_id()
    };

    invoice_repo.AddInvoice(invoice);

    response->set_is_success(true);
    return ::grpc::Status::OK;
  };

  ::grpc::Status InvoiceService::ListInvoice(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListInvoiceResponse* response)
  {
    auto& invoice_repo = m_database.Invoices();

    for (const auto& invoice : invoice_repo)
    {
      auto grpc_invoice = response->add_invoice();
      grpc_invoice->set_id(invoice.id);
      grpc_invoice->set_name(invoice.name);
      grpc_invoice->set_address(invoice.address);
      grpc_invoice->set_client_id(invoice.client_id);
    }

    return ::grpc::Status::OK;
  }
}