#include "Enemy.h"
#include <iostream>

Enemy::Enemy(std::string name, int health)
 : Character(name,health), m_gen(std::random_device{}()), m_dist(1,2) {}

void Enemy::update(Character& target)
{
  int choice =  m_dist(m_gen);

  switch (choice)
  {
  case 1:
    target.takeDamage(8);
    std::cout << m_name << " attacks for 8 damage!\n";
    break;
  case 2:
    target.takeDamage(18);
    std::cout << m_name << " deals a heavy blow for 18 damage!\n";
    break;
  }
}