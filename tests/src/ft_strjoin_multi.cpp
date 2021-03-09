#include <string.h>
#include <stdio.h>
#include <catch2/catch.hpp>

/*
 * Catch2: examples
 * for more examples checkout:
 *   https://github.com/catchorg/Catch2/tree/devel/examples
 *
 * Catch has two natural expression assertion macro's:
 * - REQUIRE() stops at first failure.
 * - CHECK() continues after failure.
 *
 * There are two variants to support decomposing negated expressions:
 * - REQUIRE_FALSE() stops at first failure.
 * - CHECK_FALSE() continues after failure.
 *
 * TEST_CASE( "Title here", "[short name]" ) {
 *     REQUIRE( [BOOLEAN CONDITION] ) ;
 * }
 */

extern "C" {
#include "libft.h"
}

TEST_CASE( "strljoin_multi basics", "strljoin_multi" ) {

	char *catstr = ft_strjoin_multi (3, "a", "b", "c");
	REQUIRE(catstr);
	CHECK(strcmp(catstr, "abc") == 0);
	printf("%30s : '%s'\n", "CATSTR", catstr);
	free(catstr);
}

TEST_CASE( "strljoin_multi empty strings ", "strljoin_multi" ) {

	char *catstr = ft_strjoin_multi (3, "", "b", "c");
	REQUIRE(catstr);
	CHECK(strcmp(catstr, "bc") == 0);
	printf("%30s : '%s'\n", "CATSTR", catstr);
	free(catstr);
}
