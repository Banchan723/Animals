#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

// Animal 추상 클래스
class Animal {
public:
    virtual void makeSound() const = 0; // 순수 가상 함수
    virtual ~Animal() {} // 가상 소멸자
};

#endif
