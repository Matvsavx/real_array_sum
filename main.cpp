#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    int arr[N];
    cout << "\nВаш массив: \n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << sum(N,arr);
}
