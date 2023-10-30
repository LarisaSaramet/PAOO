#include "meniu.hpp"
#include <iostream>

Meniu::Meniu(const std::string& tipMeniuDat, float pretDat)
    : tipMeniu(tipMeniuDat), pret(pretDat) {
    std::cout << "Meniu constructor cu parametri" << std::endl;
}

Meniu::Meniu() : tipMeniu(""), pret(0) {
    std::cout << "Meniu constructor implicit" << std::endl;
}

Meniu::Meniu(const Meniu& x)
    : tipMeniu(x.tipMeniu), pret(x.pret) {
    std::cout << "Meniu copy constructor" << std::endl;
}

Meniu::~Meniu() {
    std::cout << "Meniu destructor" << std::endl;
}

Meniu& Meniu::operator=(const Meniu& x) {
    if (this != &x) {
        tipMeniu = x.tipMeniu;
        pret = x.pret;
    }

    std::cout << "Operator atribuire" << std::endl;

    return *this;
}

const int Meniu::returnPretTotal() const {
    return static_cast<int>(pret);
}

const std::string& Meniu::returnTipMeniu() const{
    return tipMeniu;
}
