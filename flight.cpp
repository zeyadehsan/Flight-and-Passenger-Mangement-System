#include<iostream>
#include "flight.h"
#include "passenger.h"
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

//destructor
Flight::~Flight(){
    delete [] passengers_names;
    for (int i = 0; i < rows; ++i) {
        delete[] seating_plan[i];  
    }
    delete[] seating_plan;

}


void Flight::displaySeatingPlan(){  
    for (int i = 0; i <rows; ++i) {
        for (int j = 0; j < seats_per_row; ++j) {
            cout<<seating_plan[i][j];
        }
    }

}

void Flight::addPassenger(string &name){
   if ( current_no_booked_seats < seating_capacity) { 
           passengers_names[current_no_booked_seats] = name; 
           current_no_booked_seats++;
        } else {
            cout << "No more space to add new passengers." << endl;
        }
}

void Flight::removePassenger(const string &name){
   int index = -1;

        //Find the passenger's index
        for (int i = 0; i < current_no_booked_seats; ++i) {
            if (passengers_names[i] == name) {
                index = i;
                break;
            }
        }

        //If passenger is found, remove by shifting elements
        if (index != -1) {
            for (int i = index; i < current_no_booked_seats - 1; ++i) {
                passengers_names[i] = passengers_names[i + 1]; 
            }
            current_no_booked_seats--; 
            cout << "Passenger " << name << " has been removed." <<endl;
        } else {
            cout << "Passenger " << name << " not found." <<endl;
        }


}

void Flight::displayFlightDetalils(){
    cout<<" FLight Number: "<<no_of_flight<<endl;
    cout<<" FLight Seating Capacity: "<<seating_capacity<<endl;
    cout<<" FLight Current Number of Booked Seats : "<<current_no_booked_seats<<endl;
    for(int i = 0; i<seating_capacity;i++){
        cout<<" FLight Passengers Name: "<<no_of_flight<<endl;
    }
    // for displaying seating plan
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < seats_per_row; ++j) {
            cout<<seating_plan[i][j];
        }
    }

}

bool Flight::searchPassengerName(const string & Name_Passenger){
        for (int i = 0; i < current_no_booked_seats; ++i) {
            if (passengers_names[i] == Name_Passenger) {
                return true;
            }
        }
        return false;
    }
bool Flight::searchSeatNo(){

}
// operator overloading Func
ostream &operator << (ostream &strm, const Flight &obj){
    strm<<" FLight Number: "<<obj.no_of_flight<<endl;
    strm<<" FLight Seating Capacity: "<<obj.seating_capacity<<endl;
    strm<<" FLight Current Number of Booked Seats : "<<obj.current_no_booked_seats<<endl;
    for(int i = 0; i<obj.seating_capacity;i++){
        strm<<" FLight Passengers Name: "<<obj.no_of_flight<<endl;
    }
    // for displaying seating plan
    for (int i = 0; i < obj.rows; ++i) {
        for (int j = 0; j < obj.seats_per_row; ++j) {
            strm<<obj.seating_plan[i][j];
        }
    }
   

}



