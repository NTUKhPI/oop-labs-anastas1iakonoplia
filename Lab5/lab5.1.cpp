#include <iostream>
#include <stdexcept>
#include <vector>
#include <iomanip>
using namespace std;

template <typename T>
class Number {
private:
    T value;
public:
    Number() : value(0) {}
    Number(T v) : value(v) {}

    void print() const {
        cout << value;
    }

    T getValue() const { return value; }

    Number<T>& operator=(const Number<T>& other) {
        if (this == &other)
            throw runtime_error("Помилка: самоприсвоєння!");
        value = other.value;
        return *this;
    }

 
    template <typename U>
    Number<double> operator+(const Number<U>& other) const {
        return Number<double>(value + other.getValue());
    }
};

void enterDataManually() {
    try {
        vector<Number<int> > ints;
        vector<Number<double> > doubles;

        int n;
        cout << "Скільки пар чисел (int + double) хочете ввести? ";
        cin >> n;
        if (cin.fail() || n <= 0)
            throw invalid_argument("Некоректне число пар!");

        for (int i = 0; i < n; i++) {
            int x;
            double y;
            cout << "Введіть int: ";
            cin >> x;
            if (cin.fail()) throw invalid_argument("Некоректне int!");

            cout << "Введіть double: ";
            cin >> y;
            if (cin.fail()) throw invalid_argument("Некоректне double!");

            ints.push_back(Number<int>(x));
            doubles.push_back(Number<double>(y));
        }

        cout << fixed << setprecision(2);
        Number<double> total(0.0);

        for (int i = 0; i < n; i++) {
            Number<double> sum = ints[i] + doubles[i];
            cout << "int(" << ints[i].getValue() << ") + double(" << doubles[i].getValue() << ") = Сума(";
            sum.print();
            cout << ")" << endl;

            total = total + sum;
        }

        cout << "Накопичувальна Сума = ";
        total.print();
        cout << endl;
    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }
}

int main() {
    while (true) {
        try {
            cout << "\nМеню\n";
            cout << "1.Ввести дані вручну\n";
            cout << "0.Завершити роботу\n";
            cout << "Ваш вибір: ";

            int choice;
            cin >> choice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                throw invalid_argument("Введено не число!");
            }

            switch(choice) {
                case 1:
                    enterDataManually();
                    break;
                case 0:
                    cout << "Роботу завершено.\n";
                    return 0;
                default:
                    throw out_of_range("Невірний пункт меню!");
            }
        }
        catch (const exception& e) {
            cout << "Помилка: " << e.what() << endl;
        }
    }
}