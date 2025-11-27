#include "lab2.h"
#include "main2.cpp"

AgroCrop::AgroCrop() : Name("N/A"), Type("З"), Area(0.0), Yield(0.0) {}
AgroCrop::AgroCrop(string name, string type, float area, float yield)
    : Name(name), Type(type), Area(area), Yield(yield) {}
AgroCrop::AgroCrop(const AgroCrop& ob)
    : Name(ob.Name), Type(ob.Type), Area(ob.Area), Yield(ob.Yield) {}

void AgroCrop::setName(const string& name) { Name = name; }
void AgroCrop::setType(const string& type) { Type = type; }
void AgroCrop::setArea(float area) { Area = area; }
void AgroCrop::setYield(float yield) { Yield = yield; }

const string& AgroCrop::getName() const { return Name; }
string AgroCrop::getType() const { return Type; }
float AgroCrop::getArea() const { return Area; }
float AgroCrop::getYield() const { return Yield; }

AgroCrop& AgroCrop::operator=(const AgroCrop& ob) {
    if (this != &ob) {
        Name = ob.Name;
        Type = ob.Type;
        Area = ob.Area;
        Yield = ob.Yield;
    }
    return *this;
}

bool AgroCrop::operator==(const AgroCrop& other) const {
    return Name == other.Name && Type == other.Type &&
           Area == other.Area && Yield == other.Yield;
}

AgroCrop AgroCrop::operator+(const AgroCrop& other) const {
    return AgroCrop(Name, Type, Area + other.Area, Yield + other.Yield);
}

int AgroCrop::operator[](const char* str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void AgroCrop::operator()(string name, string type, float area, float yield) {
    Name = name;
    Type = type;
    Area = area;
    Yield = yield;
}

bool operator==(const AgroCrop& a, const AgroCrop& b) {
    return a.Name == b.Name && a.Type == b.Type &&
           a.Area == b.Area && a.Yield == b.Yield;
}

AgroCrop operator+(const AgroCrop& a, const AgroCrop& b) {
    return AgroCrop(a.Name, a.Type, a.Area + b.Area, a.Yield + b.Yield);
}

ostream& operator<<(ostream& os, const AgroCrop& c) {
    os << "Назва: " << c.Name
       << ", Тип: " << c.Type
       << ", Посівна площа: " << c.Area << " га"
       << ", Урожайність: " << c.Yield << " ц/га";
    return os;
}

istream& operator>>(istream& is, AgroCrop& c) {
    cout << "Введіть назву культури: ";
    is >> c.Name;
    cout << "Введіть тип (З/Б): ";
    is >> c.Type;
    cout << "Введіть посівну площу (га): ";
    is >> c.Area;
    cout << "Введіть урожайність (ц/га): ";
    is >> c.Yield;
    return is;
}

void AgroCrop::show() const {
    cout << *this << endl;
}
