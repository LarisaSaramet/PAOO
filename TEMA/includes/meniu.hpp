#ifndef MENIU_HPP
#define MENIU_HPP
#include <string>
#include "../includes/mancare.hpp"

using namespace mancare;


namespace meniu
{

    class Meniu : public Mancare{
        
        private:
            char *tipMeniu;
            float pret;
            int nrPortii;
           
        public:
            //constructor cu param
            Meniu(const char* tipMeniu, float pret, int nrPortii);
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

            void detaliiMeniu() override;
            // setters
            void setTipMeniu(const char* newTipMeniu);
            void setPret(float newPret);
            void setNumarPortii(int newnrPortii);
        

            //getters
            const char* getTipMeniu();
            float getPret();
            const int getNumarPortii();
            
    };
}


#endif