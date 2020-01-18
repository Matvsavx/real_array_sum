#include "lib.h"
#include <iostream>
using namespace std;

int sum(int N, int arr[])
{
    int summa=0;

    for (int i = 0; i < N; i++)
    {
        int a = arr[i];
        summa+=a;
    }

    cout << "Сумма всех элементов массива: ";
    return summa;
}

