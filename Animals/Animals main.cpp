#include "Animal Sound.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
// 랜덤 동물을 생성하는 함수
Animal* createRandomAnimal() {
    int random = std::rand() % 3; // 0, 1, 2 중 랜덤 값 생성
    switch (random) {
    case 0: return new Dog();
    case 1: return new Cat();
    case 2: return new Cow();
    default: return nullptr;
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0))); // 랜덤 시드 설정

    Zoo zoo;

    // 동물 추가
    for (int i = 0; i < 5; ++i) { // 랜덤 동물 5마리 추가
        zoo.addAnimal(createRandomAnimal());
    }

    // 동물 행동 실행
   cout << "Zoo animals are making sounds:" << endl;
   zoo.performActions();

    return 0;
}
