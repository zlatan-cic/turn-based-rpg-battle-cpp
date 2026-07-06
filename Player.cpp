#include "Player.h"
#include <iostream>


Player::Player(std::string name, int health)
              : Character(name,health) {}

void Player::setTarget(Character* target)
{
  m_target = target;
}

void Player::makeChoice(int choice)
{
  m_choice = choice;
  m_hasChoice = true;
}

void Player::update()
{
  if(!m_hasChoice)
  {
    return;
  }

  switch(m_choice)
  {
    case 1:
    m_target->takeDamage(10);
    std::cout << m_name << " attacks for 10 damage!\n";
    break;

    case 2:
    m_target->takeDamage(20);
    std::cout << m_name << " deals a heavy blow for 20 damage!\n";
    break;

   case 3:
    m_health += 15;

    if (m_health > m_maxHealth)
    {
        m_health = m_maxHealth;
    }

    std::cout << m_name << " heals for 15 HP!\n";
    break;

    default:
    std::cout << "Unknown choice\n";
    break;
  }

  m_choice = 0;
  m_hasChoice = false;
}
