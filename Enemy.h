#pragma once
#include "Character.h"
#include <random>

class Enemy : public Character 
{
  private:
  Character* m_target = nullptr;
  int m_choice = 0;
  bool m_hasChoice = false;
  
  std::mt19937 m_gen;
  std::uniform_int_distribution<> m_dist;

  public:
  Enemy(std::string name, int health);

  void setTarget(Character* target);
  void makeChoice();
  void update();

};