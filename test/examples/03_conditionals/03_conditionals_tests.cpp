#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test AND truth table")
{
	REQUIRE((true and true) == true);
	REQUIRE((true && false) == false);
	REQUIRE((false and true) == false);
	REQUIRE((false && false) == false);
}

TEST_CASE("Test OR truth table")
{
	REQUIRE((true or true) == true);
	REQUIRE((true || false) == true);
	REQUIRE((false or true) == true);
	REQUIRE((false || false) == false);
}