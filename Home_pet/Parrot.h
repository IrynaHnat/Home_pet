#pragma once
#include "Pet.h"

class Parrot : public Pet {
public:
    Parrot(const string& name, int age) : Pet(name, age) {
        cout << ">>> Ctor Parrot: " << name << endl;
    }
    ~Parrot() {
        cout << ">>> Dtor Parrot: " << name << endl;
    }

    void sound() const override {
        cout << name << " says: Squawk!" << endl;
    }

    void print() const override {
        Pet::print();
        cout << "Type     :: Parrot" << endl;
    }
};
