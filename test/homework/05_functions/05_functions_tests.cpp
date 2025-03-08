#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.5);
}

// the checks below seem to output properly but continue to fail anyway?
// I have changed REQUIRE to CHECK to display the behavior

TEST_CASE("Verify get_reverse_complement") {
	CHECK(get_reverse_complement("AAAACCCGGT") == "ACCGGGTTTT");
	CHECK(get_reverse_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}

TEST_CASE("Verify reverse_string") {
	CHECK(reverse_string("AGCTATAG") == "GATATCGA");
	CHECK(reverse_string("CGCTATAG") == "GATATCGC");
}