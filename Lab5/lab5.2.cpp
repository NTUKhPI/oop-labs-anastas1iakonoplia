#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <stdexcept>
using namespace std;

void searchInVector() {
    try {
        int n;
        cout << "Введіть розмір вектора: ";
        cin >> n;
        if (cin.fail() || n <= 0) throw invalid_argument("Некоректний розмір!");

        vector<int> v(n);
        cout << "Введіть " << n << " чисел:\n";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (cin.fail()) throw invalid_argument("Некоректне число!");
        }

        int target;
        cout << "Введіть елемент для пошуку: ";
        cin >> target;

        vector<int>::iterator it = find(v.begin(), v.end(), target);
        if (it != v.end()) {
            cout << "Елемент знайдено на індексі " << (it - v.begin()) << endl;
        } else {
            cout << "Елемент не знайдено\n";
        }
    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }
}

void sumUniqueList() {
    try {
        int n;
        cout << "Введіть розмір списку: ";
        cin >> n;
        if (cin.fail() || n <= 0) throw invalid_argument("Некоректний розмір!");

        list<int> lst;
        map<int, int> freq;

        cout << "Введіть числа:\n";
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (cin.fail()) throw invalid_argument("Некоректне число!");
            lst.push_back(x);
            freq[x]++;
        }

        int sum = 0;
        for (map<int,int>::iterator it = freq.begin(); it != freq.end(); ++it) {
            if (it->second == 1) sum += it->first;
        }

        cout << "Сума неповторювальних елементів = " << sum << endl;
    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }
}

void averageGrades() {
    try {
        map<string,int> students;
        students["Ivan"] = 85;
        students["Olena"] = 92;
        students["Petro"] = 78;
        students["Sofia"] = 88;

        cout << "Список студентів та оцінок:\n";
        for (map<string,int>::iterator it = students.begin(); it != students.end(); ++it) {
            cout << it->first << " : " << it->second << endl;
        }

        if (students.empty()) throw runtime_error("Список порожній!");

        int total = 0;
        for (map<string,int>::iterator it = students.begin(); it != students.end(); ++it) {
            total += it->second;
        }

        double average = double(total) / students.size();
        cout << "Середній бал = " << average << endl;
    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }
}

int main() {
    while (true) {
        try {
            cout << "\nМеню STL (Варіант 10)\n";
            cout << "1. Пошук елемента у векторі\n";
            cout << "2. Сума неповторювальних елементів списку\n";
            cout << "3. Середній бал студентів\n";
            cout << "0. Завершити роботу\n";
            cout << "Ваш вибір: ";

            int choice;
            cin >> choice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000,'\n');
                throw invalid_argument("Введено не число!");
            }

            switch(choice) {
                case 1: searchInVector(); break;
                case 2: sumUniqueList(); break;
                case 3: averageGrades(); break;
                case 0: cout << "Роботу завершено.\n"; return 0;
                default: throw out_of_range("Невірний пункт меню!");
            }
        }
        catch (const exception& e) {
            cout << "Помилка: " << e.what() << endl;
        }
    }
}