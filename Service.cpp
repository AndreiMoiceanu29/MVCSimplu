//
// Created by andrei on 16.07.2021.
//

#include "Service.h"
#include <string>
Service::Service(Repository &repo) : repo(repo) {}
void  Service::addCar(Car &car) {
    this->repo.addCar(car);
}
Car Service::readCar(int id) {
    return this->repo.getCar(id);
}

Car Service::updateCar(Car &oldCar, Car &newCar) {
   return this->repo.updateCar(oldCar,newCar);
}

Car Service::deleteCar(int id) {
    return this->repo.deleteCar(id);
}

std::vector<Car> Service::filterByNumber(std::string number) {
    std::vector<Car> cars = this->repo.getAll();
    std::vector<Car> filtered;
    for(auto car : cars){
        if(car.getRegistrationPlate().c_str()[0] == number.c_str()[0] && car.getRegistrationPlate().c_str()[1] && number.c_str()[1]){
            filtered.push_back(car);
        }
    }
    return filtered;
}
