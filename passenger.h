
#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>
#include "flight.h"
using namespace std;

class Passenger{
    private:
        string nameofpassenger;
        int passenger_id;
        static int totalPassengers;
       

    public:

        //Two argument constructor
        Passenger(string name_of_p,int id);
        Passenger();
        //Destructor
        ~Passenger();
        //Func
        void displayPassengerDetalils();
        // func addded to return passenger name for += overloader func
        friend istream& operator >> (istream & strm ,Passenger & p);
        friend bool searchPassengerName();
        static int getTotalPassengers();


        //not relevant to Assignment function. made done for easier access (needed for code to run but redundant)
        string getPassengerName();
        string getName() const {
        return nameofpassenger;}
        int getId() const {
        return passenger_id;}

};



#endif 
