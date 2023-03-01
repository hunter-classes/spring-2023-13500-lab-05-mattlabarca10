#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("testing isDivisibleBy") {
    CHECK(isDivisibleBy(100,25)==true);
    CHECK(isDivisibleBy(35,7)==true);
    CHECK(isDivisibleBy(35,17)==false);
    CHECK(isDivisibleBy(33,7)==false);
}

TEST_CASE("testing isPrime") {
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(10) == false);
}

TEST_CASE("testing nextPrime") {
    CHECK(nextPrime(3)==5);
    CHECK(nextPrime(17)==19);
    CHECK(nextPrime(38)==41);
    CHECK(nextPrime(83)==89);
}

TEST_CASE("testing countPrimes") {
    CHECK(countPrimes(3,17)==6);
    CHECK(countPrimes(17,50)==9);
    CHECK(countPrimes(7,72)==17);
    CHECK(countPrimes(13,15)==1);
}

TEST_CASE("testing isTwinPrime") {
    CHECK(isTwinPrime(3)==true);
    CHECK(isTwinPrime(17)==true);
    CHECK(isTwinPrime(67)== false);
    CHECK(isTwinPrime(89)==false);
}

TEST_CASE("testing nextTwinPrime") {
    CHECK(nextTwinPrime(3)==5);
    CHECK(nextTwinPrime(17)==19);
    CHECK(nextTwinPrime(18)==19);
    CHECK(nextTwinPrime(62)==71);
}

TEST_CASE("testing largestTwinPrime") {
    CHECK(largestTwinPrime(3,17)==17);
    CHECK(largestTwinPrime(17,49)==43);
    CHECK(largestTwinPrime(49,100)==73);
    CHECK(largestTwinPrime(3,14)==13);
}