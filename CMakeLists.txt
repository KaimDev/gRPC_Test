cmake_minimum_required(VERSION 3.24)

project(GrpcProject C CXX)

include(CMake/GenerateProtobuf.cmake)

# CMAKE_MODULE_PATH: Archivos que terminan .cmake
# CMAKE_PREFIX_PATH: Archivos de configuración: FindXXX.cmake

find_package(Protobuf CONFIG REQUIRED) # FindProtobuf.cmake pero de CMake, ProtobufConfig.cmake
find_package(gRPC CONFIG REQUIRED) # FindProtobuf, pero propio del GRPC, gRPCConfig.cmake

find_program(grpc_cpp_plugin_executable grpc_cpp_plugin)

message(STATUS "-----------> ${grpc_cpp_plugin_executable}")
message(STATUS "-----------> ${Protobuf_PROTOC_EXECUTABLE}")
message(STATUS "-----------> ${Protobuf_INCLUDE_DIRS}")
message(STATUS "-----------> ${Protobuf_LIBRARIES}")

# MODELS
GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Client.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Product.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Invoice.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/InvoiceDetails.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Helpers/ServiceStatus.proto
)

# SERVICE
GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/ClientService.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/InvoiceService.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/ProductService.proto
)

add_executable(GrpcProject
  Main.cc
  Protos/Protobuf/Models/Client.grpc.pb.cc
  Protos/Protobuf/Models/Client.grpc.pb.h
  Protos/Protobuf/Models/Client.pb.cc
  Protos/Protobuf/Models/Client.pb.h
  Protos/Protobuf/Models/InvoiceDetails.grpc.pb.cc
  Protos/Protobuf/Models/InvoiceDetails.grpc.pb.h
  Protos/Protobuf/Models/InvoiceDetails.pb.cc
  Protos/Protobuf/Models/InvoiceDetails.pb.h
  Protos/Protobuf/Models/Invoice.grpc.pb.cc
  Protos/Protobuf/Models/Invoice.grpc.pb.h
  Protos/Protobuf/Models/Invoice.pb.cc
  Protos/Protobuf/Models/Invoice.pb.h
  Protos/Protobuf/Models/Product.grpc.pb.cc
  Protos/Protobuf/Models/Product.grpc.pb.h
  Protos/Protobuf/Models/Product.pb.cc
  Protos/Protobuf/Models/Product.pb.h

  Protos/Protobuf/Services/ClientService.grpc.pb.cc
  Protos/Protobuf/Services/ClientService.grpc.pb.h
  Protos/Protobuf/Services/ClientService.pb.cc
  Protos/Protobuf/Services/ClientService.pb.h
  Protos/Protobuf/Services/InvoiceService.grpc.pb.cc
  Protos/Protobuf/Services/InvoiceService.grpc.pb.h
  Protos/Protobuf/Services/InvoiceService.pb.cc
  Protos/Protobuf/Services/InvoiceService.pb.h
  Protos/Protobuf/Services/ProductService.grpc.pb.cc
  Protos/Protobuf/Services/ProductService.grpc.pb.h
  Protos/Protobuf/Services/ProductService.pb.cc
  Protos/Protobuf/Services/ProductService.pb.h

  Protos/Protobuf/Helpers/ServiceStatus.grpc.pb.cc
  Protos/Protobuf/Helpers/ServiceStatus.grpc.pb.h
  Protos/Protobuf/Helpers/ServiceStatus.pb.cc
  Protos/Protobuf/Helpers/ServiceStatus.pb.h

  Include/Services/ClientService.hpp
  Include/Services/ClientService.cc
  Include/Services/InvoiceService.hpp
  Include/Services/InvoiceService.cc
  Include/Services/ProductService.cc
  Include/Services/ProductService.hpp

  Include/Repositories/Database.hpp
  Include/Repositories/Database.cc
  Include/Repositories/ClientRepository.hpp
  Include/Repositories/ClientRepository.cc
  Include/Repositories/InvoiceRepository.hpp
  Include/Repositories/InvoiceRepository.cc
  Include/Repositories/InvoiceDetailsRepository.hpp
  Include/Repositories/InvoiceDetailsRepository.cc
  Include/Repositories/ProductRepository.hpp
  Include/Repositories/ProductRepository.cc
  Include/Repositories/Iterator.hpp
)

# target_include_directories(GrpcPractices PUBLIC ${Protobuf_INCLUDE_DIRS})

target_link_libraries(
  GrpcProject
  PUBLIC
    protobuf::libprotobuf
    gRPC::grpc++
    gRPC::grpc++_reflection
)

target_compile_options(
  GrpcProject
    PUBLIC
    -fpermissive
)

target_compile_features(GrpcProject PUBLIC c_std_23 cxx_std_23)

target_include_directories(GrpcProject PUBLIC ${CMAKE_SOURCE_DIR}/Protos/Protobuf)
target_include_directories(GrpcProject PUBLIC ${CMAKE_SOURCE_DIR}/Include)