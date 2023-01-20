#include "ProductService.hpp"

namespace GrpcProject::Services
{

  ProductService::ProductService(GrpcProject::Repositories::Database& database)
    : m_database { database }
  {
  }

  ::grpc::Status ProductService::CreateProduct(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Product* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response)
  {
    auto& product_repo = m_database.Products();

    GrpcProject::Models::Product product
    {
      request->id(),
      request->name(),
      request->price()
    };

    product_repo.AddProduct(product);

    response->set_is_success(true);

    return ::grpc::Status::OK;
  }

  ::grpc::Status ProductService::ListProduct(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListProductResponse* response)
  {
    auto& produc_repo = m_database.Products();

    for (const auto& product : produc_repo)
    {
      auto grpc_product = response->add_product();
      grpc_product->set_id(product.id);
      grpc_product->set_name(product.name);
      grpc_product->set_price(product.price);
    }

    return ::grpc::Status::OK;
  }

}