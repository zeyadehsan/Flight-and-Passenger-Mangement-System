#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>
#include "flight.h"
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
        // func addded to return passenger name for += overloader func
        string getPassengerName();
        friend istream& operator >> (istream & strm ,Passenger & p);
        friend bool searchPassengerName();
        static int getTotalPassengers();

};



#endif 
