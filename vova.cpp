#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
#define n 20

void mass(int arr[n]) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 46 - 23; 
        cout << arr[i] << setw(4);
    }

}

void average(int arr[n], int k, int p) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && i != k && i != p) {
            sum += arr[i];
            count++;
        }
    }
    float avg = float(sum) / count;
    cout << "Середнє значення, не включаючи елементи з індексами " << k << " і " << p << ": " << avg;
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "uk_UA.UTF-8");
    int k, p, arr[n];
    cout << "Генерується масив" << endl;
    mass(arr);
    cout << "\nПотрібно знайти середнє значення всіх парних елементів." << endl;
    cout << "Однак, потрібно вилучити два парних елемента з індексами k та p. Введіть їх.\nІндекс k = ";
    cin >> k;
    cout << "Індекс p = ";
    cin >> p;
    if (k < n && p < n) {
        average(arr, k, p);
    }
    else {
        cout << "Індекси цих елементів не можуть бути більше 20.";
    }
}