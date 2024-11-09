#include<iostream>
#include "flight.h"
using namespace std;

//Three argument constructor  
Flight::Flight(int seat_c, int no_of_f, string flight_d): seating_capacity(seat_c), no_of_flight(no_of_f), flight_destination(flight_d) { 
    //intilizing the rest of attributes
    current_no_booked_seats = 0;
    dep_time_zone = "";
    passengers_names = new string[current_no_booked_seats];
    seating_plan[4][4];

    //initialize all seats as nonreserved(open 'o')
    int rows,seats_per_row = 4;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < seats_per_row; ++j) {
            seating_plan[i][j] = 'O';
        }
    }
}

//copy constructor
Flight::Flight(const Flight & obj){
        no_of_flight = obj. no_of_flight;
        seating_capacity = obj.seating_capacity;
        current_no_booked_seats = obj.current_no_booked_seats;
        flight_destination = obj.flight_destination;
        dep_time_zone = obj. dep_time_zone;

        //passengers_names copying
        for(int i = 0;i<current_no_booked_seats;i++){
            passengers_names[i]=obj.passengers_names[i];
        }

        //seating_plan copying
        rows = obj.rows;
        seats_per_row = obj.seats_per_row;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < seats_per_row; ++j) {
              seating_plan[i][j]=obj.seating_plan[i][j];
            }
        }
       

}

void Flight::displaySeatingPlan(){  
}

void Flight::addPassenger(){

}
void Flight::removePassenger(){

}
void Flight::displayFlightDetalils(){

}
bool Flight::searchPassengerName(){

}
bool Flight::searchSeatNo(){

}




