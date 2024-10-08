#include <iostream>
#include "PassengerCar.h"
#include "Truck.h"

int main() {
    PassengerCar car("Toyota", "Red", 50.0, 8.0);
    cout << "Passenger Car: " << car.getBrand() << ", Color: " << car.getColor() << endl;
    cout << "Maximum distance with full tank: " << car.calculateDistance() << " km" << endl;

    Truck truck("Volvo", "Blue", 120.0, 25.0, 10.0);
    cout << "Truck: " << truck.getBrand() << ", Color: " << truck.getColor() << endl;
    cout << "Maximum distance with full tank: " << truck.calculateDistance() << " km" << endl;
    cout << "Cost per ton per km: " << truck.calculateCostPerTonPerKm(1.5) << " currency units" << endl;

}
