#include "meniu.hpp" 
#include <iostream>
#include <cstring>

    
using namespace std;
namespace Restaurant {

    Meniu::Meniu(const char* tipMeniu, float pret){
        std::cout << "Meniu constructor cu param" << std::endl;
        this->tipMeniu = new char[strlen(tipMeniu) +1];
        strcpy(this->tipMeniu, tipMeniu);

        this->pret = pret;
    }

    Meniu::Meniu(){
        std::cout << "Constructor implicit" << std::endl;
    }

    Meniu::~Meniu() {
        std::cout << "Meniu destructor" << std::endl;
        delete[] tipMeniu;
    }

    Meniu::Meniu(const Meniu& x){
        std::cout << "Copy constructor" << std::endl;
        this->tipMeniu = new char[strlen(x.tipMeniu) +1];
        strcpy(this->tipMeniu, x.tipMeniu);

        this->pret = x.pret;
    //   
    }

    Meniu& Meniu::operator=(const Meniu& x) {
        std::cout << "Operator atribuire" << std::endl;
        
        if (this != &x) { 

            delete[] tipMeniu;
            
            this->tipMeniu = new char[strlen(x.tipMeniu) +1];
            strcpy(this->tipMeniu, x.tipMeniu);

            this->pret = x.pret;
            
        }
        
        return *this;
    }


    Meniu::Meniu(Meniu&& x) {
        std::cout << "Move constructor" << std::endl;
        this->tipMeniu=std::move(x.tipMeniu);
        this->pret= x.pret;

        x.tipMeniu = nullptr;
        x.pret = 0;
    }


    void Meniu::detaliiMeniu(){
        std::cout<<"Tip meniu: " <<  tipMeniu <<  std::endl;
        std::cout<<"Pret: " <<  pret <<  std::endl;

    }

    //settere
    void Meniu::setTipMeniu(const char* newTipMeniu){
        delete[] tipMeniu;
        tipMeniu = new char[strlen(newTipMeniu) +1];
        strcpy(tipMeniu, newTipMeniu);
    }

    void Meniu::setPret(float newPret){
        pret = newPret;
    }

    //gettere
    const char* Meniu::getTipMeniu(){
        return tipMeniu;
    }

    float Meniu::getPret(){
        return pret;
    }

}