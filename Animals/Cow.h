#ifndef COW_H
#define COW_H

#include "Animal Sound.h"

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() const override {
        std::cout << "����" << std::endl;
    }
};

#endif
