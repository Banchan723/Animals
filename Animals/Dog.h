#ifndef DOG_H
#define DOG_H

#include "Animal Sound.h"

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "��" << std::endl;
    }
};

#endif
