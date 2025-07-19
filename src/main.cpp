#include <print>

#include <vector>

#include <ranges>

int main(int argc, const char *argv[]) {
  std::vector<int> numbers { // I know it's stduid to use a vector just for a few int's but thats not the point, OK
    1, 5, 7,
        3, 2,
  };
  const auto var = numbers | std::ranges::views::filter([&](const int i) -> bool {
    return i > 2;
  });


  for (const auto &num : numbers) {
    std::println("{}", num);
  }
}
