# 1 "a.hpp"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmacro-redefined"

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

struct __totally_ordered_less_tag {};
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v = false;

template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation const, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation &, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;
template <class _CanonicalTag, class _Operation, class... _Args>
inline const bool __desugars_to_v<_CanonicalTag, _Operation &&, _Args...> =
    __desugars_to_v<_CanonicalTag, _Operation, _Args...>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, _Tp __v> struct integral_constant {
  static inline constexpr const _Tp value = __v;
  typedef _Tp value_type;
  typedef integral_constant type;
  constexpr operator value_type() const noexcept { return value; }

  constexpr value_type operator()() const noexcept { return value; }
};

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

template <bool _Val>
using _BoolConstant [[__gnu__::__nodebug__]] = integral_constant<bool, _Val>;

template <bool __b> using bool_constant = integral_constant<bool, __b>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_cv {
  using type [[__gnu__::__nodebug__]] = __remove_cv(_Tp);
};

template <class _Tp>
using __remove_cv_t [[__gnu__::__nodebug__]] = __remove_cv(_Tp);

template <class _Tp> using remove_cv_t = __remove_cv_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_integral : _BoolConstant<__is_integral(_Tp)> {};

template <class _Tp> inline constexpr bool is_integral_v = __is_integral(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

struct __equal_to {
  template <class _T1, class _T2>
  constexpr bool operator()(const _T1 &__x, const _T2 &__y) const {
    return __x == __y;
  }
};

template <class _Tp, class _Up>
inline const bool __desugars_to_v<_Tp, _Up> = true;

template <class _T1 = void, class _T2 = _T1> struct __less {};

template <> struct __less<void, void> {
  template <class _Tp, class _Up>
  constexpr bool operator()(const _Tp &__lhs, const _Up &__rhs) const {
    return __lhs < __rhs;
  }
};

template <class _Tp>
inline const bool __desugars_to_v<__less<>, _Tp, _Tp> = true;

template <class _Tp>
inline const bool
    __desugars_to_v<__totally_ordered_less_tag, __less<>, _Tp, _Tp> =
        is_integral<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp> _Tp &&__declval(int);
template <class _Tp> _Tp __declval(long);
#pragma GCC diagnostic pop

template <class _Tp> decltype(std::__declval<_Tp>(0)) declval() noexcept {}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Compare> struct __debug_less {
  _Compare &__comp_;
  constexpr __debug_less(_Compare &__c) : __comp_(__c) {}

  template <class _Tp, class _Up>
  constexpr bool operator()(const _Tp &__x, const _Up &__y) {
    bool __r = __comp_(__x, __y);
    if (__r)
      __do_compare_assert(0, __y, __x);
    return __r;
  }

  template <class _Tp, class _Up>
  constexpr bool operator()(_Tp &__x, _Up &__y) {
    bool __r = __comp_(__x, __y);
    if (__r)
      __do_compare_assert(0, __y, __x);
    return __r;
  }

  template <class _LHS, class _RHS>
  constexpr inline decltype((void)std::declval<_Compare &>()(
      std::declval<_LHS &>(), std::declval<_RHS &>()))
  __do_compare_assert(int, _LHS &__l, _RHS &__r) {
    ((void)0);
    (void)__l;
    (void)__r;
  }

  template <class _LHS, class _RHS>
  constexpr inline void __do_compare_assert(long, _LHS &, _RHS &) {}
};

template <class _Comp> using __comp_ref_type [[__gnu__::__nodebug__]] = _Comp &;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __libcpp_is_floating_point : public false_type {};
template <> struct __libcpp_is_floating_point<float> : public true_type {};
template <> struct __libcpp_is_floating_point<double> : public true_type {};
template <>
struct __libcpp_is_floating_point<long double> : public true_type {};

template <class _Tp>
struct is_floating_point
    : public __libcpp_is_floating_point<__remove_cv_t<_Tp>> {};

template <class _Tp>
inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_arithmetic
    : public integral_constant<bool, is_integral<_Tp>::value ||
                                         is_floating_point<_Tp>::value> {};

template <class _Tp>
inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_signed : _BoolConstant<__is_signed(_Tp)> {};

template <class _Tp> inline constexpr bool is_signed_v = __is_signed(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __libcpp_is_signed_integer : public false_type {};
template <>
struct __libcpp_is_signed_integer<signed char> : public true_type {};
template <>
struct __libcpp_is_signed_integer<signed short> : public true_type {};
template <> struct __libcpp_is_signed_integer<signed int> : public true_type {};
template <>
struct __libcpp_is_signed_integer<signed long> : public true_type {};
template <>
struct __libcpp_is_signed_integer<signed long long> : public true_type {};

template <> struct __libcpp_is_signed_integer<__int128_t> : public true_type {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _T1, class _T2>
struct is_convertible
    : public integral_constant<bool, __is_convertible(_T1, _T2)> {};

template <class _From, class _To>
inline constexpr bool is_convertible_v = __is_convertible(_From, _To);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using size_t = decltype(sizeof(int));

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_function : integral_constant<bool, __is_function(_Tp)> {};

template <class _Tp> inline constexpr bool is_function_v = __is_function(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_reference : _BoolConstant<__is_reference(_Tp)> {};

template <class _Tp> inline constexpr bool is_reference_v = __is_reference(_Tp);

template <class _Tp>
struct is_lvalue_reference : _BoolConstant<__is_lvalue_reference(_Tp)> {};

template <class _Tp>
struct is_rvalue_reference : _BoolConstant<__is_rvalue_reference(_Tp)> {};

template <class _Tp>
inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
template <class _Tp>
inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_all_extents {
  using type [[__gnu__::__nodebug__]] = __remove_all_extents(_Tp);
};

template <class _Tp>
using __remove_all_extents_t [[__gnu__::__nodebug__]] =
    __remove_all_extents(_Tp);
template <class _Tp> using remove_all_extents_t = __remove_all_extents_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_destructible : _BoolConstant<__is_destructible(_Tp)> {};

template <class _Tp>
inline constexpr bool is_destructible_v = __is_destructible(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class...> using void_t = void;

template <class...> using __void_t [[__gnu__::__nodebug__]] = void;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __add_lvalue_reference_t [[__gnu__::__nodebug__]] =
    __add_lvalue_reference(_Tp);
template <class _Tp> struct add_lvalue_reference {
  using type [[__gnu__::__nodebug__]] = __add_lvalue_reference_t<_Tp>;
};

template <class _Tp>
using add_lvalue_reference_t = __add_lvalue_reference_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __add_rvalue_reference_t [[__gnu__::__nodebug__]] =
    __add_rvalue_reference(_Tp);
template <class _Tp> struct add_rvalue_reference {
  using type [[__gnu__::__nodebug__]] = __add_rvalue_reference_t<_Tp>;
};

template <class _Tp>
using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class... _Args>
struct is_constructible
    : public integral_constant<bool, __is_constructible(_Tp, _Args...)> {};

template <class _Tp, class... _Args>
inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);

template <class _Tp>
struct is_copy_constructible
    : public integral_constant<
          bool, __is_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_copy_constructible_v =
    is_copy_constructible<_Tp>::value;

template <class _Tp>
struct is_move_constructible
    : public integral_constant<bool, __is_constructible(
                                         _Tp, __add_rvalue_reference_t<_Tp>)> {
};

template <class _Tp>
inline constexpr bool is_move_constructible_v =
    is_move_constructible<_Tp>::value;

template <class _Tp>
struct is_default_constructible
    : public integral_constant<bool, __is_constructible(_Tp)> {};

template <class _Tp>
inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up>
struct is_same : _BoolConstant<__is_same(_Tp, _Up)> {};

template <class _Tp, class _Up>
inline constexpr bool is_same_v = __is_same(_Tp, _Up);
template <class _Tp, class _Up>
using _IsSame [[__gnu__::__nodebug__]] = _BoolConstant<__is_same(_Tp, _Up)>;

template <class _Tp, class _Up>
using _IsNotSame [[__gnu__::__nodebug__]] = _BoolConstant<!__is_same(_Tp, _Up)>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <bool> struct _IfImpl;

template <> struct _IfImpl<true> {
  template <class _IfRes, class _ElseRes>
  using _Select [[__gnu__::__nodebug__]] = _IfRes;
};

template <> struct _IfImpl<false> {
  template <class _IfRes, class _ElseRes>
  using _Select [[__gnu__::__nodebug__]] = _ElseRes;
};

template <bool _Cond, class _IfRes, class _ElseRes>
using _If [[__gnu__::__nodebug__]] =
    typename _IfImpl<_Cond>::template _Select<_IfRes, _ElseRes>;

template <bool _Bp, class _If, class _Then> struct conditional {
  using type [[__gnu__::__nodebug__]] = _If;
};

#pragma clang diagnostic push

template <bool _Bp, class _IfRes, class _ElseRes>
using conditional_t [[__gnu__::__nodebug__]] =
    typename conditional<_Bp, _IfRes, _ElseRes>::type;

template <bool _Bp, class _If, class _Then>
using __conditional_t [[__gnu__::__nodebug__]] =
    typename conditional<_Bp, _If, _Then>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_void : _BoolConstant<__is_same(__remove_cv(_Tp), void)> {};

template <class _Tp>
inline constexpr bool is_void_v = __is_same(__remove_cv(_Tp), void);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_reference {
  using type [[__gnu__::__nodebug__]] = __remove_reference_t(_Tp);
};

template <class _Tp>
using __libcpp_remove_reference_t [[__gnu__::__nodebug__]] =
    __remove_reference_t(_Tp);
template <class _Tp>
using remove_reference_t = __libcpp_remove_reference_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __add_pointer_t [[__gnu__::__nodebug__]] = __add_pointer(_Tp);
template <class _Tp> struct add_pointer {
  using type [[__gnu__::__nodebug__]] = __add_pointer_t<_Tp>;
};

template <class _Tp> using add_pointer_t = __add_pointer_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_array : _BoolConstant<__is_array(_Tp)> {};

template <class _Tp> inline constexpr bool is_array_v = __is_array(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_extent {
  using type [[__gnu__::__nodebug__]] = __remove_extent(_Tp);
};

template <class _Tp>
using __remove_extent_t [[__gnu__::__nodebug__]] = __remove_extent(_Tp);
template <class _Tp> using remove_extent_t = __remove_extent_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> using __decay_t [[__gnu__::__nodebug__]] = __decay(_Tp);

template <class _Tp> struct decay {
  using type [[__gnu__::__nodebug__]] = __decay_t<_Tp>;
};
template <class _Tp> using decay_t = __decay_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp>
using __remove_cvref_t [[__gnu__::__nodebug__]] = __remove_cvref(_Tp);

template <class _Tp, class _Up>
using __is_same_uncvref [[__gnu__::__nodebug__]] =
    _IsSame<__remove_cvref_t<_Tp>, __remove_cvref_t<_Up>>;
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __type_identity {
  typedef _Tp type;
};

template <class _Tp>
using __type_identity_t [[__gnu__::__nodebug__]] =
    typename __type_identity<_Tp>::type;
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

struct __empty {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class... _Args> struct common_type;

template <class... _Args>
using __common_type_t [[__gnu__::__nodebug__]] =
    typename common_type<_Args...>::type;

template <class... _Args> struct common_type {};
template <class... _Tp>
using common_type_t = typename common_type<_Tp...>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _From> struct __copy_cv {
  template <class _To> using __apply [[__gnu__::__nodebug__]] = _To;
};

template <class _From> struct __copy_cv<const _From> {
  template <class _To> using __apply [[__gnu__::__nodebug__]] = const _To;
};

template <class _From> struct __copy_cv<volatile _From> {
  template <class _To> using __apply [[__gnu__::__nodebug__]] = volatile _To;
};

template <class _From> struct __copy_cv<const volatile _From> {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] = const volatile _To;
};

template <class _From, class _To>
using __copy_cv_t [[__gnu__::__nodebug__]] =
    typename __copy_cv<_From>::template __apply<_To>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _From> struct __copy_cvref {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] = __copy_cv_t<_From, _To>;
};

template <class _From> struct __copy_cvref<_From &> {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] =
      __add_lvalue_reference_t<__copy_cv_t<_From, _To>>;
};

template <class _From> struct __copy_cvref<_From &&> {
  template <class _To>
  using __apply [[__gnu__::__nodebug__]] =
      __add_rvalue_reference_t<__copy_cv_t<_From, _To>>;
};

template <class _From, class _To>
using __copy_cvref_t [[__gnu__::__nodebug__]] =
    typename __copy_cvref<_From>::template __apply<_To>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __make_const_lvalue_ref [[__gnu__::__nodebug__]] =
    const __libcpp_remove_reference_t<_Tp> &;

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
[[__nodiscard__]] inline constexpr _Tp &&
forward([[_Clang::__lifetimebound__]] __libcpp_remove_reference_t<_Tp>
            &__t) noexcept {
  return static_cast<_Tp &&>(__t);
}

template <class _Tp>
[[__nodiscard__]] inline constexpr _Tp &&
forward([[_Clang::__lifetimebound__]] __libcpp_remove_reference_t<_Tp>
            &&__t) noexcept {
  static_assert(!is_lvalue_reference<_Tp>::value,
                "cannot forward an rvalue as an lvalue");
  return static_cast<_Tp &&>(__t);
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_class : public integral_constant<bool, __is_class(_Tp)> {};

template <class _Tp> inline constexpr bool is_class_v = __is_class(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_enum : public integral_constant<bool, __is_enum(_Tp)> {};

template <class _Tp> inline constexpr bool is_enum_v = __is_enum(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_union : public integral_constant<bool, __is_union(_Tp)> {};

template <class _Tp> inline constexpr bool is_union_v = __is_union(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Arg>
struct is_nothrow_assignable
    : public integral_constant<bool, __is_nothrow_assignable(_Tp, _Arg)> {};

template <class _Tp, class _Arg>
inline constexpr bool is_nothrow_assignable_v =
    __is_nothrow_assignable(_Tp, _Arg);

template <class _Tp>
struct is_nothrow_copy_assignable
    : public integral_constant<bool, __is_nothrow_assignable(
                                         __add_lvalue_reference_t<_Tp>,
                                         __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_nothrow_copy_assignable_v =
    is_nothrow_copy_assignable<_Tp>::value;

template <class _Tp>
struct is_nothrow_move_assignable
    : public integral_constant<bool, __is_nothrow_assignable(
                                         __add_lvalue_reference_t<_Tp>,
                                         __add_rvalue_reference_t<_Tp>)> {};

template <class _Tp>
inline constexpr bool is_nothrow_move_assignable_v =
    is_nothrow_move_assignable<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class... _Args>
struct is_nothrow_constructible
    : public integral_constant<bool,
                               __is_nothrow_constructible(_Tp, _Args...)> {};

template <class _Tp, class... _Args>
inline constexpr bool is_nothrow_constructible_v =
    is_nothrow_constructible<_Tp, _Args...>::value;

template <class _Tp>
struct is_nothrow_copy_constructible
    : public integral_constant<bool,
                               __is_nothrow_constructible(
                                   _Tp, __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_nothrow_copy_constructible_v =
    is_nothrow_copy_constructible<_Tp>::value;

template <class _Tp>
struct is_nothrow_move_constructible
    : public integral_constant<bool, __is_nothrow_constructible(
                                         _Tp, __add_rvalue_reference_t<_Tp>)> {
};

template <class _Tp>
inline constexpr bool is_nothrow_move_constructible_v =
    is_nothrow_move_constructible<_Tp>::value;

template <class _Tp>
struct is_nothrow_default_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp)> {};

template <class _Tp>
inline constexpr bool is_nothrow_default_constructible_v =
    __is_nothrow_constructible(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
[[__nodiscard__]] inline constexpr __libcpp_remove_reference_t<_Tp> &&
move([[_Clang::__lifetimebound__]] _Tp &&__t) noexcept {
  using _Up [[__gnu__::__nodebug__]] = __libcpp_remove_reference_t<_Tp>;
  return static_cast<_Up &&>(__t);
}

template <class _Tp>
using __move_if_noexcept_result_t [[__gnu__::__nodebug__]] =
    __conditional_t<!is_nothrow_move_constructible<_Tp>::value &&
                        is_copy_constructible<_Tp>::value,
                    const _Tp &, _Tp &&>;

template <class _Tp>
[[__nodiscard__]] inline constexpr __move_if_noexcept_result_t<_Tp>
move_if_noexcept([[_Clang::__lifetimebound__]] _Tp &__x) noexcept {
  return std::move(__x);
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using ptrdiff_t =
    decltype(static_cast<int *>(nullptr) - static_cast<int *>(nullptr));

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <size_t, class> struct tuple_element;

template <class...> class tuple;

template <class> struct tuple_size;

template <size_t _Ip, class... _Tp>
constexpr typename tuple_element<_Ip, tuple<_Tp...>>::type &
get(tuple<_Tp...> &) noexcept;

template <size_t _Ip, class... _Tp>
constexpr const typename tuple_element<_Ip, tuple<_Tp...>>::type &
get(const tuple<_Tp...> &) noexcept;

template <size_t _Ip, class... _Tp>
constexpr typename tuple_element<_Ip, tuple<_Tp...>>::type &&
get(tuple<_Tp...> &&) noexcept;

template <size_t _Ip, class... _Tp>
constexpr const typename tuple_element<_Ip, tuple<_Tp...>>::type &&
get(const tuple<_Tp...> &&) noexcept;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class, class> struct pair;

template <size_t _Ip, class _T1, class _T2>
constexpr typename tuple_element<_Ip, pair<_T1, _T2>>::type &
get(pair<_T1, _T2> &) noexcept;

template <size_t _Ip, class _T1, class _T2>
constexpr const typename tuple_element<_Ip, pair<_T1, _T2>>::type &
get(const pair<_T1, _T2> &) noexcept;

template <size_t _Ip, class _T1, class _T2>
constexpr typename tuple_element<_Ip, pair<_T1, _T2>>::type &&
get(pair<_T1, _T2> &&) noexcept;

template <size_t _Ip, class _T1, class _T2>
constexpr const typename tuple_element<_Ip, pair<_T1, _T2>>::type &&
get(const pair<_T1, _T2> &&) noexcept;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <bool, class _Tp = void> struct enable_if {};

#pragma clang diagnostic push

template <class _Tp> struct enable_if<true, _Tp> {
  typedef _Tp type;
};
#pragma clang diagnostic pop

template <bool _Bp, class _Tp = void>
using __enable_if_t [[__gnu__::__nodebug__]] =
    typename enable_if<_Bp, _Tp>::type;

template <bool _Bp, class _Tp = void>
using enable_if_t = typename enable_if<_Bp, _Tp>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <template <class...> class _Templ, class... _Args,
          class = _Templ<_Args...>>
true_type __sfinae_test_impl(int);
template <template <class...> class, class...>
false_type __sfinae_test_impl(...);

template <template <class...> class _Templ, class... _Args>
using _IsValidExpansion [[__gnu__::__nodebug__]] =
    decltype(std::__sfinae_test_impl<_Templ, _Args...>(0));

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __test_for_primary_template [[__gnu__::__nodebug__]] =
    __enable_if_t<_IsSame<_Tp, typename _Tp::__primary_template>::value>;

template <class _Tp>
using __is_primary_template [[__gnu__::__nodebug__]] =
    _IsValidExpansion<__test_for_primary_template, _Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class... _Types> struct __type_list {};

template <class> struct __type_list_head;

template <class _Head, class... _Tail>
struct __type_list_head<__type_list<_Head, _Tail...>> {
  using type [[__gnu__::__nodebug__]] = _Head;
};

template <class _TypeList, size_t _Size,
          bool = _Size <= sizeof(typename __type_list_head<_TypeList>::type)>
struct __find_first;

template <class _Head, class... _Tail, size_t _Size>
struct __find_first<__type_list<_Head, _Tail...>, _Size, true> {
  using type [[__gnu__::__nodebug__]] = _Head;
};

template <class _Head, class... _Tail, size_t _Size>
struct __find_first<__type_list<_Head, _Tail...>, _Size, false> {
  using type [[__gnu__::__nodebug__]] =
      typename __find_first<__type_list<_Tail...>, _Size>::type;
};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __make_signed_t [[__gnu__::__nodebug__]] = __make_signed(_Tp);
template <class _Tp> struct make_signed {
  using type [[__gnu__::__nodebug__]] = __make_signed_t<_Tp>;
};

template <class _Tp> using make_signed_t = __make_signed_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Default, class _Void, template <class...> class _Op,
          class... _Args>
struct __detector {
  using type [[__gnu__::__nodebug__]] = _Default;
};

template <class _Default, template <class...> class _Op, class... _Args>
struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...> {
  using type [[__gnu__::__nodebug__]] = _Op<_Args...>;
};

template <class _Default, template <class...> class _Op, class... _Args>
using __detected_or_t [[__gnu__::__nodebug__]] =
    typename __detector<_Default, void, _Op, _Args...>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <bool> struct _OrImpl;

template <> struct _OrImpl<true> {
  template <class _Res, class _First, class... _Rest>
  using _Result [[__gnu__::__nodebug__]] =
      typename _OrImpl<!bool(_First::value) && sizeof...(_Rest) != 0>::
          template _Result<_First, _Rest...>;
};

template <> struct _OrImpl<false> {
  template <class _Res, class...> using _Result [[__gnu__::__nodebug__]] = _Res;
};

template <class... _Args>
using _Or [[__gnu__::__nodebug__]] =
    typename _OrImpl<sizeof...(_Args) != 0>::template _Result<false_type,
                                                              _Args...>;

template <class... _Args> struct disjunction : _Or<_Args...> {};

template <class... _Args>
inline constexpr bool disjunction_v = _Or<_Args...>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

struct __nat {

  __nat() = delete;
  __nat(const __nat &) = delete;
  __nat &operator=(const __nat &) = delete;
  ~__nat() = delete;
};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_const {
  using type [[__gnu__::__nodebug__]] = __remove_const(_Tp);
};

template <class _Tp>
using __remove_const_t [[__gnu__::__nodebug__]] = __remove_const(_Tp);
template <class _Tp> using remove_const_t = __remove_const_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Iter> struct iterator_traits;

struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};

template <class _Iter> struct __iter_traits_cache {
  using type [[__gnu__::__nodebug__]] =
      _If<__is_primary_template<iterator_traits<_Iter>>::value, _Iter,
          iterator_traits<_Iter>>;
};
template <class _Iter>
using _ITER_TRAITS [[__gnu__::__nodebug__]] =
    typename __iter_traits_cache<_Iter>::type;

struct __iter_concept_concept_test {
  template <class _Iter>
  using _Apply [[__gnu__::__nodebug__]] =
      typename _ITER_TRAITS<_Iter>::iterator_concept;
};
struct __iter_concept_category_test {
  template <class _Iter>
  using _Apply [[__gnu__::__nodebug__]] =
      typename _ITER_TRAITS<_Iter>::iterator_category;
};
struct __iter_concept_random_fallback {
  template <class _Iter>
  using _Apply [[__gnu__::__nodebug__]] =
      __enable_if_t<__is_primary_template<iterator_traits<_Iter>>::value,
                    random_access_iterator_tag>;
};

template <class _Iter, class _Tester>
struct __test_iter_concept : _IsValidExpansion<_Tester::template _Apply, _Iter>,
                             _Tester {};

template <class _Iter> struct __iter_concept_cache {
  using type [[__gnu__::__nodebug__]] =
      _Or<__test_iter_concept<_Iter, __iter_concept_concept_test>,
          __test_iter_concept<_Iter, __iter_concept_category_test>,
          __test_iter_concept<_Iter, __iter_concept_random_fallback>>;
};

template <class _Iter>
using _ITER_CONCEPT [[__gnu__::__nodebug__]] =
    typename __iter_concept_cache<_Iter>::type::template _Apply<_Iter>;

template <class _Tp> struct __has_iterator_typedefs {
private:
  template <class _Up> static false_type __test(...);
  template <class _Up>
  static true_type __test(__void_t<typename _Up::iterator_category> * = nullptr,
                          __void_t<typename _Up::difference_type> * = nullptr,
                          __void_t<typename _Up::value_type> * = nullptr,
                          __void_t<typename _Up::reference> * = nullptr,
                          __void_t<typename _Up::pointer> * = nullptr);

public:
  static const bool value =
      decltype(__test<_Tp>(nullptr, nullptr, nullptr, nullptr, nullptr))::value;
};
template <class _Iter, bool> struct __iterator_traits {};

template <class _Iter, bool> struct __iterator_traits_impl {};

template <class _Iter> struct __iterator_traits_impl<_Iter, true> {
  typedef typename _Iter::difference_type difference_type;
  typedef typename _Iter::value_type value_type;
  typedef typename _Iter::pointer pointer;
  typedef typename _Iter::reference reference;
  typedef typename _Iter::iterator_category iterator_category;
};

template <class _Iter>
struct __iterator_traits<_Iter, true>
    : __iterator_traits_impl<
          _Iter, is_convertible<typename _Iter::iterator_category,
                                input_iterator_tag>::value ||
                     is_convertible<typename _Iter::iterator_category,
                                    output_iterator_tag>::value> {};

template <class _Iter>
struct iterator_traits
    : __iterator_traits<_Iter, __has_iterator_typedefs<_Iter>::value> {
  using __primary_template [[__gnu__::__nodebug__]] = iterator_traits;
};

template <class _Tp>

struct iterator_traits<_Tp *> {
  typedef ptrdiff_t difference_type;
  typedef __remove_cv_t<_Tp> value_type;
  typedef _Tp *pointer;
  typedef _Tp &reference;
  typedef random_access_iterator_tag iterator_category;
};

template <class _Tp>
using __iterator_category [[__gnu__::__nodebug__]] =
    typename _Tp::iterator_category;

template <class _Tp>
using __iterator_concept [[__gnu__::__nodebug__]] =
    typename _Tp::iterator_concept;

template <class _Tp, class _Up>
using __has_iterator_category_convertible_to [[__gnu__::__nodebug__]] =
    is_convertible<
        __detected_or_t<__nat, __iterator_category, iterator_traits<_Tp>>, _Up>;

template <class _Tp, class _Up>
using __has_iterator_concept_convertible_to [[__gnu__::__nodebug__]] =
    is_convertible<__detected_or_t<__nat, __iterator_concept, _Tp>, _Up>;

template <class _Tp>
using __has_input_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, input_iterator_tag>;

template <class _Tp>
using __has_forward_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, forward_iterator_tag>;

template <class _Tp>
using __has_bidirectional_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag>;

template <class _Tp>
using __has_random_access_iterator_category [[__gnu__::__nodebug__]] =
    __has_iterator_category_convertible_to<_Tp, random_access_iterator_tag>;
template <class _Tp> struct __libcpp_is_contiguous_iterator : false_type {};

template <class _Up>
struct __libcpp_is_contiguous_iterator<_Up *> : true_type {};

template <class _Iter> class __wrap_iter;

template <class _Tp>
using __has_exactly_input_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool, __has_iterator_category_convertible_to<
                                _Tp, input_iterator_tag>::value &&
                                !__has_iterator_category_convertible_to<
                                    _Tp, forward_iterator_tag>::value>;

template <class _Tp>
using __has_exactly_forward_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool, __has_iterator_category_convertible_to<
                                _Tp, forward_iterator_tag>::value &&
                                !__has_iterator_category_convertible_to<
                                    _Tp, bidirectional_iterator_tag>::value>;

template <class _Tp>
using __has_exactly_bidirectional_iterator_category [[__gnu__::__nodebug__]] =
    integral_constant<bool, __has_iterator_category_convertible_to<
                                _Tp, bidirectional_iterator_tag>::value &&
                                !__has_iterator_category_convertible_to<
                                    _Tp, random_access_iterator_tag>::value>;

template <class _InputIterator>
using __iter_value_type [[__gnu__::__nodebug__]] =
    typename iterator_traits<_InputIterator>::value_type;

template <class _InputIterator>
using __iter_key_type [[__gnu__::__nodebug__]] = __remove_const_t<
    typename iterator_traits<_InputIterator>::value_type::first_type>;

template <class _InputIterator>
using __iter_mapped_type [[__gnu__::__nodebug__]] =
    typename iterator_traits<_InputIterator>::value_type::second_type;

template <class _InputIterator>
using __iter_to_alloc_type [[__gnu__::__nodebug__]] =
    pair<const typename iterator_traits<_InputIterator>::value_type::first_type,
         typename iterator_traits<_InputIterator>::value_type::second_type>;

template <class _Iter>
using __iterator_category_type [[__gnu__::__nodebug__]] =
    typename iterator_traits<_Iter>::iterator_category;

template <class _Iter>
using __iterator_pointer_type [[__gnu__::__nodebug__]] =
    typename iterator_traits<_Iter>::pointer;

template <class _Iter>
using __iter_diff_t [[__gnu__::__nodebug__]] =
    typename iterator_traits<_Iter>::difference_type;

template <class _Iter>
using __iter_reference [[__gnu__::__nodebug__]] =
    typename iterator_traits<_Iter>::reference;
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Compare, class _ForwardIterator>
inline constexpr _ForwardIterator __max_element(_ForwardIterator __first,
                                                _ForwardIterator __last,
                                                _Compare __comp) {
  static_assert(__has_forward_iterator_category<_ForwardIterator>::value,
                "std::max_element requires a ForwardIterator");
  if (__first != __last) {
    _ForwardIterator __i = __first;
    while (++__i != __last)
      if (__comp(*__first, *__i))
        __first = __i;
  }
  return __first;
}

template <class _ForwardIterator, class _Compare>
[[__nodiscard__]] inline constexpr _ForwardIterator
max_element(_ForwardIterator __first, _ForwardIterator __last,
            _Compare __comp) {

  return std::__max_element<__comp_ref_type<_Compare>>(__first, __last, __comp);
}

template <class _ForwardIterator>
[[__nodiscard__]] inline constexpr _ForwardIterator
max_element(_ForwardIterator __first, _ForwardIterator __last) {
  return std::max_element(__first, __last, __less<>());
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

namespace std {

template <class _Ep> class initializer_list {
  const _Ep *__begin_;
  size_t __size_;

  constexpr initializer_list(const _Ep *__b, size_t __s) noexcept
      : __begin_(__b), __size_(__s) {}

public:
  typedef _Ep value_type;
  typedef const _Ep &reference;
  typedef const _Ep &const_reference;
  typedef size_t size_type;

  typedef const _Ep *iterator;
  typedef const _Ep *const_iterator;

  constexpr initializer_list() noexcept : __begin_(nullptr), __size_(0) {}

  constexpr size_t size() const noexcept { return __size_; }

  constexpr const _Ep *begin() const noexcept { return __begin_; }

  constexpr const _Ep *end() const noexcept { return __begin_ + __size_; }
};

template <class _Ep>
inline constexpr const _Ep *begin(initializer_list<_Ep> __il) noexcept {
  return __il.begin();
}

template <class _Ep>
inline constexpr const _Ep *end(initializer_list<_Ep> __il) noexcept {
  return __il.end();
}

} // namespace std

typedef long int ptrdiff_t;

typedef long unsigned int size_t;

typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;

typedef decltype(nullptr) nullptr_t;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {

enum class byte : unsigned char;

}
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {

enum class byte : unsigned char {};

inline constexpr byte operator|(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(
      static_cast<unsigned int>(__lhs) | static_cast<unsigned int>(__rhs)));
}

inline constexpr byte &operator|=(byte &__lhs, byte __rhs) noexcept {
  return __lhs = __lhs | __rhs;
}

inline constexpr byte operator&(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(
      static_cast<unsigned int>(__lhs) & static_cast<unsigned int>(__rhs)));
}

inline constexpr byte &operator&=(byte &__lhs, byte __rhs) noexcept {
  return __lhs = __lhs & __rhs;
}

inline constexpr byte operator^(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(
      static_cast<unsigned int>(__lhs) ^ static_cast<unsigned int>(__rhs)));
}

inline constexpr byte &operator^=(byte &__lhs, byte __rhs) noexcept {
  return __lhs = __lhs ^ __rhs;
}

inline constexpr byte operator~(byte __b) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(~static_cast<unsigned int>(__b)));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
constexpr byte &operator<<=(byte &__lhs, _Integer __shift) noexcept {
  return __lhs = __lhs << __shift;
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
constexpr byte operator<<(byte __lhs, _Integer __shift) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(static_cast<unsigned int>(__lhs) << __shift));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
constexpr byte &operator>>=(byte &__lhs, _Integer __shift) noexcept {
  return __lhs = __lhs >> __shift;
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
constexpr byte operator>>(byte __lhs, _Integer __shift) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(static_cast<unsigned int>(__lhs) >> __shift));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
[[nodiscard]] constexpr _Integer to_integer(byte __b) noexcept {
  return static_cast<_Integer>(__b);
}

} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using ::max_align_t __attribute__((__using_if_exists__));

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using nullptr_t = decltype(nullptr);

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Compare>
[[__nodiscard__]] inline constexpr const _Tp &
max([[_Clang::__lifetimebound__]] const _Tp &__a,
    [[_Clang::__lifetimebound__]] const _Tp &__b, _Compare __comp) {
  return __comp(__a, __b) ? __b : __a;
}

template <class _Tp>
[[__nodiscard__]] inline constexpr const _Tp &
max([[_Clang::__lifetimebound__]] const _Tp &__a,
    [[_Clang::__lifetimebound__]] const _Tp &__b) {
  return std::max(__a, __b, __less<>());
}

template <class _Tp, class _Compare>
[[__nodiscard__]] inline constexpr _Tp max(initializer_list<_Tp> __t,
                                           _Compare __comp) {
  return *std::__max_element<__comp_ref_type<_Compare>>(__t.begin(), __t.end(),
                                                        __comp);
}

template <class _Tp>
[[__nodiscard__]] inline constexpr _Tp max(initializer_list<_Tp> __t) {
  return *std::max_element(__t.begin(), __t.end(), __less<>());
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp = void>

struct less;

template <class> struct hash;

template <class> class reference_wrapper;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __is_identity : false_type {};

struct __identity {
  template <class _Tp>
  [[__nodiscard__]] constexpr _Tp &&operator()(_Tp &&__t) const noexcept {
    return std::forward<_Tp>(__t);
  }

  using is_transparent = void;
};

template <> struct __is_identity<__identity> : true_type {};
template <> struct __is_identity<reference_wrapper<__identity>> : true_type {};
template <>
struct __is_identity<reference_wrapper<const __identity>> : true_type {};
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Bp, class _Dp>
struct is_base_of : public integral_constant<bool, __is_base_of(_Bp, _Dp)> {};

template <class _Bp, class _Dp>
inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up, class = void>
struct __is_core_convertible : public false_type {};

template <class _Tp, class _Up>
struct __is_core_convertible<_Tp, _Up,
                             decltype(static_cast<void (*)(_Up)>(0)(
                                 static_cast<_Tp (*)()>(0)()))>
    : public true_type {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_member_pointer : _BoolConstant<__is_member_pointer(_Tp)> {};

template <class _Tp>
struct is_member_object_pointer
    : _BoolConstant<__is_member_object_pointer(_Tp)> {};

template <class _Tp>
struct is_member_function_pointer
    : _BoolConstant<__is_member_function_pointer(_Tp)> {};

template <class _Tp>
inline constexpr bool is_member_pointer_v = __is_member_pointer(_Tp);

template <class _Tp>
inline constexpr bool is_member_object_pointer_v =
    __is_member_object_pointer(_Tp);

template <class _Tp>
inline constexpr bool is_member_function_pointer_v =
    __is_member_function_pointer(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __is_reference_wrapper_impl : public false_type {};
template <class _Tp>
struct __is_reference_wrapper_impl<reference_wrapper<_Tp>> : public true_type {
};
template <class _Tp>
struct __is_reference_wrapper
    : public __is_reference_wrapper_impl<__remove_cv_t<_Tp>> {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _DecayedFp> struct __member_pointer_class_type {};

template <class _Ret, class _ClassType>
struct __member_pointer_class_type<_Ret _ClassType::*> {
  typedef _ClassType type;
};

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet1 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value &&
                  (is_same<_ClassT, _DecayA0>::value ||
                   is_base_of<_ClassT, _DecayA0>::value)>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>>
using __enable_if_bullet2 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value &&
                  __is_reference_wrapper<_DecayA0>::value>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet3 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value &&
                  !(is_same<_ClassT, _DecayA0>::value ||
                    is_base_of<_ClassT, _DecayA0>::value) &&
                  !__is_reference_wrapper<_DecayA0>::value>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet4 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value &&
                  (is_same<_ClassT, _DecayA0>::value ||
                   is_base_of<_ClassT, _DecayA0>::value)>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>>
using __enable_if_bullet5 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value &&
                  __is_reference_wrapper<_DecayA0>::value>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet6 [[__gnu__::__nodebug__]] =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value &&
                  !(is_same<_ClassT, _DecayA0>::value ||
                    is_base_of<_ClassT, _DecayA0>::value) &&
                  !__is_reference_wrapper<_DecayA0>::value>;

template <class... _Args> __nat __invoke(_Args &&...__args);

template <class _Fp, class _A0, class... _Args,
          class = __enable_if_bullet1<_Fp, _A0>>
inline constexpr decltype((std::declval<_A0>().*
                           std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp &&__f, _A0 &&__a0, _Args &&...__args) noexcept(noexcept(
    (static_cast<_A0 &&>(__a0).*__f)(static_cast<_Args &&>(__args)...))) {
  return (static_cast<_A0 &&>(__a0).*__f)(static_cast<_Args &&>(__args)...);
}

template <class _Fp, class _A0, class... _Args,
          class = __enable_if_bullet2<_Fp, _A0>>
inline constexpr decltype((std::declval<_A0>().get().*
                           std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp &&__f, _A0 &&__a0, _Args &&...__args) noexcept(
    noexcept((__a0.get().*__f)(static_cast<_Args &&>(__args)...))) {
  return (__a0.get().*__f)(static_cast<_Args &&>(__args)...);
}

template <class _Fp, class _A0, class... _Args,
          class = __enable_if_bullet3<_Fp, _A0>>
inline constexpr decltype(((*std::declval<_A0>()).*
                           std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp &&__f, _A0 &&__a0, _Args &&...__args) noexcept(noexcept(
    ((*static_cast<_A0 &&>(__a0)).*__f)(static_cast<_Args &&>(__args)...))) {
  return ((*static_cast<_A0 &&>(__a0)).*__f)(static_cast<_Args &&>(__args)...);
}

template <class _Fp, class _A0, class = __enable_if_bullet4<_Fp, _A0>>
inline constexpr decltype(std::declval<_A0>().*std::declval<_Fp>())
__invoke(_Fp &&__f,
         _A0 &&__a0) noexcept(noexcept(static_cast<_A0 &&>(__a0).*__f)) {
  return static_cast<_A0 &&>(__a0).*__f;
}

template <class _Fp, class _A0, class = __enable_if_bullet5<_Fp, _A0>>
inline constexpr decltype(std::declval<_A0>().get().*std::declval<_Fp>())
__invoke(_Fp &&__f, _A0 &&__a0) noexcept(noexcept(__a0.get().*__f)) {
  return __a0.get().*__f;
}

template <class _Fp, class _A0, class = __enable_if_bullet6<_Fp, _A0>>
inline constexpr decltype((*std::declval<_A0>()).*std::declval<_Fp>())
__invoke(_Fp &&__f,
         _A0 &&__a0) noexcept(noexcept((*static_cast<_A0 &&>(__a0)).*__f)) {
  return (*static_cast<_A0 &&>(__a0)).*__f;
}

template <class _Fp, class... _Args>
inline constexpr decltype(std::declval<_Fp>()(std::declval<_Args>()...))
__invoke(_Fp &&__f, _Args &&...__args) noexcept(
    noexcept(static_cast<_Fp &&>(__f)(static_cast<_Args &&>(__args)...))) {
  return static_cast<_Fp &&>(__f)(static_cast<_Args &&>(__args)...);
}

template <class _Ret, class _Fp, class... _Args> struct __invokable_r {
  template <class _XFp, class... _XArgs>
  static decltype(std::__invoke(std::declval<_XFp>(),
                                std::declval<_XArgs>()...))
  __try_call(int);
  template <class _XFp, class... _XArgs> static __nat __try_call(...);

  using _Result [[__gnu__::__nodebug__]] =
      decltype(__try_call<_Fp, _Args...>(0));

  using type =
      __conditional_t<_IsNotSame<_Result, __nat>::value,
                      __conditional_t<is_void<_Ret>::value, true_type,
                                      __is_core_convertible<_Result, _Ret>>,
                      false_type>;
  static const bool value = type::value;
};
template <class _Fp, class... _Args>
using __is_invocable [[__gnu__::__nodebug__]] =
    __invokable_r<void, _Fp, _Args...>;

template <bool _IsInvokable, bool _IsCVVoid, class _Ret, class _Fp,
          class... _Args>
struct __nothrow_invokable_r_imp {
  static const bool value = false;
};

template <class _Ret, class _Fp, class... _Args>
struct __nothrow_invokable_r_imp<true, false, _Ret, _Fp, _Args...> {
  typedef __nothrow_invokable_r_imp _ThisT;

  template <class _Tp> static void __test_noexcept(_Tp) noexcept;

  static const bool value = noexcept(_ThisT::__test_noexcept<_Ret>(
      std::__invoke(std::declval<_Fp>(), std::declval<_Args>()...)));
};

template <class _Ret, class _Fp, class... _Args>
struct __nothrow_invokable_r_imp<true, true, _Ret, _Fp, _Args...> {

  static const bool value =
      noexcept(std::__invoke(std::declval<_Fp>(), std::declval<_Args>()...));
};

template <class _Ret, class _Fp, class... _Args>
using __nothrow_invokable_r [[__gnu__::__nodebug__]] =
    __nothrow_invokable_r_imp<__invokable_r<_Ret, _Fp, _Args...>::value,
                              is_void<_Ret>::value, _Ret, _Fp, _Args...>;

template <class _Fp, class... _Args>
using __nothrow_invokable [[__gnu__::__nodebug__]] =
    __nothrow_invokable_r_imp<__is_invocable<_Fp, _Args...>::value, true, void,
                              _Fp, _Args...>;

template <class _Ret, bool = is_void<_Ret>::value>
struct __invoke_void_return_wrapper {
  template <class... _Args> static _Ret __call(_Args &&...__args) {
    return std::__invoke(std::forward<_Args>(__args)...);
  }
};

template <class _Ret> struct __invoke_void_return_wrapper<_Ret, true> {
  template <class... _Args> static void __call(_Args &&...__args) {
    std::__invoke(std::forward<_Args>(__args)...);
  }
};

template <class _Func, class... _Args>
inline const bool __is_invocable_v = __is_invocable<_Func, _Args...>::value;

template <class _Ret, class _Func, class... _Args>
inline const bool __is_invocable_r_v =
    __invokable_r<_Ret, _Func, _Args...>::value;

template <class _Func, class... _Args>
inline const bool __is_nothrow_invocable_v =
    __nothrow_invokable<_Func, _Args...>::value;

template <class _Func, class... _Args>
struct __invoke_result
    : enable_if<__is_invocable_v<_Func, _Args...>,
                typename __invokable_r<void, _Func, _Args...>::_Result> {};

template <class _Func, class... _Args>
using __invoke_result_t [[__gnu__::__nodebug__]] =
    typename __invoke_result<_Func, _Args...>::type;

template <class _Ret, class... _Args> _Ret __invoke_r(_Args &&...__args) {
  return __invoke_void_return_wrapper<_Ret>::__call(
      std::forward<_Args>(__args)...);
}

template <class _Fn, class... _Args>
struct is_invocable : bool_constant<__is_invocable_v<_Fn, _Args...>> {};

template <class _Ret, class _Fn, class... _Args>
struct is_invocable_r : bool_constant<__is_invocable_r_v<_Ret, _Fn, _Args...>> {
};

template <class _Fn, class... _Args>
inline constexpr bool is_invocable_v = __is_invocable_v<_Fn, _Args...>;

template <class _Ret, class _Fn, class... _Args>
inline constexpr bool is_invocable_r_v =
    __is_invocable_r_v<_Ret, _Fn, _Args...>;

template <class _Fn, class... _Args>
struct is_nothrow_invocable
    : bool_constant<__nothrow_invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class... _Args>
struct is_nothrow_invocable_r
    : bool_constant<__nothrow_invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class... _Args>
inline constexpr bool is_nothrow_invocable_v =
    is_nothrow_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class... _Args>
inline constexpr bool is_nothrow_invocable_r_v =
    is_nothrow_invocable_r<_Ret, _Fn, _Args...>::value;

template <class _Fn, class... _Args>
struct invoke_result : __invoke_result<_Fn, _Args...> {};

template <class _Fn, class... _Args>
using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Iterator> struct __segmented_iterator_traits;
template <class _Tp, size_t = 0> struct __has_specialization : false_type {};

template <class _Tp>
struct __has_specialization<_Tp, sizeof(_Tp) * 0> : true_type {};

template <class _Iterator>
using __is_segmented_iterator [[__gnu__::__nodebug__]] =
    __has_specialization<__segmented_iterator_traits<_Iterator>>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _SegmentedIterator, class _Pred, class _Proj>
constexpr _SegmentedIterator __find_segment_if(_SegmentedIterator __first,
                                               _SegmentedIterator __last,
                                               _Pred __pred, _Proj &__proj) {
  using _Traits = __segmented_iterator_traits<_SegmentedIterator>;

  auto __sfirst = _Traits::__segment(__first);
  auto __slast = _Traits::__segment(__last);

  if (__sfirst == __slast)
    return _Traits::__compose(
        __sfirst,
        __pred(_Traits::__local(__first), _Traits::__local(__last), __proj));

  {
    auto __llast = _Traits::__end(__sfirst);
    auto __liter = __pred(_Traits::__local(__first), __llast, __proj);
    if (__liter != __llast)
      return _Traits::__compose(__sfirst, __liter);
  }
  ++__sfirst;

  while (__sfirst != __slast) {
    auto __llast = _Traits::__end(__sfirst);
    auto __liter =
        __pred(_Traits::__begin(__sfirst), _Traits::__end(__sfirst), __proj);
    if (__liter != __llast)
      return _Traits::__compose(__sfirst, __liter);
    ++__sfirst;
  }

  return _Traits::__compose(__sfirst, __pred(_Traits::__begin(__sfirst),
                                             _Traits::__local(__last), __proj));
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
inline constexpr __attribute__((__no_sanitize__("cfi"))) _Tp *
addressof(_Tp &__x) noexcept {
  return __builtin_addressof(__x);
}
template <class _Tp> _Tp *addressof(const _Tp &&) noexcept = delete;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class...> using __expand_to_true [[__gnu__::__nodebug__]] = true_type;

template <class... _Pred>
__expand_to_true<__enable_if_t<_Pred::value>...> __and_helper(int);

template <class...> false_type __and_helper(...);

template <class... _Pred>
using _And [[__gnu__::__nodebug__]] = decltype(std::__and_helper<_Pred...>(0));

template <bool... _Preds> struct __all_dummy;

template <bool... _Pred>
struct __all
    : _IsSame<__all_dummy<_Pred...>, __all_dummy<((void)_Pred, true)...>> {};

template <class...> struct conjunction : true_type {};

#pragma clang diagnostic push

template <class _Arg> struct conjunction<_Arg> : _Arg {};

template <class _Arg, class... _Args>
struct conjunction<_Arg, _Args...>
    : conditional_t<!bool(_Arg::value), _Arg, conjunction<_Args...>> {};
#pragma clang diagnostic pop

template <class... _Args>
inline constexpr bool conjunction_v = conjunction<_Args...>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp, class = void> struct __has_pointer : false_type {};
template <class _Tp>
struct __has_pointer<_Tp, __void_t<typename _Tp::pointer>> : true_type {};
template <class _Tp, class = void> struct __has_element_type : false_type {};
template <class _Tp>
struct __has_element_type<_Tp, __void_t<typename _Tp::element_type>>
    : true_type {};

template <class _Ptr, bool = __has_element_type<_Ptr>::value>
struct __pointer_traits_element_type {};

template <class _Ptr> struct __pointer_traits_element_type<_Ptr, true> {
  using type [[__gnu__::__nodebug__]] = typename _Ptr::element_type;
};

template <template <class, class...> class _Sp, class _Tp, class... _Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, true> {
  using type [[__gnu__::__nodebug__]] =
      typename _Sp<_Tp, _Args...>::element_type;
};

template <template <class, class...> class _Sp, class _Tp, class... _Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, false> {
  using type [[__gnu__::__nodebug__]] = _Tp;
};

template <class _Tp, class = void> struct __has_difference_type : false_type {};

template <class _Tp>
struct __has_difference_type<_Tp, __void_t<typename _Tp::difference_type>>
    : true_type {};

template <class _Ptr, bool = __has_difference_type<_Ptr>::value>
struct __pointer_traits_difference_type {
  using type [[__gnu__::__nodebug__]] = ptrdiff_t;
};

template <class _Ptr> struct __pointer_traits_difference_type<_Ptr, true> {
  using type [[__gnu__::__nodebug__]] = typename _Ptr::difference_type;
};

template <class _Tp, class _Up> struct __has_rebind {
private:
  template <class _Xp> static false_type __test(...);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  template <class _Xp>
  static true_type __test(typename _Xp::template rebind<_Up> * = 0);
#pragma GCC diagnostic pop

public:
  static const bool value = decltype(__test<_Tp>(0))::value;
};

template <class _Tp, class _Up, bool = __has_rebind<_Tp, _Up>::value>
struct __pointer_traits_rebind {

  using type [[__gnu__::__nodebug__]] = typename _Tp::template rebind<_Up>;
};

template <template <class, class...> class _Sp, class _Tp, class... _Args,
          class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, true> {

  using type [[__gnu__::__nodebug__]] =
      typename _Sp<_Tp, _Args...>::template rebind<_Up>;
};

template <template <class, class...> class _Sp, class _Tp, class... _Args,
          class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, false> {
  typedef _Sp<_Up, _Args...> type;
};

template <class _Ptr, class = void> struct __pointer_traits_impl {};

template <class _Ptr>
struct __pointer_traits_impl<
    _Ptr, __void_t<typename __pointer_traits_element_type<_Ptr>::type>> {
  typedef _Ptr pointer;
  typedef typename __pointer_traits_element_type<pointer>::type element_type;
  typedef
      typename __pointer_traits_difference_type<pointer>::type difference_type;

  template <class _Up>
  using rebind = typename __pointer_traits_rebind<pointer, _Up>::type;

private:
  struct __nat {};

public:
  static pointer pointer_to(
      __conditional_t<is_void<element_type>::value, __nat, element_type> &__r) {
    return pointer::pointer_to(__r);
  }
};

template <class _Ptr> struct pointer_traits : __pointer_traits_impl<_Ptr> {};

template <class _Tp> struct pointer_traits<_Tp *> {
  typedef _Tp *pointer;
  typedef _Tp element_type;
  typedef ptrdiff_t difference_type;

  template <class _Up> using rebind = _Up *;

private:
  struct __nat {};

public:
  static pointer pointer_to(__conditional_t<is_void<element_type>::value, __nat,
                                            element_type> &__r) noexcept {
    return std::addressof(__r);
  }
};

template <class _From, class _To>
using __rebind_pointer_t [[__gnu__::__nodebug__]] =
    typename pointer_traits<_From>::template rebind<_To>;

template <class _Pointer, class = void> struct __to_address_helper;

template <class _Tp> constexpr _Tp *__to_address(_Tp *__p) noexcept {
  static_assert(!is_function<_Tp>::value, "_Tp is a function type");
  return __p;
}

template <class _Pointer, class = void> struct _HasToAddress : false_type {};

template <class _Pointer>
struct _HasToAddress<_Pointer,
                     decltype((void)pointer_traits<_Pointer>::to_address(
                         std::declval<const _Pointer &>()))> : true_type {};

template <class _Pointer, class = void> struct _HasArrow : false_type {};

template <class _Pointer>
struct _HasArrow<_Pointer,
                 decltype((void)std::declval<const _Pointer &>().operator->())>
    : true_type {};

template <class _Pointer> struct _IsFancyPointer {
  static const bool value =
      _HasArrow<_Pointer>::value || _HasToAddress<_Pointer>::value;
};

template <
    class _Pointer,
    __enable_if_t<_And<is_class<_Pointer>, _IsFancyPointer<_Pointer>>::value,
                  int> = 0>

constexpr __decay_t<decltype(__to_address_helper<_Pointer>::__call(
    std::declval<const _Pointer &>()))>
__to_address(const _Pointer &__p) noexcept {
  return __to_address_helper<_Pointer>::__call(__p);
}

template <class _Pointer, class> struct __to_address_helper {

  constexpr static decltype(std::__to_address(
      std::declval<const _Pointer &>().operator->()))
  __call(const _Pointer &__p) noexcept {
    return std::__to_address(__p.operator->());
  }
};

template <class _Pointer>
struct __to_address_helper<_Pointer,
                           decltype((void)pointer_traits<_Pointer>::to_address(
                               std::declval<const _Pointer &>()))> {

  constexpr static decltype(pointer_traits<_Pointer>::to_address(
      std::declval<const _Pointer &>()))
  __call(const _Pointer &__p) noexcept {
    return pointer_traits<_Pointer>::to_address(__p);
  }
};
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Iter, bool = __libcpp_is_contiguous_iterator<_Iter>::value>
struct __unwrap_iter_impl {
  static constexpr _Iter __rewrap(_Iter, _Iter __iter) { return __iter; }
  static constexpr _Iter __unwrap(_Iter __i) noexcept { return __i; }
};

template <class _Iter> struct __unwrap_iter_impl<_Iter, true> {
  using _ToAddressT [[__gnu__::__nodebug__]] =
      decltype(std::__to_address(std::declval<_Iter>()));

  static constexpr _Iter __rewrap(_Iter __orig_iter,
                                  _ToAddressT __unwrapped_iter) {
    return __orig_iter + (__unwrapped_iter - std::__to_address(__orig_iter));
  }

  static constexpr _ToAddressT __unwrap(_Iter __i) noexcept {
    return std::__to_address(__i);
  }
};

template <class _Iter, class _Impl = __unwrap_iter_impl<_Iter>,
          __enable_if_t<is_copy_constructible<_Iter>::value, int> = 0>
inline constexpr decltype(_Impl::__unwrap(std::declval<_Iter>()))
__unwrap_iter(_Iter __i) noexcept {
  return _Impl::__unwrap(__i);
}
template <class _OrigIter, class _Iter,
          class _Impl = __unwrap_iter_impl<_OrigIter>>
constexpr _OrigIter __rewrap_iter(_OrigIter __orig_iter,
                                  _Iter __iter) noexcept {
  return _Impl::__rewrap(std::move(__orig_iter), std::move(__iter));
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

enum float_round_style {
  round_indeterminate = -1,
  round_toward_zero = 0,
  round_to_nearest = 1,
  round_toward_infinity = 2,
  round_toward_neg_infinity = 3
};

enum float_denorm_style {
  denorm_indeterminate = -1,
  denorm_absent = 0,
  denorm_present = 1
};

template <class _Tp, bool = is_arithmetic<_Tp>::value>
class __libcpp_numeric_limits {
protected:
  typedef _Tp type;

  static constexpr const bool is_specialized = false;
  [[__nodiscard__]] static constexpr type min() noexcept { return type(); }
  [[__nodiscard__]] static constexpr type max() noexcept { return type(); }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return type(); }

  static constexpr const int digits = 0;
  static constexpr const int digits10 = 0;
  static constexpr const int max_digits10 = 0;
  static constexpr const bool is_signed = false;
  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 0;
  [[__nodiscard__]] static constexpr type epsilon() noexcept { return type(); }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return type();
  }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept { return type(); }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return type();
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return type();
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return type();
  }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = false;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <class _Tp, int __digits, bool _IsSigned> struct __libcpp_compute_min {
  static constexpr const _Tp value = _Tp(_Tp(1) << __digits);
};

template <class _Tp, int __digits>
struct __libcpp_compute_min<_Tp, __digits, false> {
  static constexpr const _Tp value = _Tp(0);
};

template <class _Tp> class __libcpp_numeric_limits<_Tp, true> {
protected:
  typedef _Tp type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = type(-1) < type(0);
  static constexpr const int digits =
      static_cast<int>(sizeof(type) * 8 - is_signed);
  static constexpr const int digits10 = digits * 3 / 10;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min =
      __libcpp_compute_min<type, digits, is_signed>::value;
  static constexpr const type __max =
      is_signed ? type(type(~0) ^ __min) : type(~0);
  [[__nodiscard__]] static constexpr type min() noexcept { return __min; }
  [[__nodiscard__]] static constexpr type max() noexcept { return __max; }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return min(); }

  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  [[__nodiscard__]] static constexpr type epsilon() noexcept { return type(0); }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return type(0);
  }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return type(0);
  }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = !std::is_signed<_Tp>::value;

  static constexpr const bool traps = true;

  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <> class __libcpp_numeric_limits<bool, true> {
protected:
  typedef bool type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = false;
  static constexpr const int digits = 1;
  static constexpr const int digits10 = 0;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min = false;
  static constexpr const type __max = true;
  [[__nodiscard__]] static constexpr type min() noexcept { return __min; }
  [[__nodiscard__]] static constexpr type max() noexcept { return __max; }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return min(); }

  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  [[__nodiscard__]] static constexpr type epsilon() noexcept { return type(0); }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return type(0);
  }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return type(0);
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return type(0);
  }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <> class __libcpp_numeric_limits<float, true> {
protected:
  typedef float type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 24;
  static constexpr const int digits10 = 6;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  [[__nodiscard__]] static constexpr type min() noexcept {
    return 1.17549435e-38F;
  }
  [[__nodiscard__]] static constexpr type max() noexcept {
    return 3.40282347e+38F;
  }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  [[__nodiscard__]] static constexpr type epsilon() noexcept {
    return 1.19209290e-7F;
  }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return 0.5F;
  }

  static constexpr const int min_exponent = (-125);
  static constexpr const int min_exponent10 = (-37);
  static constexpr const int max_exponent = 128;
  static constexpr const int max_exponent10 = 38;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return __builtin_huge_valf();
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return __builtin_nanf("");
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return __builtin_nansf("");
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return 1.40129846e-45F;
  }

  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = false;

  static constexpr const float_round_style round_style = round_to_nearest;
};

template <> class __libcpp_numeric_limits<double, true> {
protected:
  typedef double type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 53;
  static constexpr const int digits10 = 15;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  [[__nodiscard__]] static constexpr type min() noexcept {
    return 2.2250738585072014e-308;
  }
  [[__nodiscard__]] static constexpr type max() noexcept {
    return 1.7976931348623157e+308;
  }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  [[__nodiscard__]] static constexpr type epsilon() noexcept {
    return 2.2204460492503131e-16;
  }
  [[__nodiscard__]] static constexpr type round_error() noexcept { return 0.5; }

  static constexpr const int min_exponent = (-1021);
  static constexpr const int min_exponent10 = (-307);
  static constexpr const int max_exponent = 1024;
  static constexpr const int max_exponent10 = 308;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return __builtin_huge_val();
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return __builtin_nan("");
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return __builtin_nans("");
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return 4.9406564584124654e-324;
  }

  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = false;

  static constexpr const float_round_style round_style = round_to_nearest;
};

template <> class __libcpp_numeric_limits<long double, true> {
protected:
  typedef long double type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 64;
  static constexpr const int digits10 = 18;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  [[__nodiscard__]] static constexpr type min() noexcept { return 0L; }
  [[__nodiscard__]] static constexpr type max() noexcept { return 0L; }
  [[__nodiscard__]] static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  [[__nodiscard__]] static constexpr type epsilon() noexcept {
    return 1.08420217248550443401e-19L;
  }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return 0.5L;
  }

  static constexpr const int min_exponent = (-16381);
  static constexpr const int min_exponent10 = (-4931);
  static constexpr const int max_exponent = 16384;
  static constexpr const int max_exponent10 = 4932;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return __builtin_huge_vall();
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return __builtin_nanl("");
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return __builtin_nansl("");
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept { return 0L; }

  static constexpr const bool is_iec559 = true;

  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = false;

  static constexpr const float_round_style round_style = round_to_nearest;
};

template <class _Tp>
class numeric_limits : private __libcpp_numeric_limits<_Tp> {
  typedef __libcpp_numeric_limits<_Tp> __base;
  typedef typename __base::type type;

public:
  static inline constexpr const bool is_specialized = __base::is_specialized;
  [[__nodiscard__]] static constexpr type min() noexcept {
    return __base::min();
  }
  [[__nodiscard__]] static constexpr type max() noexcept {
    return __base::max();
  }
  [[__nodiscard__]] static constexpr type lowest() noexcept {
    return __base::lowest();
  }

  static inline constexpr const int digits = __base::digits;
  static inline constexpr const int digits10 = __base::digits10;
  static inline constexpr const int max_digits10 = __base::max_digits10;
  static inline constexpr const bool is_signed = __base::is_signed;
  static inline constexpr const bool is_integer = __base::is_integer;
  static inline constexpr const bool is_exact = __base::is_exact;
  static inline constexpr const int radix = __base::radix;
  [[__nodiscard__]] static constexpr type epsilon() noexcept {
    return __base::epsilon();
  }
  [[__nodiscard__]] static constexpr type round_error() noexcept {
    return __base::round_error();
  }

  static inline constexpr const int min_exponent = __base::min_exponent;
  static inline constexpr const int min_exponent10 = __base::min_exponent10;
  static inline constexpr const int max_exponent = __base::max_exponent;
  static inline constexpr const int max_exponent10 = __base::max_exponent10;

  static inline constexpr const bool has_infinity = __base::has_infinity;
  static inline constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
  static inline constexpr const bool has_signaling_NaN =
      __base::has_signaling_NaN;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  static inline constexpr const float_denorm_style has_denorm =
      __base::has_denorm;
  static inline constexpr const bool has_denorm_loss = __base::has_denorm_loss;
#pragma GCC diagnostic pop
  [[__nodiscard__]] static constexpr type infinity() noexcept {
    return __base::infinity();
  }
  [[__nodiscard__]] static constexpr type quiet_NaN() noexcept {
    return __base::quiet_NaN();
  }
  [[__nodiscard__]] static constexpr type signaling_NaN() noexcept {
    return __base::signaling_NaN();
  }
  [[__nodiscard__]] static constexpr type denorm_min() noexcept {
    return __base::denorm_min();
  }

  static inline constexpr const bool is_iec559 = __base::is_iec559;
  static inline constexpr const bool is_bounded = __base::is_bounded;
  static inline constexpr const bool is_modulo = __base::is_modulo;

  static inline constexpr const bool traps = __base::traps;
  static inline constexpr const bool tinyness_before = __base::tinyness_before;
  static inline constexpr const float_round_style round_style =
      __base::round_style;
};

template <class _Tp>
class numeric_limits<const _Tp> : public numeric_limits<_Tp> {};

template <class _Tp>
class numeric_limits<volatile _Tp> : public numeric_limits<_Tp> {};

template <class _Tp>
class numeric_limits<const volatile _Tp> : public numeric_limits<_Tp> {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct add_const {
  using type [[__gnu__::__nodebug__]] = const _Tp;
};

template <class _Tp> using add_const_t = typename add_const<_Tp>::type;

template <class _Tp> struct add_cv {
  using type [[__gnu__::__nodebug__]] = const volatile _Tp;
};

template <class _Tp> using add_cv_t = typename add_cv<_Tp>::type;

template <class _Tp> struct add_volatile {
  using type [[__gnu__::__nodebug__]] = volatile _Tp;
};

template <class _Tp> using add_volatile_t = typename add_volatile<_Tp>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct __align_type {
  static const size_t value = __alignof(_Tp);
  typedef _Tp type;
};

struct __struct_double {
  long double __lx;
};
struct __struct_double4 {
  double __lx[4];
};

using __all_types [[__gnu__::__nodebug__]] =
    __type_list<__align_type<unsigned char>, __align_type<unsigned short>,
                __align_type<unsigned int>, __align_type<unsigned long>,
                __align_type<unsigned long long>, __align_type<double>,
                __align_type<long double>, __align_type<__struct_double>,
                __align_type<__struct_double4>, __align_type<int *>>;

template <class _TL, size_t _Len> struct __find_max_align;

template <class _Head, size_t _Len>
struct __find_max_align<__type_list<_Head>, _Len>
    : public integral_constant<size_t, _Head::value> {};

template <size_t _Len, size_t _A1, size_t _A2> struct __select_align {
private:
  static const size_t __min = _A2 < _A1 ? _A2 : _A1;
  static const size_t __max = _A1 < _A2 ? _A2 : _A1;

public:
  static const size_t value = _Len < __max ? __min : __max;
};

template <class _Head, class... _Tail, size_t _Len>
struct __find_max_align<__type_list<_Head, _Tail...>, _Len>
    : public integral_constant<
          size_t, __select_align<_Len, _Head::value,
                                 __find_max_align<__type_list<_Tail...>,
                                                  _Len>::value>::value> {};

template <size_t _Len,
          size_t _Align = __find_max_align<__all_types, _Len>::value>
struct aligned_storage {
  union alignas(_Align) type {
    unsigned char __data[(_Len + _Align - 1) / _Align * _Align];
  };
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <size_t _Len,
          size_t _Align = __find_max_align<__all_types, _Len>::value>
using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;
#pragma GCC diagnostic pop

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <size_t _I0, size_t... _In> struct __static_max;

template <size_t _I0> struct __static_max<_I0> {
  static const size_t value = _I0;
};

template <size_t _I0, size_t _I1, size_t... _In>
struct __static_max<_I0, _I1, _In...> {
  static const size_t value = _I0 >= _I1 ? __static_max<_I0, _In...>::value
                                         : __static_max<_I1, _In...>::value;
};

template <size_t _Len, class _Type0, class... _Types> struct aligned_union {
  static const size_t alignment_value =
      __static_max<__alignof(_Type0), __alignof(_Types)...>::value;
  static const size_t __len =
      __static_max<_Len, sizeof(_Type0), sizeof(_Types)...>::value;
  typedef typename aligned_storage<__len, alignment_value>::type type;
};

template <size_t _Len, class... _Types>
using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct alignment_of : public integral_constant<size_t, alignof(_Tp)> {};

template <class _Tp> inline constexpr size_t alignment_of_v = alignof(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)> {};

template <class _Tp>
inline constexpr bool has_virtual_destructor_v = __has_virtual_destructor(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_abstract : public integral_constant<bool, __is_abstract(_Tp)> {};

template <class _Tp> inline constexpr bool is_abstract_v = __is_abstract(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up>
struct is_assignable : _BoolConstant<__is_assignable(_Tp, _Up)> {};

template <class _Tp, class _Arg>
inline constexpr bool is_assignable_v = __is_assignable(_Tp, _Arg);

template <class _Tp>
struct is_copy_assignable
    : public integral_constant<bool, __is_assignable(
                                         __add_lvalue_reference_t<_Tp>,
                                         __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;

template <class _Tp>
struct is_move_assignable
    : public integral_constant<bool,
                               __is_assignable(__add_lvalue_reference_t<_Tp>,
                                               __add_rvalue_reference_t<_Tp>)> {
};

template <class _Tp>
inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
inline const bool __is_null_pointer_v = __is_same(__remove_cv(_Tp), nullptr_t);

template <class _Tp>
struct is_null_pointer : integral_constant<bool, __is_null_pointer_v<_Tp>> {};

template <class _Tp>
inline constexpr bool is_null_pointer_v = __is_null_pointer_v<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_fundamental : _BoolConstant<__is_fundamental(_Tp)> {};

template <class _Tp>
inline constexpr bool is_fundamental_v = __is_fundamental(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_compound : _BoolConstant<__is_compound(_Tp)> {};

template <class _Tp> inline constexpr bool is_compound_v = __is_compound(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_const : _BoolConstant<__is_const(_Tp)> {};

template <class _Tp> inline constexpr bool is_const_v = __is_const(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_empty : public integral_constant<bool, __is_empty(_Tp)> {};

template <class _Tp> inline constexpr bool is_empty_v = __is_empty(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct __attribute__((__deprecated__)) is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)> {};

template <class _Tp>
__attribute__((__deprecated__)) inline constexpr bool is_literal_type_v =
    __is_literal_type(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_pod : public integral_constant<bool, __is_pod(_Tp)> {};

template <class _Tp> inline constexpr bool is_pod_v = __is_pod(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_pointer : _BoolConstant<__is_pointer(_Tp)> {};

template <class _Tp> inline constexpr bool is_pointer_v = __is_pointer(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_polymorphic : public integral_constant<bool, __is_polymorphic(_Tp)> {
};

template <class _Tp>
inline constexpr bool is_polymorphic_v = __is_polymorphic(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_scalar : _BoolConstant<__is_scalar(_Tp)> {};

template <class _Tp> inline constexpr bool is_scalar_v = __is_scalar(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)> {};

template <class _Tp>
inline constexpr bool is_standard_layout_v = __is_standard_layout(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_trivial : public integral_constant<bool, __is_trivial(_Tp)> {};

template <class _Tp> inline constexpr bool is_trivial_v = __is_trivial(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Arg>
struct is_trivially_assignable
    : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)> {};

template <class _Tp, class _Arg>
inline constexpr bool is_trivially_assignable_v =
    __is_trivially_assignable(_Tp, _Arg);

template <class _Tp>
struct is_trivially_copy_assignable
    : public integral_constant<bool, __is_trivially_assignable(
                                         __add_lvalue_reference_t<_Tp>,
                                         __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_trivially_copy_assignable_v =
    is_trivially_copy_assignable<_Tp>::value;

template <class _Tp>
struct is_trivially_move_assignable
    : public integral_constant<bool, __is_trivially_assignable(
                                         __add_lvalue_reference_t<_Tp>,
                                         __add_rvalue_reference_t<_Tp>)> {};

template <class _Tp>
inline constexpr bool is_trivially_move_assignable_v =
    is_trivially_move_assignable<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class... _Args>
struct is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)> {};

template <class _Tp, class... _Args>
inline constexpr bool is_trivially_constructible_v =
    __is_trivially_constructible(_Tp, _Args...);

template <class _Tp>
struct is_trivially_copy_constructible
    : public integral_constant<bool,
                               __is_trivially_constructible(
                                   _Tp, __add_lvalue_reference_t<const _Tp>)> {
};

template <class _Tp>
inline constexpr bool is_trivially_copy_constructible_v =
    is_trivially_copy_constructible<_Tp>::value;

template <class _Tp>
struct is_trivially_move_constructible
    : public integral_constant<bool, __is_trivially_constructible(
                                         _Tp, __add_rvalue_reference_t<_Tp>)> {
};

template <class _Tp>
inline constexpr bool is_trivially_move_constructible_v =
    is_trivially_move_constructible<_Tp>::value;

template <class _Tp>
struct is_trivially_default_constructible
    : public integral_constant<bool, __is_trivially_constructible(_Tp)> {};

template <class _Tp>
inline constexpr bool is_trivially_default_constructible_v =
    __is_trivially_constructible(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;

typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;

typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;

typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct {
  int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

typedef long int __blksize_t;

typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __fsword_t;

typedef long int __ssize_t;

typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;

typedef __off64_t __loff_t;
typedef char *__caddr_t;

typedef long int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;

typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;

typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;

typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using ::int8_t __attribute__((__using_if_exists__));
using ::int16_t __attribute__((__using_if_exists__));
using ::int32_t __attribute__((__using_if_exists__));
using ::int64_t __attribute__((__using_if_exists__));

using ::uint8_t __attribute__((__using_if_exists__));
using ::uint16_t __attribute__((__using_if_exists__));
using ::uint32_t __attribute__((__using_if_exists__));
using ::uint64_t __attribute__((__using_if_exists__));

using ::int_least8_t __attribute__((__using_if_exists__));
using ::int_least16_t __attribute__((__using_if_exists__));
using ::int_least32_t __attribute__((__using_if_exists__));
using ::int_least64_t __attribute__((__using_if_exists__));

using ::uint_least8_t __attribute__((__using_if_exists__));
using ::uint_least16_t __attribute__((__using_if_exists__));
using ::uint_least32_t __attribute__((__using_if_exists__));
using ::uint_least64_t __attribute__((__using_if_exists__));

using ::int_fast8_t __attribute__((__using_if_exists__));
using ::int_fast16_t __attribute__((__using_if_exists__));
using ::int_fast32_t __attribute__((__using_if_exists__));
using ::int_fast64_t __attribute__((__using_if_exists__));

using ::uint_fast8_t __attribute__((__using_if_exists__));
using ::uint_fast16_t __attribute__((__using_if_exists__));
using ::uint_fast32_t __attribute__((__using_if_exists__));
using ::uint_fast64_t __attribute__((__using_if_exists__));

using ::intptr_t __attribute__((__using_if_exists__));
using ::uintptr_t __attribute__((__using_if_exists__));

using ::intmax_t __attribute__((__using_if_exists__));
using ::uintmax_t __attribute__((__using_if_exists__));

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_trivially_copyable
    : public integral_constant<bool, __is_trivially_copyable(_Tp)> {};

template <class _Tp>
inline constexpr bool is_trivially_copyable_v = __is_trivially_copyable(_Tp);

template <class _Tp>
inline const bool __is_cheap_to_copy =
    __is_trivially_copyable(_Tp) && sizeof(_Tp) <= sizeof(std::intmax_t);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_trivially_destructible
    : public integral_constant<bool, __is_trivially_destructible(_Tp)> {};
template <class _Tp>
inline constexpr bool is_trivially_destructible_v =
    is_trivially_destructible<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};

template <class _Tp> inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct is_volatile : _BoolConstant<__is_volatile(_Tp)> {};

template <class _Tp> inline constexpr bool is_volatile_v = __is_volatile(_Tp);
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
using __make_unsigned_t [[__gnu__::__nodebug__]] = __make_unsigned(_Tp);
template <class _Tp> struct make_unsigned {
  using type [[__gnu__::__nodebug__]] = __make_unsigned_t<_Tp>;
};

template <class _Tp> using make_unsigned_t = __make_unsigned_t<_Tp>;

template <class _Tp>
constexpr __make_unsigned_t<_Tp> __to_unsigned_like(_Tp __x) noexcept {
  return static_cast<__make_unsigned_t<_Tp>>(__x);
}

template <class _Tp, class _Up>
using __copy_unsigned_t [[__gnu__::__nodebug__]] =
    __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp> struct rank : public integral_constant<size_t, 0> {};

#pragma clang diagnostic push

template <class _Tp>
struct rank<_Tp[]> : public integral_constant<size_t, rank<_Tp>::value + 1> {};
template <class _Tp, size_t _Np>
struct rank<_Tp[_Np]> : public integral_constant<size_t, rank<_Tp>::value + 1> {
};
#pragma clang diagnostic pop

template <class _Tp> inline constexpr size_t rank_v = rank<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_pointer {
  using type [[__gnu__::__nodebug__]] = __remove_pointer(_Tp);
};

template <class _Tp>
using __remove_pointer_t [[__gnu__::__nodebug__]] = __remove_pointer(_Tp);
template <class _Tp> using remove_pointer_t = __remove_pointer_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct remove_volatile {
  using type [[__gnu__::__nodebug__]] = __remove_volatile(_Tp);
};

template <class _Tp>
using __remove_volatile_t [[__gnu__::__nodebug__]] = __remove_volatile(_Tp);
template <class _Tp> using remove_volatile_t = __remove_volatile_t<_Tp>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Callable> struct __attribute__((__deprecated__)) result_of;

#pragma clang diagnostic push

template <class _Fp, class... _Args>
struct result_of<_Fp(_Args...)> : __invoke_result<_Fp, _Args...> {};
#pragma clang diagnostic pop

template <class _Tp>
using result_of_t __attribute__((__deprecated__)) =
    typename result_of<_Tp>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, bool = is_enum<_Tp>::value> struct __underlying_type_impl;

template <class _Tp> struct __underlying_type_impl<_Tp, false> {};

template <class _Tp> struct __underlying_type_impl<_Tp, true> {
  typedef __underlying_type(_Tp) type;
};

template <class _Tp>
struct underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};

template <class _Tp>
using underlying_type_t = typename underlying_type<_Tp>::type;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct __libcpp_is_final : public integral_constant<bool, __is_final(_Tp)> {};

template <class _Tp>
struct is_final : public integral_constant<bool, __is_final(_Tp)> {};

template <class _Tp> inline constexpr bool is_final_v = __is_final(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct has_unique_object_representations

    : public integral_constant<bool, __has_unique_object_representations(
                                         remove_all_extents_t<_Tp>)> {};

template <class _Tp>
inline constexpr bool has_unique_object_representations_v =
    __has_unique_object_representations(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
struct is_aggregate : public integral_constant<bool, __is_aggregate(_Tp)> {};

template <class _Tp> inline constexpr bool is_aggregate_v = __is_aggregate(_Tp);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up, class = void>
inline const bool __is_swappable_with_v = false;

template <class _Tp>
inline const bool __is_swappable_v = __is_swappable_with_v<_Tp &, _Tp &>;

template <class _Tp, class _Up, bool = __is_swappable_with_v<_Tp, _Up>>
inline const bool __is_nothrow_swappable_with_v = false;

template <class _Tp>
inline const bool __is_nothrow_swappable_v =
    __is_nothrow_swappable_with_v<_Tp &, _Tp &>;

template <class _Tp>
using __swap_result_t [[__gnu__::__nodebug__]] =
    __enable_if_t<is_move_constructible<_Tp>::value &&
                  is_move_assignable<_Tp>::value>;

template <class _Tp>
inline __swap_result_t<_Tp>
swap(_Tp &__x, _Tp &__y) noexcept(is_nothrow_move_constructible<_Tp>::value &&
                                  is_nothrow_move_assignable<_Tp>::value);

template <class _Tp, size_t _Np, __enable_if_t<__is_swappable_v<_Tp>, int> = 0>
inline void swap(_Tp (&__a)[_Np],
                 _Tp (&__b)[_Np]) noexcept(__is_nothrow_swappable_v<_Tp>);

template <class _Tp, class _Up>
inline const bool __is_swappable_with_v<
    _Tp, _Up,
    __void_t<decltype(swap(std::declval<_Tp>(), std::declval<_Up>())),
             decltype(swap(std::declval<_Up>(), std::declval<_Tp>()))>> = true;

template <class _Tp, class _Up>
inline const bool __is_nothrow_swappable_with_v<_Tp, _Up, true> =
    noexcept(swap(std::declval<_Tp>(), std::declval<_Up>())) &&
    noexcept(swap(std::declval<_Up>(), std::declval<_Tp>()));

template <class _Tp, class _Up>
inline constexpr bool is_swappable_with_v = __is_swappable_with_v<_Tp, _Up>;

template <class _Tp, class _Up>
struct is_swappable_with : bool_constant<is_swappable_with_v<_Tp, _Up>> {};

template <class _Tp>
inline constexpr bool is_swappable_v =
    is_swappable_with_v<__add_lvalue_reference_t<_Tp>,
                        __add_lvalue_reference_t<_Tp>>;

template <class _Tp>
struct is_swappable : bool_constant<is_swappable_v<_Tp>> {};

template <class _Tp, class _Up>
inline constexpr bool is_nothrow_swappable_with_v =
    __is_nothrow_swappable_with_v<_Tp, _Up>;

template <class _Tp, class _Up>
struct is_nothrow_swappable_with
    : bool_constant<is_nothrow_swappable_with_v<_Tp, _Up>> {};

template <class _Tp>
inline constexpr bool is_nothrow_swappable_v =
    is_nothrow_swappable_with_v<__add_lvalue_reference_t<_Tp>,
                                __add_lvalue_reference_t<_Tp>>;

template <class _Tp>
struct is_nothrow_swappable : bool_constant<is_nothrow_swappable_v<_Tp>> {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Pred> struct _Not : _BoolConstant<!_Pred::value> {};

template <class _Tp> struct negation : _Not<_Tp> {};
template <class _Tp> inline constexpr bool negation_v = !_Tp::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <bool _Invert, class _Tp> constexpr _Tp __invert_if(_Tp __v) {
  if (_Invert)
    return ~__v;
  return __v;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Cp, bool _IsConst, typename _Cp::__storage_type = 0>
class __bit_iterator;

template <class _Cp> struct __bit_array;

template <class, class = void> struct __size_difference_type_traits;

template <class _StoragePointer>
constexpr void __fill_masked_range(_StoragePointer __word, unsigned __clz,
                                   unsigned __ctz, bool __fill_val);

template <class _StorageType> _StorageType __trailing_mask(unsigned __clz);

template <class _StorageType> _StorageType __leading_mask(unsigned __ctz);

template <class _StorageType>
_StorageType __middle_mask(unsigned __clz, unsigned __ctz);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, size_t _Np>
constexpr _Tp *begin(_Tp (&__array)[_Np]) noexcept {
  return __array;
}

template <class _Tp, size_t _Np>
constexpr _Tp *end(_Tp (&__array)[_Np]) noexcept {
  return __array + _Np;
}

template <class _Cp> constexpr auto begin(_Cp &__c) -> decltype(__c.begin()) {
  return __c.begin();
}

template <class _Cp>
constexpr auto begin(const _Cp &__c) -> decltype(__c.begin()) {
  return __c.begin();
}

template <class _Cp> constexpr auto end(_Cp &__c) -> decltype(__c.end()) {
  return __c.end();
}

template <class _Cp> constexpr auto end(const _Cp &__c) -> decltype(__c.end()) {
  return __c.end();
}

template <class _Cp>
constexpr auto cbegin(const _Cp &__c) noexcept(noexcept(std::begin(__c)))
    -> decltype(std::begin(__c)) {
  return std::begin(__c);
}

template <class _Cp>
constexpr auto cend(const _Cp &__c) noexcept(noexcept(std::end(__c)))
    -> decltype(std::end(__c)) {
  return std::end(__c);
}
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

[[__nodiscard__]] inline void *operator new(std::size_t, void *__p) noexcept {
  return __p;
}
[[__nodiscard__]] inline void *operator new[](std::size_t, void *__p) noexcept {
  return __p;
}
inline void operator delete(void *, void *) noexcept {}
inline void operator delete[](void *, void *) noexcept {}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp, class... _Args,
          class = decltype(::new(std::declval<void *>())
                               _Tp(std::declval<_Args>()...))>
_Tp *__construct_at(_Tp *__location, _Args &&...__args) {

  return ((void)0), ::new (static_cast<void *>(__location))
                        _Tp(std::forward<_Args>(__args)...);
}

template <class _Tp, __enable_if_t<!is_array<_Tp>::value, int> = 0>
void __destroy_at(_Tp *__loc) {
  ((void)0);
  __loc->~_Tp();
}
template <class _Tp, enable_if_t<!is_array_v<_Tp>, int> = 0>
void destroy_at(_Tp *__loc) {
  std::__destroy_at(__loc);
}
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct _FirstPaddingByte {
  [[__no_unique_address__]] _Tp __v_;
  char __first_padding_byte_;
};

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"

template <class _Tp>
inline const size_t __datasizeof_v =
    __builtin_offsetof(_FirstPaddingByte<_Tp>, __first_padding_byte_);
#pragma clang diagnostic pop

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _From, class _To> struct __is_always_bitcastable {
  using _UnqualFrom [[__gnu__::__nodebug__]] = __remove_cv_t<_From>;
  using _UnqualTo [[__gnu__::__nodebug__]] = __remove_cv_t<_To>;

  static const bool value =

      (is_same<_UnqualFrom, _UnqualTo>::value &&
       is_trivially_copyable<_UnqualFrom>::value) ||
      (sizeof(_From) == sizeof(_To) && is_integral<_From>::value &&
       is_integral<_To>::value && !is_same<_UnqualTo, bool>::value);
};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

inline constexpr bool __libcpp_is_constant_evaluated() noexcept {
  return __builtin_is_constant_evaluated();
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up, class = void>
struct __is_equality_comparable : false_type {};

template <class _Tp, class _Up>
struct __is_equality_comparable<
    _Tp, _Up, __void_t<decltype(std::declval<_Tp>() == std::declval<_Up>())>>
    : true_type {};
template <class _Tp, class _Up, class = void>
struct __libcpp_is_trivially_equality_comparable_impl : false_type {};

template <class _Tp>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp, _Tp>

    : integral_constant<bool, __is_trivially_equality_comparable(_Tp) &&
                                  __is_equality_comparable<_Tp, _Tp>::value> {};

template <class _Tp, class _Up>
struct __libcpp_is_trivially_equality_comparable_impl<
    _Tp, _Up,
    __enable_if_t<is_integral<_Tp>::value && is_integral<_Up>::value &&
                  !is_same<_Tp, _Up>::value &&
                  is_signed<_Tp>::value == is_signed<_Up>::value &&
                  sizeof(_Tp) == sizeof(_Up)>> : true_type {};

template <class _Tp>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp *, _Tp *>
    : true_type {};

template <class _Tp, class _Up>
struct __libcpp_is_trivially_equality_comparable_impl<_Tp *, _Up *>
    : integral_constant<
          bool, __is_equality_comparable<_Tp *, _Up *>::value &&
                    (is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up>>::value ||
                     is_void<_Tp>::value || is_void<_Up>::value)> {};

template <class _Tp, class _Up>
using __libcpp_is_trivially_equality_comparable [[__gnu__::__nodebug__]] =
    __libcpp_is_trivially_equality_comparable_impl<__remove_cv_t<_Tp>,
                                                   __remove_cv_t<_Up>>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp> inline const bool __is_std_byte_v = false;

template <> inline const bool __is_std_byte_v<byte> = true;

template <class _Tp, class _Up>
inline const bool __is_trivially_lexicographically_comparable_v =
    is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up>>::value &&

    sizeof(_Tp) == 1 &&

    (is_unsigned<_Tp>::value || __is_std_byte_v<_Tp>);

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

enum class __element_count : size_t {};

}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp>
constexpr __attribute__((__no_sanitize__("address"))) bool
__is_valid_range(const _Tp *__first, const _Tp *__last) {
  if (__libcpp_is_constant_evaluated()) {

    return __builtin_constant_p(__first <= __last) && __first <= __last;
  }

  return !__less<>()(__last, __first);
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, class _Up, class = void>
struct __is_less_than_comparable : false_type {};

template <class _Tp, class _Up>
struct __is_less_than_comparable<
    _Tp, _Up, __void_t<decltype(std::declval<_Tp>() < std::declval<_Up>())>>
    : true_type {};

template <
    class _Tp, class _Up,
    __enable_if_t<__is_less_than_comparable<const _Tp *, const _Up *>::value,
                  int> = 0>
constexpr __attribute__((__no_sanitize__("address"))) bool
__is_pointer_in_range(const _Tp *__begin, const _Tp *__end, const _Up *__ptr) {
  ((void)0);

  if (__libcpp_is_constant_evaluated()) {

    if (!__builtin_constant_p(__begin <= __ptr && __ptr < __end))
      return false;
  }

  return !__less<>()(__ptr, __begin) && __less<>()(__ptr, __end);
}

template <
    class _Tp, class _Up,
    __enable_if_t<!__is_less_than_comparable<const _Tp *, const _Up *>::value,
                  int> = 0>
constexpr __attribute__((__no_sanitize__("address"))) bool
__is_pointer_in_range(const _Tp *__begin, const _Tp *__end, const _Up *__ptr) {
  if (__libcpp_is_constant_evaluated())
    return false;

  return reinterpret_cast<const char *>(__begin) <=
             reinterpret_cast<const char *>(__ptr) &&
         reinterpret_cast<const char *>(__ptr) <
             reinterpret_cast<const char *>(__end);
}

template <class _Tp, class _Up>
constexpr bool __is_overlapping_range(const _Tp *__begin, const _Tp *__end,
                                      const _Up *__begin2) {
  auto __size = __end - __begin;
  auto __end2 = __begin2 + __size;
  return std::__is_pointer_in_range(__begin, __end, __begin2) ||
         std::__is_pointer_in_range(__begin2, __end2, __begin);
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> inline const bool __is_char_type = false;

template <> inline const bool __is_char_type<char> = true;

template <class _Tp>
inline constexpr size_t __constexpr_strlen(const _Tp *__str) noexcept {
  static_assert(__is_char_type<_Tp>,
                "__constexpr_strlen only works with char and char8_t");

  if (__libcpp_is_constant_evaluated()) {

    if constexpr (is_same_v<_Tp, char>)
      return __builtin_strlen(__str);

    size_t __i = 0;
    for (; __str[__i] != '\0'; ++__i)
      ;
    return __i;
  }
  return __builtin_strlen(reinterpret_cast<const char *>(__str));
}

template <class _Tp, class _Up>
constexpr int __constexpr_memcmp(const _Tp *__lhs, const _Up *__rhs,
                                 __element_count __n) {
  static_assert(
      __is_trivially_lexicographically_comparable_v<_Tp, _Up>,
      "_Tp and _Up have to be trivially lexicographically comparable");

  auto __count = static_cast<size_t>(__n);

  if (__libcpp_is_constant_evaluated()) {

    if (sizeof(_Tp) == 1 && !is_same<_Tp, bool>::value)
      return __builtin_memcmp(__lhs, __rhs, __count * sizeof(_Tp));

    while (__count != 0) {
      if (*__lhs < *__rhs)
        return -1;
      if (*__rhs < *__lhs)
        return 1;

      --__count;
      ++__lhs;
      ++__rhs;
    }
    return 0;
  } else {
    return __builtin_memcmp(__lhs, __rhs, __count * sizeof(_Tp));
  }
}

template <class _Tp, class _Up>
constexpr bool __constexpr_memcmp_equal(const _Tp *__lhs, const _Up *__rhs,
                                        __element_count __n) {
  static_assert(__libcpp_is_trivially_equality_comparable<_Tp, _Up>::value,
                "_Tp and _Up have to be trivially equality comparable");

  auto __count = static_cast<size_t>(__n);

  if (__libcpp_is_constant_evaluated()) {

    if (sizeof(_Tp) == 1 && is_integral<_Tp>::value &&
        !is_same<_Tp, bool>::value)
      return __builtin_memcmp(__lhs, __rhs, __count * sizeof(_Tp)) == 0;

    while (__count != 0) {
      if (*__lhs != *__rhs)
        return false;

      --__count;
      ++__lhs;
      ++__rhs;
    }
    return true;
  } else {
    return ::__builtin_memcmp(__lhs, __rhs, __count * sizeof(_Tp)) == 0;
  }
}

template <class _Tp, class _Up>
constexpr _Tp *__constexpr_memchr(_Tp *__str, _Up __value, size_t __count) {
  static_assert(
      sizeof(_Tp) == 1 &&
          __libcpp_is_trivially_equality_comparable<_Tp, _Up>::value,
      "Calling memchr on non-trivially equality comparable types is unsafe.");

  if (__libcpp_is_constant_evaluated()) {

    if constexpr (is_same_v<remove_cv_t<_Tp>, char> &&
                  is_same_v<remove_cv_t<_Up>, char>)
      return __builtin_char_memchr(__str, __value, __count);

    for (; __count; --__count) {
      if (*__str == __value)
        return __str;
      ++__str;
    }
    return nullptr;
  } else {
    char __value_buffer = 0;
    __builtin_memcpy(&__value_buffer, std::addressof(__value), sizeof(char));
    return static_cast<_Tp *>(__builtin_memchr(__str, __value_buffer, __count));
  }
}
template <class _Tp, class _Up,
          __enable_if_t<is_assignable<_Tp &, _Up const &>::value, int> = 0>
constexpr _Tp &__assign_trivially_copyable(_Tp &__dest, _Up const &__src) {
  __dest = __src;
  return __dest;
}

template <class _Tp, class _Up,
          __enable_if_t<!is_assignable<_Tp &, _Up const &>::value &&
                            is_assignable<_Tp &, _Up &&>::value,
                        int> = 0>

constexpr _Tp &__assign_trivially_copyable(_Tp &__dest, _Up &__src) {
  __dest = static_cast<_Up &&>(__src);
  return __dest;
}

template <class _Tp, class _Up,
          __enable_if_t<!is_assignable<_Tp &, _Up const &>::value &&
                            !is_assignable<_Tp &, _Up &&>::value &&
                            is_constructible<_Tp, _Up const &>::value,
                        int> = 0>

_Tp &__assign_trivially_copyable(_Tp &__dest, _Up const &__src) {

  std::__construct_at(std::addressof(__dest), __src);
  return __dest;
}

template <class _Tp, class _Up,
          __enable_if_t<!is_assignable<_Tp &, _Up const &>::value &&
                            !is_assignable<_Tp &, _Up &&>::value &&
                            !is_constructible<_Tp, _Up const &>::value &&
                            is_constructible<_Tp, _Up &&>::value,
                        int> = 0>

_Tp &__assign_trivially_copyable(_Tp &__dest, _Up &__src) {

  std::__construct_at(std::addressof(__dest), static_cast<_Up &&>(__src));
  return __dest;
}

template <class _Tp, class _Up>
constexpr _Tp *__constexpr_memmove(_Tp *__dest, _Up *__src,
                                   __element_count __n) {
  static_assert(__is_always_bitcastable<_Up, _Tp>::value);
  size_t __count = static_cast<size_t>(__n);
  if (__libcpp_is_constant_evaluated()) {

    if constexpr (is_same<__remove_cv_t<_Tp>, __remove_cv_t<_Up>>::value) {
      ::__builtin_memmove(__dest, __src, __count * sizeof(_Tp));
      return __dest;
    } else

    {
      if (std::__is_pointer_in_range(__src, __src + __count, __dest)) {
        for (; __count > 0; --__count)
          std::__assign_trivially_copyable(__dest[__count - 1],
                                           __src[__count - 1]);
      } else {
        for (size_t __i = 0; __i != __count; ++__i)
          std::__assign_trivially_copyable(__dest[__i], __src[__i]);
      }
    }
  } else if (__count > 0) {
    ::__builtin_memmove(__dest, __src,
                        (__count - 1) * sizeof(_Tp) + __datasizeof_v<_Tp>);
  }
  return __dest;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

extern "C" {

enum {
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc(void) noexcept(true)
    __attribute__((__const__));
extern const __int32_t **__ctype_tolower_loc(void) noexcept(true)
    __attribute__((__const__));
extern const __int32_t **__ctype_toupper_loc(void) noexcept(true)
    __attribute__((__const__));
extern int isalnum(int) noexcept(true);
extern int isalpha(int) noexcept(true);
extern int iscntrl(int) noexcept(true);
extern int isdigit(int) noexcept(true);
extern int islower(int) noexcept(true);
extern int isgraph(int) noexcept(true);
extern int isprint(int) noexcept(true);
extern int ispunct(int) noexcept(true);
extern int isspace(int) noexcept(true);
extern int isupper(int) noexcept(true);
extern int isxdigit(int) noexcept(true);

extern int tolower(int __c) noexcept(true);

extern int toupper(int __c) noexcept(true);

extern int isblank(int) noexcept(true);

extern int isctype(int __c, int __mask) noexcept(true);

extern int isascii(int __c) noexcept(true);

extern int toascii(int __c) noexcept(true);

extern int _toupper(int) noexcept(true);
extern int _tolower(int) noexcept(true);
struct __locale_struct {

  struct __locale_data *__locales[13];

  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;
extern int isalnum_l(int, locale_t) noexcept(true);
extern int isalpha_l(int, locale_t) noexcept(true);
extern int iscntrl_l(int, locale_t) noexcept(true);
extern int isdigit_l(int, locale_t) noexcept(true);
extern int islower_l(int, locale_t) noexcept(true);
extern int isgraph_l(int, locale_t) noexcept(true);
extern int isprint_l(int, locale_t) noexcept(true);
extern int ispunct_l(int, locale_t) noexcept(true);
extern int isspace_l(int, locale_t) noexcept(true);
extern int isupper_l(int, locale_t) noexcept(true);
extern int isxdigit_l(int, locale_t) noexcept(true);

extern int isblank_l(int, locale_t) noexcept(true);

extern int __tolower_l(int __c, locale_t __l) noexcept(true);
extern int tolower_l(int __c, locale_t __l) noexcept(true);

extern int __toupper_l(int __c, locale_t __l) noexcept(true);
extern int toupper_l(int __c, locale_t __l) noexcept(true);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
#pragma clang diagnostic pop

typedef unsigned int wint_t;
typedef unsigned long int wctype_t;
enum {
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper =
      ((__ISwupper) < 8
           ? (int)((1UL << (__ISwupper)) << 24)
           : ((__ISwupper) < 16
                  ? (int)((1UL << (__ISwupper)) << 8)
                  : ((__ISwupper) < 24 ? (int)((1UL << (__ISwupper)) >> 8)
                                       : (int)((1UL << (__ISwupper)) >> 24)))),
  _ISwlower =
      ((__ISwlower) < 8
           ? (int)((1UL << (__ISwlower)) << 24)
           : ((__ISwlower) < 16
                  ? (int)((1UL << (__ISwlower)) << 8)
                  : ((__ISwlower) < 24 ? (int)((1UL << (__ISwlower)) >> 8)
                                       : (int)((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha =
      ((__ISwalpha) < 8
           ? (int)((1UL << (__ISwalpha)) << 24)
           : ((__ISwalpha) < 16
                  ? (int)((1UL << (__ISwalpha)) << 8)
                  : ((__ISwalpha) < 24 ? (int)((1UL << (__ISwalpha)) >> 8)
                                       : (int)((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit =
      ((__ISwdigit) < 8
           ? (int)((1UL << (__ISwdigit)) << 24)
           : ((__ISwdigit) < 16
                  ? (int)((1UL << (__ISwdigit)) << 8)
                  : ((__ISwdigit) < 24 ? (int)((1UL << (__ISwdigit)) >> 8)
                                       : (int)((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit =
      ((__ISwxdigit) < 8 ? (int)((1UL << (__ISwxdigit)) << 24)
                         : ((__ISwxdigit) < 16
                                ? (int)((1UL << (__ISwxdigit)) << 8)
                                : ((__ISwxdigit) < 24
                                       ? (int)((1UL << (__ISwxdigit)) >> 8)
                                       : (int)((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace =
      ((__ISwspace) < 8
           ? (int)((1UL << (__ISwspace)) << 24)
           : ((__ISwspace) < 16
                  ? (int)((1UL << (__ISwspace)) << 8)
                  : ((__ISwspace) < 24 ? (int)((1UL << (__ISwspace)) >> 8)
                                       : (int)((1UL << (__ISwspace)) >> 24)))),
  _ISwprint =
      ((__ISwprint) < 8
           ? (int)((1UL << (__ISwprint)) << 24)
           : ((__ISwprint) < 16
                  ? (int)((1UL << (__ISwprint)) << 8)
                  : ((__ISwprint) < 24 ? (int)((1UL << (__ISwprint)) >> 8)
                                       : (int)((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph =
      ((__ISwgraph) < 8
           ? (int)((1UL << (__ISwgraph)) << 24)
           : ((__ISwgraph) < 16
                  ? (int)((1UL << (__ISwgraph)) << 8)
                  : ((__ISwgraph) < 24 ? (int)((1UL << (__ISwgraph)) >> 8)
                                       : (int)((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank =
      ((__ISwblank) < 8
           ? (int)((1UL << (__ISwblank)) << 24)
           : ((__ISwblank) < 16
                  ? (int)((1UL << (__ISwblank)) << 8)
                  : ((__ISwblank) < 24 ? (int)((1UL << (__ISwblank)) >> 8)
                                       : (int)((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl =
      ((__ISwcntrl) < 8
           ? (int)((1UL << (__ISwcntrl)) << 24)
           : ((__ISwcntrl) < 16
                  ? (int)((1UL << (__ISwcntrl)) << 8)
                  : ((__ISwcntrl) < 24 ? (int)((1UL << (__ISwcntrl)) >> 8)
                                       : (int)((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct =
      ((__ISwpunct) < 8
           ? (int)((1UL << (__ISwpunct)) << 24)
           : ((__ISwpunct) < 16
                  ? (int)((1UL << (__ISwpunct)) << 8)
                  : ((__ISwpunct) < 24 ? (int)((1UL << (__ISwpunct)) >> 8)
                                       : (int)((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum =
      ((__ISwalnum) < 8
           ? (int)((1UL << (__ISwalnum)) << 24)
           : ((__ISwalnum) < 16
                  ? (int)((1UL << (__ISwalnum)) << 8)
                  : ((__ISwalnum) < 24 ? (int)((1UL << (__ISwalnum)) >> 8)
                                       : (int)((1UL << (__ISwalnum)) >> 24))))
};

extern "C" {

extern int iswalnum(wint_t __wc) noexcept(true);

extern int iswalpha(wint_t __wc) noexcept(true);

extern int iswcntrl(wint_t __wc) noexcept(true);

extern int iswdigit(wint_t __wc) noexcept(true);

extern int iswgraph(wint_t __wc) noexcept(true);

extern int iswlower(wint_t __wc) noexcept(true);

extern int iswprint(wint_t __wc) noexcept(true);

extern int iswpunct(wint_t __wc) noexcept(true);

extern int iswspace(wint_t __wc) noexcept(true);

extern int iswupper(wint_t __wc) noexcept(true);

extern int iswxdigit(wint_t __wc) noexcept(true);

extern int iswblank(wint_t __wc) noexcept(true);
extern wctype_t wctype(const char *__property) noexcept(true);

extern int iswctype(wint_t __wc, wctype_t __desc) noexcept(true);

extern wint_t towlower(wint_t __wc) noexcept(true);

extern wint_t towupper(wint_t __wc) noexcept(true);
}

extern "C" {

typedef const __int32_t *wctrans_t;

extern wctrans_t wctrans(const char *__property) noexcept(true);

extern wint_t towctrans(wint_t __wc, wctrans_t __desc) noexcept(true);

extern int iswalnum_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswalpha_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswcntrl_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswdigit_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswgraph_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswlower_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswprint_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswpunct_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswspace_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswupper_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswxdigit_l(wint_t __wc, locale_t __locale) noexcept(true);

extern int iswblank_l(wint_t __wc, locale_t __locale) noexcept(true);

extern wctype_t wctype_l(const char *__property,
                         locale_t __locale) noexcept(true);

extern int iswctype_l(wint_t __wc, wctype_t __desc,
                      locale_t __locale) noexcept(true);

extern wint_t towlower_l(wint_t __wc, locale_t __locale) noexcept(true);

extern wint_t towupper_l(wint_t __wc, locale_t __locale) noexcept(true);

extern wctrans_t wctrans_l(const char *__property,
                           locale_t __locale) noexcept(true);

extern wint_t towctrans_l(wint_t __wc, wctrans_t __desc,
                          locale_t __locale) noexcept(true);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using ::wint_t __attribute__((__using_if_exists__));
using ::wctrans_t __attribute__((__using_if_exists__));
using ::wctype_t __attribute__((__using_if_exists__));
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

typedef _Complex float __cfloat128;
typedef int _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;

typedef __builtin_va_list __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef struct {
  int __count;
  union {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;

typedef __mbstate_t mbstate_t;

struct _IO_FILE;
typedef struct _IO_FILE __FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;
extern "C" {

struct tm;

extern wchar_t *wcscpy(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcsncpy(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src,
                        size_t __n) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern size_t wcslcpy(wchar_t *__restrict __dest,
                      const wchar_t *__restrict __src,
                      size_t __n) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern size_t wcslcat(wchar_t *__restrict __dest,
                      const wchar_t *__restrict __src,
                      size_t __n) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcscat(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern wchar_t *wcsncat(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src,
                        size_t __n) noexcept(true)
    __attribute__((__nonnull__(1, 2)));

extern int wcscmp(const wchar_t *__s1, const wchar_t *__s2) noexcept(true)
    __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int wcsncmp(const wchar_t *__s1, const wchar_t *__s2,
                   size_t __n) noexcept(true) __attribute__((__pure__))
__attribute__((__nonnull__(1, 2)));

extern int wcscasecmp(const wchar_t *__s1, const wchar_t *__s2) noexcept(true);

extern int wcsncasecmp(const wchar_t *__s1, const wchar_t *__s2,
                       size_t __n) noexcept(true);

extern int wcscasecmp_l(const wchar_t *__s1, const wchar_t *__s2,
                        locale_t __loc) noexcept(true);

extern int wcsncasecmp_l(const wchar_t *__s1, const wchar_t *__s2, size_t __n,
                         locale_t __loc) noexcept(true);

extern int wcscoll(const wchar_t *__s1, const wchar_t *__s2) noexcept(true);

extern size_t wcsxfrm(wchar_t *__restrict __s1, const wchar_t *__restrict __s2,
                      size_t __n) noexcept(true);

extern int wcscoll_l(const wchar_t *__s1, const wchar_t *__s2,
                     locale_t __loc) noexcept(true);

extern size_t wcsxfrm_l(wchar_t *__s1, const wchar_t *__s2, size_t __n,
                        locale_t __loc) noexcept(true);

extern wchar_t *wcsdup(const wchar_t *__s) noexcept(true)
    __attribute__((__malloc__));

extern "C++" wchar_t *wcschr(wchar_t *__wcs,
                             wchar_t __wc) noexcept(true) __asm("wcschr")
    __attribute__((__pure__));
extern "C++" const wchar_t *wcschr(const wchar_t *__wcs,
                                   wchar_t __wc) noexcept(true) __asm("wcschr")
    __attribute__((__pure__));

extern "C++" wchar_t *wcsrchr(wchar_t *__wcs,
                              wchar_t __wc) noexcept(true) __asm("wcsrchr")
    __attribute__((__pure__));
extern "C++" const wchar_t *
wcsrchr(const wchar_t *__wcs, wchar_t __wc) noexcept(true) __asm("wcsrchr")
    __attribute__((__pure__));
extern wchar_t *wcschrnul(const wchar_t *__s, wchar_t __wc) noexcept(true)
    __attribute__((__pure__));

extern size_t wcscspn(const wchar_t *__wcs,
                      const wchar_t *__reject) noexcept(true)
    __attribute__((__pure__));

extern size_t wcsspn(const wchar_t *__wcs,
                     const wchar_t *__accept) noexcept(true)
    __attribute__((__pure__));

extern "C++" wchar_t *
wcspbrk(wchar_t *__wcs, const wchar_t *__accept) noexcept(true) __asm("wcspbrk")
    __attribute__((__pure__));
extern "C++" const wchar_t *
wcspbrk(const wchar_t *__wcs,
        const wchar_t *__accept) noexcept(true) __asm("wcspbrk")
    __attribute__((__pure__));

extern "C++" wchar_t *
wcsstr(wchar_t *__haystack,
       const wchar_t *__needle) noexcept(true) __asm("wcsstr")
    __attribute__((__pure__));
extern "C++" const wchar_t *
wcsstr(const wchar_t *__haystack,
       const wchar_t *__needle) noexcept(true) __asm("wcsstr")
    __attribute__((__pure__));

extern wchar_t *wcstok(wchar_t *__restrict __s,
                       const wchar_t *__restrict __delim,
                       wchar_t **__restrict __ptr) noexcept(true);

extern size_t wcslen(const wchar_t *__s) noexcept(true)
    __attribute__((__pure__));

extern "C++" wchar_t *
wcswcs(wchar_t *__haystack,
       const wchar_t *__needle) noexcept(true) __asm("wcswcs")
    __attribute__((__pure__));
extern "C++" const wchar_t *
wcswcs(const wchar_t *__haystack,
       const wchar_t *__needle) noexcept(true) __asm("wcswcs")
    __attribute__((__pure__));
extern size_t wcsnlen(const wchar_t *__s, size_t __maxlen) noexcept(true)
    __attribute__((__pure__));

extern "C++" wchar_t *wmemchr(wchar_t *__s, wchar_t __c,
                              size_t __n) noexcept(true) __asm("wmemchr")
    __attribute__((__pure__));
extern "C++" const wchar_t *wmemchr(const wchar_t *__s, wchar_t __c,
                                    size_t __n) noexcept(true) __asm("wmemchr")
    __attribute__((__pure__));

extern int wmemcmp(const wchar_t *__s1, const wchar_t *__s2,
                   size_t __n) noexcept(true) __attribute__((__pure__));

extern wchar_t *wmemcpy(wchar_t *__restrict __s1,
                        const wchar_t *__restrict __s2,
                        size_t __n) noexcept(true);

extern wchar_t *wmemmove(wchar_t *__s1, const wchar_t *__s2,
                         size_t __n) noexcept(true);

extern wchar_t *wmemset(wchar_t *__s, wchar_t __c, size_t __n) noexcept(true);

extern wchar_t *wmempcpy(wchar_t *__restrict __s1,
                         const wchar_t *__restrict __s2,
                         size_t __n) noexcept(true);

extern wint_t btowc(int __c) noexcept(true);

extern int wctob(wint_t __c) noexcept(true);

extern int mbsinit(const mbstate_t *__ps) noexcept(true)
    __attribute__((__pure__));

extern size_t mbrtowc(wchar_t *__restrict __pwc, const char *__restrict __s,
                      size_t __n, mbstate_t *__restrict __p) noexcept(true);

extern size_t wcrtomb(char *__restrict __s, wchar_t __wc,
                      mbstate_t *__restrict __ps) noexcept(true);

extern size_t __mbrlen(const char *__restrict __s, size_t __n,
                       mbstate_t *__restrict __ps) noexcept(true);
extern size_t mbrlen(const char *__restrict __s, size_t __n,
                     mbstate_t *__restrict __ps) noexcept(true);
extern size_t mbsrtowcs(wchar_t *__restrict __dst,
                        const char **__restrict __src, size_t __len,
                        mbstate_t *__restrict __ps) noexcept(true);

extern size_t wcsrtombs(char *__restrict __dst,
                        const wchar_t **__restrict __src, size_t __len,
                        mbstate_t *__restrict __ps) noexcept(true);

extern size_t mbsnrtowcs(wchar_t *__restrict __dst,
                         const char **__restrict __src, size_t __nmc,
                         size_t __len,
                         mbstate_t *__restrict __ps) noexcept(true);

extern size_t wcsnrtombs(char *__restrict __dst,
                         const wchar_t **__restrict __src, size_t __nwc,
                         size_t __len,
                         mbstate_t *__restrict __ps) noexcept(true);

extern int wcwidth(wchar_t __c) noexcept(true);

extern int wcswidth(const wchar_t *__s, size_t __n) noexcept(true);

extern double wcstod(const wchar_t *__restrict __nptr,
                     wchar_t **__restrict __endptr) noexcept(true);

extern float wcstof(const wchar_t *__restrict __nptr,
                    wchar_t **__restrict __endptr) noexcept(true);
extern long double wcstold(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr) noexcept(true);
extern _Float32 wcstof32(const wchar_t *__restrict __nptr,
                         wchar_t **__restrict __endptr) noexcept(true);

extern _Float64 wcstof64(const wchar_t *__restrict __nptr,
                         wchar_t **__restrict __endptr) noexcept(true);

extern _Float128 wcstof128(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr) noexcept(true);

extern _Float32x wcstof32x(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr) noexcept(true);

extern _Float64x wcstof64x(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr) noexcept(true);
extern long int wcstol(const wchar_t *__restrict __nptr,
                       wchar_t **__restrict __endptr,
                       int __base) noexcept(true);

extern unsigned long int wcstoul(const wchar_t *__restrict __nptr,
                                 wchar_t **__restrict __endptr,
                                 int __base) noexcept(true);

__extension__ extern long long int wcstoll(const wchar_t *__restrict __nptr,
                                           wchar_t **__restrict __endptr,
                                           int __base) noexcept(true);

__extension__ extern unsigned long long int
wcstoull(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
         int __base) noexcept(true);

__extension__ extern long long int wcstoq(const wchar_t *__restrict __nptr,
                                          wchar_t **__restrict __endptr,
                                          int __base) noexcept(true);

__extension__ extern unsigned long long int
wcstouq(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
        int __base) noexcept(true);

extern long int wcstol(const wchar_t *__restrict __nptr,
                       wchar_t **__restrict __endptr,
                       int __base) noexcept(true) __asm__(""
                                                          "__isoc23_wcstol");

extern unsigned long int
wcstoul(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
        int __base) noexcept(true) __asm__(""
                                           "__isoc23_wcstoul");

__extension__ extern long long int
wcstoll(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
        int __base) noexcept(true) __asm__(""
                                           "__isoc23_wcstoll");

__extension__ extern unsigned long long int
wcstoull(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
         int __base) noexcept(true) __asm__(""
                                            "__isoc23_wcstoull");

__extension__ extern long long int
wcstoq(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
       int __base) noexcept(true) __asm__(""
                                          "__isoc23_wcstoll");

__extension__ extern unsigned long long int
wcstouq(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
        int __base) noexcept(true) __asm__(""
                                           "__isoc23_wcstoull");
extern long int wcstol_l(const wchar_t *__restrict __nptr,
                         wchar_t **__restrict __endptr, int __base,
                         locale_t __loc) noexcept(true);

extern unsigned long int wcstoul_l(const wchar_t *__restrict __nptr,
                                   wchar_t **__restrict __endptr, int __base,
                                   locale_t __loc) noexcept(true);

__extension__ extern long long int wcstoll_l(const wchar_t *__restrict __nptr,
                                             wchar_t **__restrict __endptr,
                                             int __base,
                                             locale_t __loc) noexcept(true);

__extension__ extern unsigned long long int
wcstoull_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
           int __base, locale_t __loc) noexcept(true);

extern long int
wcstol_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
         int __base,
         locale_t __loc) noexcept(true) __asm__(""
                                                "__isoc23_wcstol_l");

extern unsigned long int
wcstoul_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
          int __base,
          locale_t __loc) noexcept(true) __asm__(""
                                                 "__isoc23_wcstoul_l");

__extension__ extern long long int
wcstoll_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
          int __base,
          locale_t __loc) noexcept(true) __asm__(""
                                                 "__isoc23_wcstoll_l");

__extension__ extern unsigned long long int
wcstoull_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr,
           int __base,
           locale_t __loc) noexcept(true) __asm__(""
                                                  "__isoc23_wcstoull_l");
extern double wcstod_l(const wchar_t *__restrict __nptr,
                       wchar_t **__restrict __endptr,
                       locale_t __loc) noexcept(true);

extern float wcstof_l(const wchar_t *__restrict __nptr,
                      wchar_t **__restrict __endptr,
                      locale_t __loc) noexcept(true);

extern long double wcstold_l(const wchar_t *__restrict __nptr,
                             wchar_t **__restrict __endptr,
                             locale_t __loc) noexcept(true);
extern _Float32 wcstof32_l(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr,
                           locale_t __loc) noexcept(true);

extern _Float64 wcstof64_l(const wchar_t *__restrict __nptr,
                           wchar_t **__restrict __endptr,
                           locale_t __loc) noexcept(true);

extern _Float128 wcstof128_l(const wchar_t *__restrict __nptr,
                             wchar_t **__restrict __endptr,
                             locale_t __loc) noexcept(true);

extern _Float32x wcstof32x_l(const wchar_t *__restrict __nptr,
                             wchar_t **__restrict __endptr,
                             locale_t __loc) noexcept(true);

extern _Float64x wcstof64x_l(const wchar_t *__restrict __nptr,
                             wchar_t **__restrict __endptr,
                             locale_t __loc) noexcept(true);
extern wchar_t *wcpcpy(wchar_t *__restrict __dest,
                       const wchar_t *__restrict __src) noexcept(true);

extern wchar_t *wcpncpy(wchar_t *__restrict __dest,
                        const wchar_t *__restrict __src,
                        size_t __n) noexcept(true);
extern __FILE *open_wmemstream(wchar_t **__bufloc,
                               size_t *__sizeloc) noexcept(true)
    __attribute__((__malloc__));

extern int fwide(__FILE *__fp, int __mode) noexcept(true);

extern int fwprintf(__FILE *__restrict __stream,
                    const wchar_t *__restrict __format, ...);

extern int wprintf(const wchar_t *__restrict __format, ...);

extern int swprintf(wchar_t *__restrict __s, size_t __n,
                    const wchar_t *__restrict __format, ...) noexcept(true);

extern int vfwprintf(__FILE *__restrict __s, const wchar_t *__restrict __format,
                     __gnuc_va_list __arg);

extern int vwprintf(const wchar_t *__restrict __format, __gnuc_va_list __arg);

extern int vswprintf(wchar_t *__restrict __s, size_t __n,
                     const wchar_t *__restrict __format,
                     __gnuc_va_list __arg) noexcept(true);

extern int fwscanf(__FILE *__restrict __stream,
                   const wchar_t *__restrict __format, ...);

extern int wscanf(const wchar_t *__restrict __format, ...);

extern int swscanf(const wchar_t *__restrict __s,
                   const wchar_t *__restrict __format, ...) noexcept(true);
extern int fwscanf(__FILE *__restrict __stream,
                   const wchar_t *__restrict __format,
                   ...) __asm__(""
                                "__isoc23_fwscanf")

    ;
extern int wscanf(const wchar_t *__restrict __format,
                  ...) __asm__(""
                               "__isoc23_wscanf")

    ;
extern int swscanf(const wchar_t *__restrict __s,
                   const wchar_t *__restrict __format,
                   ...) noexcept(true) __asm__(""
                                               "__isoc23_swscanf")

    ;
extern int vfwscanf(__FILE *__restrict __s, const wchar_t *__restrict __format,
                    __gnuc_va_list __arg);

extern int vwscanf(const wchar_t *__restrict __format, __gnuc_va_list __arg);

extern int vswscanf(const wchar_t *__restrict __s,
                    const wchar_t *__restrict __format,
                    __gnuc_va_list __arg) noexcept(true);
extern int vfwscanf(__FILE *__restrict __s, const wchar_t *__restrict __format,
                    __gnuc_va_list __arg) __asm__(""
                                                  "__isoc23_vfwscanf")

    ;
extern int vwscanf(const wchar_t *__restrict __format,
                   __gnuc_va_list __arg) __asm__(""
                                                 "__isoc23_vwscanf")

    ;
extern int
vswscanf(const wchar_t *__restrict __s, const wchar_t *__restrict __format,
         __gnuc_va_list __arg) noexcept(true) __asm__(""
                                                      "__isoc23_vswscanf")

    ;
extern wint_t fgetwc(__FILE *__stream);
extern wint_t getwc(__FILE *__stream);

extern wint_t getwchar(void);

extern wint_t fputwc(wchar_t __wc, __FILE *__stream);
extern wint_t putwc(wchar_t __wc, __FILE *__stream);

extern wint_t putwchar(wchar_t __wc);

extern wchar_t *fgetws(wchar_t *__restrict __ws, int __n,
                       __FILE *__restrict __stream);

extern int fputws(const wchar_t *__restrict __ws, __FILE *__restrict __stream);

extern wint_t ungetwc(wint_t __wc, __FILE *__stream);
extern wint_t getwc_unlocked(__FILE *__stream);
extern wint_t getwchar_unlocked(void);

extern wint_t fgetwc_unlocked(__FILE *__stream);

extern wint_t fputwc_unlocked(wchar_t __wc, __FILE *__stream);
extern wint_t putwc_unlocked(wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked(wchar_t __wc);
extern wchar_t *fgetws_unlocked(wchar_t *__restrict __ws, int __n,
                                __FILE *__restrict __stream);

extern int fputws_unlocked(const wchar_t *__restrict __ws,
                           __FILE *__restrict __stream);

extern size_t wcsftime(wchar_t *__restrict __s, size_t __maxsize,
                       const wchar_t *__restrict __format,
                       const struct tm *__restrict __tp) noexcept(true);

extern size_t wcsftime_l(wchar_t *__restrict __s, size_t __maxsize,
                         const wchar_t *__restrict __format,
                         const struct tm *__restrict __tp,
                         locale_t __loc) noexcept(true);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

using ::mbstate_t __attribute__((__using_if_exists__));
using ::wint_t __attribute__((__using_if_exists__));
using ::FILE __attribute__((__using_if_exists__));

inline constexpr size_t __constexpr_wcslen(const wchar_t *__str) {

  return __builtin_wcslen(__str);
}

inline constexpr int __constexpr_wmemcmp(const wchar_t *__lhs,
                                         const wchar_t *__rhs, size_t __count) {

  return __builtin_wmemcmp(__lhs, __rhs, __count);
}

template <class _Tp, class _Up>
constexpr _Tp *__constexpr_wmemchr(_Tp *__str, _Up __value, size_t __count) {
  static_assert(
      sizeof(_Tp) == sizeof(wchar_t) && alignof(_Tp) >= alignof(wchar_t) &&
          __libcpp_is_trivially_equality_comparable<_Tp, _Tp>::value,
      "Calling wmemchr on non-trivially equality comparable types is unsafe.");

  if (!__libcpp_is_constant_evaluated()) {
    wchar_t __value_buffer = 0;
    __builtin_memcpy(&__value_buffer, std::addressof(__value), sizeof(wchar_t));
    return reinterpret_cast<_Tp *>(
        __builtin_wmemchr(reinterpret_cast<__copy_cv_t<_Tp, wchar_t> *>(__str),
                          __value_buffer, __count));
  }

  else if constexpr (is_same_v<remove_cv_t<_Tp>, wchar_t>)
    return __builtin_wmemchr(__str, __value, __count);

  for (; __count; --__count) {
    if (*__str == __value)
      return __str;
    ++__str;
  }
  return nullptr;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Iter, class _Sent, class _Tp, class _Proj>
constexpr _Iter __find(_Iter __first, _Sent __last, const _Tp &__value,
                       _Proj &__proj) {
  for (; __first != __last; ++__first)
    if (std::__invoke(__proj, *__first) == __value)
      break;
  return __first;
}

template <class _Tp, class _Up, class _Proj,
          __enable_if_t<
              __is_identity<_Proj>::value &&
                  __libcpp_is_trivially_equality_comparable<_Tp, _Up>::value &&
                  sizeof(_Tp) == 1,
              int> = 0>
constexpr _Tp *__find(_Tp *__first, _Tp *__last, const _Up &__value, _Proj &) {
  if (auto __ret = std::__constexpr_memchr(__first, __value, __last - __first))
    return __ret;
  return __last;
}

template <
    class _Tp, class _Up, class _Proj,
    __enable_if_t<
        __is_identity<_Proj>::value &&
            __libcpp_is_trivially_equality_comparable<_Tp, _Up>::value &&
            sizeof(_Tp) == sizeof(wchar_t) && alignof(_Tp) >= alignof(wchar_t),
        int> = 0>
constexpr _Tp *__find(_Tp *__first, _Tp *__last, const _Up &__value, _Proj &) {
  if (auto __ret = std::__constexpr_wmemchr(__first, __value, __last - __first))
    return __ret;
  return __last;
}

template <class _Tp, class _Up, class _Proj,
          __enable_if_t<
              __is_identity<_Proj>::value &&
                  !__libcpp_is_trivially_equality_comparable<_Tp, _Up>::value &&
                  is_integral<_Tp>::value && is_integral<_Up>::value &&
                  is_signed<_Tp>::value == is_signed<_Up>::value,
              int> = 0>
constexpr _Tp *__find(_Tp *__first, _Tp *__last, const _Up &__value,
                      _Proj &__proj) {
  if (__value < numeric_limits<_Tp>::min() ||
      __value > numeric_limits<_Tp>::max())
    return __last;
  return std::__find(__first, __last, _Tp(__value), __proj);
}

template <bool _ToFind, class _Cp, bool _IsConst>
__bit_iterator<_Cp, _IsConst>
__find_bool(__bit_iterator<_Cp, _IsConst> __first,
            typename __size_difference_type_traits<_Cp>::size_type __n) {}

template <class _Cp, bool _IsConst, class _Tp, class _Proj,
          __enable_if_t<__is_identity<_Proj>::value, int> = 0>
inline __bit_iterator<_Cp, _IsConst>
__find(__bit_iterator<_Cp, _IsConst> __first,
       __bit_iterator<_Cp, _IsConst> __last, const _Tp &__value, _Proj &) {
  if (static_cast<bool>(__value))
    return std::__find_bool<true>(
        __first,
        static_cast<typename __size_difference_type_traits<_Cp>::size_type>(
            __last - __first));
  return std::__find_bool<false>(
      __first,
      static_cast<typename __size_difference_type_traits<_Cp>::size_type>(
          __last - __first));
}

template <class> struct __find_segment;

template <
    class _SegmentedIterator, class _Tp, class _Proj,
    __enable_if_t<__is_segmented_iterator<_SegmentedIterator>::value, int> = 0>
constexpr _SegmentedIterator __find(_SegmentedIterator __first,
                                    _SegmentedIterator __last,
                                    const _Tp &__value, _Proj &__proj) {
  return std::__find_segment_if(std::move(__first), std::move(__last),
                                __find_segment<_Tp>(__value), __proj);
}

template <class _Tp> struct __find_segment {
  const _Tp &__value_;

  constexpr __find_segment(const _Tp &__value) : __value_(__value) {}

  template <class _InputIterator, class _Proj>
  constexpr _InputIterator operator()(_InputIterator __first,
                                      _InputIterator __last,
                                      _Proj &__proj) const {
    return std::__find(__first, __last, __value_, __proj);
  }
};

template <class _InputIterator, class _Tp>
[[__nodiscard__]] inline _InputIterator
find(_InputIterator __first, _InputIterator __last, const _Tp &__value) {
  __identity __proj;
  return std::__rewrap_iter(__first, std::__find(std::__unwrap_iter(__first),
                                                 std::__unwrap_iter(__last),
                                                 __value, __proj));
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _InputIterator, class _Predicate>
[[__nodiscard__]] inline _InputIterator
find_if(_InputIterator __first, _InputIterator __last, _Predicate __pred) {
  for (; __first != __last; ++__first)
    if (__pred(*__first))
      break;
  return __first;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _ForwardIterator, class _Tp>
[[__nodiscard__]] _ForwardIterator
remove(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value) {
  __first = std::find(__first, __last, __value);
  if (__first != __last) {
    _ForwardIterator __i = __first;
    while (++__i != __last) {
      if (!(*__i == __value)) {
        *__first = std::move(*__i);
        ++__first;
      }
    }
  }
  return __first;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _ForwardIterator, class _Predicate>
[[__nodiscard__]] _ForwardIterator remove_if(_ForwardIterator __first,
                                             _ForwardIterator __last,
                                             _Predicate __pred) {
  __first =
      std::find_if<_ForwardIterator, _Predicate &>(__first, __last, __pred);
  if (__first != __last) {
    _ForwardIterator __i = __first;
    while (++__i != __last) {
      if (!__pred(*__i)) {
        *__first = std::move(*__i);
        ++__first;
      }
    }
  }
  return __first;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Allocator>
void __annotate_double_ended_contiguous_container(
    const void *__first_storage, const void *__last_storage,
    const void *__first_old_contained, const void *__last_old_contained,
    const void *__first_new_contained, const void *__last_new_contained) {

  (void)__first_storage;
  (void)__last_storage;
  (void)__first_old_contained;
  (void)__last_old_contained;
  (void)__first_new_contained;
  (void)__last_new_contained;
}

template <class _Allocator>
constexpr void __annotate_contiguous_container(
    const void *__first_storage, const void *__last_storage,
    const void *__old_last_contained, const void *__new_last_contained) {

  (void)__first_storage;
  (void)__last_storage;
  (void)__old_last_contained;
  (void)__new_last_contained;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Arg, class _Result> struct __unary_function_keep_layout_base {

  using argument_type __attribute__((__deprecated__)) = _Arg;
  using result_type __attribute__((__deprecated__)) = _Result;
};

template <class _Arg, class _Result>
using __unary_function [[__gnu__::__nodebug__]] =
    __unary_function_keep_layout_base<_Arg, _Result>;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp, size_t _Size> struct array;

template <size_t _Ip, class _Tp, size_t _Size>
constexpr _Tp &get(array<_Tp, _Size> &) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
constexpr const _Tp &get(const array<_Tp, _Size> &) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
constexpr _Tp &&get(array<_Tp, _Size> &&) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
constexpr const _Tp &&get(const array<_Tp, _Size> &&) noexcept;

template <class _Tp> inline const bool __is_std_array_v = false;

template <class _Tp, size_t _Size>
inline const bool __is_std_array_v<array<_Tp, _Size>> = true;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <size_t...> struct __tuple_indices;

template <class _IdxType, _IdxType... _Values> struct __integer_sequence {
  template <template <class _OIdxType, _OIdxType...> class _ToIndexSeq,
            class _ToIndexType>
  using __convert [[__gnu__::__nodebug__]] =
      _ToIndexSeq<_ToIndexType, _Values...>;

  template <size_t _Sp>
  using __to_tuple_indices [[__gnu__::__nodebug__]] =
      __tuple_indices<(_Values + _Sp)...>;
};

template <size_t _Ep, size_t _Sp>
using __make_indices_imp [[__gnu__::__nodebug__]] =
    typename __make_integer_seq<__integer_sequence, size_t,
                                _Ep - _Sp>::template __to_tuple_indices<_Sp>;
template <class _Tp, _Tp... _Ip> struct integer_sequence {
  typedef _Tp value_type;
  static_assert(
      is_integral<_Tp>::value,
      "std::integer_sequence can only be instantiated with an integral type");
  static constexpr size_t size() noexcept { return sizeof...(_Ip); }
};

template <size_t... _Ip>
using index_sequence = integer_sequence<size_t, _Ip...>;

template <class _Tp, _Tp _Ep>
using make_integer_sequence [[__gnu__::__nodebug__]] =
    __make_integer_seq<integer_sequence, _Tp, _Ep>;
template <size_t _Np>
using make_index_sequence = make_integer_sequence<size_t, _Np>;

template <class... _Tp>
using index_sequence_for = make_index_sequence<sizeof...(_Tp)>;
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <size_t...> struct __tuple_indices {};

template <size_t _Ep, size_t _Sp = 0> struct __make_tuple_indices {
  static_assert(_Sp <= _Ep, "__make_tuple_indices input error");
  typedef __make_indices_imp<_Ep, _Sp> type;
};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> class complex;
}
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class... _Tp> struct __tuple_types {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> struct tuple_size;

template <class _Tp, class...>
using __enable_if_tuple_size_imp [[__gnu__::__nodebug__]] = _Tp;

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<
    const _Tp, __enable_if_t<!is_volatile<_Tp>::value>,
    decltype(tuple_size<_Tp>::value)>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<
    volatile _Tp, __enable_if_t<!is_const<_Tp>::value>,
    decltype(tuple_size<_Tp>::value)>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<const volatile _Tp,
                                             decltype(tuple_size<_Tp>::value)>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};
template <class... _Tp>
struct tuple_size<tuple<_Tp...>>
    : public integral_constant<size_t, sizeof...(_Tp)> {};

template <class... _Tp>
struct tuple_size<__tuple_types<_Tp...>>
    : public integral_constant<size_t, sizeof...(_Tp)> {};

template <class _Tp>
inline constexpr size_t tuple_size_v = tuple_size<_Tp>::value;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> class allocator;

template <class _Tp> class shared_ptr;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _CharT> struct char_traits;
template <> struct char_traits<char>;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT>>
class basic_string;

using string = basic_string<char>;

template <class _CharT, class _Traits, class _Allocator>
class __attribute__((__preferred_name__(string))) basic_string;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

class ios_base;

template <class _CharT, class _Traits = char_traits<_CharT>> class basic_ios;

using ios = basic_ios<char>;

using wios = basic_ios<wchar_t>;

template <class _CharT, class _Traits>
class __attribute__((__preferred_name__(ios)))
__attribute__((__preferred_name__(wios))) basic_ios;

using streamoff = long long;

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

template <class _Tp>
using __pointer_member [[__gnu__::__nodebug__]] = typename _Tp::pointer;

template <class _Tp, class _Alloc>
using __pointer [[__gnu__::__nodebug__]] =
    __detected_or_t<_Tp *, __pointer_member,
                    __libcpp_remove_reference_t<_Alloc>>;

template <class _Alloc, template <class> class _Alias, class _Ptr, class _Tp,
          class = void>
struct __rebind_or_alias_pointer {

  using type [[__gnu__::__nodebug__]] =
      typename pointer_traits<_Ptr>::template rebind<_Tp>;
};

template <class _Ptr, class _Alloc, class _Tp, template <class> class _Alias>
struct __rebind_or_alias_pointer<_Alloc, _Alias, _Ptr, _Tp,
                                 __void_t<_Alias<_Alloc>>> {
  using type [[__gnu__::__nodebug__]] = _Alias<_Alloc>;
};

template <class _Alloc>
using __const_pointer_member [[__gnu__::__nodebug__]] =
    typename _Alloc::const_pointer;

template <class _Tp, class _Ptr, class _Alloc>
using __const_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __const_pointer_member, _Ptr,
                                       const _Tp>::type;
#pragma GCC diagnostic pop

template <class _Alloc>
using __void_pointer_member [[__gnu__::__nodebug__]] =
    typename _Alloc::void_pointer;

template <class _Ptr, class _Alloc>
using __void_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __void_pointer_member, _Ptr,
                                       void>::type;

template <class _Alloc>
using __const_void_pointer_member [[__gnu__::__nodebug__]] =
    typename _Alloc::const_void_pointer;

template <class _Ptr, class _Alloc>
using __const_void_pointer_t [[__gnu__::__nodebug__]] =
    typename __rebind_or_alias_pointer<_Alloc, __const_void_pointer_member,
                                       _Ptr, const void>::type;

template <class _Tp>
using __size_type_member [[__gnu__::__nodebug__]] = typename _Tp::size_type;

template <class _Alloc, class _DiffType>
using __size_type [[__gnu__::__nodebug__]] =
    __detected_or_t<__make_unsigned_t<_DiffType>, __size_type_member, _Alloc>;

template <class _Alloc, class _Ptr, class = void>
struct __alloc_traits_difference_type {
  using type [[__gnu__::__nodebug__]] =
      typename pointer_traits<_Ptr>::difference_type;
};

template <class _Alloc, class _Ptr>
struct __alloc_traits_difference_type<
    _Alloc, _Ptr, __void_t<typename _Alloc::difference_type>> {
  using type [[__gnu__::__nodebug__]] = typename _Alloc::difference_type;
};

template <class _Tp>
using __propagate_on_container_copy_assignment_member [[__gnu__::__nodebug__]] =
    typename _Tp::propagate_on_container_copy_assignment;

template <class _Alloc>
using __propagate_on_container_copy_assignment [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_copy_assignment_member,
                    _Alloc>;

template <class _Tp>
using __propagate_on_container_move_assignment_member [[__gnu__::__nodebug__]] =
    typename _Tp::propagate_on_container_move_assignment;

template <class _Alloc>
using __propagate_on_container_move_assignment [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_move_assignment_member,
                    _Alloc>;

template <class _Tp>
using __propagate_on_container_swap_member [[__gnu__::__nodebug__]] =
    typename _Tp::propagate_on_container_swap;

template <class _Alloc>
using __propagate_on_container_swap [[__gnu__::__nodebug__]] =
    __detected_or_t<false_type, __propagate_on_container_swap_member, _Alloc>;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

template <class _Tp>
using __is_always_equal_member [[__gnu__::__nodebug__]] =
    typename _Tp::is_always_equal;

template <class _Alloc>
using __is_always_equal [[__gnu__::__nodebug__]] =
    __detected_or_t<typename is_empty<_Alloc>::type, __is_always_equal_member,
                    _Alloc>;

template <class _Tp, class _Up, class = void>
inline const bool __has_rebind_other_v = false;
template <class _Tp, class _Up>
inline const bool __has_rebind_other_v<
    _Tp, _Up, __void_t<typename _Tp::template rebind<_Up>::other>> = true;

template <class _Tp, class _Up, bool = __has_rebind_other_v<_Tp, _Up>>
struct __allocator_traits_rebind {
  static_assert(__has_rebind_other_v<_Tp, _Up>,
                "This allocator has to implement rebind");
  using type [[__gnu__::__nodebug__]] =
      typename _Tp::template rebind<_Up>::other;
};
template <template <class, class...> class _Alloc, class _Tp, class... _Args,
          class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true> {
  using type [[__gnu__::__nodebug__]] =
      typename _Alloc<_Tp, _Args...>::template rebind<_Up>::other;
};
template <template <class, class...> class _Alloc, class _Tp, class... _Args,
          class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false> {
  using type [[__gnu__::__nodebug__]] = _Alloc<_Up, _Args...>;
};
#pragma GCC diagnostic pop

template <class _Alloc, class _Tp>
using __allocator_traits_rebind_t [[__gnu__::__nodebug__]] =
    typename __allocator_traits_rebind<_Alloc, _Tp>::type;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

template <class _Alloc, class _SizeType, class _ConstVoidPtr, class = void>
inline const bool __has_allocate_hint_v = false;

template <class _Alloc, class _SizeType, class _ConstVoidPtr>
inline const bool __has_allocate_hint_v<
    _Alloc, _SizeType, _ConstVoidPtr,
    decltype((void)std::declval<_Alloc>().allocate(
        std::declval<_SizeType>(), std::declval<_ConstVoidPtr>()))> = true;

template <class, class _Alloc, class... _Args>
inline const bool __has_construct_impl = false;

template <class _Alloc, class... _Args>
inline const bool __has_construct_impl<
    decltype((void)std::declval<_Alloc>().construct(std::declval<_Args>()...)),
    _Alloc, _Args...> = true;

template <class _Alloc, class... _Args>
inline const bool __has_construct_v =
    __has_construct_impl<void, _Alloc, _Args...>;

template <class _Alloc, class _Pointer, class = void>
inline const bool __has_destroy_v = false;

template <class _Alloc, class _Pointer>
inline const bool __has_destroy_v<_Alloc, _Pointer,
                                  decltype((void)std::declval<_Alloc>().destroy(
                                      std::declval<_Pointer>()))> = true;

template <class _Alloc, class = void>
inline const bool __has_max_size_v = false;

template <class _Alloc>
inline const bool __has_max_size_v<
    _Alloc, decltype((void)std::declval<_Alloc &>().max_size())> = true;

template <class _Alloc, class = void>
inline const bool __has_select_on_container_copy_construction_v = false;

template <class _Alloc>
inline const bool __has_select_on_container_copy_construction_v<
    _Alloc, decltype((void)std::declval<_Alloc>()
                         .select_on_container_copy_construction())> = true;

#pragma GCC diagnostic pop
template <class _Alloc> struct allocator_traits {
  using allocator_type = _Alloc;
  using value_type = typename allocator_type::value_type;
  using pointer = __pointer<value_type, allocator_type>;
  using const_pointer = __const_pointer_t<value_type, pointer, allocator_type>;
  using void_pointer = __void_pointer_t<pointer, allocator_type>;
  using const_void_pointer = __const_void_pointer_t<pointer, allocator_type>;
  using difference_type =
      typename __alloc_traits_difference_type<allocator_type, pointer>::type;
  using size_type = __size_type<allocator_type, difference_type>;
  using propagate_on_container_copy_assignment =
      __propagate_on_container_copy_assignment<allocator_type>;
  using propagate_on_container_move_assignment =
      __propagate_on_container_move_assignment<allocator_type>;
  using propagate_on_container_swap =
      __propagate_on_container_swap<allocator_type>;
  using is_always_equal = __is_always_equal<allocator_type>;

  template <class _Tp>
  using rebind_alloc = __allocator_traits_rebind_t<allocator_type, _Tp>;
  template <class _Tp>
  using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;
  [[__nodiscard__]] static pointer allocate(allocator_type &__a,
                                            size_type __n) {
    return __a.allocate(__n);
  }

  template <
      class _Ap = _Alloc,
      __enable_if_t<__has_allocate_hint_v<_Ap, size_type, const_void_pointer>,
                    int> = 0>
  [[__nodiscard__]] static pointer allocate(allocator_type &__a, size_type __n,
                                            const_void_pointer __hint) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
    return __a.allocate(__n, __hint);
#pragma GCC diagnostic pop
  }
  template <
      class _Ap = _Alloc,
      __enable_if_t<!__has_allocate_hint_v<_Ap, size_type, const_void_pointer>,
                    int> = 0>
  [[__nodiscard__]] static pointer allocate(allocator_type &__a, size_type __n,
                                            const_void_pointer) {
    return __a.allocate(__n);
  }
  static void deallocate(allocator_type &__a, pointer __p,
                         size_type __n) noexcept {
    __a.deallocate(__p, __n);
  }

  template <class _Tp, class... _Args,
            __enable_if_t<__has_construct_v<allocator_type, _Tp *, _Args...>,
                          int> = 0>
  static void construct(allocator_type &__a, _Tp *__p, _Args &&...__args) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
    __a.construct(__p, std::forward<_Args>(__args)...);
#pragma GCC diagnostic pop
  }
  template <class _Tp, class... _Args,
            __enable_if_t<!__has_construct_v<allocator_type, _Tp *, _Args...>,
                          int> = 0>
  static void construct(allocator_type &, _Tp *__p, _Args &&...__args) {
    std::__construct_at(__p, std::forward<_Args>(__args)...);
  }

  template <class _Tp,
            __enable_if_t<__has_destroy_v<allocator_type, _Tp *>, int> = 0>
  static void destroy(allocator_type &__a, _Tp *__p) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
    __a.destroy(__p);
#pragma GCC diagnostic pop
  }
  template <class _Tp,
            __enable_if_t<!__has_destroy_v<allocator_type, _Tp *>, int> = 0>
  static void destroy(allocator_type &, _Tp *__p) {
    std::__destroy_at(__p);
  }

  template <class _Ap = _Alloc,
            __enable_if_t<__has_max_size_v<const _Ap>, int> = 0>
  static size_type max_size(const allocator_type &__a) noexcept {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
    return __a.max_size();
#pragma GCC diagnostic pop
  }
  template <class _Ap = _Alloc,
            __enable_if_t<!__has_max_size_v<const _Ap>, int> = 0>
  static size_type max_size(const allocator_type &) noexcept {
    return numeric_limits<size_type>::max() / sizeof(value_type);
  }

  template <
      class _Ap = _Alloc,
      __enable_if_t<__has_select_on_container_copy_construction_v<const _Ap>,
                    int> = 0>
  static allocator_type
  select_on_container_copy_construction(const allocator_type &__a) {
    return __a.select_on_container_copy_construction();
  }
  template <
      class _Ap = _Alloc,
      __enable_if_t<!__has_select_on_container_copy_construction_v<const _Ap>,
                    int> = 0>
  static allocator_type
  select_on_container_copy_construction(const allocator_type &__a) {
    return __a;
  }
};

template <class _Traits, class _Tp>
using __rebind_alloc [[__gnu__::__nodebug__]] =
    typename _Traits::template rebind_alloc<_Tp>;

template <class _Alloc> struct __check_valid_allocator : true_type {
  using _Traits [[__gnu__::__nodebug__]] = std::allocator_traits<_Alloc>;
  static_assert(
      is_same<_Alloc,
              __rebind_alloc<_Traits, typename _Traits::value_type>>::value,
      "[allocator.requirements] states that rebinding an allocator to the same "
      "type should result in the "
      "original allocator");
};

template <class _Tp> inline const bool __is_std_allocator_v = false;

template <class _Tp>
inline const bool __is_std_allocator_v<allocator<_Tp>> = true;

template <class _Alloc>
inline const bool __is_cpp17_move_insertable_v =
    is_move_constructible<typename _Alloc::value_type>::value ||
    (!__is_std_allocator_v<_Alloc> &&
     __has_construct_v<_Alloc, typename _Alloc::value_type *,
                       typename _Alloc::value_type &&>);

template <class _Alloc>
inline const bool __is_cpp17_copy_insertable_v =
    __is_cpp17_move_insertable_v<_Alloc> &&
    (is_copy_constructible<typename _Alloc::value_type>::value ||
     (!__is_std_allocator_v<_Alloc> &&
      __has_construct_v<_Alloc, typename _Alloc::value_type *,
                        const typename _Alloc::value_type &>));

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {

enum class align_val_t : size_t {};

}
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
struct nothrow_t {
  explicit nothrow_t() = default;
};
extern const nothrow_t nothrow;
} // namespace std
#pragma clang diagnostic pop
[[__nodiscard__]] void *operator new(std::size_t __sz);
[[__nodiscard__]] void *operator new(std::size_t __sz,
                                     const std::nothrow_t &) noexcept
    __attribute__((__malloc__));
void operator delete(void *__p) noexcept;
void operator delete(void *__p, const std::nothrow_t &) noexcept;

void operator delete(void *__p, std::size_t __sz) noexcept;

[[__nodiscard__]] void *operator new[](std::size_t __sz);
[[__nodiscard__]] void *operator new[](std::size_t __sz,
                                       const std::nothrow_t &) noexcept
    __attribute__((__malloc__));
void operator delete[](void *__p) noexcept;
void operator delete[](void *__p, const std::nothrow_t &) noexcept;

void operator delete[](void *__p, std::size_t __sz) noexcept;

[[__nodiscard__]] void *operator new(std::size_t __sz, std::align_val_t);
[[__nodiscard__]] void *operator new(std::size_t __sz, std::align_val_t,
                                     const std::nothrow_t &) noexcept
    __attribute__((__malloc__));
void operator delete(void *__p, std::align_val_t) noexcept;
void operator delete(void *__p, std::align_val_t,
                     const std::nothrow_t &) noexcept;

void operator delete(void *__p, std::size_t __sz, std::align_val_t) noexcept;

[[__nodiscard__]] void *operator new[](std::size_t __sz, std::align_val_t);
[[__nodiscard__]] void *operator new[](std::size_t __sz, std::align_val_t,
                                       const std::nothrow_t &) noexcept
    __attribute__((__malloc__));
void operator delete[](void *__p, std::align_val_t) noexcept;
void operator delete[](void *__p, std::align_val_t,
                       const std::nothrow_t &) noexcept;

void operator delete[](void *__p, std::size_t __sz, std::align_val_t) noexcept;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Tp> class allocator;

template <> class allocator<void> {
public:
  __attribute__((__deprecated__)) typedef void *pointer;
  __attribute__((__deprecated__)) typedef const void *const_pointer;
  __attribute__((__deprecated__)) typedef void value_type;

  template <class _Up> struct __attribute__((__deprecated__)) rebind {
    typedef allocator<_Up> other;
  };
};
template <bool _Cond, class _Unique> struct __non_trivial_if {};

template <class _Unique> struct __non_trivial_if<true, _Unique> {
  constexpr __non_trivial_if() noexcept {}
};

template <class _Tp>
class allocator
    : private __non_trivial_if<!is_void<_Tp>::value, allocator<_Tp>> {
  static_assert(!is_const<_Tp>::value,
                "std::allocator does not support const types");
  static_assert(!is_volatile<_Tp>::value,
                "std::allocator does not support volatile types");

public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef _Tp value_type;
  typedef true_type propagate_on_container_move_assignment;

  typedef true_type is_always_equal;

  allocator() noexcept = default;

  template <class _Up> allocator(const allocator<_Up> &) noexcept {}

  [[__nodiscard__]] _Tp *allocate(size_t __n) {}
  void deallocate(_Tp *__p, size_t __n) noexcept {}

  __attribute__((__deprecated__)) typedef _Tp *pointer;
  __attribute__((__deprecated__)) typedef const _Tp *const_pointer;
  __attribute__((__deprecated__)) typedef _Tp &reference;
  __attribute__((__deprecated__)) typedef const _Tp &const_reference;

  template <class _Up> struct __attribute__((__deprecated__)) rebind {
    typedef allocator<_Up> other;
  };

  __attribute__((__deprecated__)) pointer
  address(reference __x) const noexcept {
    return std::addressof(__x);
  }
  __attribute__((__deprecated__)) const_pointer
  address(const_reference __x) const noexcept {
    return std::addressof(__x);
  }

  [[__nodiscard__]] __attribute__((__deprecated__)) _Tp *
  allocate(size_t __n, const void *) {
    return allocate(__n);
  }

  __attribute__((__deprecated__)) size_type max_size() const noexcept {
    return size_type(~0) / sizeof(_Tp);
  }

  template <class _Up, class... _Args>
  __attribute__((__deprecated__)) void construct(_Up *__p, _Args &&...__args) {
    ::new ((void *)__p) _Up(std::forward<_Args>(__args)...);
  }

  __attribute__((__deprecated__)) void destroy(pointer __p) { __p->~_Tp(); }
};

template <class _Tp, class _Up>
inline bool operator==(const allocator<_Tp> &,
                       const allocator<_Up> &) noexcept {
  return true;
}

template <class _Tp, class _Up>
inline bool operator!=(const allocator<_Tp> &,
                       const allocator<_Up> &) noexcept {
  return false;
}

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {
template <class _Tp>
inline const size_t __compressed_pair_alignment = alignof(_Tp);

template <class _Tp>
inline const size_t __compressed_pair_alignment<_Tp &> = alignof(void *);

template <class _ToPad,
          bool _Empty =
              ((is_empty<_ToPad>::value && !__libcpp_is_final<_ToPad>::value) ||
               is_reference<_ToPad>::value ||
               sizeof(_ToPad) == __datasizeof_v<_ToPad>)>
class __compressed_pair_padding {
  char __padding_[sizeof(_ToPad) - __datasizeof_v<_ToPad>] = {};
};

template <class _ToPad> class __compressed_pair_padding<_ToPad, true> {};
} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <typename _Alloc, typename = void, typename = void>
struct __is_allocator : false_type {};

template <typename _Alloc>
struct __is_allocator<
    _Alloc, __void_t<typename _Alloc::value_type>,
    __void_t<decltype(std::declval<_Alloc &>().allocate(size_t(0)))>>
    : true_type {};

} // namespace __1
} // namespace std
#pragma clang diagnostic pop

#pragma clang diagnostic ignored "-Wc++11-extensions"
#pragma clang diagnostic ignored "-Wc++14-extensions"
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic ignored "-Wc++20-extensions"
#pragma clang diagnostic ignored "-Wc++23-extensions"
namespace std {
inline namespace __1 {

template <class _Iter>
struct __string_is_trivial_iterator : public false_type {};

template <class _Tp>
struct __string_is_trivial_iterator<_Tp *> : public is_arithmetic<_Tp> {};

template <class _Iter>
struct __string_is_trivial_iterator<__wrap_iter<_Iter>>
    : public __string_is_trivial_iterator<_Iter> {};

template <class _CharT, class _Traits, class _Tp>
struct __can_be_converted_to_string_view : public _BoolConstant<true> {};

struct __uninitialized_size_tag {};
struct __init_with_sentinel_tag {};

template <size_t _PaddingSize> struct __padding {
  char __padding_[_PaddingSize];
};

template <> struct __padding<0> {};

template <class _CharT, class _Traits, class _Allocator> class basic_string {
public:
  using __self [[__gnu__::__nodebug__]] = basic_string;
  using traits_type = _Traits;
  using value_type = _CharT;
  using allocator_type = _Allocator;
  using __alloc_traits [[__gnu__::__nodebug__]] =
      allocator_traits<allocator_type>;
  using size_type = typename __alloc_traits::size_type;
  using difference_type = typename __alloc_traits::difference_type;
  using reference = value_type &;
  using const_reference = const value_type &;
  using pointer = typename __alloc_traits::pointer;
  using const_pointer = typename __alloc_traits::const_pointer;
  using __trivially_relocatable [[__gnu__::__nodebug__]] =
      __conditional_t<true, basic_string, void>;
  using iterator = __wrap_iter<pointer>;
  using const_iterator = __wrap_iter<const_pointer>;

private:
  static_assert(8 == 8,
                "This implementation assumes that one byte contains 8 bits");
  static const size_type __endian_factor = 2;

  struct __long {
    struct __attribute__((__packed__)) {
      size_type __is_long_ : 1;
      size_type __cap_ : sizeof(size_type) * 8 - 1;
    };
    size_type __size_;
    pointer __data_;
  };

  enum {
    __min_cap = (sizeof(__long) - 1) / sizeof(value_type) > 2
                    ? (sizeof(__long) - 1) / sizeof(value_type)
                    : 2
  };

  struct __short {
    struct __attribute__((__packed__)) {
      unsigned char __is_long_ : 1;
      unsigned char __size_ : 7;
    };
    [[__no_unique_address__]] __padding<sizeof(value_type) - 1> __padding_;
    value_type __data_[__min_cap];
  };

  static_assert(sizeof(__short) == (sizeof(value_type) * (__min_cap + 1)),
                "__short has an unexpected size.");

  union __rep {
    __short __s;
    __long __l;
  };

  [[__no_unique_address__]] __attribute__((__aligned__(
      ::std::__compressed_pair_alignment<allocator_type>))) __rep __rep_;
  [[__no_unique_address__]] ::std::__compressed_pair_padding<__rep>
      __padding1_892_;
  [[__no_unique_address__]] allocator_type __alloc_;
  [[__no_unique_address__]] ::std::__compressed_pair_padding<allocator_type>
      __padding2_892_;

  explicit basic_string(__uninitialized_size_tag, size_type __size,
                        const allocator_type &__a)
      : __alloc_(__a) {}

  template <class _Iter, class _Sent>

  basic_string(__init_with_sentinel_tag, _Iter __first, _Sent __last,
               const allocator_type &__a)
      : __alloc_(__a) {
    __init_with_sentinel(std::move(__first), std::move(__last));
  }

  iterator __make_iterator(pointer __p) { return iterator(__p); }

  const_iterator __make_const_iterator(const_pointer __p) const {

    return const_iterator(__p);
  }

public:
  static const size_type npos = -1;

  basic_string() noexcept(
      is_nothrow_default_constructible<allocator_type>::value)
      : __rep_() {}

  explicit basic_string(const allocator_type &__a)

      noexcept

      : __rep_(), __alloc_(__a) {}

  basic_string(const basic_string &__str)
      : __alloc_(__alloc_traits::select_on_container_copy_construction(
            __str.__alloc_)) {}

  basic_string(const basic_string &__str, const allocator_type &__a)
      : __alloc_(__a) {}

  basic_string(basic_string &&__str)

      noexcept

      : __rep_([](basic_string &__s) -> decltype(__s.__rep_) && {}(__str)),
        __alloc_(std::move(__str.__alloc_)) {}

  basic_string(basic_string &&__str, const allocator_type &__a)
      : __alloc_(__a) {}

  template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
  basic_string(const _CharT *_Nonnull __s) {
    ((void)0);
  }

  template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>

  basic_string(const _CharT *_Nonnull __s, const _Allocator &__a)
      : __alloc_(__a) {
    ((void)0);
    __init(__s, traits_type::length(__s));
  }

  basic_string(const _CharT *__s, size_type __n) {
    ((void)0);
    __init(__s, __n);
  }

  basic_string(const _CharT *__s, size_type __n, const _Allocator &__a)
      : __alloc_(__a) {
    ((void)0);
    __init(__s, __n);
  }

  basic_string(size_type __n, _CharT __c) { __init(__n, __c); }
  template <__enable_if_t<__is_allocator<_Allocator>::value, int> = 0>
  basic_string(size_type __n, _CharT __c, const _Allocator &__a)
      : __alloc_(__a) {}

  basic_string(const basic_string &__str, size_type __pos, size_type __n,
               const _Allocator &__a = _Allocator())
      : __alloc_(__a) {}

  basic_string(const basic_string &__str, size_type __pos,
               const _Allocator &__a = _Allocator())
      : __alloc_(__a) {}

  template <class _Tp,
            __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits,
                                                            _Tp>::value &&
                              !__is_same_uncvref<_Tp, basic_string>::value,
                          int> = 0>
  inline __attribute__((__visibility__("hidden")))
  basic_string(const _Tp &__t, size_type __pos, size_type __n,
               const allocator_type &__a = allocator_type())
      : __alloc_(__a) {}

  template <class _Tp,
            __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits,
                                                            _Tp>::value &&
                              !__is_same_uncvref<_Tp, basic_string>::value,
                          int> = 0>
  inline __attribute__((__visibility__("hidden"))) explicit basic_string(
      const _Tp &__t) {}

  template <class _Tp,
            __enable_if_t<__can_be_converted_to_string_view<_CharT, _Traits,
                                                            _Tp>::value &&
                              !__is_same_uncvref<_Tp, basic_string>::value,
                          int> = 0>
  inline __attribute__((__visibility__("hidden"))) explicit basic_string(
      const _Tp &__t, const allocator_type &__a)
      : __alloc_(__a) {}

  template <class _InputIterator,
            __enable_if_t<__has_input_iterator_category<_InputIterator>::value,
                          int> = 0>
  basic_string(_InputIterator __first, _InputIterator __last) {
    __init(__first, __last);
  }

  template <class _InputIterator,
            __enable_if_t<__has_input_iterator_category<_InputIterator>::value,
                          int> = 0>

  basic_string(_InputIterator __first, _InputIterator __last,
               const allocator_type &__a)
      : __alloc_(__a) {
    __init(__first, __last);
  }
  basic_string(initializer_list<_CharT> __il) {
    __init(__il.begin(), __il.end());
  }

  basic_string(initializer_list<_CharT> __il, const _Allocator &__a)
      : __alloc_(__a) {
    __init(__il.begin(), __il.end());
  }

  inline ~basic_string() {}

  basic_string &replace(size_type __pos, size_type __n1, const value_type *__s,
                        size_type __n2);

private:
};
extern template basic_string<char> &
basic_string<char>::replace(size_type, size_type, value_type const *,
                            size_type);
} // namespace __1
} // namespace std
