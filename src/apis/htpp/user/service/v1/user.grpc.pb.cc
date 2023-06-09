// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: apis/htpp/user/service/v1/user.proto

#include "apis/htpp/user/service/v1/user.pb.h"
#include "apis/htpp/user/service/v1/user.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace htpp {
namespace user {
namespace service {
namespace v1 {

static const char* User_method_names[] = {
  "/htpp.user.service.v1.User/FindByUsername",
  "/htpp.user.service.v1.User/FindByEmail",
  "/htpp.user.service.v1.User/Create",
  "/htpp.user.service.v1.User/Update",
  "/htpp.user.service.v1.User/Get",
};

std::unique_ptr< User::Stub> User::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< User::Stub> stub(new User::Stub(channel, options));
  return stub;
}

User::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_FindByUsername_(User_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FindByEmail_(User_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Create_(User_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Update_(User_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(User_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status User::Stub::FindByUsername(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByUsernameRequest& request, ::htpp::user::service::v1::UserReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::user::service::v1::FindByUsernameRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FindByUsername_, context, request, response);
}

void User::Stub::async::FindByUsername(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByUsernameRequest* request, ::htpp::user::service::v1::UserReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::user::service::v1::FindByUsernameRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByUsername_, context, request, response, std::move(f));
}

void User::Stub::async::FindByUsername(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByUsernameRequest* request, ::htpp::user::service::v1::UserReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByUsername_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::PrepareAsyncFindByUsernameRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByUsernameRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::user::service::v1::UserReply, ::htpp::user::service::v1::FindByUsernameRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FindByUsername_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::AsyncFindByUsernameRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByUsernameRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFindByUsernameRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status User::Stub::FindByEmail(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByEmailRequest& request, ::htpp::user::service::v1::UserReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::user::service::v1::FindByEmailRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FindByEmail_, context, request, response);
}

void User::Stub::async::FindByEmail(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByEmailRequest* request, ::htpp::user::service::v1::UserReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::user::service::v1::FindByEmailRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByEmail_, context, request, response, std::move(f));
}

void User::Stub::async::FindByEmail(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByEmailRequest* request, ::htpp::user::service::v1::UserReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByEmail_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::PrepareAsyncFindByEmailRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByEmailRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::user::service::v1::UserReply, ::htpp::user::service::v1::FindByEmailRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FindByEmail_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::AsyncFindByEmailRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::FindByEmailRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFindByEmailRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status User::Stub::Create(::grpc::ClientContext* context, const ::htpp::user::service::v1::CreateRequest& request, ::htpp::user::service::v1::UserReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::user::service::v1::CreateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Create_, context, request, response);
}

void User::Stub::async::Create(::grpc::ClientContext* context, const ::htpp::user::service::v1::CreateRequest* request, ::htpp::user::service::v1::UserReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::user::service::v1::CreateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void User::Stub::async::Create(::grpc::ClientContext* context, const ::htpp::user::service::v1::CreateRequest* request, ::htpp::user::service::v1::UserReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::user::service::v1::UserReply, ::htpp::user::service::v1::CreateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Create_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status User::Stub::Update(::grpc::ClientContext* context, const ::htpp::user::service::v1::UpdateRequest& request, ::htpp::user::service::v1::UserReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::user::service::v1::UpdateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Update_, context, request, response);
}

void User::Stub::async::Update(::grpc::ClientContext* context, const ::htpp::user::service::v1::UpdateRequest* request, ::htpp::user::service::v1::UserReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::user::service::v1::UpdateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

void User::Stub::async::Update(::grpc::ClientContext* context, const ::htpp::user::service::v1::UpdateRequest* request, ::htpp::user::service::v1::UserReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::user::service::v1::UserReply, ::htpp::user::service::v1::UpdateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Update_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status User::Stub::Get(::grpc::ClientContext* context, const ::htpp::user::service::v1::GetRequest& request, ::htpp::user::service::v1::UserReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::user::service::v1::GetRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Get_, context, request, response);
}

void User::Stub::async::Get(::grpc::ClientContext* context, const ::htpp::user::service::v1::GetRequest* request, ::htpp::user::service::v1::UserReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::user::service::v1::GetRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void User::Stub::async::Get(::grpc::ClientContext* context, const ::htpp::user::service::v1::GetRequest* request, ::htpp::user::service::v1::UserReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::user::service::v1::UserReply, ::htpp::user::service::v1::GetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Get_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::user::service::v1::UserReply>* User::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::htpp::user::service::v1::GetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetRaw(context, request, cq);
  result->StartCall();
  return result;
}

User::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      User_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< User::Service, ::htpp::user::service::v1::FindByUsernameRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](User::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::user::service::v1::FindByUsernameRequest* req,
             ::htpp::user::service::v1::UserReply* resp) {
               return service->FindByUsername(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      User_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< User::Service, ::htpp::user::service::v1::FindByEmailRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](User::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::user::service::v1::FindByEmailRequest* req,
             ::htpp::user::service::v1::UserReply* resp) {
               return service->FindByEmail(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      User_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< User::Service, ::htpp::user::service::v1::CreateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](User::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::user::service::v1::CreateRequest* req,
             ::htpp::user::service::v1::UserReply* resp) {
               return service->Create(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      User_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< User::Service, ::htpp::user::service::v1::UpdateRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](User::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::user::service::v1::UpdateRequest* req,
             ::htpp::user::service::v1::UserReply* resp) {
               return service->Update(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      User_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< User::Service, ::htpp::user::service::v1::GetRequest, ::htpp::user::service::v1::UserReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](User::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::user::service::v1::GetRequest* req,
             ::htpp::user::service::v1::UserReply* resp) {
               return service->Get(ctx, req, resp);
             }, this)));
}

User::Service::~Service() {
}

::grpc::Status User::Service::FindByUsername(::grpc::ServerContext* context, const ::htpp::user::service::v1::FindByUsernameRequest* request, ::htpp::user::service::v1::UserReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status User::Service::FindByEmail(::grpc::ServerContext* context, const ::htpp::user::service::v1::FindByEmailRequest* request, ::htpp::user::service::v1::UserReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status User::Service::Create(::grpc::ServerContext* context, const ::htpp::user::service::v1::CreateRequest* request, ::htpp::user::service::v1::UserReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status User::Service::Update(::grpc::ServerContext* context, const ::htpp::user::service::v1::UpdateRequest* request, ::htpp::user::service::v1::UserReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status User::Service::Get(::grpc::ServerContext* context, const ::htpp::user::service::v1::GetRequest* request, ::htpp::user::service::v1::UserReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace htpp
}  // namespace user
}  // namespace service
}  // namespace v1

