#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    int arr[N];
    int summa;
    for (int i = 0; i < N; i++)
    {
        cout << "[" << i + 1 << "]" << ":";
        cin >> arr[i];
        int a = arr[i];
        sum(summa, a);
    }
    {
        cout << "\nВаш массив: ";
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    cout << "Сумма всех элементов массива: " << summa;
    return 0;
}
