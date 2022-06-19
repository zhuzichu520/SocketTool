// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: online.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_online_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_online_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_online_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_online_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_online_2eproto;
namespace com {
namespace zhuzichu {
namespace protocol {
class Online;
struct OnlineDefaultTypeInternal;
extern OnlineDefaultTypeInternal _Online_default_instance_;
class Online_User;
struct Online_UserDefaultTypeInternal;
extern Online_UserDefaultTypeInternal _Online_User_default_instance_;
}  // namespace protocol
}  // namespace zhuzichu
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::zhuzichu::protocol::Online* Arena::CreateMaybeMessage<::com::zhuzichu::protocol::Online>(Arena*);
template<> ::com::zhuzichu::protocol::Online_User* Arena::CreateMaybeMessage<::com::zhuzichu::protocol::Online_User>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace zhuzichu {
namespace protocol {

// ===================================================================

class Online_User final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.zhuzichu.protocol.Online.User) */ {
 public:
  inline Online_User() : Online_User(nullptr) {}
  ~Online_User() override;
  explicit PROTOBUF_CONSTEXPR Online_User(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Online_User(const Online_User& from);
  Online_User(Online_User&& from) noexcept
    : Online_User() {
    *this = ::std::move(from);
  }

  inline Online_User& operator=(const Online_User& from) {
    CopyFrom(from);
    return *this;
  }
  inline Online_User& operator=(Online_User&& from) noexcept {
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
  static const Online_User& default_instance() {
    return *internal_default_instance();
  }
  static inline const Online_User* internal_default_instance() {
    return reinterpret_cast<const Online_User*>(
               &_Online_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Online_User& a, Online_User& b) {
    a.Swap(&b);
  }
  inline void Swap(Online_User* other) {
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
  void UnsafeArenaSwap(Online_User* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Online_User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Online_User>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Online_User& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Online_User& from) {
    Online_User::MergeImpl(*this, from);
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
  void InternalSwap(Online_User* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.zhuzichu.protocol.Online.User";
  }
  protected:
  explicit Online_User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernameFieldNumber = 2,
    kIdFieldNumber = 1,
    kOnlineFieldNumber = 3,
  };
  // string username = 2;
  void clear_username();
  const std::string& username() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_username(ArgT0&& arg0, ArgT... args);
  std::string* mutable_username();
  PROTOBUF_NODISCARD std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // uint64 id = 1;
  void clear_id();
  uint64_t id() const;
  void set_id(uint64_t value);
  private:
  uint64_t _internal_id() const;
  void _internal_set_id(uint64_t value);
  public:

  // bool online = 3;
  void clear_online();
  bool online() const;
  void set_online(bool value);
  private:
  bool _internal_online() const;
  void _internal_set_online(bool value);
  public:

  // @@protoc_insertion_point(class_scope:com.zhuzichu.protocol.Online.User)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
    uint64_t id_;
    bool online_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_online_2eproto;
};
// -------------------------------------------------------------------

class Online final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.zhuzichu.protocol.Online) */ {
 public:
  inline Online() : Online(nullptr) {}
  ~Online() override;
  explicit PROTOBUF_CONSTEXPR Online(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Online(const Online& from);
  Online(Online&& from) noexcept
    : Online() {
    *this = ::std::move(from);
  }

  inline Online& operator=(const Online& from) {
    CopyFrom(from);
    return *this;
  }
  inline Online& operator=(Online&& from) noexcept {
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
  static const Online& default_instance() {
    return *internal_default_instance();
  }
  static inline const Online* internal_default_instance() {
    return reinterpret_cast<const Online*>(
               &_Online_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Online& a, Online& b) {
    a.Swap(&b);
  }
  inline void Swap(Online* other) {
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
  void UnsafeArenaSwap(Online* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Online* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Online>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Online& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Online& from) {
    Online::MergeImpl(*this, from);
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
  void InternalSwap(Online* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.zhuzichu.protocol.Online";
  }
  protected:
  explicit Online(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Online_User User;

  // accessors -------------------------------------------------------

  enum : int {
    kUsersFieldNumber = 1,
  };
  // repeated .com.zhuzichu.protocol.Online.User users = 1;
  int users_size() const;
  private:
  int _internal_users_size() const;
  public:
  void clear_users();
  ::com::zhuzichu::protocol::Online_User* mutable_users(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::zhuzichu::protocol::Online_User >*
      mutable_users();
  private:
  const ::com::zhuzichu::protocol::Online_User& _internal_users(int index) const;
  ::com::zhuzichu::protocol::Online_User* _internal_add_users();
  public:
  const ::com::zhuzichu::protocol::Online_User& users(int index) const;
  ::com::zhuzichu::protocol::Online_User* add_users();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::zhuzichu::protocol::Online_User >&
      users() const;

  // @@protoc_insertion_point(class_scope:com.zhuzichu.protocol.Online)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::zhuzichu::protocol::Online_User > users_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_online_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Online_User

// uint64 id = 1;
inline void Online_User::clear_id() {
  _impl_.id_ = uint64_t{0u};
}
inline uint64_t Online_User::_internal_id() const {
  return _impl_.id_;
}
inline uint64_t Online_User::id() const {
  // @@protoc_insertion_point(field_get:com.zhuzichu.protocol.Online.User.id)
  return _internal_id();
}
inline void Online_User::_internal_set_id(uint64_t value) {
  
  _impl_.id_ = value;
}
inline void Online_User::set_id(uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:com.zhuzichu.protocol.Online.User.id)
}

// string username = 2;
inline void Online_User::clear_username() {
  _impl_.username_.ClearToEmpty();
}
inline const std::string& Online_User::username() const {
  // @@protoc_insertion_point(field_get:com.zhuzichu.protocol.Online.User.username)
  return _internal_username();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Online_User::set_username(ArgT0&& arg0, ArgT... args) {
 
 _impl_.username_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.zhuzichu.protocol.Online.User.username)
}
inline std::string* Online_User::mutable_username() {
  std::string* _s = _internal_mutable_username();
  // @@protoc_insertion_point(field_mutable:com.zhuzichu.protocol.Online.User.username)
  return _s;
}
inline const std::string& Online_User::_internal_username() const {
  return _impl_.username_.Get();
}
inline void Online_User::_internal_set_username(const std::string& value) {
  
  _impl_.username_.Set(value, GetArenaForAllocation());
}
inline std::string* Online_User::_internal_mutable_username() {
  
  return _impl_.username_.Mutable(GetArenaForAllocation());
}
inline std::string* Online_User::release_username() {
  // @@protoc_insertion_point(field_release:com.zhuzichu.protocol.Online.User.username)
  return _impl_.username_.Release();
}
inline void Online_User::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  _impl_.username_.SetAllocated(username, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.username_.IsDefault()) {
    _impl_.username_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.zhuzichu.protocol.Online.User.username)
}

// bool online = 3;
inline void Online_User::clear_online() {
  _impl_.online_ = false;
}
inline bool Online_User::_internal_online() const {
  return _impl_.online_;
}
inline bool Online_User::online() const {
  // @@protoc_insertion_point(field_get:com.zhuzichu.protocol.Online.User.online)
  return _internal_online();
}
inline void Online_User::_internal_set_online(bool value) {
  
  _impl_.online_ = value;
}
inline void Online_User::set_online(bool value) {
  _internal_set_online(value);
  // @@protoc_insertion_point(field_set:com.zhuzichu.protocol.Online.User.online)
}

// -------------------------------------------------------------------

// Online

// repeated .com.zhuzichu.protocol.Online.User users = 1;
inline int Online::_internal_users_size() const {
  return _impl_.users_.size();
}
inline int Online::users_size() const {
  return _internal_users_size();
}
inline void Online::clear_users() {
  _impl_.users_.Clear();
}
inline ::com::zhuzichu::protocol::Online_User* Online::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:com.zhuzichu.protocol.Online.users)
  return _impl_.users_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::zhuzichu::protocol::Online_User >*
Online::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:com.zhuzichu.protocol.Online.users)
  return &_impl_.users_;
}
inline const ::com::zhuzichu::protocol::Online_User& Online::_internal_users(int index) const {
  return _impl_.users_.Get(index);
}
inline const ::com::zhuzichu::protocol::Online_User& Online::users(int index) const {
  // @@protoc_insertion_point(field_get:com.zhuzichu.protocol.Online.users)
  return _internal_users(index);
}
inline ::com::zhuzichu::protocol::Online_User* Online::_internal_add_users() {
  return _impl_.users_.Add();
}
inline ::com::zhuzichu::protocol::Online_User* Online::add_users() {
  ::com::zhuzichu::protocol::Online_User* _add = _internal_add_users();
  // @@protoc_insertion_point(field_add:com.zhuzichu.protocol.Online.users)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::zhuzichu::protocol::Online_User >&
Online::users() const {
  // @@protoc_insertion_point(field_list:com.zhuzichu.protocol.Online.users)
  return _impl_.users_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace zhuzichu
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_online_2eproto
