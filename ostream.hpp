#include <stddef.h>
#include <bits/types/locale_t.h>
#include <atomic>
#include <string>


namespace std { inline namespace __1 {

typedef ptrdiff_t streamsize;

class __attribute__((__visibility__("default"))) ios_base
{
public:
    class __attribute__((__visibility__("default"))) failure;

    typedef unsigned int fmtflags;
    static const fmtflags boolalpha = 0x0001;
    static const fmtflags dec = 0x0002;
    static const fmtflags fixed = 0x0004;
    static const fmtflags hex = 0x0008;
    static const fmtflags internal = 0x0010;
    static const fmtflags left = 0x0020;
    static const fmtflags oct = 0x0040;
    static const fmtflags right = 0x0080;
    static const fmtflags scientific = 0x0100;
    static const fmtflags showbase = 0x0200;
    static const fmtflags showpoint = 0x0400;
    static const fmtflags showpos = 0x0800;
    static const fmtflags skipws = 0x1000;
    static const fmtflags unitbuf = 0x2000;
    static const fmtflags uppercase = 0x4000;
    static const fmtflags adjustfield = left | right | internal;
    static const fmtflags basefield = dec | oct | hex;
    static const fmtflags floatfield = scientific | fixed;

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



    static atomic<int> __xindex_;



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

    static_assert((is_same<_CharT, typename traits_type::char_type>::value),
                  "traits_type::char_type must be the same type as CharT");







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
