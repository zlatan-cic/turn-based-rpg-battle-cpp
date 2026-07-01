#include "Character.h"
#include <iostream>
#include <string>

Character::Character(std::string name, int health)
            : m_name(name), m_health(health), m_maxHealth(health) {}

bool Character::isAlive() const
{
  return m_health > 0;
}

void Character::takeDamage(int amount)
{
  m_health -= amount;
  if(m_health < 0) 
  {
    m_health = 0;
  }
  m_wasAttacked = true;
  m_lastDamage = amount;
}

std::string Character::getName() const
{
  return m_name;
}

int Character::getHealth() const {  return m_health;  }
bool Character::getWasAttacked() const { return m_wasAttacked; }
int Character::getLastDamage() const { return m_lastDamage; }

