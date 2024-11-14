//Zeyad Ahmed Ehsan 20236041
//Mo'men Osman Mohammed 20236106


#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
//#include<cmath> for clion needed
#include "passenger.h"
using namespace std;




class Passenger; 

class Flight{
    private:
        int no_of_flight,  seating_capacity,  current_no_booked_seats;
        string flight_destination,  dep_time_zone; 
        string * passengers_names;
        int rows, seats_per_row;
        string ** seating_plan;
        Passenger ** passengers;
    public:
        //Three argument constructor
        Flight(int seat_c, int no_of_f, string flight_d);
        //copy constructor
        Flight(const Flight &obj);
        //Destructor
        ~Flight();


        //Func
        void displaySeatingPlan();
        void addPassenger(int num_passengers, Passenger * new_passengers[]);
        void removePassenger(const Passenger & p);

        void displayFlightDetalils();

        bool searchPassengerName(const string name_Passenger);
        bool searchSeatNo(int row , int seat);

        //operator overloading funcs??
        friend ostream &operator << (ostream &strm, const Flight &obj);
        Flight& operator++();
        Flight& operator+=( Passenger& obj);
        Flight& operator--(int);
        Flight& operator-=(const int  num_Passengers);
       
};
 
#endif