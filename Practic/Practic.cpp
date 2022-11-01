#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
    int min = 1;
    int max = 50;
    int count = 0;
    int num = 200;
    int* ar = nullptr;

    AllocateMemory(ar, count);
    
    /*FillArray(ar, count);*/

    RandomFillArray(ar, count, min, max);

    /*UserFillArray(ar, count);*/

    ShowArray(ar, count);

    /*DeleteElementFromTheEndOfArray(ar, count);*/

    /*AddElementToTheMidOfArray(ar, count, num);*/

    /*DeleteElementFromTheBegginOfArray(ar, count);*/

    DeleteElementFromTheMidnOfArray(ar, count);

    /*AddElementToTheEndOfArray(ar, count, num);*/

    ShowArray(ar, count);

    FreeMemory(ar);
}

