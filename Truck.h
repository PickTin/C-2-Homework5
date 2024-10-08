#ifndef TRUCK_H
#define TRUCK_H

#include "PassengerCar.h"

class Truck : public PassengerCar {
private:
    double loadCapacity;

public:
    Truck(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption, double loadCapacity);
    ~Truck();

    void setLoadCapacity(double capacity);
    double getLoadCapacity() const;
    double calculateCostPerTonPerKm(double fuelPrice) const;
};

#endif 