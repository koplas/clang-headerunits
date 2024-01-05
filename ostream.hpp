namespace std { inline namespace __1 {
template <class _CharT>
struct char_traits;
}}

namespace std { inline namespace __1 {
class ios_base;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class basic_ios;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class basic_ostream;


typedef basic_ios<char>              ios;
typedef basic_ios<wchar_t>           wios;

typedef basic_ostream<char>          ostream;

typedef basic_ostream<wchar_t>       wostream;

template <class _CharT, class _Traits>
    class __attribute__((__preferred_name__(ios))) __attribute__((__preferred_name__(wios))) basic_ios;
}}


namespace std { inline namespace __1 {

class ios_base
{
public:
    class failure;

    virtual ~ios_base();

protected:
    ios_base() {}

    void init(void* __sb);
 };


template <class _CharT, class _Traits>
class basic_ios
    : public ios_base
{
public:

    typedef _Traits traits_type;

    explicit basic_ios(void* __sb);
    ~basic_ios() override;

protected:
    basic_ios() {
                }
    void init(void* __sb);
};

template <class _CharT, class _Traits>
inline
basic_ios<_CharT, _Traits>::basic_ios(void* __sb)
{
    init(__sb);
}

template <class _CharT, class _Traits>
basic_ios<_CharT, _Traits>::~basic_ios()
{
}

template <class _CharT, class _Traits>
inline
void
basic_ios<_CharT, _Traits>::init(void* __sb)
{
}
}}

namespace std { inline namespace __1 {
extern template class basic_ios<char>;
}}

namespace std { inline namespace __1 {

template <class _CharT, class _Traits>
class __attribute__((__type_visibility__("default"))) basic_ostream
    : virtual public basic_ios<_CharT, _Traits>
{
public:

    inline 
    explicit basic_ostream(void* __sb)
    { this->init(__sb); }
    ~basic_ostream() override;
protected:
    inline
    basic_ostream(basic_ostream&& __rhs);

protected:
    basic_ostream() {}
};
}
}
