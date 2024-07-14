#include "player.h"

Player::Player(int initialHealth) : health(initialHealth) {
    //constructor implementation
}

void Player::attack() {

}

void Player::block(){

}

void Player::parry(){

}

int Player::getHealth() const{

    return health;
}

void Player::takeDamage(int damage){

    health -= damage;
}