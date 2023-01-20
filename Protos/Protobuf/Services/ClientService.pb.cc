// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Services/ClientService.proto

#include "Services/ClientService.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace GrpcProject {
namespace Protos {
namespace Services {
}  // namespace Services
}  // namespace Protos
}  // namespace GrpcProject
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Services_2fClientService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Services_2fClientService_2eproto = nullptr;
const uint32_t TableStruct_Services_2fClientService_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_Services_2fClientService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034Services/ClientService.proto\022\033GrpcProj"
  "ect.Protos.Services\032\033google/protobuf/emp"
  "ty.proto\032\023Models/Client.proto\032\024Models/In"
  "voice.proto\032\033Helpers/ServiceStatus.proto"
  "2\242\002\n\rClientService\022^\n\014CreateClient\022!.Grp"
  "cProject.Protos.Models.Client\032).GrpcProj"
  "ect.Protos.Helpers.ServiceStatus\"\000\022U\n\nLi"
  "stClient\022\026.google.protobuf.Empty\032-.GrpcP"
  "roject.Protos.Models.ListClientResponse\""
  "\000\022Z\n\rInvoiceClient\022#.GrpcProject.Protos."
  "Models.ClientId\032\".GrpcProject.Protos.Mod"
  "els.Invoice\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Services_2fClientService_2eproto_deps[4] = {
  &::descriptor_table_Helpers_2fServiceStatus_2eproto,
  &::descriptor_table_Models_2fClient_2eproto,
  &::descriptor_table_Models_2fInvoice_2eproto,
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_Services_2fClientService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Services_2fClientService_2eproto = {
    false, false, 461, descriptor_table_protodef_Services_2fClientService_2eproto,
    "Services/ClientService.proto",
    &descriptor_table_Services_2fClientService_2eproto_once, descriptor_table_Services_2fClientService_2eproto_deps, 4, 0,
    schemas, file_default_instances, TableStruct_Services_2fClientService_2eproto::offsets,
    nullptr, file_level_enum_descriptors_Services_2fClientService_2eproto,
    file_level_service_descriptors_Services_2fClientService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Services_2fClientService_2eproto_getter() {
  return &descriptor_table_Services_2fClientService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Services_2fClientService_2eproto(&descriptor_table_Services_2fClientService_2eproto);
namespace GrpcProject {
namespace Protos {
namespace Services {

// @@protoc_insertion_point(namespace_scope)
}  // namespace Services
}  // namespace Protos
}  // namespace GrpcProject
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
