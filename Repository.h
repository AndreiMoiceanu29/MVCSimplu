//
// Created by andrei on 16.07.2021.
//

#ifndef UNTITLED_REPOSITORY_H
#define UNTITLED_REPOSITORY_H
#include "Car.h"
#include <vector>

class Repository {
private:
    std::vector<Car> database;
public:
    Car getCar(int);
    Car  addCar(Car&);
    Car deleteCar(int);
    Car updateCar(Car&, Car&);
    std::vector<Car> getAll();
};


#endif //UNTITLED_REPOSITORY_H
