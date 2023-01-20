// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/ClientService.proto
#ifndef GRPC_Services_2fClientService_2eproto__INCLUDED
#define GRPC_Services_2fClientService_2eproto__INCLUDED

#include "Services/ClientService.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace GrpcProject {
namespace Protos {
namespace Services {

class ClientService final {
 public:
  static constexpr char const* service_full_name() {
    return "GrpcProject.Protos.Services.ClientService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>> AsyncCreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>>(AsyncCreateClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>> PrepareAsyncCreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>>(PrepareAsyncCreateClientRaw(context, request, cq));
    }
    virtual ::grpc::Status ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcProject::Protos::Models::ListClientResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>> AsyncListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>>(AsyncListClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>> PrepareAsyncListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>>(PrepareAsyncListClientRaw(context, request, cq));
    }
    virtual ::grpc::Status InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::GrpcProject::Protos::Models::Invoice* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>> AsyncInvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>>(AsyncInvoiceClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>> PrepareAsyncInvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>>(PrepareAsyncInvoiceClientRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response, std::function<void(::grpc::Status)>) = 0;
      virtual void InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>* AsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Helpers::ServiceStatus>* PrepareAsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>* AsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::ListClientResponse>* PrepareAsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>* AsyncInvoiceClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcProject::Protos::Models::Invoice>* PrepareAsyncInvoiceClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>> AsyncCreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>>(AsyncCreateClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>> PrepareAsyncCreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>>(PrepareAsyncCreateClientRaw(context, request, cq));
    }
    ::grpc::Status ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcProject::Protos::Models::ListClientResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>> AsyncListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>>(AsyncListClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>> PrepareAsyncListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>>(PrepareAsyncListClientRaw(context, request, cq));
    }
    ::grpc::Status InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::GrpcProject::Protos::Models::Invoice* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>> AsyncInvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>>(AsyncInvoiceClientRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>> PrepareAsyncInvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>>(PrepareAsyncInvoiceClientRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response, std::function<void(::grpc::Status)>) override;
      void CreateClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) override;
      void ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response, std::function<void(::grpc::Status)>) override;
      void ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response, std::function<void(::grpc::Status)>) override;
      void InvoiceClient(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>* AsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Helpers::ServiceStatus>* PrepareAsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::Client& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>* AsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::ListClientResponse>* PrepareAsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>* AsyncInvoiceClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcProject::Protos::Models::Invoice>* PrepareAsyncInvoiceClientRaw(::grpc::ClientContext* context, const ::GrpcProject::Protos::Models::ClientId& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateClient_;
    const ::grpc::internal::RpcMethod rpcmethod_ListClient_;
    const ::grpc::internal::RpcMethod rpcmethod_InvoiceClient_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response);
    virtual ::grpc::Status ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response);
    virtual ::grpc::Status InvoiceClient(::grpc::ServerContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CreateClient() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateClient(::grpc::ServerContext* context, ::GrpcProject::Protos::Models::Client* request, ::grpc::ServerAsyncResponseWriter< ::GrpcProject::Protos::Helpers::ServiceStatus>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListClient() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListClient(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::GrpcProject::Protos::Models::ListClientResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInvoiceClient(::grpc::ServerContext* context, ::GrpcProject::Protos::Models::ClientId* request, ::grpc::ServerAsyncResponseWriter< ::GrpcProject::Protos::Models::Invoice>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateClient<WithAsyncMethod_ListClient<WithAsyncMethod_InvoiceClient<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_CreateClient() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::GrpcProject::Protos::Models::Client, ::GrpcProject::Protos::Helpers::ServiceStatus>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::GrpcProject::Protos::Models::Client* request, ::GrpcProject::Protos::Helpers::ServiceStatus* response) { return this->CreateClient(context, request, response); }));}
    void SetMessageAllocatorFor_CreateClient(
        ::grpc::MessageAllocator< ::GrpcProject::Protos::Models::Client, ::GrpcProject::Protos::Helpers::ServiceStatus>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GrpcProject::Protos::Models::Client, ::GrpcProject::Protos::Helpers::ServiceStatus>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateClient(
      ::grpc::CallbackServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_ListClient() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::GrpcProject::Protos::Models::ListClientResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::protobuf::Empty* request, ::GrpcProject::Protos::Models::ListClientResponse* response) { return this->ListClient(context, request, response); }));}
    void SetMessageAllocatorFor_ListClient(
        ::grpc::MessageAllocator< ::google::protobuf::Empty, ::GrpcProject::Protos::Models::ListClientResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::GrpcProject::Protos::Models::ListClientResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListClient(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::GrpcProject::Protos::Models::ClientId, ::GrpcProject::Protos::Models::Invoice>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::GrpcProject::Protos::Models::ClientId* request, ::GrpcProject::Protos::Models::Invoice* response) { return this->InvoiceClient(context, request, response); }));}
    void SetMessageAllocatorFor_InvoiceClient(
        ::grpc::MessageAllocator< ::GrpcProject::Protos::Models::ClientId, ::GrpcProject::Protos::Models::Invoice>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GrpcProject::Protos::Models::ClientId, ::GrpcProject::Protos::Models::Invoice>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* InvoiceClient(
      ::grpc::CallbackServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_CreateClient<WithCallbackMethod_ListClient<WithCallbackMethod_InvoiceClient<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CreateClient() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListClient() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CreateClient() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateClient(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListClient() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListClient(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInvoiceClient(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_CreateClient() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CreateClient(context, request, response); }));
    }
    ~WithRawCallbackMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateClient(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_ListClient() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListClient(context, request, response); }));
    }
    ~WithRawCallbackMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListClient(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->InvoiceClient(context, request, response); }));
    }
    ~WithRawCallbackMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* InvoiceClient(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CreateClient() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GrpcProject::Protos::Models::Client, ::GrpcProject::Protos::Helpers::ServiceStatus>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GrpcProject::Protos::Models::Client, ::GrpcProject::Protos::Helpers::ServiceStatus>* streamer) {
                       return this->StreamedCreateClient(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CreateClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::Client* /*request*/, ::GrpcProject::Protos::Helpers::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateClient(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GrpcProject::Protos::Models::Client,::GrpcProject::Protos::Helpers::ServiceStatus>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListClient() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::GrpcProject::Protos::Models::ListClientResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::GrpcProject::Protos::Models::ListClientResponse>* streamer) {
                       return this->StreamedListClient(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListClient(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcProject::Protos::Models::ListClientResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListClient(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::GrpcProject::Protos::Models::ListClientResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_InvoiceClient : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_InvoiceClient() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GrpcProject::Protos::Models::ClientId, ::GrpcProject::Protos::Models::Invoice>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GrpcProject::Protos::Models::ClientId, ::GrpcProject::Protos::Models::Invoice>* streamer) {
                       return this->StreamedInvoiceClient(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_InvoiceClient() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status InvoiceClient(::grpc::ServerContext* /*context*/, const ::GrpcProject::Protos::Models::ClientId* /*request*/, ::GrpcProject::Protos::Models::Invoice* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedInvoiceClient(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GrpcProject::Protos::Models::ClientId,::GrpcProject::Protos::Models::Invoice>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateClient<WithStreamedUnaryMethod_ListClient<WithStreamedUnaryMethod_InvoiceClient<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateClient<WithStreamedUnaryMethod_ListClient<WithStreamedUnaryMethod_InvoiceClient<Service > > > StreamedService;
};

}  // namespace Services
}  // namespace Protos
}  // namespace GrpcProject


#endif  // GRPC_Services_2fClientService_2eproto__INCLUDED