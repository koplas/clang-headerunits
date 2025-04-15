namespace std {
inline namespace __1 {

template <class... _Args> class __promote {

  static double __test(int);

public:
  using type = decltype((__test(_Args()) + ...));
};

} // namespace __1
} // namespace std
