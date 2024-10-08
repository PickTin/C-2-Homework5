#include "PassengerCar.h"

PassengerCar::PassengerCar(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption)
    : brand(brand), color(color), fuelTankVolume(fuelTankVolume), fuelConsumption(fuelConsumption) {}

void PassengerCar::setBrand(const string& brand) {
    this->brand = brand;
}

void PassengerCar::setColor(const string& color) {
    this->color = color;
}

void PassengerCar::setFuelTankVolume(double volume) {
    fuelTankVolume = volume;
}

void PassengerCar::setFuelConsumption(double consumption) {
    fuelConsumption = consumption;
}

string PassengerCar::getBrand() const {
    return brand;
}

string PassengerCar::getColor() const {
    return color;
}

double PassengerCar::getFuelTankVolume() const {
    return fuelTankVolume;
}

double PassengerCar::getFuelConsumption() const {
    return fuelConsumption;
}

double PassengerCar::calculateDistance() const {
    return (fuelTankVolume / fuelConsumption) * 100;
}
