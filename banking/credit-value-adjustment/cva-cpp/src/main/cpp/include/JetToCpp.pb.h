// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: JetToCpp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_JetToCpp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_JetToCpp_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_JetToCpp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_JetToCpp_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_JetToCpp_2eproto;
namespace com_hazelcast_platform_demos_banking_cva {
class InputMessage;
class InputMessageDefaultTypeInternal;
extern InputMessageDefaultTypeInternal _InputMessage_default_instance_;
class OutputMessage;
class OutputMessageDefaultTypeInternal;
extern OutputMessageDefaultTypeInternal _OutputMessage_default_instance_;
}  // namespace com_hazelcast_platform_demos_banking_cva
PROTOBUF_NAMESPACE_OPEN
template<> ::com_hazelcast_platform_demos_banking_cva::InputMessage* Arena::CreateMaybeMessage<::com_hazelcast_platform_demos_banking_cva::InputMessage>(Arena*);
template<> ::com_hazelcast_platform_demos_banking_cva::OutputMessage* Arena::CreateMaybeMessage<::com_hazelcast_platform_demos_banking_cva::OutputMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com_hazelcast_platform_demos_banking_cva {

// ===================================================================

class InputMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com_hazelcast_platform_demos_banking_cva.InputMessage) */ {
 public:
  inline InputMessage() : InputMessage(nullptr) {};
  virtual ~InputMessage();

  InputMessage(const InputMessage& from);
  InputMessage(InputMessage&& from) noexcept
    : InputMessage() {
    *this = ::std::move(from);
  }

  inline InputMessage& operator=(const InputMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline InputMessage& operator=(InputMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const InputMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InputMessage* internal_default_instance() {
    return reinterpret_cast<const InputMessage*>(
               &_InputMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InputMessage& a, InputMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(InputMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InputMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InputMessage* New() const final {
    return CreateMaybeMessage<InputMessage>(nullptr);
  }

  InputMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InputMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InputMessage& from);
  void MergeFrom(const InputMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(InputMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com_hazelcast_platform_demos_banking_cva.InputMessage";
  }
  protected:
  explicit InputMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_JetToCpp_2eproto);
    return ::descriptor_table_JetToCpp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInputValueFieldNumber = 1,
  };
  // repeated string inputValue = 1;
  int inputvalue_size() const;
  private:
  int _internal_inputvalue_size() const;
  public:
  void clear_inputvalue();
  const std::string& inputvalue(int index) const;
  std::string* mutable_inputvalue(int index);
  void set_inputvalue(int index, const std::string& value);
  void set_inputvalue(int index, std::string&& value);
  void set_inputvalue(int index, const char* value);
  void set_inputvalue(int index, const char* value, size_t size);
  std::string* add_inputvalue();
  void add_inputvalue(const std::string& value);
  void add_inputvalue(std::string&& value);
  void add_inputvalue(const char* value);
  void add_inputvalue(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& inputvalue() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_inputvalue();
  private:
  const std::string& _internal_inputvalue(int index) const;
  std::string* _internal_add_inputvalue();
  public:

  // @@protoc_insertion_point(class_scope:com_hazelcast_platform_demos_banking_cva.InputMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> inputvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_JetToCpp_2eproto;
};
// -------------------------------------------------------------------

class OutputMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com_hazelcast_platform_demos_banking_cva.OutputMessage) */ {
 public:
  inline OutputMessage() : OutputMessage(nullptr) {};
  virtual ~OutputMessage();

  OutputMessage(const OutputMessage& from);
  OutputMessage(OutputMessage&& from) noexcept
    : OutputMessage() {
    *this = ::std::move(from);
  }

  inline OutputMessage& operator=(const OutputMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline OutputMessage& operator=(OutputMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const OutputMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OutputMessage* internal_default_instance() {
    return reinterpret_cast<const OutputMessage*>(
               &_OutputMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(OutputMessage& a, OutputMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(OutputMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OutputMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OutputMessage* New() const final {
    return CreateMaybeMessage<OutputMessage>(nullptr);
  }

  OutputMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OutputMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OutputMessage& from);
  void MergeFrom(const OutputMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(OutputMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com_hazelcast_platform_demos_banking_cva.OutputMessage";
  }
  protected:
  explicit OutputMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_JetToCpp_2eproto);
    return ::descriptor_table_JetToCpp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutputValueFieldNumber = 1,
  };
  // repeated string outputValue = 1;
  int outputvalue_size() const;
  private:
  int _internal_outputvalue_size() const;
  public:
  void clear_outputvalue();
  const std::string& outputvalue(int index) const;
  std::string* mutable_outputvalue(int index);
  void set_outputvalue(int index, const std::string& value);
  void set_outputvalue(int index, std::string&& value);
  void set_outputvalue(int index, const char* value);
  void set_outputvalue(int index, const char* value, size_t size);
  std::string* add_outputvalue();
  void add_outputvalue(const std::string& value);
  void add_outputvalue(std::string&& value);
  void add_outputvalue(const char* value);
  void add_outputvalue(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& outputvalue() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_outputvalue();
  private:
  const std::string& _internal_outputvalue(int index) const;
  std::string* _internal_add_outputvalue();
  public:

  // @@protoc_insertion_point(class_scope:com_hazelcast_platform_demos_banking_cva.OutputMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> outputvalue_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_JetToCpp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InputMessage

// repeated string inputValue = 1;
inline int InputMessage::_internal_inputvalue_size() const {
  return inputvalue_.size();
}
inline int InputMessage::inputvalue_size() const {
  return _internal_inputvalue_size();
}
inline void InputMessage::clear_inputvalue() {
  inputvalue_.Clear();
}
inline std::string* InputMessage::add_inputvalue() {
  // @@protoc_insertion_point(field_add_mutable:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  return _internal_add_inputvalue();
}
inline const std::string& InputMessage::_internal_inputvalue(int index) const {
  return inputvalue_.Get(index);
}
inline const std::string& InputMessage::inputvalue(int index) const {
  // @@protoc_insertion_point(field_get:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  return _internal_inputvalue(index);
}
inline std::string* InputMessage::mutable_inputvalue(int index) {
  // @@protoc_insertion_point(field_mutable:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  return inputvalue_.Mutable(index);
}
inline void InputMessage::set_inputvalue(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  inputvalue_.Mutable(index)->assign(value);
}
inline void InputMessage::set_inputvalue(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  inputvalue_.Mutable(index)->assign(std::move(value));
}
inline void InputMessage::set_inputvalue(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  inputvalue_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline void InputMessage::set_inputvalue(int index, const char* value, size_t size) {
  inputvalue_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline std::string* InputMessage::_internal_add_inputvalue() {
  return inputvalue_.Add();
}
inline void InputMessage::add_inputvalue(const std::string& value) {
  inputvalue_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline void InputMessage::add_inputvalue(std::string&& value) {
  inputvalue_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline void InputMessage::add_inputvalue(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  inputvalue_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline void InputMessage::add_inputvalue(const char* value, size_t size) {
  inputvalue_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
InputMessage::inputvalue() const {
  // @@protoc_insertion_point(field_list:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  return inputvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
InputMessage::mutable_inputvalue() {
  // @@protoc_insertion_point(field_mutable_list:com_hazelcast_platform_demos_banking_cva.InputMessage.inputValue)
  return &inputvalue_;
}

// -------------------------------------------------------------------

// OutputMessage

// repeated string outputValue = 1;
inline int OutputMessage::_internal_outputvalue_size() const {
  return outputvalue_.size();
}
inline int OutputMessage::outputvalue_size() const {
  return _internal_outputvalue_size();
}
inline void OutputMessage::clear_outputvalue() {
  outputvalue_.Clear();
}
inline std::string* OutputMessage::add_outputvalue() {
  // @@protoc_insertion_point(field_add_mutable:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  return _internal_add_outputvalue();
}
inline const std::string& OutputMessage::_internal_outputvalue(int index) const {
  return outputvalue_.Get(index);
}
inline const std::string& OutputMessage::outputvalue(int index) const {
  // @@protoc_insertion_point(field_get:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  return _internal_outputvalue(index);
}
inline std::string* OutputMessage::mutable_outputvalue(int index) {
  // @@protoc_insertion_point(field_mutable:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  return outputvalue_.Mutable(index);
}
inline void OutputMessage::set_outputvalue(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  outputvalue_.Mutable(index)->assign(value);
}
inline void OutputMessage::set_outputvalue(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  outputvalue_.Mutable(index)->assign(std::move(value));
}
inline void OutputMessage::set_outputvalue(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  outputvalue_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline void OutputMessage::set_outputvalue(int index, const char* value, size_t size) {
  outputvalue_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline std::string* OutputMessage::_internal_add_outputvalue() {
  return outputvalue_.Add();
}
inline void OutputMessage::add_outputvalue(const std::string& value) {
  outputvalue_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline void OutputMessage::add_outputvalue(std::string&& value) {
  outputvalue_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline void OutputMessage::add_outputvalue(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  outputvalue_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline void OutputMessage::add_outputvalue(const char* value, size_t size) {
  outputvalue_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
OutputMessage::outputvalue() const {
  // @@protoc_insertion_point(field_list:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  return outputvalue_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
OutputMessage::mutable_outputvalue() {
  // @@protoc_insertion_point(field_mutable_list:com_hazelcast_platform_demos_banking_cva.OutputMessage.outputValue)
  return &outputvalue_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace com_hazelcast_platform_demos_banking_cva

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_JetToCpp_2eproto
