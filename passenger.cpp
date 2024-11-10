#include<iostream>
#include "passenger.h"
using namespace std;

int Passenger::totalPassengers = 0;
//Two argument constructor  
Passenger::Passenger(string name_of_p,int id):NameOfPassenger(name_of_p),passenger_id(id){
  totalPassengers++;
}
//Destructor
Passenger::~Passenger(){
  totalPassengers--;
  cout<< "Passenger : " << NameOfPassenger << " has been removed."<<endl;
}
//Func
void passenger::displayPassengerDetalils(){
cout<< "Passenger's name : " << NameOfPassenger<<endl;
cout<< "Passenger ID : " <<passenger_id<<endl;
}
istream& operator>>(istream & in ,const Passenger& p){
cout<< "Enter Your name : "
in>> p.NameOfPassenger;
cout<<endl;
cout<< "Enter Your ID : "
in>> p.passenger_id;
return in;
}
int Passenger::getTotalPassengers(){
return totalPassengers
}
