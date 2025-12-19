#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T myMin(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
T sumPositive(T arr[], int n) {
    T s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            s += arr[i];
        }
    }
    return s;
}

int main() {
    int choice;
    do {
        cout << "\n=== МЕНЮ ===\n";
        cout << "1. Знайти мінімум двох чисел\n";
        cout << "2. Відсортувати масив за зростанням\n";
        cout << "3. Знайти суму позитивних чисел у масиві\n";
        cout << "0. Вийти\n";
        cout << "Введіть ваш вибір: ";
        cin >> choice;

        if (choice == 1) {
            double a, b;
            cout << "Введіть два числа: ";
            cin >> a >> b;
            cout << "Мінімум: " << myMin(a, b) << endl;
        }
        else if (choice == 2) {
            int n;
            cout << "Введіть розмір масиву: ";
            cin >> n;
            double arr[n];
            cout << "Введіть елементи масиву через пробіл: ";
            for (int i = 0; i < n; i++) cin >> arr[i];

            sortArray(arr, n);

            cout << "Відсортований масив: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }
        else if (choice == 3) {
            int n;
            cout << "Введіть розмір масиву: ";
            cin >> n;
            double arr[n];
            cout << "Введіть елементи масиву через пробіл: ";
            for (int i = 0; i < n; i++) cin >> arr[i];

            cout << "Сума позитивних чисел: " << sumPositive(arr, n) << endl;
        }
        else if (choice != 0) {
            cout << "Невірний вибір. Спробуйте ще раз.\n";
        }

    } while (choice != 0);

    cout << "Програма завершена.\n";
    return 0;
}