#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
    int age;

public:
    Pet(const string& name, int age) : name(name), age(age) {
        cout << ">>> Ctor Pet: " << name << endl;
    }
    virtual ~Pet() {
        cout << ">>> Dtor Pet: " << name << endl;
    }

    virtual void sound() const = 0;  

    virtual void print() const {
        cout << "Pet Name :: " << name << endl;
        cout << "Pet Age  :: " << age << endl;
    }
};
