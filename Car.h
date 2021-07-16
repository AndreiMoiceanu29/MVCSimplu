//
// Created by andrei on 16.07.2021.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H
#include <string>

class Car {

private:
    std::string name;
    std::string owner;
    std::string registrationPlate;
    int id;
public:
    Car();
    Car(std::string& ,std::string& ,std::string& ,int);
    void setName(const std::string &);
    std::string getName();
    void setId(int);
    int getId();
    void setOwner(std::string&);
    std::string getOwner();
    void setRegistrationPlate(std::string&);
    std::string getRegistrationPlate();
};


#endif //UNTITLED_CAR_H
