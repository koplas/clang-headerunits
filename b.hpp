

 namespace __attribute__((__type_visibility__("default"))) std { inline namespace __1 {

template <class... _Args>
class __promote {

  static float __test(float);
  static double __test(char);
  static double __test(int);
  static double __test(unsigned);
  static double __test(long);
  static double __test(unsigned long);
  static double __test(long long);
  static double __test(unsigned long long);

  static double __test(__int128_t);
  static double __test(__uint128_t);

  static double __test(double);
  static long double __test(long double);

public:
  using type = decltype((__test(_Args()) + ...));
};

} }
