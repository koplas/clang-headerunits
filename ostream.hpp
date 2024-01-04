#ifndef _LIBCPP___STRING_CHAR_TRAITS_H
#define _LIBCPP___STRING_CHAR_TRAITS_H

#include <__config>
#include <__mbstate_t.h>
#include <__fwd/string.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_PUSH_MACROS
#include <__undef_macros>
_LIBCPP_BEGIN_NAMESPACE_STD
template <class _CharT>
struct char_traits;
_LIBCPP_END_NAMESPACE_STD

_LIBCPP_BEGIN_NAMESPACE_STD
class _LIBCPP_TYPE_VIS ios_base;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ios;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_streambuf;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_istream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ostream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_iostream;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_stringbuf;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_istringstream;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ostringstream;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_stringstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_filebuf;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ifstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ofstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_fstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS istreambuf_iterator;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS ostreambuf_iterator;

typedef basic_ios<char>              ios;
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
typedef basic_ios<wchar_t>           wios;
#endif

typedef basic_streambuf<char>        streambuf;
typedef basic_istream<char>          istream;
typedef basic_ostream<char>          ostream;
typedef basic_iostream<char>         iostream;

typedef basic_stringbuf<char>        stringbuf;
typedef basic_istringstream<char>    istringstream;
typedef basic_ostringstream<char>    ostringstream;
typedef basic_stringstream<char>     stringstream;

typedef basic_filebuf<char>          filebuf;
typedef basic_ifstream<char>         ifstream;
typedef basic_ofstream<char>         ofstream;
typedef basic_fstream<char>          fstream;

#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
typedef basic_streambuf<wchar_t>     wstreambuf;
typedef basic_istream<wchar_t>       wistream;
typedef basic_ostream<wchar_t>       wostream;
typedef basic_iostream<wchar_t>      wiostream;

typedef basic_stringbuf<wchar_t>     wstringbuf;
typedef basic_istringstream<wchar_t> wistringstream;
typedef basic_ostringstream<wchar_t> wostringstream;
typedef basic_stringstream<wchar_t>  wstringstream;

typedef basic_filebuf<wchar_t>       wfilebuf;
typedef basic_ifstream<wchar_t>      wifstream;
typedef basic_ofstream<wchar_t>      wofstream;
typedef basic_fstream<wchar_t>       wfstream;
#endif

template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(ios) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wios)) basic_ios;

template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(streambuf) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wstreambuf)) basic_streambuf;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(istream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wistream)) basic_istream;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(ostream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wostream)) basic_ostream;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(iostream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wiostream)) basic_iostream;

template <class _CharT, class _Traits, class _Allocator>
    class _LIBCPP_PREFERRED_NAME(stringbuf) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wstringbuf)) basic_stringbuf;
template <class _CharT, class _Traits, class _Allocator>
    class _LIBCPP_PREFERRED_NAME(istringstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wistringstream)) basic_istringstream;
template <class _CharT, class _Traits, class _Allocator>
    class _LIBCPP_PREFERRED_NAME(ostringstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wostringstream)) basic_ostringstream;
template <class _CharT, class _Traits, class _Allocator>
    class _LIBCPP_PREFERRED_NAME(stringstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wstringstream)) basic_stringstream;

template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(filebuf) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wfilebuf)) basic_filebuf;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(ifstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wifstream)) basic_ifstream;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(ofstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wofstream)) basic_ofstream;
template <class _CharT, class _Traits>
    class _LIBCPP_PREFERRED_NAME(fstream) _LIBCPP_IF_WIDE_CHARACTERS(_LIBCPP_PREFERRED_NAME(wfstream)) basic_fstream;


template <class _State>             class _LIBCPP_TEMPLATE_VIS fpos;
typedef fpos<mbstate_t>    streampos;
#if defined(_NEWLIB_VERSION)
// On newlib, off_t is 'long int'
typedef long int streamoff;         // for char_traits in <string>
#else
typedef long long streamoff;        // for char_traits in <string>
#endif
_LIBCPP_END_NAMESPACE_STD

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _CharT>
struct char_traits;
// Temporary extension to provide a base template for std::char_traits.
// TODO: Remove in LLVM 18.
//
template <class _CharT>
struct _LIBCPP_DEPRECATED_("char_traits<T> for T not equal to char, wchar_t, char8_t, char16_t or char32_t is non-standard and is provided for a temporary period. It will be removed in LLVM 18, so please migrate off of it.")
    char_traits
{
    using char_type  = _CharT;
    using int_type   = int;
    using off_type   = streamoff;
    using pos_type   = streampos;
    using state_type = mbstate_t;

    static inline void _LIBCPP_CONSTEXPR_SINCE_CXX17
        assign(char_type& __c1, const char_type& __c2) _NOEXCEPT {__c1 = __c2;}
    static inline _LIBCPP_CONSTEXPR bool eq(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR bool lt(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 < __c2;}

    static _LIBCPP_CONSTEXPR_SINCE_CXX17
    int compare(const char_type* __s1, const char_type* __s2, size_t __n) {
        return 0;
    }
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR_SINCE_CXX17
    size_t length(const char_type* __s) {
        return 0;
    }
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR_SINCE_CXX17
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a) {
        return nullptr;
    }
    static _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type*       move(char_type* __s1, const char_type* __s2, size_t __n) {
        return nullptr;
    }
    _LIBCPP_INLINE_VISIBILITY
    static _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n) {
        return nullptr;
    }
    _LIBCPP_INLINE_VISIBILITY
    static _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type*       assign(char_type* __s, size_t __n, char_type __a) {
        return nullptr;
    }

    static inline _LIBCPP_CONSTEXPR int_type  not_eof(int_type __c) _NOEXCEPT
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline _LIBCPP_CONSTEXPR char_type to_char_type(int_type __c) _NOEXCEPT
        {return char_type(__c);}
    static inline _LIBCPP_CONSTEXPR int_type  to_int_type(char_type __c) _NOEXCEPT
        {return int_type(__c);}
    static inline _LIBCPP_CONSTEXPR bool      eq_int_type(int_type __c1, int_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR int_type  eof() _NOEXCEPT
        {return int_type(0);}
};

template <class _CharT>
_LIBCPP_HIDE_FROM_ABI static inline _LIBCPP_CONSTEXPR_SINCE_CXX20
_CharT* __char_traits_move(_CharT* __dest, const _CharT* __source, size_t __n) _NOEXCEPT
{
  return nullptr;
}

// char_traits<char>

template <>
struct _LIBCPP_TEMPLATE_VIS char_traits<char>
{
    using char_type           = char;
    using int_type            = int;
    using off_type            = streamoff;
    using pos_type            = streampos;
    using state_type          = mbstate_t;

    static inline _LIBCPP_CONSTEXPR_SINCE_CXX17
    void assign(char_type& __c1, const char_type& __c2) _NOEXCEPT {__c1 = __c2;}
    static inline _LIBCPP_CONSTEXPR bool eq(char_type __c1, char_type __c2) _NOEXCEPT
            {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR bool lt(char_type __c1, char_type __c2) _NOEXCEPT
        {return (unsigned char)__c1 < (unsigned char)__c2;}

  static _LIBCPP_CONSTEXPR_SINCE_CXX17 int compare(const char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT {
      return 0;
  }

  static inline size_t _LIBCPP_CONSTEXPR_SINCE_CXX17 length(const char_type* __s)  _NOEXCEPT {
    return 0;
  }

  static _LIBCPP_CONSTEXPR_SINCE_CXX17
  const char_type* find(const char_type* __s, size_t __n, const char_type& __a) _NOEXCEPT {
        return nullptr;
  }

    static inline _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type* move(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT {
        return nullptr;
    }

    static inline _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type* copy(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT {
        return nullptr;
    }

    static inline _LIBCPP_CONSTEXPR_SINCE_CXX20
    char_type* assign(char_type* __s, size_t __n, char_type __a) _NOEXCEPT {
        return nullptr;
    }

    static inline _LIBCPP_CONSTEXPR int_type  not_eof(int_type __c) _NOEXCEPT
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline _LIBCPP_CONSTEXPR char_type to_char_type(int_type __c) _NOEXCEPT
        {return char_type(__c);}
    static inline _LIBCPP_CONSTEXPR int_type to_int_type(char_type __c) _NOEXCEPT
        {return int_type((unsigned char)__c);}
    static inline _LIBCPP_CONSTEXPR bool eq_int_type(int_type __c1, int_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR int_type  eof() _NOEXCEPT
        {return int_type(0);}
};

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP___STRING_CHAR_TRAITS_H

namespace std { inline namespace __1 {

typedef ptrdiff_t streamsize;

class __attribute__((__visibility__("default"))) ios_base
{
public:
    class __attribute__((__visibility__("default"))) failure;

    typedef unsigned int fmtflags;

    typedef unsigned int iostate;
    static const iostate badbit = 0x1;
    static const iostate eofbit = 0x2;
    static const iostate failbit = 0x4;
    static const iostate goodbit = 0x0;

    typedef unsigned int openmode;
    static const openmode app = 0x01;
    static const openmode ate = 0x02;
    static const openmode binary = 0x04;
    static const openmode in = 0x08;
    static const openmode out = 0x10;
    static const openmode trunc = 0x20;

    enum seekdir {beg, cur, end};
    class __attribute__((__visibility__("default"))) Init;


    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) fmtflags flags() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) fmtflags flags(fmtflags __fmtfl);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) fmtflags setf(fmtflags __fmtfl);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) fmtflags setf(fmtflags __fmtfl, fmtflags __mask);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) void unsetf(fmtflags __mask);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) streamsize precision() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) streamsize precision(streamsize __prec);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) streamsize width() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) streamsize width(streamsize __wide);




    static int xalloc();
    long& iword(int __index);
    void*& pword(int __index);


    virtual ~ios_base();


    enum event { erase_event, imbue_event, copyfmt_event };
    typedef void (*event_callback)(event, ios_base&, int __index);
    void register_callback(event_callback __fn, int __index);

    ios_base(const ios_base&) = delete;
    ios_base& operator=(const ios_base&) = delete;

    static bool sync_with_stdio(bool __sync = true);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) iostate rdstate() const;
    void clear(iostate __state = goodbit);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) void setstate(iostate __state);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) bool good() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) bool eof() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) bool fail() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) bool bad() const;

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) iostate exceptions() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) void exceptions(iostate __iostate);

    void __set_badbit_and_consider_rethrow();
    void __set_failbit_and_consider_rethrow();

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void __setstate_nothrow(iostate __state)
    {
        if (__rdbuf_)
            __rdstate_ |= __state;
        else
            __rdstate_ |= __state | ios_base::badbit;
    }

protected:
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    ios_base() {
               }

    void init(void* __sb);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) void* rdbuf() const {return __rdbuf_;}

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void rdbuf(void* __sb)
    {
        __rdbuf_ = __sb;
        clear();
    }

    void __call_callbacks(event);
    void copyfmt(const ios_base&);
    void move(ios_base&);
    void swap(ios_base&) noexcept;

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void set_rdbuf(void* __sb)
    {
        __rdbuf_ = __sb;
    }

private:

    fmtflags __fmtflags_;
    streamsize __precision_;
    streamsize __width_;
    iostate __rdstate_;
    iostate __exceptions_;
    void* __rdbuf_;
    void* __loc_;
    event_callback* __fn_;
    int* __index_;
    size_t __event_size_;
    size_t __event_cap_;



    long* __iarray_;
    size_t __iarray_size_;
    size_t __iarray_cap_;
    void** __parray_;
    size_t __parray_size_;
    size_t __parray_cap_;
};


template <class _CharT, class _Traits>
class __attribute__((__type_visibility__("default"))) basic_ios
    : public ios_base
{
public:

    typedef _CharT char_type;
    typedef _Traits traits_type;

    typedef typename traits_type::int_type int_type;
    typedef typename traits_type::pos_type pos_type;
    typedef typename traits_type::off_type off_type;




    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))


    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) iostate rdstate() const {return ios_base::rdstate();}


    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006"))) void exceptions(iostate __iostate) {ios_base::exceptions(__iostate);}


    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    explicit basic_ios(basic_streambuf<char_type,traits_type>* __sb);
    ~basic_ios() override;


    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_ostream<char_type, traits_type>* tie() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_ostream<char_type, traits_type>* tie(basic_ostream<char_type, traits_type>* __tiestr);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_streambuf<char_type, traits_type>* rdbuf() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_streambuf<char_type, traits_type>* rdbuf(basic_streambuf<char_type, traits_type>* __sb);

    basic_ios& copyfmt(const basic_ios& __rhs);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    char_type fill() const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    char_type fill(char_type __ch);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    char narrow(char_type __c, char __dfault) const;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    char_type widen(char __c) const;

protected:
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_ios() {
                }
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void init(basic_streambuf<char_type, traits_type>* __sb);

    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void move(basic_ios& __rhs);
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void move(basic_ios&& __rhs) {move(__rhs);}
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void swap(basic_ios& __rhs) noexcept;
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    void set_rdbuf(basic_streambuf<char_type, traits_type>* __sb);
private:
    basic_ostream<char_type, traits_type>* __tie_;
    mutable int_type __fill_;
};

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
basic_ios<_CharT, _Traits>::basic_ios(basic_streambuf<char_type,traits_type>* __sb)
{
    init(__sb);
}

template <class _CharT, class _Traits>
basic_ios<_CharT, _Traits>::~basic_ios()
{
}

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
void
basic_ios<_CharT, _Traits>::init(basic_streambuf<char_type, traits_type>* __sb)
{
    ios_base::init(__sb);
    __tie_ = nullptr;
    __fill_ = traits_type::eof();
}

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
basic_ostream<_CharT, _Traits>*
basic_ios<_CharT, _Traits>::tie() const
{
    return __tie_;
}

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
basic_ostream<_CharT, _Traits>*
basic_ios<_CharT, _Traits>::tie(basic_ostream<char_type, traits_type>* __tiestr)
{
    basic_ostream<char_type, traits_type>* __r = __tie_;
    __tie_ = __tiestr;
    return __r;
}

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
basic_streambuf<_CharT, _Traits>*
basic_ios<_CharT, _Traits>::rdbuf() const
{
    return static_cast<basic_streambuf<char_type, traits_type>*>(ios_base::rdbuf());
}

template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
basic_streambuf<_CharT, _Traits>*
basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<char_type, traits_type>* __sb)
{
    basic_streambuf<char_type, traits_type>* __r = rdbuf();
    ios_base::rdbuf(__sb);
    return __r;
}


template <class _CharT, class _Traits>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
void
basic_ios<_CharT, _Traits>::set_rdbuf(basic_streambuf<char_type, traits_type>* __sb)
{
    ios_base::set_rdbuf(__sb);
}

}}

namespace std { inline namespace __1 {

// Attention: This line is relevant
extern template class __attribute__((__visibility__("default"))) basic_ios<char>;

}}
namespace std { inline namespace __1 {

template <class _CharT, class _Traits>
class __attribute__((__type_visibility__("default"))) basic_ostream
    : virtual public basic_ios<_CharT, _Traits>
{
public:

    typedef _CharT char_type;
    typedef _Traits traits_type;
    typedef typename traits_type::int_type int_type;
    typedef typename traits_type::pos_type pos_type;
    typedef typename traits_type::off_type off_type;


    inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    explicit basic_ostream(basic_streambuf<char_type, traits_type>* __sb)
    { this->init(__sb); }
    ~basic_ostream() override;
protected:
    inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_ostream(basic_ostream&& __rhs);

protected:
    __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("v160006")))
    basic_ostream() {}
};
}
}
