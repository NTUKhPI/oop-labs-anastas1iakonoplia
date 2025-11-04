#include "lab6.h"
#include "lab6.cpp"

Crop::Crop() : name("Невідомо"), type("-"), area(0), yield(0) {}
Crop::Crop(const string& n, const string& t, int a, int y) : name(n), type(t), area(a), yield(y) {}
Crop::Crop(const Crop& other) {
    name = other.name;
    type = other.type;
    area = other.area;
    yield = other.yield;
}

void Crop::setName(const string& n) { name = n; }
void Crop::setType(const string& t) { type = t; }
void Crop::setArea(int a) { area = a; }
void Crop::setYield(int y) { yield = y; }

string Crop::getName() const { return name; }
string Crop::getType() const { return type; }
int Crop::getArea() const { return area; }
int Crop::getYield() const { return yield; }

void Crop::show() const {
    cout << left << setw(12) << name
         << setw(5) << type
         << setw(15) << area
         << setw(10) << yield << endl;
}

void fillAuto(Crop arr[], int& count) {
    arr[0] = Crop("Соя", "Б", 13000, 45);
    arr[1] = Crop("Чумиза", "З", 8000, 17);
    arr[2] = Crop("Рис", "З", 25650, 24);
    count = 3;
    cout << "\n Таблицю заповнено автоматично (варіант №10)\n";
}

void fillManual(Crop arr[], int& count) {
    cout << "Скільки культур хочете ввести (1–3): ";
    cin >> count;
    if (count < 1 || count > 3) count = 3;

    for (int i = 0; i < count; i++) {
        string n, t;
        int a, y;
        cout << "\nКультура " << i + 1 << ":\n";
        cout << "Найменування: "; cin >> n;
        cout << "Тип (З - зернові, Б - бобові): "; cin >> t;
        cout << "Посівна площа (га): "; cin >> a;
        cout << "Врожайність (ц/га): "; cin >> y;
        arr[i] = Crop(n, t, a, y);
    }
}

void printTable(const Crop arr[], int size) {
    cout << " ╔═══════════════╦══════╦════════════════════╦════════════════════╗\n";
    cout << " ║Найменування   ║ Тип  ║ Посівна площа (га) ║ Врожайність (ц/га) ║\n";
    cout << " ╠═══════════════╬══════╬════════════════════╬════════════════════╣\n";

    for (int i = 0; i < size; ++i) {
        cout << " ║ " << left << setw(16) << arr[i].getName()
             << " ║ " << setw(4) << arr[i].getType()
             << "  ║ " << right << setw(16) << arr[i].getArea()
             << "   ║ " << right << setw(18) << arr[i].getYield()
             << " ║\n";
    }

    cout << " ╚═══════════════╩══════╩════════════════════╩════════════════════╝\n";
    cout << "Примітка: З – зернові, Б – бобові\n";
}

void printAll(const Crop arr[], int size) {
    printTable(arr, size);
}

void showTestObjects() {
    cout << "\nТест конструкторів:\n";
    Crop c1;
    Crop c2("Соя", "Б", 13000, 45);
    Crop c3 = c2;

    cout << "\n-- Об'єкт 1 (default):\n";
    c1.show();
    cout << "\n-- Об'єкт 2 (params):\n";
    c2.show();
    cout << "\n-- Об'єкт 3 (copy):\n";
    c3.show();
}
