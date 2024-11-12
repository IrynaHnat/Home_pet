#pragma once
#include "Pet.h"

class Dog : public Pet {
public:
    Dog(const string& name, int age) : Pet(name, age) {
        cout << ">>> Ctor Dog: " << name << endl;
    }
    ~Dog() {
        cout << ">>> Dtor Dog: " << name << endl;
    }

    void sound() const override {
        cout << name << " says: Woof!" << endl;
    }

    void print() const override {
        Pet::print();
        cout << "Type     :: Dog" << endl;
    }
};
