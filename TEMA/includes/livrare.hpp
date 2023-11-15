#ifndef LIVRARE_H
#define LIVRARE_H

#include <iostream>
#include <string>
#include <memory>
#include "../includes/adresa.hpp"

using namespace std;
using namespace adresa;

namespace persoana{
    class Persoana {
        private:
            string nume;
            shared_ptr<Adresa_Livrare> adresa;
        
        public:
            Persoana(string nume, shared_ptr<Adresa_Livrare> address);
            void afiseazaPersoana();
    };
}

#endif