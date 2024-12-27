#include "Animal Sound.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
// ���� ������ �����ϴ� �Լ�
Animal* createRandomAnimal() {
    int random = std::rand() % 3; // 0, 1, 2 �� ���� �� ����
    switch (random) {
    case 0: return new Dog();
    case 1: return new Cat();
    case 2: return new Cow();
    default: return nullptr;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0))); // ���� �õ� ����

    Zoo zoo;

    // ���� �߰�
    for (int i = 0; i < 5; ++i) { // ���� ���� 5���� �߰�
        zoo.addAnimal(createRandomAnimal());
    }

    // ���� �ൿ ����
   cout << "Zoo animals are making sounds:" << endl;
   zoo.performActions();

    return 0;
}
