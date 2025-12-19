#ifndef CLASSES_H 
#define CLASSES_H

#include <iostream>
#include <string> 

class Batery {
private:
    std::string code;
    float capacity;

public:
    Batery();
    Batery(std::string, float);
    void setCode(std::string);
    std::string getCode();
    void setCapacity(float);
    float getCapacity();
    void showBatery();
};

class Phone {
private:
    std::string company, model;
    int year;
    Batery b1;
public:
    Phone(Batery);
    Phone(std::string, std::string, int, std::string, float);
    void setCompany(std::string);
    std::string getCompany();
    void setModel(std::string);
    std::string getModel();
    void setYear(int);
    int getYear();
    void showPhone();
};

#endif 