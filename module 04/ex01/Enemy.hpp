//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy {
protected:
	int hitPoints;
    std::string type;
private:
	Enemy();
public:
	Enemy(int hitPoints, const std::string &type);
	Enemy(Enemy &enemy);
	Enemy &operator=(const Enemy &enemy);
	virtual ~Enemy();
	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};


#endif//EX01_ENEMY_HPP
