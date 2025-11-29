#ifndef LAB3_H
#define LAB3_H

#include <iostream>
#include <string>
using namespace std;

//B1
class B1 {
protected:
    string name;
public:
    B1(string n);
    virtual void show();
    friend ostream& operator<<(ostream& os, const B1& obj);
};

//B2
class B2 {
protected:
    string name;
public:
    B2(string n);
    virtual void show();
    friend ostream& operator<<(ostream& os, const B2& obj);
};

//D1
class D1 : private B1, public B2 {
protected:
    string name;
public:
    D1(string nB1, string nB2, string n);
    void show() override;
    friend ostream& operator<<(ostream& os, const D1& obj);

    using B1::show;
};

//D2
class D2 : private B2, public B1 {
protected:
    string name;
public:
    D2(string nB1, string nB2, string n);
    void show() override;
    friend ostream& operator<<(ostream& os, const D2& obj);

    using B2::show;
};

//D3
class D3 : private D1, public D2 {
    string name;
public:
    D3(string nB1_D1, string nB2_D1, string nD1,
       string nB1_D2, string nB2_D2, string nD2,
       string nD3);

    void show() override;
    friend ostream& operator<<(ostream& os, const D3& obj);
};

#endif
