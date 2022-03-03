#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d)
{
    if(n % d == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
bool isPrime(int n)
{
    bool isPrime2 = true;
    if(n <= 1)
    {
        isPrime2 = false;
    }
    else
    {
        for(int b = 2; b <= n/2; b++)
        {
            if(n % b == 0)
            {
                isPrime2 = false;
                break;
            }

        }
    }
    return isPrime2;
}

int nextPrime(int n)
{
    // while(!isPrime(++n));
    while(!isPrime(++n));
    return n;
}

int countPrimes(int a, int b)
{
    int count = 0;
    for(int i = a; i <= b;  i++)
    {
        if(isPrime(i) == true)
        {
            count++;
        }      
    }
    return count;
}
bool isTwinPrime(int n)
{
    // if either N-2 or N+2 (or both of them) is also a prime

    if(isPrime(n))
    {
        if (isPrime(n-2) || isPrime(n+2))
        {
            return true;
        }
    }
    else{
        return false;
    }
    return false;

}
int nextTwinPrime(int n)
{
    while(!isTwinPrime(++n));
    return n;
}

