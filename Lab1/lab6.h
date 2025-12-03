<<<<<<< HEAD

=======
#ifndef CROP_H
#define CROP_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Crop {
private:
    string name;
    string type;
    int area;
    int yield;
public:
    Crop();
    Crop(const string& n, const string& t, int a, int y);
    Crop(const Crop& other);

    void setName(const string& n);
    void setType(const string& t);
    void setArea(int a);
    void setYield(int y);

    string getName() const;
    string getType() const;
    int getArea() const;
    int getYield() const;

    void show() const;
};

void printTable(const Crop arr[], int size);
void fillAuto(Crop arr[], int& count);
void fillManual(Crop arr[], int& count);
void printAll(const Crop arr[], int count);
void showTestObjects();

#endif
>>>>>>> b335d96 (Сохраняю текущие изменения перед pull)
