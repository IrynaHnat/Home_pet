#pragma once
#include "Pet.h"

class Cat : public Pet {
public:
    Cat(const string& name, int age) : Pet(name, age) {
        cout << ">>> Ctor Cat: " << name << endl;
    }
    ~Cat() {
        cout << ">>> Dtor Cat: " << name << endl;
    }

    void sound() const override {
        cout << name << " says: Meow!" << endl;
    }

    void print() const override {
        Pet::print();
        cout << "Type     :: Cat" << endl;
    }
};
