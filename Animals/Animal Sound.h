#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

// Animal �߻� Ŭ����
class Animal {
public:
    virtual void makeSound() const = 0; // ���� ���� �Լ�
    virtual ~Animal() {} // ���� �Ҹ���
};

#endif
