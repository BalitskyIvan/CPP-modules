//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Enemy.hpp"
Enemy::Enemy(int hitPoints, const std::string &type) : hitPoints(hitPoints), type(type) {}
Enemy::~Enemy() {
}
int Enemy::getHP() const {
	return this->hitPoints;
}
Enemy::Enemy(Enemy &aWeapon) {
	*this = aWeapon;
}
Enemy &Enemy::operator=(const Enemy &enemy) {
	if (this == &enemy) {
		return *this;
	}
	this->type = enemy.getType();
	this->hitPoints = enemy.getHP();
	return *this;
}
std::string const &Enemy::getType() const {
	return this->type;
}
Enemy::Enemy() {}

void Enemy::takeDamage(int damage) {
    if (damage <= 0)
        return;
	this->hitPoints -= damage;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}
