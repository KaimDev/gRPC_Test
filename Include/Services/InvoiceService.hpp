#ifndef C0D1A981_D59B_4A7E_AC6E_E47AEA194355
#define C0D1A981_D59B_4A7E_AC6E_E47AEA194355

#include <grpc++/grpc++.h>
#include "Services/InvoiceService.grpc.pb.h"
#include "Repositories/Database.hpp"

namespace GrpcProject::Services
{
  class InvoiceService final: public GrpcProject::Protos::Services::InvoiceService::Service
  {
  public:
    InvoiceService(GrpcProject::Repositories::Database& database);

    virtual ::grpc::Status RegsterInvoice(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Invoice* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) override;

    virtual ::grpc::Status ListInvoice(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListInvoiceResponse* response) override;
  private:
    GrpcProject::Repositories::Database& m_database;
  };
}

#endif /* C0D1A981_D59B_4A7E_AC6E_E47AEA194355 */
