namespace std {
inline namespace __1 {
class reverse_iterator {};
inline constexpr reverse_iterator operator+(const reverse_iterator &__x) {
  return reverse_iterator();
}
}; // namespace __1
} // namespace std
namespace std {
inline namespace __1 {

template <class... _Args> class __promote {
  static double __test(int);

public:
  using type = decltype((__test(_Args()) + ...));
};
} // namespace __1
} // namespace std
