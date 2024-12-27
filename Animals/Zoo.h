#ifndef ZOO_H
#define ZOO_H

#include "Animal Sound.h"
#include <vector>

// Zoo Ŭ����
class Zoo {
private:
    std::vector<Animal*> animals; // ���� ��ü ������ ���� ����
public:
    void addAnimal(Animal* animal) {
        animals.push_back(animal);
    }

    void performActions() const {
        for (Animal* animal : animals) {
            if (animal) {
                animal->makeSound();
            }
        }
    }

    ~Zoo() {
        for (Animal* animal : animals) {
            delete animal; // ���� �޸� ����
        }
    }
};

#endif
