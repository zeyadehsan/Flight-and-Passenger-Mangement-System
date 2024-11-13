//TO RUN CODE 
//MAC or linux
//g++ main.cpp Flight.cpp Passenger.cpp -o flight_management -std=c++11
//./flight_management


//ALL functions in flight Class

// copy const
//displaySeatingPlan #done
//addPassenger #done
//removePassenger #done
//searchPassengerName #done
//searchSeatNo #done 
 
 //ALL functions in Passenger Class
//displayPassengerDetalils #done
//istream& operator >> #done
//static int getTotalPassengers(); #done




#include<iostream>
#include"flight.h"
#include"passenger.h"
using namespace std;

int main() {
    //create Flight objects
    Flight F1(16, 101, "Egypt");
    Flight F2(12, 103, "Blaban");
    

    
 
    //creat Passenger objects
    Passenger P0("Zeyad", 1);
    Passenger P1("Ehsan", 2);


    // Test operator overloading functions


    //using += operator overloader (1 out 4)operator overloaders
    // adding P0 and P1 to F1 
    
    F1 += P0;
    F1 += P1;

    F1.displayFlightDetalils();


    //using += operator overloader (2 out 4)operator overloaders
    //adding a new row of seats
    ++F1;
    F1.displayFlightDetalils();

    //using -- operator overloader (3 out 4)operator overloaders
    //should remove P1
    F1--;
    F1.displayFlightDetalils();
 
    //using -= operator overloader (4 out 4)operator overloaders
    //should remove last 1 passenger (P0)
    F1 -= 1;
    F1.displayFlightDetalils();

 

    //Adding passengers to a flight: 
    //should be only three passengers P2,P3,P4
    Passenger* P2 = new Passenger("Nasser", 3);
    Passenger* P3 = new Passenger("Mo'men", 4);
    Passenger* P4 = new Passenger("Osman", 5);

    Passenger P5("Ahmed",6); //Not added to flight so when it used in removePassenger Function  it expected output passenger not found  used in to test cases display passenger data and remove passenger
     

    Passenger* newPassengers[] = {P2, P3, P4};

    //add passengers to the flight 
    F1.addPassenger(3, newPassengers);

    //test displayFlightDetalils function
    F1.displayFlightDetalils();

    // Test removePassenger function 
    //since P5 is passenger ahmed and passenger ahmed is not in the F1 .. should display  Passenger Ahmed not found.
    F1.removePassenger(P5); 

    //Seating Plan 
    F1.displaySeatingPlan();

 

    // Test searchPassengerName function
    cout << "Searching for Osman: " << (F1.searchPassengerName("Osman") ? "Found" : "Not Found") << endl;
    cout << "Searching for Ahmed: " << (F1.searchPassengerName("Ahmed") ? "Found" : "Not Found") << endl;

    // Test searchSeatNo function
    cout << "Searching for seat at row 1, seat 1: " << (F1.searchSeatNo(0, 0) ? "is reserved" : "not reserved") << endl;
    cout << "Searching for seat at row 2, seat 1: " << (F1.searchSeatNo(1, 0) ? "is reserved" : "not reserved") << endl;
   

    // Test Passenger class functions
    P5.displayPassengerDetalils();
    cout << "Total Passengers: " << Passenger::getTotalPassengers() << endl;

   return 0;
}
