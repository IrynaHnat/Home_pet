#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

int main() {
    Dog dog("Buddy", 3);
    Cat cat("Whiskers", 2);
    Parrot parrot("Polly", 1);

    dog.print();
    dog.sound();

    cat.print();
    cat.sound();

    parrot.print();
    parrot.sound();

   
}
