#include <print>

#include <memory>
#include <vector>

#include <omega/token/Token.h>
#include <omega/token/IdentifierToken.h>

#include <ranges>

int main(int argc, const char *argv[]) {
  std::vector<std::unique_ptr<omega::Token>> tokens;

  tokens.push_back(std::make_unique<omega::IdentifierToken>());

  for (const std::unique_ptr<omega::Token> &token : tokens) {
    std::println("{}", token->info());
  }
}
