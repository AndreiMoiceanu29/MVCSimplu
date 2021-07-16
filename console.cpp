//
// Created by andrei on 16.07.2021.
//

#include "console.h"
#include "Service.h"
#include "Car.h"
#include <iostream>
#include <string>

Console::Console(Service service) : service(service){}

void Console::run() {
    bool endLoop = false;
    while(!endLoop) {
        printMenu();
        int option;
        std::cin >> option;
        switch (option) {
            case 1: {
                handleAddOption();
            }
                break;
            case 2: {
                handleReadOption();
            }
                break;
            case 3: {
                handleUpdateOption();
            }
                break;
            case 4: {
                handleDeleteOption();
            }
                break;
            case 5: {
                handleFilterOption();
            }
                break;
            case 6: {
                endLoop = true;
            }
                break;
            default: {
                std::cout << "Wrong option. Please try again" << std::endl;
            }
        }
    }


}

void Console::printMenu() {
    std::cout << "*******************" << std::endl;
    std::cout << "   Car Database   "  << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "Pick an option" << std::endl;
    std::cout << "1) Add car " << std::endl;
    std::cout << "2) Read car info" << std::endl;
    std::cout << "3) Update car info" << std::endl;
    std::cout << "4) Delete car" << std::endl;
    std::cout << "5) Filter car by region" << std::endl;
    std::cout << "6) Exit" << std::endl;
}



void Console::handleAddOption() {
    Car car = readCar();
    this->service.addCar(car);

}

void Console::handleReadOption() {
    std::cout << "Insert the car ID" << std::endl;
    int id;
    std::cin >> id;

    Car car = this->service.readCar(id);
    displayCar(car);
}

void Console::handleUpdateOption() {
    std::cout << "Insert old car data:" << std::endl;
    Car oldCar = readCar();
    std::cout << "Insert new car data:" << std::endl;
    Car newCar = readCar();
    this->service.updateCar(oldCar,newCar);


}

void Console::handleDeleteOption() {
    std::cout << "Please enter the car id" << std::endl;
    int id;
    std::cin >> id;
    this->service.deleteCar(id);

}

void Console::handleFilterOption() {
    std::string region;
    std::cout << "Insert a region" << std::endl;
    std::cin.ignore();
    std::getline(std::cin,region,'\n');
    std::vector<Car> cars = this->service.filterByNumber(region);
    for(auto car : cars){
        displayCar(car);
    }
}

Car Console::readCar() {
    std::cout << "Insert car data" << std:: endl;
    std::cin.ignore();
    std::string name;
    std::string owner;
    std::string plate;
    int id;
    std::cout << "Car name" << std::endl;
    std::getline(std::cin,name,'\n');
    std::cin.ignore();
    std::cout << "Car owner" << std::endl;
    std::getline(std::cin,owner,'\n');
    std::cin.ignore();
    std::cout << "Car registration plate" << std::endl;
    std::getline(std::cin,plate,'\n');
    std::cin.ignore();
    std::cout << "Car id" << std::endl;
    std::cin >> id;
    Car car(name,owner,plate,id);
    return car;
}
void Console::displayCar(Car& car){
    std::cout << car.getName() << " " << car.getOwner() << " " << car.getRegistrationPlate() << " " << car.getId() << std::endl;
}