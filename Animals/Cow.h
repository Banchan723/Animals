#ifndef COW_H
#define COW_H

#include "Animal Sound.h"

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() const override {
        std::cout << "음매" << std::endl;
    }
};

#endif
