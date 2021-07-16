//
// Created by andrei on 16.07.2021.
//

#include "Car.h"

Car::Car() {}
Car::Car(std::string &name, std::string &owner, std::string &registrationPlate, int id) {
    this->name = name;
    this->owner = owner;
    this->registrationPlate = registrationPlate;
    this->id = id;
}
void Car::setName(const std::string &name1) { this->name = name1; }
std::string Car::getName() { return this->name; }
void Car::setId(int index) { this->id = index; }
int Car::getId() { return this->id; }
void Car::setOwner(std::string& owner) { this->owner = owner; }
std::string Car::getOwner() { return this->owner; }
void Car::setRegistrationPlate(std::string &registrationPlate) { this->registrationPlate = registrationPlate; }
std::string Car::getRegistrationPlate() { return this->registrationPlate; }

