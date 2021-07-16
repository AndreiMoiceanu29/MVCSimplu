//
// Created by andrei on 16.07.2021.
//

#include "Repository.h"
#include "Car.h"
#include <vector>
Car Repository::getCar(int id) {
    for(auto car : this->database){
        if(car.getId() == id){
            return car;
        }
    }
}

Car Repository::addCar(Car &car) {
    this->database.push_back(car);
    return car;
}
Car Repository::deleteCar(int id) {
    for(int i=0;i<this->database.size();i++){
        if(database[i].getId() == id){
            Car car = database[i];
            database.erase(database.begin() + i);
            return car;
        }
    }
}
Car Repository::updateCar(Car &oldCar, Car &newCar) {
    for(int i=0; i<this->database.size();i++){
        if(database[i].getId() == oldCar.getId()){
            database[i] = newCar;
            return newCar;
        }
    }
}

std::vector<Car> Repository::getAll() { return this->database; }