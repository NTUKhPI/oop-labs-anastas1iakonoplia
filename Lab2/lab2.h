<<<<<<< HEAD

=======
#ifndef AGRO_H
#define AGRO_H

#include <iostream>
#include <string>
using namespace std;

class AgroCrop {
private:
    string Name;
    string Type;
    float Area;
    float Yield;

public:
    AgroCrop();
    AgroCrop(string name, string type, float area, float yield);
    AgroCrop(const AgroCrop& ob);

    void setName(const string& name);
    void setType(const string& type);
    void setArea(float area);
    void setYield(float yield);

    const string& getName() const;
    string getType() const;
    float getArea() const;
    float getYield() const;

    AgroCrop& operator=(const AgroCrop& ob);
    bool operator==(const AgroCrop& other) const;
    AgroCrop operator+(const AgroCrop& other) const;
    int operator[](const char* str);
    void operator()(string name, string type, float area, float yield);

    void show() const;

    friend bool operator==(const AgroCrop& a, const AgroCrop& b);
    friend AgroCrop operator+(const AgroCrop& a, const AgroCrop& b);
    friend ostream& operator<<(ostream& os, const AgroCrop& c);
    friend istream& operator>>(istream& is, AgroCrop& c);
};

#endif
>>>>>>> b335d96 (Сохраняю текущие изменения перед pull)
