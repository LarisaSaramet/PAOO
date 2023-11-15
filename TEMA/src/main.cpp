#include "../includes/meniu.hpp"
#include "../includes/bautura.hpp"
#include "../includes/livrare.hpp"
#include "../includes/adresa.hpp"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
using namespace meniu;
using namespace mancare;
using namespace adresa;
using namespace persoana;

int main(){

  const char* tipMeniu;
  Meniu meniu1("Pizza", 35.49,1);
  Meniu meniu2 = meniu1; //copy
  Meniu meniu3("Salata", 24.99, 2);
  
  cout <<"Meniuri: " << std::endl;
  meniu1.detaliiMeniu();

  Meniu meniu4;
  meniu4 = meniu3; //assign 
  cout << "Detalii meniu 4: " ;
  meniu4.detaliiMeniu();
  cout << endl;

  Meniu tmp("Supa",14.99, 1);
  Meniu meniu5(move(tmp));
  cout << "Detalii meniu mutat: ";
  meniu5.detaliiMeniu();
  //tmp.detaliiMeniu();
  cout << endl;  

  cout << "Aici avem setter:";
  meniu1.setTipMeniu("meniu special") ;
  meniu1.setPret(30.99);
  meniu1.detaliiMeniu();
  cout << endl;

  //Meniu meniu6;

  // cout << "Aici avem getter: \n";
  // cout << "Meniul: "; 
  // meniu5.getTipMeniu();
  // cout << endl;
  // cout<< "Get pret: ";
  // meniu1.getPret();
  
  //cout << endl;

  cout << "AICI NE FOLOSIM DE CLASA TEMPLATE BAUTUTA SI DE METODE" << endl;
  cout << endl;

  vector<bautura::Bautura<int>>vectorBauturi;
  bautura::Bautura<int> bea("Apa", 2 );


  vectorBauturi.push_back(bautura::Bautura<int>("Suc", 2));
  vectorBauturi.push_back(bautura::Bautura<int>("Bere", 4));
  vectorBauturi.push_back(bautura::Bautura<int>("Cafea", 1));

  cout << "Vector cu bauturi :)" << endl;

  for(const auto& bautura : vectorBauturi){
        
        bautura.afisezaDetaliiBautura();
  }

  bea.afisezaDetaliiBautura();
  cout << endl;

  tipMeniu = "Meniul zilei";
  unique_ptr<Meniu> uniquePtr_Meniu = make_unique<Meniu>(tipMeniu,30, 1);

  auto sharedAddress = make_shared<Adresa_Livrare>("Strada Carei", 15);
  Persoana* client1 = new Persoana("Larisa", sharedAddress);
  Persoana* client2 = new Persoana("Alexandra", sharedAddress);


  cout << "Meniu alocat cu unique pointer"<<endl;
  cout << "Meniu: " << uniquePtr_Meniu->getTipMeniu() << ", pret: " << uniquePtr_Meniu->getPret() << ", numar portii: " << uniquePtr_Meniu->getNumarPortii()<< endl;
  client1 ->afiseazaPersoana();
  client2 ->afiseazaPersoana();

  cout << endl;
  return 0;

}
