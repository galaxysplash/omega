#pragma once

#include "TokenType.h"
#include "TokenPosition.h"
#include <string_view>

namespace omega {
  class Token {
  public:
    const TokenType type = TokenType::NONE;
    const TokenPosition position {.line = 0, .colon = 0};

    virtual std::string_view info() = 0;
    virtual ~Token() = default;
  };
}
