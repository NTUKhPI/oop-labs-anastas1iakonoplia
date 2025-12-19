#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <fstream>
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
    const string& getType() const;
    float getArea() const;
    float getYield() const;

    void show() const;

    void writeBinary(ofstream& fout) const;
    void readBinary(ifstream& fin);
};

#endif