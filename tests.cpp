#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("isDivisble"){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(35,17) == false);

    
}
TEST_CASE("Prime Numbers"){
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == 1);
    CHECK(isPrime(3) == 1);
    CHECK(isPrime(4) == 0);
    CHECK(isPrime(5) == 1);
}
TEST_CASE()
