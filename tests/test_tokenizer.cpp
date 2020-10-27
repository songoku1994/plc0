#include "catch2/catch.hpp"
#include "fmt/core.h"
#include "tokenizer/tokenizer.h"


#include <sstream>
#include <vector>

// 下面是示例如何书写测试用例
/*
TEST_CASE("Test hello world.") {
  std::string input =
          "begin\n"
          "	var a = 1;\n"
          "	print(a);\n"
          "end\n";
  std::stringstream ss;
  ss.str(input);
  miniplc0::Tokenizer tkz(ss);
  std::vector<miniplc0::Token> output = 
        "Line: 0 Column: 0 Type: Begin Value: begin\n"
        "Line: 1 Column: 1 Type: Var Value: var\n"
        "Line: 1 Column: 5 Type: Identifier Value: a\n"
        "Line: 1 Column: 7 Type: EqualSign Value: =\n"
        "Line: 1 Column: 9 Type: UnsignedInteger Value: 1\n"
        "Line: 1 Column: 10 Type: Semicolon Value: ;\n"
        "Line: 2 Column: 1 Type: Print Value: print\n"
        "Line: 2 Column: 6 Type: LeftBracket Value: (\n"
        "Line: 2 Column: 7 Type: Identifier Value: a\n"
        "Line: 2 Column: 8 Type: RightBracket Value: )\n"
        "Line: 2 Column: 9 Type: Semicolon Value: ;\n"
        "Line: 3 Column: 0 Type: End Value: end\n";
  auto result = tkz.AllTokens();
  if (result.second.has_value()) {
          FAIL();
  }
  REQUIRE( (result.first == output) );
  
}*/
