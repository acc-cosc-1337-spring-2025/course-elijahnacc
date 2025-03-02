#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Get Factorial"){
	REQUIRE(6 == get_factorial(3));
	REQUIRE(120 == get_factorial(5));
	REQUIRE(720 == get_factorial(6));
}

TEST_CASE("Verify Get Greatest Common Divisor"){
	REQUIRE(5 == get_greatest_common_divisor(5, 15));
	REQUIRE(7 == get_greatest_common_divisor(21, 28));
	REQUIRE(25 == get_greatest_common_divisor(25, 100));
}