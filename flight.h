#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
#include "passenger.h"
using namespace std;



//For << operator to work in class it needs to be prototyped outside class
// class Flight; 
// ostream &operator << (ostream &strm , const Flight &obj); 


class Flight{
    private:
        int no_of_flight,  seating_capacity,  current_no_booked_seats;
        string flight_destination,  dep_time_zone; 
        string * passengers_names;
        int rows, seats_per_row;
        string ** seating_plan;
    public:
        //Three argument constructor
        Flight(int seat_c, int no_of_f, string flight_d);
        //copy constructor
        Flight(const Flight &obj);
        //Destructor
        ~Flight();

        //Func
        void displaySeatingPlan();
        void addPassenger(string &name);
        void removePassenger(const string &name);
        void displayFlightDetalils();
        bool searchPassengerName(const string & name_Passenger);
        //missing func 
        bool searchSeatNo(int i , int j);

        //operator overloading funcs??
        friend ostream &operator << (ostream &strm, const Flight &obj);
        Flight& operator++();
        Flight& operator+=( Passenger & obj);
        Flight& operator--(int);
        Flight& operator-=(const int  num_Passengers);
       
};
 

#endif