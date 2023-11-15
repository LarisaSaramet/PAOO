#ifndef BAUTURA_H
#define BAUTURA_H

#include <iostream>
#include <string>

namespace bautura
{   
    template <typename T>

    class Bautura{
        private: 
            std::string nume;
            T ce_cantitate;

        public:
            Bautura(const std::string& name, const T& cantiate );
            void afisezaDetaliiBautura() const;

    };


    extern template class Bautura<int>;

    
} // namespace bautura


#endif