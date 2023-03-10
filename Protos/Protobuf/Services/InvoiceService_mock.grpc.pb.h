// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/InvoiceService.proto

#include "Services/InvoiceService.pb.h"
#include "Services/InvoiceService.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace GrpcProject {
namespace Protos {
namespace Services {

class MockInvoiceServiceStub : public InvoiceService::StubInterface {
 public:
  MOCK_METHOD3(RegsterInvoice, ::grpc::Status(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Invoice& request, ::GrpcProject::Protos::Helpers::ServiceStatus* response));
  MOCK_METHOD3(AsyncRegsterInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>*(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Invoice& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncRegsterInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>*(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Invoice& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetInvoiceDetails, ::grpc::Status(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::InvoiceId& request, ::GrpcProject::Protos::Models::Invoice* response));
  MOCK_METHOD3(AsyncGetInvoiceDetailsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>*(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::InvoiceId& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetInvoiceDetailsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>*(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::InvoiceId& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListInvoice, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcProject::Protos::Models::ListInvoiceResponse* response));
  MOCK_METHOD3(AsyncListInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
};

} // namespace GrpcProject
} // namespace Protos
} // namespace Services

