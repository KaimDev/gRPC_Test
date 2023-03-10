// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Services/ProductService.proto

#include "Services/ProductService.pb.h"

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
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Services_2fProductService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Services_2fProductService_2eproto = nullptr;
const uint32_t TableStruct_Services_2fProductService_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_Services_2fProductService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035Services/ProductService.proto\022\033GrpcPro"
  "ject.Protos.Services\032\024Models/Product.pro"
  "to\032\033Helpers/ServiceStatus.proto\032\033google/"
  "protobuf/empty.proto2\313\001\n\016ProductService\022"
  "`\n\rCreateProduct\022\".GrpcProject.Protos.Mo"
  "dels.Product\032).GrpcProject.Protos.Helper"
  "s.ServiceStatus\"\000\022W\n\013ListProduct\022\026.googl"
  "e.protobuf.Empty\032..GrpcProject.Protos.Mo"
  "dels.ListProductResponse\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Services_2fProductService_2eproto_deps[3] = {
  &::descriptor_table_Helpers_2fServiceStatus_2eproto,
  &::descriptor_table_Models_2fProduct_2eproto,
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_Services_2fProductService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Services_2fProductService_2eproto = {
    false, false, 354, descriptor_table_protodef_Services_2fProductService_2eproto,
    "Services/ProductService.proto",
    &descriptor_table_Services_2fProductService_2eproto_once, descriptor_table_Services_2fProductService_2eproto_deps, 3, 0,
    schemas, file_default_instances, TableStruct_Services_2fProductService_2eproto::offsets,
    nullptr, file_level_enum_descriptors_Services_2fProductService_2eproto,
    file_level_service_descriptors_Services_2fProductService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Services_2fProductService_2eproto_getter() {
  return &descriptor_table_Services_2fProductService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Services_2fProductService_2eproto(&descriptor_table_Services_2fProductService_2eproto);
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
