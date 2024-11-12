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

}
//Func
void Passenger::displayPassengerDetalils(){
    cout<< "Passenger's name : " << NameOfPassenger<<endl;
    cout<< "Passenger ID : " <<passenger_id<<endl;
}
string Passenger::getPassengerName(){
    return NameOfPassenger;
}
istream& operator >> (istream& strm , Passenger& p){
    cout<< "Enter Your name : ";
    strm >> p.NameOfPassenger;
    cout<<endl;
    cout<< "Enter Your ID : ";
    strm >> p.passenger_id;
    return strm;
}
int Passenger::getTotalPassengers(){
    return totalPassengers;
}
