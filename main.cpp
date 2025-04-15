import some;

int main() {
  using result = std::__promote<int, float, long>::type;
  some::function();
}
