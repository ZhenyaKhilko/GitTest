#include <iostream>
#include "List.h"
#include <algorithm>
#include <cassert>

const int ar = 109;

constexpr int getArrayValue(int* arr) 
{
    static_assert(ar >= 0 && ar < 10,"Wrong index");

    return arr[ar];
}

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int a = getArrayValue(arr);
   
    std::cout << a;
}

