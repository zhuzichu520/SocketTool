// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_user_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_user_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_user_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_user_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_user_2eproto;
namespace im {
namespace proto {
class User;
struct UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace proto
}  // namespace im
PROTOBUF_NAMESPACE_OPEN
template<> ::im::proto::User* Arena::CreateMaybeMessage<::im::proto::User>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace im {
namespace proto {

// ===================================================================

class User final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:im.proto.User) */ {
 public:
  inline User() : User(nullptr) {}
  ~User() override;
  explicit PROTOBUF_CONSTEXPR User(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const User& default_instance() {
    return *internal_default_instance();
  }
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<User>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const User& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const User& from) {
    User::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "im.proto.User";
  }
  protected:
  explicit User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccidFieldNumber = 2,
    kNameFieldNumber = 3,
    kTokenFieldNumber = 4,
    kIconFieldNumber = 5,
    kSignFieldNumber = 6,
    kBirthFieldNumber = 7,
    kMobileFieldNumber = 8,
    kExFieldNumber = 10,
    kGenderFieldNumber = 9,
    kOnlineFieldNumber = 11,
  };
  // string accid = 2;
  void clear_accid();
  const std::string& accid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_accid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_accid();
  PROTOBUF_NODISCARD std::string* release_accid();
  void set_allocated_accid(std::string* accid);
  private:
  const std::string& _internal_accid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_accid(const std::string& value);
  std::string* _internal_mutable_accid();
  public:

  // string name = 3;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string token = 4;
  void clear_token();
  const std::string& token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_token();
  PROTOBUF_NODISCARD std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // string icon = 5;
  void clear_icon();
  const std::string& icon() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_icon(ArgT0&& arg0, ArgT... args);
  std::string* mutable_icon();
  PROTOBUF_NODISCARD std::string* release_icon();
  void set_allocated_icon(std::string* icon);
  private:
  const std::string& _internal_icon() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_icon(const std::string& value);
  std::string* _internal_mutable_icon();
  public:

  // string sign = 6;
  void clear_sign();
  const std::string& sign() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sign(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sign();
  PROTOBUF_NODISCARD std::string* release_sign();
  void set_allocated_sign(std::string* sign);
  private:
  const std::string& _internal_sign() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sign(const std::string& value);
  std::string* _internal_mutable_sign();
  public:

  // string birth = 7;
  void clear_birth();
  const std::string& birth() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_birth(ArgT0&& arg0, ArgT... args);
  std::string* mutable_birth();
  PROTOBUF_NODISCARD std::string* release_birth();
  void set_allocated_birth(std::string* birth);
  private:
  const std::string& _internal_birth() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_birth(const std::string& value);
  std::string* _internal_mutable_birth();
  public:

  // string mobile = 8;
  void clear_mobile();
  const std::string& mobile() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_mobile(ArgT0&& arg0, ArgT... args);
  std::string* mutable_mobile();
  PROTOBUF_NODISCARD std::string* release_mobile();
  void set_allocated_mobile(std::string* mobile);
  private:
  const std::string& _internal_mobile() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mobile(const std::string& value);
  std::string* _internal_mutable_mobile();
  public:

  // string ex = 10;
  void clear_ex();
  const std::string& ex() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ex(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ex();
  PROTOBUF_NODISCARD std::string* release_ex();
  void set_allocated_ex(std::string* ex);
  private:
  const std::string& _internal_ex() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ex(const std::string& value);
  std::string* _internal_mutable_ex();
  public:

  // uint32 gender = 9;
  void clear_gender();
  uint32_t gender() const;
  void set_gender(uint32_t value);
  private:
  uint32_t _internal_gender() const;
  void _internal_set_gender(uint32_t value);
  public:

  // bool online = 11;
  void clear_online();
  bool online() const;
  void set_online(bool value);
  private:
  bool _internal_online() const;
  void _internal_set_online(bool value);
  public:

  // @@protoc_insertion_point(class_scope:im.proto.User)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr accid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr icon_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sign_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr birth_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mobile_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ex_;
    uint32_t gender_;
    bool online_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_user_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// User

// string accid = 2;
inline void User::clear_accid() {
  _impl_.accid_.ClearToEmpty();
}
inline const std::string& User::accid() const {
  // @@protoc_insertion_point(field_get:im.proto.User.accid)
  return _internal_accid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_accid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.accid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.accid)
}
inline std::string* User::mutable_accid() {
  std::string* _s = _internal_mutable_accid();
  // @@protoc_insertion_point(field_mutable:im.proto.User.accid)
  return _s;
}
inline const std::string& User::_internal_accid() const {
  return _impl_.accid_.Get();
}
inline void User::_internal_set_accid(const std::string& value) {
  
  _impl_.accid_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_accid() {
  
  return _impl_.accid_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_accid() {
  // @@protoc_insertion_point(field_release:im.proto.User.accid)
  return _impl_.accid_.Release();
}
inline void User::set_allocated_accid(std::string* accid) {
  if (accid != nullptr) {
    
  } else {
    
  }
  _impl_.accid_.SetAllocated(accid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.accid_.IsDefault()) {
    _impl_.accid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.accid)
}

// string name = 3;
inline void User::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& User::name() const {
  // @@protoc_insertion_point(field_get:im.proto.User.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.name)
}
inline std::string* User::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:im.proto.User.name)
  return _s;
}
inline const std::string& User::_internal_name() const {
  return _impl_.name_.Get();
}
inline void User::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:im.proto.User.name)
  return _impl_.name_.Release();
}
inline void User::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.name)
}

// string token = 4;
inline void User::clear_token() {
  _impl_.token_.ClearToEmpty();
}
inline const std::string& User::token() const {
  // @@protoc_insertion_point(field_get:im.proto.User.token)
  return _internal_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_token(ArgT0&& arg0, ArgT... args) {
 
 _impl_.token_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.token)
}
inline std::string* User::mutable_token() {
  std::string* _s = _internal_mutable_token();
  // @@protoc_insertion_point(field_mutable:im.proto.User.token)
  return _s;
}
inline const std::string& User::_internal_token() const {
  return _impl_.token_.Get();
}
inline void User::_internal_set_token(const std::string& value) {
  
  _impl_.token_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_token() {
  
  return _impl_.token_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_token() {
  // @@protoc_insertion_point(field_release:im.proto.User.token)
  return _impl_.token_.Release();
}
inline void User::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    
  } else {
    
  }
  _impl_.token_.SetAllocated(token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.token_.IsDefault()) {
    _impl_.token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.token)
}

// string icon = 5;
inline void User::clear_icon() {
  _impl_.icon_.ClearToEmpty();
}
inline const std::string& User::icon() const {
  // @@protoc_insertion_point(field_get:im.proto.User.icon)
  return _internal_icon();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_icon(ArgT0&& arg0, ArgT... args) {
 
 _impl_.icon_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.icon)
}
inline std::string* User::mutable_icon() {
  std::string* _s = _internal_mutable_icon();
  // @@protoc_insertion_point(field_mutable:im.proto.User.icon)
  return _s;
}
inline const std::string& User::_internal_icon() const {
  return _impl_.icon_.Get();
}
inline void User::_internal_set_icon(const std::string& value) {
  
  _impl_.icon_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_icon() {
  
  return _impl_.icon_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_icon() {
  // @@protoc_insertion_point(field_release:im.proto.User.icon)
  return _impl_.icon_.Release();
}
inline void User::set_allocated_icon(std::string* icon) {
  if (icon != nullptr) {
    
  } else {
    
  }
  _impl_.icon_.SetAllocated(icon, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.icon_.IsDefault()) {
    _impl_.icon_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.icon)
}

// string sign = 6;
inline void User::clear_sign() {
  _impl_.sign_.ClearToEmpty();
}
inline const std::string& User::sign() const {
  // @@protoc_insertion_point(field_get:im.proto.User.sign)
  return _internal_sign();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_sign(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sign_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.sign)
}
inline std::string* User::mutable_sign() {
  std::string* _s = _internal_mutable_sign();
  // @@protoc_insertion_point(field_mutable:im.proto.User.sign)
  return _s;
}
inline const std::string& User::_internal_sign() const {
  return _impl_.sign_.Get();
}
inline void User::_internal_set_sign(const std::string& value) {
  
  _impl_.sign_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_sign() {
  
  return _impl_.sign_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_sign() {
  // @@protoc_insertion_point(field_release:im.proto.User.sign)
  return _impl_.sign_.Release();
}
inline void User::set_allocated_sign(std::string* sign) {
  if (sign != nullptr) {
    
  } else {
    
  }
  _impl_.sign_.SetAllocated(sign, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sign_.IsDefault()) {
    _impl_.sign_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.sign)
}

// string birth = 7;
inline void User::clear_birth() {
  _impl_.birth_.ClearToEmpty();
}
inline const std::string& User::birth() const {
  // @@protoc_insertion_point(field_get:im.proto.User.birth)
  return _internal_birth();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_birth(ArgT0&& arg0, ArgT... args) {
 
 _impl_.birth_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.birth)
}
inline std::string* User::mutable_birth() {
  std::string* _s = _internal_mutable_birth();
  // @@protoc_insertion_point(field_mutable:im.proto.User.birth)
  return _s;
}
inline const std::string& User::_internal_birth() const {
  return _impl_.birth_.Get();
}
inline void User::_internal_set_birth(const std::string& value) {
  
  _impl_.birth_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_birth() {
  
  return _impl_.birth_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_birth() {
  // @@protoc_insertion_point(field_release:im.proto.User.birth)
  return _impl_.birth_.Release();
}
inline void User::set_allocated_birth(std::string* birth) {
  if (birth != nullptr) {
    
  } else {
    
  }
  _impl_.birth_.SetAllocated(birth, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.birth_.IsDefault()) {
    _impl_.birth_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.birth)
}

// string mobile = 8;
inline void User::clear_mobile() {
  _impl_.mobile_.ClearToEmpty();
}
inline const std::string& User::mobile() const {
  // @@protoc_insertion_point(field_get:im.proto.User.mobile)
  return _internal_mobile();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_mobile(ArgT0&& arg0, ArgT... args) {
 
 _impl_.mobile_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.mobile)
}
inline std::string* User::mutable_mobile() {
  std::string* _s = _internal_mutable_mobile();
  // @@protoc_insertion_point(field_mutable:im.proto.User.mobile)
  return _s;
}
inline const std::string& User::_internal_mobile() const {
  return _impl_.mobile_.Get();
}
inline void User::_internal_set_mobile(const std::string& value) {
  
  _impl_.mobile_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_mobile() {
  
  return _impl_.mobile_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_mobile() {
  // @@protoc_insertion_point(field_release:im.proto.User.mobile)
  return _impl_.mobile_.Release();
}
inline void User::set_allocated_mobile(std::string* mobile) {
  if (mobile != nullptr) {
    
  } else {
    
  }
  _impl_.mobile_.SetAllocated(mobile, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.mobile_.IsDefault()) {
    _impl_.mobile_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.mobile)
}

// uint32 gender = 9;
inline void User::clear_gender() {
  _impl_.gender_ = 0u;
}
inline uint32_t User::_internal_gender() const {
  return _impl_.gender_;
}
inline uint32_t User::gender() const {
  // @@protoc_insertion_point(field_get:im.proto.User.gender)
  return _internal_gender();
}
inline void User::_internal_set_gender(uint32_t value) {
  
  _impl_.gender_ = value;
}
inline void User::set_gender(uint32_t value) {
  _internal_set_gender(value);
  // @@protoc_insertion_point(field_set:im.proto.User.gender)
}

// string ex = 10;
inline void User::clear_ex() {
  _impl_.ex_.ClearToEmpty();
}
inline const std::string& User::ex() const {
  // @@protoc_insertion_point(field_get:im.proto.User.ex)
  return _internal_ex();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_ex(ArgT0&& arg0, ArgT... args) {
 
 _impl_.ex_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:im.proto.User.ex)
}
inline std::string* User::mutable_ex() {
  std::string* _s = _internal_mutable_ex();
  // @@protoc_insertion_point(field_mutable:im.proto.User.ex)
  return _s;
}
inline const std::string& User::_internal_ex() const {
  return _impl_.ex_.Get();
}
inline void User::_internal_set_ex(const std::string& value) {
  
  _impl_.ex_.Set(value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_ex() {
  
  return _impl_.ex_.Mutable(GetArenaForAllocation());
}
inline std::string* User::release_ex() {
  // @@protoc_insertion_point(field_release:im.proto.User.ex)
  return _impl_.ex_.Release();
}
inline void User::set_allocated_ex(std::string* ex) {
  if (ex != nullptr) {
    
  } else {
    
  }
  _impl_.ex_.SetAllocated(ex, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.ex_.IsDefault()) {
    _impl_.ex_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:im.proto.User.ex)
}

// bool online = 11;
inline void User::clear_online() {
  _impl_.online_ = false;
}
inline bool User::_internal_online() const {
  return _impl_.online_;
}
inline bool User::online() const {
  // @@protoc_insertion_point(field_get:im.proto.User.online)
  return _internal_online();
}
inline void User::_internal_set_online(bool value) {
  
  _impl_.online_ = value;
}
inline void User::set_online(bool value) {
  _internal_set_online(value);
  // @@protoc_insertion_point(field_set:im.proto.User.online)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace im

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_user_2eproto
