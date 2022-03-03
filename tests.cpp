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
TEST_CASE("Next Prime"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19); 
}
TEST_CASE("Count primes in Range"){
    CHECK(countPrimes(8,13) == 2);
    CHECK(countPrimes(3,8) == 3);
}
TEST_CASE("Twin Prime"){
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(8) == false);
}
TEST_CASE("Next Twin Prime"){
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(13) == 17);
}
TEST_CASE("Largest Twin Prime"){
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}