#ifndef MENIU_HPP
#define MENIU_HPP
#include <string>
#include "mancare.hpp"


namespace Restaurant
{

    class Meniu : public Mancare{
        
        private:
            char *tipMeniu;
            float pret;
           
        public:
            //constructor cu param
            Meniu(const char* tipMeniu, float pret);
            //constructor fara param
            Meniu();
            //move constructor
            Meniu(Meniu&& x);
            //assign op
            Meniu& operator=(const Meniu& x);
            //copy constructor
            Meniu(const Meniu& x);
            //destructor
            ~Meniu();

            void detaliiMeniu();
            // setters
            void setTipMeniu(const char* newTipMeniu);
            void setPret(float newPret);
        

            //getters
            const char* getTipMeniu();
            float getPret();
            
    };
}


#endif