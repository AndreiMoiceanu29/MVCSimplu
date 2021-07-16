
//
// Created by andrei on 16.07.2021.
//

#ifndef UNTITLED_SERVICE_H
#define UNTITLED_SERVICE_H
#include "Repository.h"

class Service {
private:
     Repository repo;
public:
    Service(Repository&);
    void  addCar(Car&);
    Car readCar(int id);
    Car updateCar(Car& oldCar, Car& newCar);
    Car deleteCar(int id);
    std::vector<Car> filterByNumber(std::string number);

};


#endif //UNTITLED_SERVICE_H
