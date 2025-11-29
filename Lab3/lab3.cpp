#include "lab3.h"
#include "main3.cpp"

//B1
B1::B1(string n) : name(n) {}
void B1::show() { cout << "B1: " << name << endl; }
ostream& operator<<(ostream& os, const B1& obj) {
    return os << "B1: " << obj.name;
}

//B2
B2::B2(string n) : name(n) {}
void B2::show() { cout << "B2: " << name << endl; }
ostream& operator<<(ostream& os, const B2& obj) {
    return os << "B2: " << obj.name;
}

//D1
D1::D1(string nB1, string nB2, string n)
    : B1(nB1), B2(nB2), name(n) {}

void D1::show() {
    B1::show();
    B2::show();
    cout << "D1: " << name << endl;
}

ostream& operator<<(ostream& os, const D1& obj) {
    return os << static_cast<const B1&>(obj) << ", "
              << static_cast<const B2&>(obj) << ", D1: " << obj.name;
}

//D2
D2::D2(string nB1, string nB2, string n)
    : B1(nB1), B2(nB2), name(n) {}

void D2::show() {
    B1::show();
    B2::show();
    cout << "D2: " << name << endl;
}

ostream& operator<<(ostream& os, const D2& obj) {
    return os << static_cast<const B1&>(obj) << ", "
              << static_cast<const B2&>(obj) << ", D2: " << obj.name;
}

//D3
D3::D3(string nB1_D1, string nB2_D1, string nD1,
       string nB1_D2, string nB2_D2, string nD2,
       string nD3)
    : D1(nB1_D1, nB2_D1, nD1),
      D2(nB1_D2, nB2_D2, nD2),
      name(nD3)
{}

void D3::show() {
    D1::D1::show();
    D2::show();
    cout << "D3: " << name << endl;
}

ostream& operator<<(ostream& os, const D3& obj) {
    return os << static_cast<const D1&>(obj) << ", "
              << static_cast<const D2&>(obj) << ", D3: " << obj.name;
}
