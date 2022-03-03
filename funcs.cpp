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
    if(n == 0 || n == 1)
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
