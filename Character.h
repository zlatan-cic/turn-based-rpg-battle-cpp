#pragma once
#include <string>

class Character 
{
  protected:
  std::string m_name;
  int m_health;
  int m_maxHealth;

  bool m_wasAttacked = false;
  int m_lastDamage = 0;

  public:
  Character(std::string name, int health);

  bool isAlive() const;
  void takeDamage(int amount);

  std::string getName() const;
  int getHealth() const;
  bool getWasAttacked() const;
  int getLastDamage() const;


  virtual ~Character() {};
};