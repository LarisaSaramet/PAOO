#include <string>
#include <iostream>

class Meniu 
{
    public:
    //Constructor cu param 
        Meniu(const std::string& tipMeniu, float pret) 
                :tipMeniu(tipMeniu), pret(pret)
{
    std::cout << "Meniu constructor cu parametri" << std::endl;
}

    //Constructor fara param
        Meniu() : tipMeniu(""), pret(0)
{
    std::cout << "Meniu constructor implicit" << std::endl;
}
    //suprascrierea copy constructor
        Meniu(const Meniu& x)
            :tipMeniu(x.tipMeniu), pret(x.pret)
{
    std::cout << "Meniu copy constructor" << std::endl;
}
    //Destructor
        ~Meniu()
 {
    std::cout << "Meniu destructor" << std::endl;
 }
    //Oprerator de atribuire
        Meniu& operator=(const Meniu& x){
            if(this != &x){
                tipMeniu = x.tipMeniu;
                pret = x.pret;
            }
            std::cout << "Operator atribuire" << std::endl;
            return *this;
        }
    //Metoda de a returna pretul total
        int returnPretTotal() const{
            return static_cast<int>(pret);
        }
    //Metoda pentru a returna meniul
        const std::string& returnTipMeniu() const{
            return tipMeniu;
        }

    private:
        std::string tipMeniu;
        float pret;
};
