#ifndef METHODS_H 
#define METHODS_H

#include "Classes.h"
#include <iostream>


Batery::Batery() : code(""), capacity(0.0f) {} 

Batery::Batery(std::string _code, float _capacity) 
    : code(_code), capacity(_capacity) {} 

void Batery::setCode(std::string _code) {
    code = _code;
}

void Batery::setCapacity(float _capacity) {
    capacity = _capacity;
}

std::string Batery::getCode() {
    return code;
}

float Batery::getCapacity() {
    return capacity;
}

void Batery::showBatery() {
    std::cout << "La batería es la N°" << code;
    std::cout << ", y su capacidad es de " << capacity << "mAh" << std::endl;
}


Phone::Phone(std::string _company, std::string _model, int _year, std::string _code, float _capacity)
    : company(_company), model(_model), year(_year), b1(_code, _capacity) {} 

Phone::Phone(Batery _b1) : b1(_b1) {} 

void Phone::setCompany(std::string _company) {
    company = _company;
}

void Phone::setModel(std::string _model) {
    model = _model;
}

void Phone::setYear(int _year) {
    year = _year;
}

std::string Phone::getCompany() {
    return company;
}

std::string Phone::getModel() {
    return model;
}

int Phone::getYear() {
    return year;
}

void Phone::showPhone() {
    std::cout << "El celular es un " << getCompany() << " " 
              << getModel() << "\nFabricado en el año " << getYear() << "\n"; 
    b1.showBatery(); 
}
#endif 

