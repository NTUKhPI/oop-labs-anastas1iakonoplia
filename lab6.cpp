#include "lab6.h"

int main() {
    setlocale(LC_ALL, "ukr");

    Crop arr[3];
    int size = 0;
    int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Автоматичне заповнення таблиці (варіант №10)\n";
        cout << "2. Ввести культури вручну\n";
        cout << "3. Вивести всі культури\n";
        cout << "4. Показати тестові об'єкти (конструктори)\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                fillAuto(arr, size);
                break;
            case 2:
                fillManual(arr, size);
                break;
            case 3:
                if (size > 0)
                    printAll(arr, size);
                else
                    cout << "Спочатку заповніть таблицю.\n";
                break;
            case 4:
                showTestObjects();
                break;
            case 0:
                cout << "Вихід із програми.\n";
                break;
            default:
                cout << "Невірний вибір!\n";
        }
    } while (choice != 0);

    return 0;
}