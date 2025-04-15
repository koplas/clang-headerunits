import some;

int main() {
  using result = std::__promote<int>::type;
  some::function();
}
