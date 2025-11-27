#include "lab2.h"

int main() {
    setlocale(LC_ALL, "ukr");

    AgroCrop c1, c2("Соя", "Б", 13000, 45);
    AgroCrop c3 = c2;

    int choice;
    AgroCrop arr[3];
    int count = 0;

    do {
        cout << "\n===== МЕНЮ =====\n";
        cout << "1. Ввести об'єкти\n";
        cout << "2. Вивести\n";
        cout << "3. Порівняти (метод)\n";
        cout << "4. Порівняти (friend)\n";
        cout << "5. Додати (метод)\n";
        cout << "6. Додати (friend)\n";
        cout << "7. Оператор ()\n";
        cout << "8. Оператор []\n";
        cout << "9. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Скільки об'єктів (до 3): ";
                cin >> count;
                for (int i = 0; i < count; ++i) {
                    cout << "\nКультура " << i + 1 << ":\n";
                    cin >> arr[i];
                }
                break;

            case 2:
                for (int i = 0; i < count; ++i)
                    arr[i].show();
                break;

            case 3:
                if (count >= 2)
                    cout << (arr[0].operator==(arr[1]) ?
                             "Об'єкти однакові\n" : "Об'єкти різні\n");
                else
                    cout << "Недостатньо даних\n";
                break;

            case 4:
                if (count >= 2)
                    cout << (operator==(arr[0], arr[1]) ?
                             "Однакові (friend)\n" : "Різні (friend)\n");
                else
                    cout << "Недостатньо даних\n";
                break;

            case 5:
                if (count >= 2) {
                    AgroCrop res = (arr[0].operator+(arr[1]));
                    cout << "Результат додавання (метод):\n" << res << endl;
                } else cout << "Недостатньо даних\n";
                break;

            case 6:
                if (count >= 2) {
                    AgroCrop res = operator+(arr[0], arr[1]);
                    cout << "Результат додавання (friend):\n" << res << endl;
                } else cout << "Недостатньо даних\n";
                break;

            case 7: {
                string name, type;
                float area, yield;
                cout << "Нові дані для c1:\n";
                cout << "Назва: "; cin >> name;
                cout << "Тип (З/Б): "; cin >> type;
                cout << "Посівна площа: "; cin >> area;
                cout << "Урожайність: "; cin >> yield;
                c1(name, type, area, yield);
                c1.show();
                break;
            }

            case 8: {
                const char* test = "Агро";
                cout << "Довжина слова \"" << test << "\" = " << c1[test] << endl;
                break;
            }

            case 9:
                cout << "Вихід з програми\n";
                break;

            default:
                cout << "Невірний вибір\n";
        }

    } while (choice != 9);

    return 0;
}
