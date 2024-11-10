#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>
using namespace std;

class Passenger{
    private:
    string NameOfPassenger;
    int passenger_id;
    static int totalPassengers;
    public:
    //Two argument constructor
    Passenger(string name_of_p,int id);
    //Destructor
    ~Passenger();
    //Func
    void displayPassengerDetalils();
    static int getTotalPassengers();
    friend istream& operator>>(istream & in ,Passenger& p);
};



#endif 
