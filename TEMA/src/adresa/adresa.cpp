#include "../includes/adresa.hpp"

using namespace std;

namespace adresa{
    Adresa_Livrare::Adresa_Livrare(string strada, int numar){
        str  = strada;
        nr = numar;
    }

    string Adresa_Livrare::getAdresa(){
        return str;
    }

    int Adresa_Livrare::getNumar(){
        return nr;
    }

}