#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>

//If n is divisible by d, the function should return true, otherwise return false
bool isDivisibleBy(int n, int d)
{
    if(n%d == 0)
        return true;
    else 
        return false;
}

//The function should return true if n is a prime, otherwise return false
bool isPrime(int n)
{
    if(n>=2){
        for(int i = 2; i < (n/2+1); i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    else
        return false;
}

//returns the smallest prime greater than n
int nextPrime(int n)
{
    int i = n+1;
    while(isPrime(i)==false)
        i++;
    return i;
}

//returns the number of prime numbers in the interval a ≤ x ≤ b
int countPrimes(int a, int b)
{
    int count = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)==true)
            count++;
    }
    return count;
}

//determines whether or not its argument is a twin prime (if either N-2 or N+2 (or both of them) is also a prime)
bool isTwinPrime(int n)
{
    if(isPrime(n)==true){
        if(isPrime(n+2) || isPrime(n-2))
            return true;
        else    
            return false;
    }
    else
        return false;
}

//returns the smallest twin prime greater than n
int nextTwinPrime(int n)
{
    int i = n+1;
    while(isTwinPrime(i)==false)
        i++;
    return i;
}

//returns the largest twin prime in the range a ≤ N ≤ b.
int largestTwinPrime(int a, int b)
{
    int largest = -1;
    for(int i = a; i <= b; i++){
        if(isTwinPrime(i)==true)
            largest = i;
    }
    return largest;
}
