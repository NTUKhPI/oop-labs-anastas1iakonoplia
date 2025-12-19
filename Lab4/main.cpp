#include "lab4.h"
#include <vector>
using namespace std;

void saveOne(const vector<AgroCrop>& arr) {
    try {
        int index;
        cout << "Введіть номер об'єкта: ";
        cin >> index;

        if (index < 0 || index >= (int)arr.size())
            throw "Неправильний номер об’єкта!";

        ofstream fout("one.bin", ios::binary);
        if (!fout) throw "Не вдалося відкрити файл!";

        arr[index].writeBinary(fout);
        fout.close();
        cout << "Об'єкт збережено!\n";
    }
    catch (const char* msg) {
        cout << "Помилка: " << msg << endl;
    }
}

void readOne() {
    try {
        ifstream fin("one.bin", ios::binary);
        if (!fin) throw "Файл не знайдено!";

        AgroCrop temp;
        temp.readBinary(fin);
        cout << "\nПрочитаний об'єкт:\n";
        temp.show();

        fin.close();
    }
    catch (const char* msg) {
        cout << "Помилка: " << msg << endl;
    }
}

void saveAll(const vector<AgroCrop>& arr) {
    try {
        ofstream fout("all.bin", ios::binary);
        if (!fout) throw "Не вдалося відкрити файл!";

        size_t size = arr.size();
        fout.write((char*)&size, sizeof(size));

        for (size_t i = 0; i < arr.size(); i++)
            arr[i].writeBinary(fout);

        fout.close();
        cout << "Усі об’єкти збережено!\n";
    }
    catch (const char* msg) {
        cout << "Помилка: " << msg << endl;
    }
}

void readAll(vector<AgroCrop>& arr) {
    try {
        ifstream fin("all.bin", ios::binary);
        if (!fin) throw "Файл не знайдено!";

        size_t size;
        fin.read((char*)&size, sizeof(size));
        arr.clear();
        arr.reserve(size);

        for (size_t i = 0; i < size; i++) {
            AgroCrop c;
            c.readBinary(fin);
            arr.push_back(c);
        }

        fin.close();
        cout << "Усі об’єкти прочитано!\n";
    }
    catch (const char* msg) {
        cout << "Помилка: " << msg << endl;
    }
}

void printBinaryFile(const string& filename) {
    try {
        ifstream fin(filename.c_str(), ios::binary);
        if (!fin) throw "Не вдалося відкрити файл!";

        size_t size = 0;
        if (filename == "all.bin") {
            fin.read((char*)&size, sizeof(size));
        } else {
            size = 1;
        }

        for (size_t i = 0; i < size; i++) {
            AgroCrop c;
            c.readBinary(fin);
            cout << "\nОб'єкт " << i << ":\n";
            c.show();
        }

        fin.close();
    }
    catch (const char* msg) {
        cout << "Помилка: " << msg << endl;
    }
}

int main() {
    vector<AgroCrop> arr;

    arr.push_back(AgroCrop("Пшениця", "З", 120.5, 32.1));
    arr.push_back(AgroCrop("Кукурудза", "З", 200.0, 45.0));
    arr.push_back(AgroCrop("Ячмінь", "З", 80.3, 29.4));

    int choice;
    do {
        cout << "\n=== МЕНЮ ===\n";
        cout << "1. Зберегти один об'єкт\n";
        cout << "2. Прочитати один об'єкт\n";
        cout << "3. Зберегти весь масив\n";
        cout << "4. Прочитати весь масив\n";
        cout << "5. Вивести весь масив\n";
        cout << "6. Переглянути бінарний файл у тексті\n";
        cout << "0. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1: saveOne(arr); break;
            case 2: readOne(); break;
            case 3: saveAll(arr); break;
            case 4: readAll(arr); break;
            case 5:
                for (size_t i = 0; i < arr.size(); i++) {
                    cout << "\nОб'єкт " << i << ":\n";
                    arr[i].show();
                }
                break;
            case 6:
            {
                int choiceFile;
                cout << "Який файл переглянути? 1 - один об'єкт, 2 - весь масив: ";
                cin >> choiceFile;
                if (choiceFile == 1) printBinaryFile("one.bin");
                else if (choiceFile == 2) printBinaryFile("all.bin");
                else cout << "Невірний вибір!" << endl;
            }
            break;
        }
    } while (choice != 0);

    return 0;
}