#include<iostream>
#include"flight.h"
#include"passenger.h"
using namespace std;

int main() {
    // Create a Flight object
    Flight F1(16, 101, "Egypt");

    // Create Passenger objects
    Passenger P1("Zeyad", 1);
    Passenger P2("Ahmed", 2);
    Passenger P3("Sara", 3);

    // Test addPassenger function
    F1.addPassenger("Zeyad");
    F1.addPassenger("Ahmed");
    F1.addPassenger("Sara");

    // Test displayFlightDetalils function
    F1.displayFlightDetalils();

    // Test removePassenger function
    F1.removePassenger("Ahmed");
    F1.displayFlightDetalils();

    // Test searchPassengerName function
    cout << "Searching for Zeyad: " << (F1.searchPassengerName("Zeyad") ? "Found" : "Not Found") << endl;
    cout << "Searching for Ahmed: " << (F1.searchPassengerName("Ahmed") ? "Found" : "Not Found") << endl;

    // Test searchSeatNo function
    cout << "Searching for seat at row 1, seat 1: " << (F1.searchSeatNo(0, 0) ? "Reserved" : "Open") << endl;

    // Test operator overloading functions
    F1 += P1;
    F1.displayFlightDetalils();

    ++F1;
    F1.displayFlightDetalils();

    F1--;
    F1.displayFlightDetalils();

    F1 -= 1;
    F1.displayFlightDetalils();

    // Test Passenger class functions
    P1.displayPassengerDetalils();
    cout << "Total Passengers: " << Passenger::getTotalPassengers() << endl;

   return 0;
}
