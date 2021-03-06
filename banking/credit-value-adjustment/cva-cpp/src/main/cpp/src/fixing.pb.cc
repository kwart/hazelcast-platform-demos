// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fixing.proto

#include "../include/fixing.pb.h"

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
namespace FlumaionQL {
class FixingDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Fixing> _instance;
} _Fixing_default_instance_;
}  // namespace FlumaionQL
static void InitDefaultsscc_info_Fixing_fixing_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::FlumaionQL::_Fixing_default_instance_;
    new (ptr) ::FlumaionQL::Fixing();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::FlumaionQL::Fixing::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Fixing_fixing_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Fixing_fixing_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_fixing_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_fixing_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_fixing_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_fixing_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::Fixing, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::Fixing, curvename_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::Fixing, fixing_dates_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::Fixing, fixing_rates_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::FlumaionQL::Fixing)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::FlumaionQL::_Fixing_default_instance_),
};

const char descriptor_table_protodef_fixing_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014fixing.proto\022\nFlumaionQL\"G\n\006Fixing\022\021\n\t"
  "curvename\030\001 \001(\t\022\024\n\014fixing_dates\030\002 \003(\003\022\024\n"
  "\014fixing_rates\030\003 \003(\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_fixing_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_fixing_2eproto_sccs[1] = {
  &scc_info_Fixing_fixing_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_fixing_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_fixing_2eproto = {
  false, false, descriptor_table_protodef_fixing_2eproto, "fixing.proto", 107,
  &descriptor_table_fixing_2eproto_once, descriptor_table_fixing_2eproto_sccs, descriptor_table_fixing_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_fixing_2eproto::offsets,
  file_level_metadata_fixing_2eproto, 1, file_level_enum_descriptors_fixing_2eproto, file_level_service_descriptors_fixing_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_fixing_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_fixing_2eproto)), true);
namespace FlumaionQL {

// ===================================================================

void Fixing::InitAsDefaultInstance() {
}
class Fixing::_Internal {
 public:
};

Fixing::Fixing(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  fixing_dates_(arena),
  fixing_rates_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:FlumaionQL.Fixing)
}
Fixing::Fixing(const Fixing& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      fixing_dates_(from.fixing_dates_),
      fixing_rates_(from.fixing_rates_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  curvename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_curvename().empty()) {
    curvename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_curvename(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:FlumaionQL.Fixing)
}

void Fixing::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Fixing_fixing_2eproto.base);
  curvename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Fixing::~Fixing() {
  // @@protoc_insertion_point(destructor:FlumaionQL.Fixing)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Fixing::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  curvename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Fixing::ArenaDtor(void* object) {
  Fixing* _this = reinterpret_cast< Fixing* >(object);
  (void)_this;
}
void Fixing::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Fixing::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Fixing& Fixing::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Fixing_fixing_2eproto.base);
  return *internal_default_instance();
}


void Fixing::Clear() {
// @@protoc_insertion_point(message_clear_start:FlumaionQL.Fixing)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  fixing_dates_.Clear();
  fixing_rates_.Clear();
  curvename_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Fixing::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string curvename = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_curvename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FlumaionQL.Fixing.curvename"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int64 fixing_dates = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_fixing_dates(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
          _internal_add_fixing_dates(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float fixing_rates = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_fixing_rates(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29) {
          _internal_add_fixing_rates(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Fixing::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FlumaionQL.Fixing)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string curvename = 1;
  if (this->curvename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_curvename().data(), static_cast<int>(this->_internal_curvename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FlumaionQL.Fixing.curvename");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_curvename(), target);
  }

  // repeated int64 fixing_dates = 2;
  {
    int byte_size = _fixing_dates_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          2, _internal_fixing_dates(), byte_size, target);
    }
  }

  // repeated float fixing_rates = 3;
  if (this->_internal_fixing_rates_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_fixing_rates(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FlumaionQL.Fixing)
  return target;
}

size_t Fixing::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FlumaionQL.Fixing)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 fixing_dates = 2;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int64Size(this->fixing_dates_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fixing_dates_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float fixing_rates = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_fixing_rates_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fixing_rates_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string curvename = 1;
  if (this->curvename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_curvename());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Fixing::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:FlumaionQL.Fixing)
  GOOGLE_DCHECK_NE(&from, this);
  const Fixing* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Fixing>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:FlumaionQL.Fixing)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:FlumaionQL.Fixing)
    MergeFrom(*source);
  }
}

void Fixing::MergeFrom(const Fixing& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FlumaionQL.Fixing)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  fixing_dates_.MergeFrom(from.fixing_dates_);
  fixing_rates_.MergeFrom(from.fixing_rates_);
  if (from.curvename().size() > 0) {
    _internal_set_curvename(from._internal_curvename());
  }
}

void Fixing::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:FlumaionQL.Fixing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fixing::CopyFrom(const Fixing& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FlumaionQL.Fixing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fixing::IsInitialized() const {
  return true;
}

void Fixing::InternalSwap(Fixing* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  fixing_dates_.InternalSwap(&other->fixing_dates_);
  fixing_rates_.InternalSwap(&other->fixing_rates_);
  curvename_.Swap(&other->curvename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata Fixing::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace FlumaionQL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FlumaionQL::Fixing* Arena::CreateMaybeMessage< ::FlumaionQL::Fixing >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FlumaionQL::Fixing >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
