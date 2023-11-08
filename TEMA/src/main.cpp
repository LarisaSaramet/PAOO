#include "meniu/meniu.hpp"
#include <iostream>
using namespace std;
using namespace Restaurant;

int main(){
  Meniu meniu1("Pizza", 35.49);
  Meniu meniu2 = meniu1; //copy
  Meniu meniu3("Salata", 24.99);
  
  cout <<"Meniuri: " << std::endl;
  meniu1.detaliiMeniu();

  Meniu meniu4;
  meniu4 = meniu3;
  cout << "Detalii meniu 4: " ;
  meniu4.detaliiMeniu();
  cout << endl;

  Meniu tmp("Supa",14.99);
  Meniu meniu5(move(tmp));
  cout << "Detalii meniu mutat: ";
  meniu5.detaliiMeniu();
  cout << endl;  

  cout << "Aici avem setter:";
  meniu1.setTipMeniu("meniu special") ;
  meniu1.setPret(30.99);
  meniu1.detaliiMeniu();
  cout << endl;

  
  cout << "Aici avem getter: \n";
  cout << "Meniul: "; 
  meniu3.getTipMeniu();
  cout<< "la pretul: ";
  meniu3.getPret();
  cout << endl;


  return 0;

}
