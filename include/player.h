#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

// Create a Player class with Health and Action attributes
class Player
{
public:
    //creating player class and adding "int initialHealth" so player starts with 100
    Player(int initialHealth);

    void attack();
    void block();
    void parry();

    int getHealth() const;
    void takeDamage(int damage);

private:
    int health;
};

#endif // PLAYER_H