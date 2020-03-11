// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#ifdef INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#endif
#include "Common.pb.h"

#include <algorithm>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace devmand {
namespace channels {
namespace cli {
namespace plugin {

namespace {

const ::google::protobuf::Descriptor* CliRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    CliRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* CliResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
    CliResponse_reflection_ = NULL;

} // namespace

void protobuf_AssignDesc_Common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Common_2eproto() {
  protobuf_AddDesc_Common_2eproto();
  const ::google::protobuf::FileDescriptor* file =
      ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
          "Common.proto");
  GOOGLE_CHECK(file != NULL);
  CliRequest_descriptor_ = file->message_type(0);
  static const int CliRequest_offsets_[3] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CliRequest, id_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CliRequest, cmd_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CliRequest, write_),
  };
  CliRequest_reflection_ = ::google::protobuf::internal::
      GeneratedMessageReflection::NewGeneratedMessageReflection(
          CliRequest_descriptor_,
          CliRequest::default_instance_,
          CliRequest_offsets_,
          -1,
          -1,
          -1,
          sizeof(CliRequest),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
              CliRequest, _internal_metadata_),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
              CliRequest, _is_default_instance_));
  CliResponse_descriptor_ = file->message_type(1);
  static const int CliResponse_offsets_[2] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CliResponse, id_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CliResponse, output_),
  };
  CliResponse_reflection_ = ::google::protobuf::internal::
      GeneratedMessageReflection::NewGeneratedMessageReflection(
          CliResponse_descriptor_,
          CliResponse::default_instance_,
          CliResponse_offsets_,
          -1,
          -1,
          -1,
          sizeof(CliResponse),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
              CliResponse, _internal_metadata_),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(
              CliResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(
      &protobuf_AssignDescriptors_once_, &protobuf_AssignDesc_Common_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CliRequest_descriptor_, &CliRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CliResponse_descriptor_, &CliResponse::default_instance());
}

} // namespace

void protobuf_ShutdownFile_Common_2eproto() {
  delete CliRequest::default_instance_;
  delete CliRequest_reflection_;
  delete CliResponse::default_instance_;
  delete CliResponse_reflection_;
}

void protobuf_AddDesc_Common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_Common_2eproto() {
  static bool already_here = false;
  if (already_here)
    return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      "\n\014Common.proto\022\033devmand.channels.cli.plu"
      "gin\"4\n\nCliRequest\022\n\n\002id\030\001 \001(\005\022\013\n\003cmd\030\002 \001"
      "(\t\022\r\n\005write\030\003 \001(\010\")\n\013CliResponse\022\n\n\002id\030\001"
      " \001(\005\022\016\n\006output\030\002 \001(\tb\006proto3",
      148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "Common.proto", &protobuf_RegisterTypes);
  CliRequest::default_instance_ = new CliRequest();
  CliResponse::default_instance_ = new CliResponse();
  CliRequest::default_instance_->InitAsDefaultInstance();
  CliResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(
      &protobuf_ShutdownFile_Common_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Common_2eproto {
  StaticDescriptorInitializer_Common_2eproto() {
    protobuf_AddDesc_Common_2eproto();
  }
} static_descriptor_initializer_Common_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CliRequest::kIdFieldNumber;
const int CliRequest::kCmdFieldNumber;
const int CliRequest::kWriteFieldNumber;
#endif // !defined(_MSC_VER) || _MSC_VER >= 1900

CliRequest::CliRequest()
    : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:devmand.channels.cli.plugin.CliRequest)
}

void CliRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CliRequest::CliRequest(const CliRequest& from)
    : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:devmand.channels.cli.plugin.CliRequest)
}

void CliRequest::SharedCtor() {
  _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  cmd_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  write_ = false;
}

CliRequest::~CliRequest() {
  // @@protoc_insertion_point(destructor:devmand.channels.cli.plugin.CliRequest)
  SharedDtor();
}

void CliRequest::SharedDtor() {
  cmd_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CliRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CliRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CliRequest_descriptor_;
}

const CliRequest& CliRequest::default_instance() {
  if (default_instance_ == NULL)
    protobuf_AddDesc_Common_2eproto();
  return *default_instance_;
}

CliRequest* CliRequest::default_instance_ = NULL;

CliRequest* CliRequest::New(::google::protobuf::Arena* arena) const {
  CliRequest* n = new CliRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CliRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:devmand.channels.cli.plugin.CliRequest)
#if defined(__clang__)
#define ZR_HELPER_(f)                                                                \
  _Pragma("clang diagnostic push")                                                   \
      _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") __builtin_offsetof( \
          CliRequest, f) _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) \
  reinterpret_cast<char*>(&reinterpret_cast<CliRequest*>(16)->f)
#endif

#define ZR_(first, last)                                                      \
  do {                                                                        \
    ::memset(&first, 0, ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last)); \
  } while (0)

  ZR_(id_, write_);
  cmd_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_
}

bool CliRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION)                 \
  if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) \
  goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:devmand.channels.cli.plugin.CliRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p =
        input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second)
      goto handle_unusual;
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
               ::google::protobuf::int32,
               ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18))
          goto parse_cmd;
        break;
      }

      // optional string cmd = 2;
      case 2: {
        if (tag == 18) {
        parse_cmd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_cmd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
              this->cmd().data(),
              (int)this->cmd().length(),
              ::google::protobuf::internal::WireFormatLite::PARSE,
              "devmand.channels.cli.plugin.CliRequest.cmd"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24))
          goto parse_write;
        break;
      }

      // optional bool write = 3;
      case 3: {
        if (tag == 24) {
        parse_write:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
               bool,
               ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
              input, &write_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd())
          goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                ::google::protobuf::internal::WireFormatLite::
                    WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:devmand.channels.cli.plugin.CliRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:devmand.channels.cli.plugin.CliRequest)
  return false;
#undef DO_
}

void CliRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  (void)output;
  // @@protoc_insertion_point(serialize_start:devmand.channels.cli.plugin.CliRequest)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
        1, this->id(), output);
  }

  // optional string cmd = 2;
  if (this->cmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        this->cmd().data(),
        (int)this->cmd().length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "devmand.channels.cli.plugin.CliRequest.cmd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
        2, this->cmd(), output);
  }

  // optional bool write = 3;
  if (this->write() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(
        3, this->write(), output);
  }

  // @@protoc_insertion_point(serialize_end:devmand.channels.cli.plugin.CliRequest)
}

::google::protobuf::uint8* CliRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic,
    ::google::protobuf::uint8* target) const {
  (void)deterministic;
  // @@protoc_insertion_point(serialize_to_array_start:devmand.channels.cli.plugin.CliRequest)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        1, this->id(), target);
  }

  // optional string cmd = 2;
  if (this->cmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        this->cmd().data(),
        (int)this->cmd().length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "devmand.channels.cli.plugin.CliRequest.cmd");
    target = ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->cmd(), target);
  }

  // optional bool write = 3;
  if (this->write() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(
        3, this->write(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:devmand.channels.cli.plugin.CliRequest)
  return target;
}

int CliRequest::ByteSize() const {
  // @@protoc_insertion_point(message_byte_size_start:devmand.channels.cli.plugin.CliRequest)
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::Int32Size(this->id());
  }

  // optional string cmd = 2;
  if (this->cmd().size() > 0) {
    total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(this->cmd());
  }

  // optional bool write = 3;
  if (this->write() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CliRequest::MergeFrom(const ::google::protobuf::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:devmand.channels.cli.plugin.CliRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CliRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CliRequest>(
          &from);
  if (source == NULL) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:devmand.channels.cli.plugin.CliRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:devmand.channels.cli.plugin.CliRequest)
    MergeFrom(*source);
  }
}

void CliRequest::MergeFrom(const CliRequest& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:devmand.channels.cli.plugin.CliRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.cmd().size() > 0) {
    cmd_.AssignWithDefault(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        from.cmd_);
  }
  if (from.write() != 0) {
    set_write(from.write());
  }
}

void CliRequest::CopyFrom(const ::google::protobuf::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:devmand.channels.cli.plugin.CliRequest)
  if (&from == this)
    return;
  Clear();
  MergeFrom(from);
}

void CliRequest::CopyFrom(const CliRequest& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:devmand.channels.cli.plugin.CliRequest)
  if (&from == this)
    return;
  Clear();
  MergeFrom(from);
}

bool CliRequest::IsInitialized() const {
  return true;
}

void CliRequest::Swap(CliRequest* other) {
  if (other == this)
    return;
  InternalSwap(other);
}
void CliRequest::InternalSwap(CliRequest* other) {
  std::swap(id_, other->id_);
  cmd_.Swap(&other->cmd_);
  std::swap(write_, other->write_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CliRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CliRequest_descriptor_;
  metadata.reflection = CliRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CliRequest

// optional int32 id = 1;
void CliRequest::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 CliRequest::id() const {
  // @@protoc_insertion_point(field_get:devmand.channels.cli.plugin.CliRequest.id)
  return id_;
}
void CliRequest::set_id(::google::protobuf::int32 value) {
  id_ = value;
  // @@protoc_insertion_point(field_set:devmand.channels.cli.plugin.CliRequest.id)
}

// optional string cmd = 2;
void CliRequest::clear_cmd() {
  cmd_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& CliRequest::cmd() const {
  // @@protoc_insertion_point(field_get:devmand.channels.cli.plugin.CliRequest.cmd)
  return cmd_.GetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CliRequest::set_cmd(const ::std::string& value) {
  cmd_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:devmand.channels.cli.plugin.CliRequest.cmd)
}
void CliRequest::set_cmd(const char* value) {
  cmd_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:devmand.channels.cli.plugin.CliRequest.cmd)
}
void CliRequest::set_cmd(const char* value, size_t size) {
  cmd_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:devmand.channels.cli.plugin.CliRequest.cmd)
}
::std::string* CliRequest::mutable_cmd() {
  // @@protoc_insertion_point(field_mutable:devmand.channels.cli.plugin.CliRequest.cmd)
  return cmd_.MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CliRequest::release_cmd() {
  // @@protoc_insertion_point(field_release:devmand.channels.cli.plugin.CliRequest.cmd)

  return cmd_.ReleaseNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CliRequest::set_allocated_cmd(::std::string* cmd) {
  if (cmd != NULL) {
  } else {
  }
  cmd_.SetAllocatedNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), cmd);
  // @@protoc_insertion_point(field_set_allocated:devmand.channels.cli.plugin.CliRequest.cmd)
}

// optional bool write = 3;
void CliRequest::clear_write() {
  write_ = false;
}
bool CliRequest::write() const {
  // @@protoc_insertion_point(field_get:devmand.channels.cli.plugin.CliRequest.write)
  return write_;
}
void CliRequest::set_write(bool value) {
  write_ = value;
  // @@protoc_insertion_point(field_set:devmand.channels.cli.plugin.CliRequest.write)
}

#endif // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CliResponse::kIdFieldNumber;
const int CliResponse::kOutputFieldNumber;
#endif // !defined(_MSC_VER) || _MSC_VER >= 1900

CliResponse::CliResponse()
    : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:devmand.channels.cli.plugin.CliResponse)
}

void CliResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CliResponse::CliResponse(const CliResponse& from)
    : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:devmand.channels.cli.plugin.CliResponse)
}

void CliResponse::SharedCtor() {
  _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  output_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CliResponse::~CliResponse() {
  // @@protoc_insertion_point(destructor:devmand.channels.cli.plugin.CliResponse)
  SharedDtor();
}

void CliResponse::SharedDtor() {
  output_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CliResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CliResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CliResponse_descriptor_;
}

const CliResponse& CliResponse::default_instance() {
  if (default_instance_ == NULL)
    protobuf_AddDesc_Common_2eproto();
  return *default_instance_;
}

CliResponse* CliResponse::default_instance_ = NULL;

CliResponse* CliResponse::New(::google::protobuf::Arena* arena) const {
  CliResponse* n = new CliResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CliResponse::Clear() {
  // @@protoc_insertion_point(message_clear_start:devmand.channels.cli.plugin.CliResponse)
  id_ = 0;
  output_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool CliResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION)                 \
  if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) \
  goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:devmand.channels.cli.plugin.CliResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p =
        input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second)
      goto handle_unusual;
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
               ::google::protobuf::int32,
               ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18))
          goto parse_output;
        break;
      }

      // optional string output = 2;
      case 2: {
        if (tag == 18) {
        parse_output:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_output()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
              this->output().data(),
              (int)this->output().length(),
              ::google::protobuf::internal::WireFormatLite::PARSE,
              "devmand.channels.cli.plugin.CliResponse.output"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd())
          goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                ::google::protobuf::internal::WireFormatLite::
                    WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:devmand.channels.cli.plugin.CliResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:devmand.channels.cli.plugin.CliResponse)
  return false;
#undef DO_
}

void CliResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  (void)output;
  // @@protoc_insertion_point(serialize_start:devmand.channels.cli.plugin.CliResponse)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
        1, this->id(), output);
  }

  // optional string output = 2;
  if (this->output().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        this->output().data(),
        (int)this->output().length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "devmand.channels.cli.plugin.CliResponse.output");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
        2, this->output(), output);
  }

  // @@protoc_insertion_point(serialize_end:devmand.channels.cli.plugin.CliResponse)
}

::google::protobuf::uint8* CliResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic,
    ::google::protobuf::uint8* target) const {
  (void)deterministic;
  // @@protoc_insertion_point(serialize_to_array_start:devmand.channels.cli.plugin.CliResponse)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        1, this->id(), target);
  }

  // optional string output = 2;
  if (this->output().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        this->output().data(),
        (int)this->output().length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "devmand.channels.cli.plugin.CliResponse.output");
    target = ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->output(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:devmand.channels.cli.plugin.CliResponse)
  return target;
}

int CliResponse::ByteSize() const {
  // @@protoc_insertion_point(message_byte_size_start:devmand.channels.cli.plugin.CliResponse)
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::Int32Size(this->id());
  }

  // optional string output = 2;
  if (this->output().size() > 0) {
    total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
                      this->output());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CliResponse::MergeFrom(const ::google::protobuf::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:devmand.channels.cli.plugin.CliResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CliResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CliResponse>(
          &from);
  if (source == NULL) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:devmand.channels.cli.plugin.CliResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:devmand.channels.cli.plugin.CliResponse)
    MergeFrom(*source);
  }
}

void CliResponse::MergeFrom(const CliResponse& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:devmand.channels.cli.plugin.CliResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.output().size() > 0) {
    output_.AssignWithDefault(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        from.output_);
  }
}

void CliResponse::CopyFrom(const ::google::protobuf::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:devmand.channels.cli.plugin.CliResponse)
  if (&from == this)
    return;
  Clear();
  MergeFrom(from);
}

void CliResponse::CopyFrom(const CliResponse& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:devmand.channels.cli.plugin.CliResponse)
  if (&from == this)
    return;
  Clear();
  MergeFrom(from);
}

bool CliResponse::IsInitialized() const {
  return true;
}

void CliResponse::Swap(CliResponse* other) {
  if (other == this)
    return;
  InternalSwap(other);
}
void CliResponse::InternalSwap(CliResponse* other) {
  std::swap(id_, other->id_);
  output_.Swap(&other->output_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CliResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CliResponse_descriptor_;
  metadata.reflection = CliResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CliResponse

// optional int32 id = 1;
void CliResponse::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 CliResponse::id() const {
  // @@protoc_insertion_point(field_get:devmand.channels.cli.plugin.CliResponse.id)
  return id_;
}
void CliResponse::set_id(::google::protobuf::int32 value) {
  id_ = value;
  // @@protoc_insertion_point(field_set:devmand.channels.cli.plugin.CliResponse.id)
}

// optional string output = 2;
void CliResponse::clear_output() {
  output_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& CliResponse::output() const {
  // @@protoc_insertion_point(field_get:devmand.channels.cli.plugin.CliResponse.output)
  return output_.GetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CliResponse::set_output(const ::std::string& value) {
  output_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:devmand.channels.cli.plugin.CliResponse.output)
}
void CliResponse::set_output(const char* value) {
  output_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:devmand.channels.cli.plugin.CliResponse.output)
}
void CliResponse::set_output(const char* value, size_t size) {
  output_.SetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:devmand.channels.cli.plugin.CliResponse.output)
}
::std::string* CliResponse::mutable_output() {
  // @@protoc_insertion_point(field_mutable:devmand.channels.cli.plugin.CliResponse.output)
  return output_.MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CliResponse::release_output() {
  // @@protoc_insertion_point(field_release:devmand.channels.cli.plugin.CliResponse.output)

  return output_.ReleaseNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CliResponse::set_allocated_output(::std::string* output) {
  if (output != NULL) {
  } else {
  }
  output_.SetAllocatedNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), output);
  // @@protoc_insertion_point(field_set_allocated:devmand.channels.cli.plugin.CliResponse.output)
}

#endif // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

} // namespace plugin
} // namespace cli
} // namespace channels
} // namespace devmand

// @@protoc_insertion_point(global_scope)
