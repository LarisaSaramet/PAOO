#include "Meniu.hpp"
#include <iostream>
#include <vector>

int main(){
   Meniu meniu1( "Pizza", 35.49);
 


   
   Meniu meniu2;
   meniu2 = meniu1;

   //std::cout << "Nume produs: " << meniu1.returnTipMeniu() << std::endl;
   //std::cout << "Pret : " << meniu1.returnPretTotal() << std::endl;


   //std::cout << "Nume produs: " << meniu2.returnTipMeniu() << std::endl;
   
    // Afișăm valorile obiectului menu1
    std::cout << "Valori pentru meniu1: " << std::endl;
    std::cout << "Tip meniu: " << meniu1.returnTipMeniu() << std::endl;
    std::cout << "Pret: " << meniu1.returnPretTotal() << std::endl;
   
    std::cout << "Valori pentru meniu2: " << std::endl;
    std::cout << "Tip meniu: " << meniu2.returnTipMeniu() << std::endl;
    std::cout << "Pret: " << meniu2.returnPretTotal() << std::endl;


  Meniu meniu3("Ciorba", 10);
   Meniu meniu4 = meniu3;

  std::cout << "Valori pentru meniu3: " << std::endl;
    std::cout << "Tip meniu: " << meniu3.returnTipMeniu() << std::endl;
    std::cout << "Pret: " << meniu3.returnPretTotal() << std::endl;
   
    std::cout << "Valori pentru meniu4: " << std::endl;
    std::cout << "Tip meniu: " << meniu4.returnTipMeniu() << std::endl;
    std::cout << "Pret: " << meniu4.returnPretTotal() << std::endl;


   

   return 0;

}
