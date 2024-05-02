#ifndef WEAPON_H
#define WEAPON_H

#include<QString>

class Weapon {
private:
    QString name;     // Name of the weapon
    int cost;         // Cost of the weapon in coins
    int duration;     // Duration of the weapon's effect (if applicable), in seconds

public:
    // Constructor declaration
    Weapon(QString, int, int);

    // Getter Functions
    QString getName() const;
    int getCost() const;
    int getDuration() const;

    // Setter methods
    void setCost(int);
    void setDuration(int);
};

#endif // WEAPON_H

