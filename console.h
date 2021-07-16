//
// Created by andrei on 16.07.2021.
//

#ifndef UNTITLED_CONSOLE_H
#define UNTITLED_CONSOLE_H

#include "Service.h"
#include "Car.h"
class Console {
    Service service;
public:
    Console(Service service);
    void run();
    void printMenu();
    void handleAddOption();
    void handleReadOption();
    void handleUpdateOption();
    void handleDeleteOption();
    void handleFilterOption();
    Car readCar();
    void displayCar(Car&);
};


#endif //UNTITLED_CONSOLE_H
