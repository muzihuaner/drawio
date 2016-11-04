// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: update-tool.capnp

#ifndef CAPNP_INCLUDED_96c3fff3f4beb8fe_
#define CAPNP_INCLUDED_96c3fff3f4beb8fe_

#include <capnp/generated-header-support.h>
#if !CAPNP_LITE
#include <capnp/capability.h>
#endif  // !CAPNP_LITE

#if CAPNP_VERSION != 6000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9b54bbec5de99f09);
CAPNP_DECLARE_SCHEMA(c4d0558d33210637);
CAPNP_DECLARE_SCHEMA(f2b920bce5608efb);
CAPNP_DECLARE_SCHEMA(9c805f76ef46e6c0);

}  // namespace schemas
}  // namespace capnp

namespace sandstorm {

struct PublicSigningKey {
  PublicSigningKey() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9b54bbec5de99f09, 4, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

struct Signature {
  Signature() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(c4d0558d33210637, 8, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

extern const ::capnp::_::ConstList< ::sandstorm::PublicSigningKey> UPDATE_PUBLIC_KEYS;
struct UpdateSignature {
  UpdateSignature() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9c805f76ef46e6c0, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand = &schema->defaultBrand;
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class PublicSigningKey::Reader {
public:
  typedef PublicSigningKey Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline  ::uint64_t getKey0() const;

  inline  ::uint64_t getKey1() const;

  inline  ::uint64_t getKey2() const;

  inline  ::uint64_t getKey3() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class PublicSigningKey::Builder {
public:
  typedef PublicSigningKey Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint64_t getKey0();
  inline void setKey0( ::uint64_t value);

  inline  ::uint64_t getKey1();
  inline void setKey1( ::uint64_t value);

  inline  ::uint64_t getKey2();
  inline void setKey2( ::uint64_t value);

  inline  ::uint64_t getKey3();
  inline void setKey3( ::uint64_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class PublicSigningKey::Pipeline {
public:
  typedef PublicSigningKey Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Signature::Reader {
public:
  typedef Signature Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline  ::uint64_t getSig0() const;

  inline  ::uint64_t getSig1() const;

  inline  ::uint64_t getSig2() const;

  inline  ::uint64_t getSig3() const;

  inline  ::uint64_t getSig4() const;

  inline  ::uint64_t getSig5() const;

  inline  ::uint64_t getSig6() const;

  inline  ::uint64_t getSig7() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Signature::Builder {
public:
  typedef Signature Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint64_t getSig0();
  inline void setSig0( ::uint64_t value);

  inline  ::uint64_t getSig1();
  inline void setSig1( ::uint64_t value);

  inline  ::uint64_t getSig2();
  inline void setSig2( ::uint64_t value);

  inline  ::uint64_t getSig3();
  inline void setSig3( ::uint64_t value);

  inline  ::uint64_t getSig4();
  inline void setSig4( ::uint64_t value);

  inline  ::uint64_t getSig5();
  inline void setSig5( ::uint64_t value);

  inline  ::uint64_t getSig6();
  inline void setSig6( ::uint64_t value);

  inline  ::uint64_t getSig7();
  inline void setSig7( ::uint64_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Signature::Pipeline {
public:
  typedef Signature Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class UpdateSignature::Reader {
public:
  typedef UpdateSignature Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand);
  }
#endif  // !CAPNP_LITE

  inline bool hasSignatures() const;
  inline  ::capnp::List< ::sandstorm::Signature>::Reader getSignatures() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class UpdateSignature::Builder {
public:
  typedef UpdateSignature Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSignatures();
  inline  ::capnp::List< ::sandstorm::Signature>::Builder getSignatures();
  inline void setSignatures( ::capnp::List< ::sandstorm::Signature>::Reader value);
  inline  ::capnp::List< ::sandstorm::Signature>::Builder initSignatures(unsigned int size);
  inline void adoptSignatures(::capnp::Orphan< ::capnp::List< ::sandstorm::Signature>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::sandstorm::Signature>> disownSignatures();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class UpdateSignature::Pipeline {
public:
  typedef UpdateSignature Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint64_t PublicSigningKey::Reader::getKey0() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t PublicSigningKey::Builder::getKey0() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void PublicSigningKey::Builder::setKey0( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t PublicSigningKey::Reader::getKey1() const {
  return _reader.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint64_t PublicSigningKey::Builder::getKey1() {
  return _builder.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}
inline void PublicSigningKey::Builder::setKey1( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t PublicSigningKey::Reader::getKey2() const {
  return _reader.getDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::uint64_t PublicSigningKey::Builder::getKey2() {
  return _builder.getDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS);
}
inline void PublicSigningKey::Builder::setKey2( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t PublicSigningKey::Reader::getKey3() const {
  return _reader.getDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS);
}

inline  ::uint64_t PublicSigningKey::Builder::getKey3() {
  return _builder.getDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS);
}
inline void PublicSigningKey::Builder::setKey3( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig0() const {
  return _reader.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig0() {
  return _builder.getDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig0( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      0 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig1() const {
  return _reader.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig1() {
  return _builder.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig1( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig2() const {
  return _reader.getDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig2() {
  return _builder.getDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig2( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      2 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig3() const {
  return _reader.getDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig3() {
  return _builder.getDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig3( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      3 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig4() const {
  return _reader.getDataField< ::uint64_t>(
      4 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig4() {
  return _builder.getDataField< ::uint64_t>(
      4 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig4( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      4 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig5() const {
  return _reader.getDataField< ::uint64_t>(
      5 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig5() {
  return _builder.getDataField< ::uint64_t>(
      5 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig5( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      5 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig6() const {
  return _reader.getDataField< ::uint64_t>(
      6 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig6() {
  return _builder.getDataField< ::uint64_t>(
      6 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig6( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      6 * ::capnp::ELEMENTS, value);
}

inline  ::uint64_t Signature::Reader::getSig7() const {
  return _reader.getDataField< ::uint64_t>(
      7 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Signature::Builder::getSig7() {
  return _builder.getDataField< ::uint64_t>(
      7 * ::capnp::ELEMENTS);
}
inline void Signature::Builder::setSig7( ::uint64_t value) {
  _builder.setDataField< ::uint64_t>(
      7 * ::capnp::ELEMENTS, value);
}

inline bool UpdateSignature::Reader::hasSignatures() const {
  return !_reader.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline bool UpdateSignature::Builder::hasSignatures() {
  return !_builder.getPointerField(0 * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::sandstorm::Signature>::Reader UpdateSignature::Reader::getSignatures() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::get(
      _reader.getPointerField(0 * ::capnp::POINTERS));
}
inline  ::capnp::List< ::sandstorm::Signature>::Builder UpdateSignature::Builder::getSignatures() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::get(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}
inline void UpdateSignature::Builder::setSignatures( ::capnp::List< ::sandstorm::Signature>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::set(
      _builder.getPointerField(0 * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::sandstorm::Signature>::Builder UpdateSignature::Builder::initSignatures(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::init(
      _builder.getPointerField(0 * ::capnp::POINTERS), size);
}
inline void UpdateSignature::Builder::adoptSignatures(
    ::capnp::Orphan< ::capnp::List< ::sandstorm::Signature>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::adopt(
      _builder.getPointerField(0 * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::sandstorm::Signature>> UpdateSignature::Builder::disownSignatures() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::sandstorm::Signature>>::disown(
      _builder.getPointerField(0 * ::capnp::POINTERS));
}

}  // namespace

#endif  // CAPNP_INCLUDED_96c3fff3f4beb8fe_