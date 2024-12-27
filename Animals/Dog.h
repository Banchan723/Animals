#ifndef DOG_H
#define DOG_H

#include "Animal Sound.h"

// Dog Å¬·¡½º
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "¸Û" << std::endl;
    }
};

#endif
