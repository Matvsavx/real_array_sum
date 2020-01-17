#include "lib.h"
#include <iostream>
using namespace std;

int sum(int N)
{
    int summa;
    int arr[N];
    cout << "\nВаш массив: \n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        int a = arr[i];
        summa+=a;
    }

    cout << "Сумма всех элементов массива: ";
    return summa;
}

