#ifndef PASSENGERCAR_H
#define PASSENGERCAR_H

#include <string>
using namespace std;

class PassengerCar {
private:
    string brand;
    string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    PassengerCar(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption);

    void setBrand(const string& brand);
    void setColor(const string& color);
    void setFuelTankVolume(double volume);
    void setFuelConsumption(double consumption);

    string getBrand() const;
    string getColor() const;
    double getFuelTankVolume() const;
    double getFuelConsumption() const;

    double calculateDistance() const;
};

#endif 
