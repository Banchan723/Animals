#ifndef CAT_H
#define CAT_H

#include "Animal Sound.h"

// Cat Å¬·¡½º
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "³Ä¿Ë" << std::endl;
    }
};

#endif
