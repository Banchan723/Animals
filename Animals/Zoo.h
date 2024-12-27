#ifndef ZOO_H
#define ZOO_H

#include "Animal Sound.h"
#include <vector>

// Zoo 클래스
class Zoo {
private:
    std::vector<Animal*> animals; // 동물 객체 포인터 저장 벡터
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
            delete animal; // 동적 메모리 해제
        }
    }
};

#endif
