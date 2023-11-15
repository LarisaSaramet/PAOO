#include "../includes/bautura.hpp"


using namespace std;

namespace bautura{
    template <typename T>
    Bautura<T>::Bautura(const std::string& name, const T& cantitate){
        nume = name;
        ce_cantitate = cantitate;
    }

    template <typename T>
    void Bautura<T>::afisezaDetaliiBautura() const{
        cout << "Fel bautura: "  << nume << ", cantitate: " << ce_cantitate << endl;
    }

    template class Bautura<int>;   
}