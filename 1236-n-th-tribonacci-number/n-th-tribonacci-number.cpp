consteval auto TribonacciSequence() {
  constexpr auto kMaxN{37};
  std::array<int, kMaxN + 1> tribonacci{0, 1, 1};
  for (auto i{3}; i <= kMaxN; ++i)
    tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3];
  return tribonacci;
}

class Solution final {
 public:
  static constexpr auto tribonacci(const int n) -> int {
    constexpr auto tribonacci_sequence{TribonacciSequence()};
    return tribonacci_sequence[n];
  }
};