#ifndef D6FD7D79_9514_4E2D_8B4F_CE95BD54A5C5
#define D6FD7D79_9514_4E2D_8B4F_CE95BD54A5C5

#include <grpc++/grpc++.h>
#include "Services/ProductService.grpc.pb.h"
#include "Repositories/Database.hpp"

namespace GrpcProject::Services
{
  class ProductService final : public GrpcProject::Protos::Services::ProductService::Service
  {
  public:
    ProductService(GrpcProject::Repositories::Database& database);

    virtual ::grpc::Status CreateProduct(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Product* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) override;
    virtual ::grpc::Status ListProduct(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListProductResponse* response) override;

  private:
    GrpcProject::Repositories::Database& m_database;
  };
}

#endif /* D6FD7D79_9514_4E2D_8B4F_CE95BD54A5C5 */
