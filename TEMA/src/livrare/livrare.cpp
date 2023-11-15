#include "../includes/livrare.hpp"
#include <iostream>
#include <memory>

using namespace std;

namespace persoana
{
    Persoana::Persoana(string name, shared_ptr<Adresa_Livrare> address){
        nume = name;
        adresa = make_shared<adresa::Adresa_Livrare>(address->getAdresa(), address->getNumar());
    }

    void Persoana::afiseazaPersoana(){
        cout<< "Nume client: " << nume << ", adresa: " << adresa->getAdresa() << ", " << adresa->getNumar() << endl;
    }
} // namespace persoana

