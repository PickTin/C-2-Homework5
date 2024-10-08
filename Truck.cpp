#include "Truck.h"

Truck::Truck(const string& brand, const string& color, double fuelTankVolume, double fuelConsumption, double loadCapacity)
    : PassengerCar(brand, color, fuelTankVolume, fuelConsumption), loadCapacity(loadCapacity) {}

Truck::~Truck() {}

void Truck::setLoadCapacity(double capacity) {
    loadCapacity = capacity;
}

double Truck::getLoadCapacity() const {
    return loadCapacity;
}

double Truck::calculateCostPerTonPerKm(double fuelPrice) const {
    return ((getFuelConsumption() / 100) * fuelPrice) / loadCapacity;
}
