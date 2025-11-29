#include "lab4.h"
#include "main.cpp"

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
const string& AgroCrop::getType() const { return Type; }
float AgroCrop::getArea() const { return Area; }
float AgroCrop::getYield() const { return Yield; }

void AgroCrop::show() const {
    cout << "Назва: " << Name
         << "\nТип: " << Type
         << "\nПлоща: " << Area
         << "\nУрожайність: " << Yield << endl;
}

void AgroCrop::writeBinary(ofstream& fout) const {
    if (!fout) throw "Помилка відкриття файлу для запису!";
    size_t len;

    len = Name.size();
    fout.write((char*)&len, sizeof(len));
    fout.write(Name.c_str(), len);

    len = Type.size();
    fout.write((char*)&len, sizeof(len));
    fout.write(Type.c_str(), len);

    fout.write((char*)&Area, sizeof(Area));
    fout.write((char*)&Yield, sizeof(Yield));
}

void AgroCrop::readBinary(ifstream& fin) {
    if (!fin) throw "Помилка відкриття файлу для читання!";

    size_t len;
    char* buf;

    fin.read((char*)&len, sizeof(len));
    buf = new char[len + 1];
    fin.read(buf, len);
    buf[len] = 0;
    Name = buf;
    delete[] buf;

    fin.read((char*)&len, sizeof(len));
    buf = new char[len + 1];
    fin.read(buf, len);
    buf[len] = 0;
    Type = buf;
    delete[] buf;

    fin.read((char*)&Area, sizeof(Area));
    fin.read((char*)&Yield, sizeof(Yield));
}