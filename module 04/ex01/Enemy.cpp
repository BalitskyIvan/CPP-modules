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
Enemy &Enemy::operator=(const Enemy &aWeapon) {
	if (this == &aWeapon) {
		return *this;
	}
	this->type = aWeapon.getType();
	this->hitPoints = aWeapon.getHP();
	return *this;
}
std::string const &Enemy::getType() const {
	return this->type;
}
Enemy::Enemy() {}
