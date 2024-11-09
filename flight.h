#ifndef FLIGHT_H
#define FLIGHT_H
#include<iostream>
using namespace std;
class Flight{
    private:
        int no_of_flight,  seating_capacity,  current_no_booked_seats;
        string flight_destination,  dep_time_zone; 
        string * passengers_names;
        string ** seating_plan;
    public:
        Flight();
        void displaySeatingPlan();
        void addPassenger();
        void removePassenger();
        void displayFlightDetalils();
        bool searchPassengerName();
        bool searchSeatNo();


 


};
 

#endif