#include <iostream>
#include <memory>

#include "Dog.h"

int main() {

    std::string dogName = "Karabas";
    std::unique_ptr<Animal<Dog>> animalDog = std::make_unique<Dog>(dogName);
    animalDog->eat();
    animalDog->sleep();

    return 0;
}