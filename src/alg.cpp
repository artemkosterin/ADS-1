// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


{
for (uint64_t i = 2; i * i <= value; i++)
{
    if (value % i == 0)
    {
        return false;
    }
}
if (value == 1)
{
    return false;
}
else if (value < 1)
{
    return false;
}
else
{
    return true;
}
}

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

{
uint64_t nextnumber = value + 1;

while (true) {
    if (checkPrime(nextnumber)) {
        return nextnumber;
    }
    nextnumber++;
}
}

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
