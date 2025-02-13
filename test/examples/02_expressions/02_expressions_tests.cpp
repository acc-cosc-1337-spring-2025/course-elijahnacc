#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify operator precedence 1")
{
	REQUIRE(operator_precedence_1(2, 6, 3) == 4);
	REQUIRE(operator_precedence_1(2, 10, 2) == 7);
}

TEST_CASE("Verify operator precedence 2")
{
	REQUIRE(operator_precedence_2(2, 6, 2) == 4);
	REQUIRE(operator_precedence_2(2, 10, 2) == 6);
}