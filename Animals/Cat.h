#ifndef CAT_H
#define CAT_H

#include "Animal Sound.h"

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "�Ŀ�" << std::endl;
    }
};

#endif
