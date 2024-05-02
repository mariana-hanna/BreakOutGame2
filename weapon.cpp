#include "weapon.h"

// Constructor definition
Weapon::Weapon(QString _name, int _cost, int _duration) :
    name(_name), cost(_cost), duration(_duration) {
}

// Other member function definitions
void Weapon::setCost(int _cost) {
    cost = _cost;
}

void Weapon::setDuration(int _duration) {
    duration = _duration;
}

QString Weapon::getName() const {
    return name;
}

int Weapon::getCost() const {
    return cost;
}

int Weapon::getDuration() const {
    return duration;
}
