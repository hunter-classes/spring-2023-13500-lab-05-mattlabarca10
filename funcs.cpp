#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>


bool isDivisibleBy(int n, int d)
{
    if(n%d == 0)
        return true;
    else 
        return false;
}

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

int nextPrime(int n)
{
    int i = n+1;
    while(isPrime(i)==false)
        i++;
    return i;
}

int countPrimes(int a, int b)
{
    int count = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)==true)
            count++;
    }
    return count;
}


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

int nextTwinPrime(int n)
{
    int i = n+1;
    while(isTwinPrime(i)==false)
        i++;
    return i;
}

int largestTwinPrime(int a, int b)
{
    int largest = -1;
    for(int i = a; i <= b; i++){
        if(isTwinPrime(i)==true)
            largest = i;
    }
    return largest;
}
