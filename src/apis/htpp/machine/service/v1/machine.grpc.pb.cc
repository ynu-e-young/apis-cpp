// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: apis/htpp/machine/service/v1/machine.proto

#include "apis/htpp/machine/service/v1/machine.pb.h"
#include "apis/htpp/machine/service/v1/machine.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace htpp {
namespace machine {
namespace service {
namespace v1 {

static const char* Machine_method_names[] = {
  "/htpp.machine.service.v1.Machine/FindByUserId",
  "/htpp.machine.service.v1.Machine/Create",
  "/htpp.machine.service.v1.Machine/Update",
  "/htpp.machine.service.v1.Machine/Get",
  "/htpp.machine.service.v1.Machine/Move",
  "/htpp.machine.service.v1.Machine/Zero",
  "/htpp.machine.service.v1.Machine/GetMotorStatus",
  "/htpp.machine.service.v1.Machine/MoveDone",
  "/htpp.machine.service.v1.Machine/CreateCronJob",
  "/htpp.machine.service.v1.Machine/DeleteCronJob",
  "/htpp.machine.service.v1.Machine/ListCronJob",
};

std::unique_ptr< Machine::Stub> Machine::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Machine::Stub> stub(new Machine::Stub(channel, options));
  return stub;
}

Machine::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_FindByUserId_(Machine_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Create_(Machine_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Update_(Machine_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Get_(Machine_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Move_(Machine_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Zero_(Machine_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetMotorStatus_(Machine_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MoveDone_(Machine_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateCronJob_(Machine_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteCronJob_(Machine_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListCronJob_(Machine_method_names[10], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Machine::Stub::FindByUserId(::grpc::ClientContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest& request, ::htpp::machine::service::v1::MachinesReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::FindByUserIdRequest, ::htpp::machine::service::v1::MachinesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FindByUserId_, context, request, response);
}

void Machine::Stub::async::FindByUserId(::grpc::ClientContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest* request, ::htpp::machine::service::v1::MachinesReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::FindByUserIdRequest, ::htpp::machine::service::v1::MachinesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByUserId_, context, request, response, std::move(f));
}

void Machine::Stub::async::FindByUserId(::grpc::ClientContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest* request, ::htpp::machine::service::v1::MachinesReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FindByUserId_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachinesReply>* Machine::Stub::PrepareAsyncFindByUserIdRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MachinesReply, ::htpp::machine::service::v1::FindByUserIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FindByUserId_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachinesReply>* Machine::Stub::AsyncFindByUserIdRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFindByUserIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::Create(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateRequest& request, ::htpp::machine::service::v1::MachineReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::CreateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Create_, context, request, response);
}

void Machine::Stub::async::Create(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateRequest* request, ::htpp::machine::service::v1::MachineReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::CreateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void Machine::Stub::async::Create(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateRequest* request, ::htpp::machine::service::v1::MachineReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MachineReply, ::htpp::machine::service::v1::CreateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Create_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::Update(::grpc::ClientContext* context, const ::htpp::machine::service::v1::UpdateRequest& request, ::htpp::machine::service::v1::MachineReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::UpdateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Update_, context, request, response);
}

void Machine::Stub::async::Update(::grpc::ClientContext* context, const ::htpp::machine::service::v1::UpdateRequest* request, ::htpp::machine::service::v1::MachineReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::UpdateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, std::move(f));
}

void Machine::Stub::async::Update(::grpc::ClientContext* context, const ::htpp::machine::service::v1::UpdateRequest* request, ::htpp::machine::service::v1::MachineReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MachineReply, ::htpp::machine::service::v1::UpdateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Update_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::UpdateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::Get(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetRequest& request, ::htpp::machine::service::v1::MachineReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::GetRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Get_, context, request, response);
}

void Machine::Stub::async::Get(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetRequest* request, ::htpp::machine::service::v1::MachineReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::GetRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, std::move(f));
}

void Machine::Stub::async::Get(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetRequest* request, ::htpp::machine::service::v1::MachineReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Get_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MachineReply, ::htpp::machine::service::v1::GetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Get_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MachineReply>* Machine::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::Move(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveRequest& request, ::htpp::machine::service::v1::MoveReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::MoveRequest, ::htpp::machine::service::v1::MoveReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Move_, context, request, response);
}

void Machine::Stub::async::Move(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveRequest* request, ::htpp::machine::service::v1::MoveReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::MoveRequest, ::htpp::machine::service::v1::MoveReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Move_, context, request, response, std::move(f));
}

void Machine::Stub::async::Move(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveRequest* request, ::htpp::machine::service::v1::MoveReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Move_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MoveReply>* Machine::Stub::PrepareAsyncMoveRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MoveReply, ::htpp::machine::service::v1::MoveRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Move_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MoveReply>* Machine::Stub::AsyncMoveRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::Zero(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ZeroRequest& request, ::htpp::machine::service::v1::ZeroReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::ZeroRequest, ::htpp::machine::service::v1::ZeroReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Zero_, context, request, response);
}

void Machine::Stub::async::Zero(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ZeroRequest* request, ::htpp::machine::service::v1::ZeroReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::ZeroRequest, ::htpp::machine::service::v1::ZeroReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Zero_, context, request, response, std::move(f));
}

void Machine::Stub::async::Zero(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ZeroRequest* request, ::htpp::machine::service::v1::ZeroReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Zero_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::ZeroReply>* Machine::Stub::PrepareAsyncZeroRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::ZeroReply, ::htpp::machine::service::v1::ZeroRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Zero_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::ZeroReply>* Machine::Stub::AsyncZeroRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ZeroRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncZeroRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::GetMotorStatus(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest& request, ::htpp::machine::service::v1::GetMotorStatusReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::GetMotorStatusRequest, ::htpp::machine::service::v1::GetMotorStatusReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetMotorStatus_, context, request, response);
}

void Machine::Stub::async::GetMotorStatus(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest* request, ::htpp::machine::service::v1::GetMotorStatusReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::GetMotorStatusRequest, ::htpp::machine::service::v1::GetMotorStatusReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMotorStatus_, context, request, response, std::move(f));
}

void Machine::Stub::async::GetMotorStatus(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest* request, ::htpp::machine::service::v1::GetMotorStatusReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMotorStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::GetMotorStatusReply>* Machine::Stub::PrepareAsyncGetMotorStatusRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::GetMotorStatusReply, ::htpp::machine::service::v1::GetMotorStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetMotorStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::GetMotorStatusReply>* Machine::Stub::AsyncGetMotorStatusRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetMotorStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::MoveDone(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveDoneRequest& request, ::htpp::machine::service::v1::MoveDoneReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::MoveDoneRequest, ::htpp::machine::service::v1::MoveDoneReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_MoveDone_, context, request, response);
}

void Machine::Stub::async::MoveDone(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveDoneRequest* request, ::htpp::machine::service::v1::MoveDoneReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::MoveDoneRequest, ::htpp::machine::service::v1::MoveDoneReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MoveDone_, context, request, response, std::move(f));
}

void Machine::Stub::async::MoveDone(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveDoneRequest* request, ::htpp::machine::service::v1::MoveDoneReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MoveDone_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MoveDoneReply>* Machine::Stub::PrepareAsyncMoveDoneRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveDoneRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::MoveDoneReply, ::htpp::machine::service::v1::MoveDoneRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_MoveDone_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::MoveDoneReply>* Machine::Stub::AsyncMoveDoneRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::MoveDoneRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveDoneRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::CreateCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest& request, ::htpp::machine::service::v1::CronJobReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::CreateCronJobRequest, ::htpp::machine::service::v1::CronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateCronJob_, context, request, response);
}

void Machine::Stub::async::CreateCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest* request, ::htpp::machine::service::v1::CronJobReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::CreateCronJobRequest, ::htpp::machine::service::v1::CronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateCronJob_, context, request, response, std::move(f));
}

void Machine::Stub::async::CreateCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest* request, ::htpp::machine::service::v1::CronJobReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateCronJob_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::CronJobReply>* Machine::Stub::PrepareAsyncCreateCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::CronJobReply, ::htpp::machine::service::v1::CreateCronJobRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateCronJob_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::CronJobReply>* Machine::Stub::AsyncCreateCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateCronJobRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::DeleteCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest& request, ::htpp::machine::service::v1::DeleteCronJobReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::DeleteCronJobRequest, ::htpp::machine::service::v1::DeleteCronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DeleteCronJob_, context, request, response);
}

void Machine::Stub::async::DeleteCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest* request, ::htpp::machine::service::v1::DeleteCronJobReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::DeleteCronJobRequest, ::htpp::machine::service::v1::DeleteCronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteCronJob_, context, request, response, std::move(f));
}

void Machine::Stub::async::DeleteCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest* request, ::htpp::machine::service::v1::DeleteCronJobReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteCronJob_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::DeleteCronJobReply>* Machine::Stub::PrepareAsyncDeleteCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::DeleteCronJobReply, ::htpp::machine::service::v1::DeleteCronJobRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DeleteCronJob_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::DeleteCronJobReply>* Machine::Stub::AsyncDeleteCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteCronJobRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Machine::Stub::ListCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ListCronJobRequest& request, ::htpp::machine::service::v1::CronJobsReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::htpp::machine::service::v1::ListCronJobRequest, ::htpp::machine::service::v1::CronJobsReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListCronJob_, context, request, response);
}

void Machine::Stub::async::ListCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ListCronJobRequest* request, ::htpp::machine::service::v1::CronJobsReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::htpp::machine::service::v1::ListCronJobRequest, ::htpp::machine::service::v1::CronJobsReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListCronJob_, context, request, response, std::move(f));
}

void Machine::Stub::async::ListCronJob(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ListCronJobRequest* request, ::htpp::machine::service::v1::CronJobsReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListCronJob_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::CronJobsReply>* Machine::Stub::PrepareAsyncListCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ListCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::htpp::machine::service::v1::CronJobsReply, ::htpp::machine::service::v1::ListCronJobRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListCronJob_, context, request);
}

::grpc::ClientAsyncResponseReader< ::htpp::machine::service::v1::CronJobsReply>* Machine::Stub::AsyncListCronJobRaw(::grpc::ClientContext* context, const ::htpp::machine::service::v1::ListCronJobRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListCronJobRaw(context, request, cq);
  result->StartCall();
  return result;
}

Machine::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::FindByUserIdRequest, ::htpp::machine::service::v1::MachinesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::FindByUserIdRequest* req,
             ::htpp::machine::service::v1::MachinesReply* resp) {
               return service->FindByUserId(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::CreateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::CreateRequest* req,
             ::htpp::machine::service::v1::MachineReply* resp) {
               return service->Create(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::UpdateRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::UpdateRequest* req,
             ::htpp::machine::service::v1::MachineReply* resp) {
               return service->Update(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::GetRequest, ::htpp::machine::service::v1::MachineReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::GetRequest* req,
             ::htpp::machine::service::v1::MachineReply* resp) {
               return service->Get(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::MoveRequest, ::htpp::machine::service::v1::MoveReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::MoveRequest* req,
             ::htpp::machine::service::v1::MoveReply* resp) {
               return service->Move(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::ZeroRequest, ::htpp::machine::service::v1::ZeroReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::ZeroRequest* req,
             ::htpp::machine::service::v1::ZeroReply* resp) {
               return service->Zero(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::GetMotorStatusRequest, ::htpp::machine::service::v1::GetMotorStatusReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::GetMotorStatusRequest* req,
             ::htpp::machine::service::v1::GetMotorStatusReply* resp) {
               return service->GetMotorStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::MoveDoneRequest, ::htpp::machine::service::v1::MoveDoneReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::MoveDoneRequest* req,
             ::htpp::machine::service::v1::MoveDoneReply* resp) {
               return service->MoveDone(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::CreateCronJobRequest, ::htpp::machine::service::v1::CronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::CreateCronJobRequest* req,
             ::htpp::machine::service::v1::CronJobReply* resp) {
               return service->CreateCronJob(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::DeleteCronJobRequest, ::htpp::machine::service::v1::DeleteCronJobReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::DeleteCronJobRequest* req,
             ::htpp::machine::service::v1::DeleteCronJobReply* resp) {
               return service->DeleteCronJob(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Machine_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Machine::Service, ::htpp::machine::service::v1::ListCronJobRequest, ::htpp::machine::service::v1::CronJobsReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Machine::Service* service,
             ::grpc::ServerContext* ctx,
             const ::htpp::machine::service::v1::ListCronJobRequest* req,
             ::htpp::machine::service::v1::CronJobsReply* resp) {
               return service->ListCronJob(ctx, req, resp);
             }, this)));
}

Machine::Service::~Service() {
}

::grpc::Status Machine::Service::FindByUserId(::grpc::ServerContext* context, const ::htpp::machine::service::v1::FindByUserIdRequest* request, ::htpp::machine::service::v1::MachinesReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::Create(::grpc::ServerContext* context, const ::htpp::machine::service::v1::CreateRequest* request, ::htpp::machine::service::v1::MachineReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::Update(::grpc::ServerContext* context, const ::htpp::machine::service::v1::UpdateRequest* request, ::htpp::machine::service::v1::MachineReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::Get(::grpc::ServerContext* context, const ::htpp::machine::service::v1::GetRequest* request, ::htpp::machine::service::v1::MachineReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::Move(::grpc::ServerContext* context, const ::htpp::machine::service::v1::MoveRequest* request, ::htpp::machine::service::v1::MoveReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::Zero(::grpc::ServerContext* context, const ::htpp::machine::service::v1::ZeroRequest* request, ::htpp::machine::service::v1::ZeroReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::GetMotorStatus(::grpc::ServerContext* context, const ::htpp::machine::service::v1::GetMotorStatusRequest* request, ::htpp::machine::service::v1::GetMotorStatusReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::MoveDone(::grpc::ServerContext* context, const ::htpp::machine::service::v1::MoveDoneRequest* request, ::htpp::machine::service::v1::MoveDoneReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::CreateCronJob(::grpc::ServerContext* context, const ::htpp::machine::service::v1::CreateCronJobRequest* request, ::htpp::machine::service::v1::CronJobReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::DeleteCronJob(::grpc::ServerContext* context, const ::htpp::machine::service::v1::DeleteCronJobRequest* request, ::htpp::machine::service::v1::DeleteCronJobReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Machine::Service::ListCronJob(::grpc::ServerContext* context, const ::htpp::machine::service::v1::ListCronJobRequest* request, ::htpp::machine::service::v1::CronJobsReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace htpp
}  // namespace machine
}  // namespace service
}  // namespace v1

