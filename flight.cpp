#include<iostream>
#include "flight.h"
using namespace std;

// constructor
Flight::Flight(){ 
    // mk the size seating capcity??
    passengers_names = new string[current_no_booked_seats];
    seating_plan[4][4];
    int rows,seats_per_row=4;
    // initialize all seats as nonreserved(open 'o')
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < seats_per_row; ++j) {
            seating_plan[i][j] = 'O';
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




