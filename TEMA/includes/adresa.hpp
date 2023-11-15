#ifndef ADRESA_H
#define ADRESA_H

#include <string>

using namespace std;

namespace adresa{
    class Adresa_Livrare{
        private:
            string str;
            int nr;
        
        public:
            Adresa_Livrare(string strada, int numar);
            string getAdresa();
            int getNumar();
    };

}



#endif