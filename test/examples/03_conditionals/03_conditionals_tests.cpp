#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

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

TEST_CASE("Test NOT truth table")
{
	REQUIRE((not true) == false);
	REQUIRE((not false) == true);
}

TEST_CASE("Test is number in range")
{
	REQUIRE(is_number_in_range(1, 10, 5) == true);
	REQUIRE(is_number_in_range(1, 10, 0) == false);
	REQUIRE(is_number_in_range(1, 10, 11) == false);
}

TEST_CASE("Test is vowel")
{
	REQUIRE(is_vowel('a') == true);
	REQUIRE(is_vowel('e') == true);
	REQUIRE(is_vowel('i') == true);
	REQUIRE(is_vowel('o') == true);
	REQUIRE(is_vowel('u') == true);

	REQUIRE(is_vowel('b') == false);
	REQUIRE(is_vowel('c') == false);
	REQUIRE(is_vowel('d') == false);
	REQUIRE(is_vowel('x') == false);
	REQUIRE(is_vowel('y') == false);
	REQUIRE(is_vowel('z') == false);
}

TEST_CASE("Test is consonant")
{
	REQUIRE(is_consonant('a') == false);
	REQUIRE(is_consonant('e') == false);
	REQUIRE(is_consonant('i') == false);
	REQUIRE(is_consonant('o') == false);
	REQUIRE(is_consonant('u') == false);

	REQUIRE(is_consonant('b') == true);
	REQUIRE(is_consonant('c') == true);
	REQUIRE(is_consonant('d') == true);
	REQUIRE(is_consonant('x') == true);
	REQUIRE(is_consonant('y') == true);
	REQUIRE(is_consonant('z') == true);
}