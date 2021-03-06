// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/remote_tensor_handle.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto;
namespace tensorflow {
namespace eager {
class RemoteTensorHandle;
class RemoteTensorHandleDefaultTypeInternal;
extern RemoteTensorHandleDefaultTypeInternal _RemoteTensorHandle_default_instance_;
class ResourceDtypeAndShape;
class ResourceDtypeAndShapeDefaultTypeInternal;
extern ResourceDtypeAndShapeDefaultTypeInternal _ResourceDtypeAndShape_default_instance_;
}  // namespace eager
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::eager::RemoteTensorHandle* Arena::CreateMaybeMessage<::tensorflow::eager::RemoteTensorHandle>(Arena*);
template<> ::tensorflow::eager::ResourceDtypeAndShape* Arena::CreateMaybeMessage<::tensorflow::eager::ResourceDtypeAndShape>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace eager {

// ===================================================================

class ResourceDtypeAndShape :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.eager.ResourceDtypeAndShape) */ {
 public:
  ResourceDtypeAndShape();
  virtual ~ResourceDtypeAndShape();

  ResourceDtypeAndShape(const ResourceDtypeAndShape& from);
  ResourceDtypeAndShape(ResourceDtypeAndShape&& from) noexcept
    : ResourceDtypeAndShape() {
    *this = ::std::move(from);
  }

  inline ResourceDtypeAndShape& operator=(const ResourceDtypeAndShape& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResourceDtypeAndShape& operator=(ResourceDtypeAndShape&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ResourceDtypeAndShape& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResourceDtypeAndShape* internal_default_instance() {
    return reinterpret_cast<const ResourceDtypeAndShape*>(
               &_ResourceDtypeAndShape_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ResourceDtypeAndShape& a, ResourceDtypeAndShape& b) {
    a.Swap(&b);
  }
  inline void Swap(ResourceDtypeAndShape* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ResourceDtypeAndShape* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResourceDtypeAndShape* New() const final {
    return CreateMaybeMessage<ResourceDtypeAndShape>(nullptr);
  }

  ResourceDtypeAndShape* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResourceDtypeAndShape>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResourceDtypeAndShape& from);
  void MergeFrom(const ResourceDtypeAndShape& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResourceDtypeAndShape* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.eager.ResourceDtypeAndShape";
  }
  protected:
  explicit ResourceDtypeAndShape(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShapeFieldNumber = 2,
    kDtypeFieldNumber = 1,
  };
  // .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* release_shape();
  ::tensorflow::TensorShapeProto* mutable_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.eager.ResourceDtypeAndShape)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::TensorShapeProto* shape_;
  int dtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto;
};
// -------------------------------------------------------------------

class RemoteTensorHandle :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.eager.RemoteTensorHandle) */ {
 public:
  RemoteTensorHandle();
  virtual ~RemoteTensorHandle();

  RemoteTensorHandle(const RemoteTensorHandle& from);
  RemoteTensorHandle(RemoteTensorHandle&& from) noexcept
    : RemoteTensorHandle() {
    *this = ::std::move(from);
  }

  inline RemoteTensorHandle& operator=(const RemoteTensorHandle& from) {
    CopyFrom(from);
    return *this;
  }
  inline RemoteTensorHandle& operator=(RemoteTensorHandle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RemoteTensorHandle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RemoteTensorHandle* internal_default_instance() {
    return reinterpret_cast<const RemoteTensorHandle*>(
               &_RemoteTensorHandle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RemoteTensorHandle& a, RemoteTensorHandle& b) {
    a.Swap(&b);
  }
  inline void Swap(RemoteTensorHandle* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RemoteTensorHandle* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RemoteTensorHandle* New() const final {
    return CreateMaybeMessage<RemoteTensorHandle>(nullptr);
  }

  RemoteTensorHandle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RemoteTensorHandle>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RemoteTensorHandle& from);
  void MergeFrom(const RemoteTensorHandle& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RemoteTensorHandle* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.eager.RemoteTensorHandle";
  }
  protected:
  explicit RemoteTensorHandle(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResourceDtypesAndShapesFieldNumber = 6,
    kDeviceFieldNumber = 3,
    kOpDeviceFieldNumber = 4,
    kOpIdFieldNumber = 1,
    kOutputNumFieldNumber = 2,
    kDtypeFieldNumber = 5,
  };
  // repeated .tensorflow.eager.ResourceDtypeAndShape resource_dtypes_and_shapes = 6;
  int resource_dtypes_and_shapes_size() const;
  void clear_resource_dtypes_and_shapes();
  ::tensorflow::eager::ResourceDtypeAndShape* mutable_resource_dtypes_and_shapes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::eager::ResourceDtypeAndShape >*
      mutable_resource_dtypes_and_shapes();
  const ::tensorflow::eager::ResourceDtypeAndShape& resource_dtypes_and_shapes(int index) const;
  ::tensorflow::eager::ResourceDtypeAndShape* add_resource_dtypes_and_shapes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::eager::ResourceDtypeAndShape >&
      resource_dtypes_and_shapes() const;

  // string device = 3;
  void clear_device();
  const std::string& device() const;
  void set_device(const std::string& value);
  void set_device(std::string&& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  std::string* mutable_device();
  std::string* release_device();
  void set_allocated_device(std::string* device);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_device();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device(
      std::string* device);

  // string op_device = 4;
  void clear_op_device();
  const std::string& op_device() const;
  void set_op_device(const std::string& value);
  void set_op_device(std::string&& value);
  void set_op_device(const char* value);
  void set_op_device(const char* value, size_t size);
  std::string* mutable_op_device();
  std::string* release_op_device();
  void set_allocated_op_device(std::string* op_device);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_op_device();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_op_device(
      std::string* op_device);

  // int64 op_id = 1;
  void clear_op_id();
  ::PROTOBUF_NAMESPACE_ID::int64 op_id() const;
  void set_op_id(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int32 output_num = 2;
  void clear_output_num();
  ::PROTOBUF_NAMESPACE_ID::int32 output_num() const;
  void set_output_num(::PROTOBUF_NAMESPACE_ID::int32 value);

  // .tensorflow.DataType dtype = 5;
  void clear_dtype();
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.eager.RemoteTensorHandle)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::eager::ResourceDtypeAndShape > resource_dtypes_and_shapes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr op_device_;
  ::PROTOBUF_NAMESPACE_ID::int64 op_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 output_num_;
  int dtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResourceDtypeAndShape

// .tensorflow.DataType dtype = 1;
inline void ResourceDtypeAndShape::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType ResourceDtypeAndShape::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.ResourceDtypeAndShape.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void ResourceDtypeAndShape::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.ResourceDtypeAndShape.dtype)
}

// .tensorflow.TensorShapeProto shape = 2;
inline bool ResourceDtypeAndShape::has_shape() const {
  return this != internal_default_instance() && shape_ != nullptr;
}
inline const ::tensorflow::TensorShapeProto& ResourceDtypeAndShape::shape() const {
  const ::tensorflow::TensorShapeProto* p = shape_;
  // @@protoc_insertion_point(field_get:tensorflow.eager.ResourceDtypeAndShape.shape)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::TensorShapeProto*>(
      &::tensorflow::_TensorShapeProto_default_instance_);
}
inline ::tensorflow::TensorShapeProto* ResourceDtypeAndShape::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.eager.ResourceDtypeAndShape.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* ResourceDtypeAndShape::unsafe_arena_release_shape() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.eager.ResourceDtypeAndShape.shape)
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* ResourceDtypeAndShape::mutable_shape() {
  
  if (shape_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::TensorShapeProto>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.ResourceDtypeAndShape.shape)
  return shape_;
}
inline void ResourceDtypeAndShape::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(shape_);
  }
  if (shape) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(shape)->GetArena();
    if (message_arena != submessage_arena) {
      shape = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, shape, submessage_arena);
    }
    
  } else {
    
  }
  shape_ = shape;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.eager.ResourceDtypeAndShape.shape)
}

// -------------------------------------------------------------------

// RemoteTensorHandle

// int64 op_id = 1;
inline void RemoteTensorHandle::clear_op_id() {
  op_id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 RemoteTensorHandle::op_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.op_id)
  return op_id_;
}
inline void RemoteTensorHandle::set_op_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  op_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.op_id)
}

// int32 output_num = 2;
inline void RemoteTensorHandle::clear_output_num() {
  output_num_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RemoteTensorHandle::output_num() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.output_num)
  return output_num_;
}
inline void RemoteTensorHandle::set_output_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  output_num_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.output_num)
}

// string device = 3;
inline void RemoteTensorHandle::clear_device() {
  device_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& RemoteTensorHandle::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.device)
  return device_.Get();
}
inline void RemoteTensorHandle::set_device(const std::string& value) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.device)
}
inline void RemoteTensorHandle::set_device(std::string&& value) {
  
  device_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.eager.RemoteTensorHandle.device)
}
inline void RemoteTensorHandle::set_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.eager.RemoteTensorHandle.device)
}
inline void RemoteTensorHandle::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.eager.RemoteTensorHandle.device)
}
inline std::string* RemoteTensorHandle::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.RemoteTensorHandle.device)
  return device_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* RemoteTensorHandle::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.eager.RemoteTensorHandle.device)
  
  return device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void RemoteTensorHandle::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.eager.RemoteTensorHandle.device)
}
inline std::string* RemoteTensorHandle::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.eager.RemoteTensorHandle.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return device_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void RemoteTensorHandle::unsafe_arena_set_allocated_device(
    std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (device != nullptr) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.eager.RemoteTensorHandle.device)
}

// string op_device = 4;
inline void RemoteTensorHandle::clear_op_device() {
  op_device_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& RemoteTensorHandle::op_device() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.op_device)
  return op_device_.Get();
}
inline void RemoteTensorHandle::set_op_device(const std::string& value) {
  
  op_device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline void RemoteTensorHandle::set_op_device(std::string&& value) {
  
  op_device_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline void RemoteTensorHandle::set_op_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  op_device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline void RemoteTensorHandle::set_op_device(const char* value,
    size_t size) {
  
  op_device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline std::string* RemoteTensorHandle::mutable_op_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.RemoteTensorHandle.op_device)
  return op_device_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* RemoteTensorHandle::release_op_device() {
  // @@protoc_insertion_point(field_release:tensorflow.eager.RemoteTensorHandle.op_device)
  
  return op_device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void RemoteTensorHandle::set_allocated_op_device(std::string* op_device) {
  if (op_device != nullptr) {
    
  } else {
    
  }
  op_device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), op_device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline std::string* RemoteTensorHandle::unsafe_arena_release_op_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.eager.RemoteTensorHandle.op_device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return op_device_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void RemoteTensorHandle::unsafe_arena_set_allocated_op_device(
    std::string* op_device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (op_device != nullptr) {
    
  } else {
    
  }
  op_device_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      op_device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.eager.RemoteTensorHandle.op_device)
}

// .tensorflow.DataType dtype = 5;
inline void RemoteTensorHandle::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType RemoteTensorHandle::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void RemoteTensorHandle::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.dtype)
}

// repeated .tensorflow.eager.ResourceDtypeAndShape resource_dtypes_and_shapes = 6;
inline int RemoteTensorHandle::resource_dtypes_and_shapes_size() const {
  return resource_dtypes_and_shapes_.size();
}
inline void RemoteTensorHandle::clear_resource_dtypes_and_shapes() {
  resource_dtypes_and_shapes_.Clear();
}
inline ::tensorflow::eager::ResourceDtypeAndShape* RemoteTensorHandle::mutable_resource_dtypes_and_shapes(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.RemoteTensorHandle.resource_dtypes_and_shapes)
  return resource_dtypes_and_shapes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::eager::ResourceDtypeAndShape >*
RemoteTensorHandle::mutable_resource_dtypes_and_shapes() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.eager.RemoteTensorHandle.resource_dtypes_and_shapes)
  return &resource_dtypes_and_shapes_;
}
inline const ::tensorflow::eager::ResourceDtypeAndShape& RemoteTensorHandle::resource_dtypes_and_shapes(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.resource_dtypes_and_shapes)
  return resource_dtypes_and_shapes_.Get(index);
}
inline ::tensorflow::eager::ResourceDtypeAndShape* RemoteTensorHandle::add_resource_dtypes_and_shapes() {
  // @@protoc_insertion_point(field_add:tensorflow.eager.RemoteTensorHandle.resource_dtypes_and_shapes)
  return resource_dtypes_and_shapes_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::eager::ResourceDtypeAndShape >&
RemoteTensorHandle::resource_dtypes_and_shapes() const {
  // @@protoc_insertion_point(field_list:tensorflow.eager.RemoteTensorHandle.resource_dtypes_and_shapes)
  return resource_dtypes_and_shapes_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace eager
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto
