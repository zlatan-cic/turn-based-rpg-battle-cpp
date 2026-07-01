#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health) : Character(name, health) {}

void Player::update(Character& target, int choice)
{
  switch (choice)
  {
    case 1:
      target.takeDamage(10);
      std::cout << m_name << " attacks for 10 damage!\n";
      break;
    case 2:
      target.takeDamage(20);
      std::cout << m_name << " deals a heavy blow for 20 damage!\n";
      break;
    case 3:
      m_health += 15;
      if(m_health > m_maxHealth) m_health = m_maxHealth;
      std::cout << m_name << " heals for 15 HP!\n";
      break;  
    default:
    std::cout << "Unknown choice\n";
  }
}