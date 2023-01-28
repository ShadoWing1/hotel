#pragma once

#include <iostream>

template<typename T>

void yaz (T a,bool b = true)
{
    std::cout << a;

    if(b == 1)
    {
        std::cout << "\n";
    } 
}
