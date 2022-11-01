#pragma once
#include <iostream>
using namespace std;

void AllocateMemory(int*& ar, int& count)
{
    cout << "Please, enter count of elements: ";
    cin >> count; // просим пользователя ввести количество элементов
    // нормализация количества элеметов массива
    if (count < 5) count = 5;
    if (count > 10000) count = 10000;
    // пример создания одномерного динамического массива 

    ar = new int[count];
}

void FillArray(int* ar, int count)
{
    for (int i = 0; i < count; i++)
    {
        ar[i] = 100;
    }
}

void ShowArray(int* ar, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << ar[i] << ", ";
    }
    cout << "\n";
}

void FreeMemory(int* ar)
{
    delete[] ar;
}

void DeleteElementFromTheEndOfArray(int*& ar, int& count)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < count - 1; i++)
    {
        temp[i] = ar[i];
    }

    delete[] ar;
    ar = temp;
    count--;
}

void AddElementToTheEndOfArray(int*& ar, int& count, int num)
{
    int* temp = new int[count + 1];

    for (int i = 0; i < count; i++)
    {
        temp[i] = ar[i];
    }

    temp[count] = num;

    delete[] ar;
    ar = temp;
    count++;
}

void RandomFillArray(int* ar, int count, int min, int max)
{
    srand(time(NULL));

    for (int i = 0; i < count; i++)
    {
        int num = min + (rand() % (max - min + 1));

        ar[i] = num;
    }
}

void UserFillArray(int* ar, int count)
{
    for (int i = 0; i < count; i++)
    {
        int user_num;

        cout << "Enter number " << i << ": ";
        cin >> user_num;

        ar[i] = user_num;
    }
}

void AddElementToTheMidOfArray(int*& ar, int& count, int num)
{
    int* temp = new int[count + 1];

    for (int i = 0; i < (count / 2); i++)
    {
        temp[i] = ar[i];
    }

    temp[count / 2] = num;

    for (int i = (count / 2) + 1; i <= count; i++)
    {
        temp[i] = ar[i - 1];
    }

    delete[] ar;
    ar = temp;
    count++;
}

void DeleteElementFromTheBegginOfArray(int*& ar, int& count)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < count - 1; i++)
    {
        temp[i] = ar[i + 1];
    }

    delete[] ar;
    ar = temp;
    count--;
}

void DeleteElementFromTheMidnOfArray(int*& ar, int& count)
{
    int* temp = new int[count - 1];

    for (int i = 0; i < count / 2; i++)
    {
        temp[i] = ar[i];
    }

    for (int i = count / 2; i < count; i++)
    {
        temp[i] = ar[i + 1];
    }

    delete[] ar;
    ar = temp;
    count--;
}