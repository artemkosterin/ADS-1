// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value)
{
    if (value <= 1) {
        return false;
    }
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n)
{
    uint64_t counter = 0;
    uint64_t number = 2;
    while (counter < n)
    {
        if (checkPrime(number))
        {
            counter++;
        }
        else if (counter < n)
        {
            number++;
        }
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t nextnumber = value + 1;

    while (true) {
        if (checkPrime(nextnumber)) {
            return nextnumber;
        }
        nextnumber++;
    }
}

uint64_t sumPrime(uint64_t hbound)
{
    uint64_t summ = 0;
    for (uint64_t i = 2; i < hbound; i++)
    {
        if (checkPrime(i))
        {
            summ += i;
        }
    }
    return summ;
}
