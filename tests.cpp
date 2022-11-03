#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Test cases for solve() function"){
    CHECK(solve(encryptCaesar("I forgot the name of the professor!", 9)) == "I forgot the name of the professor!");
    CHECK(solve(encryptCaesar("Natural disaster are a issue that we can not avoid!", 50)) == "Natural disaster are a issue that we can not avoid!");
    CHECK(solve(encryptCaesar("What are the possibilites of me getting a million dollar?", 26)) == "What are the possibilites of me getting a million dollar?");
    CHECK(solve(encryptCaesar("Why did I got a zero on the tests?", 0)) == "Why did I got a zero on the tests?");
    CHECK(solve(encryptCaesar("To be or not to be, That is the question", 7)) == "To be or not to be, That is the question");
    CHECK(solve(encryptCaesar("This fire is out of control", 126)) == "This fire is out of control");
    CHECK(solve(encryptCaesar("Heart of ember, autumntide, cooling swiftly, bleeding light", 500)) == "Heart of ember, autumntide, cooling swiftly, bleeding light");
    CHECK(solve(encryptCaesar("So get away, another way to feel what you didn't want yourself to know, and let yourself go", 76)) == "So get away, another way to feel what you didn't want yourself to know, and let yourself go");
    CHECK(solve(encryptCaesar("So what do you wanna do, what's your point of view?", 42)) == "So what do you wanna do, what's your point of view?");
    CHECK(solve(encryptCaesar("One brings shadow, one brings light, Two-toned echoes tumbling through time", 1000)) == "One brings shadow, one brings light, Two-toned echoes tumbling through time");
}//end test cases for solve()
