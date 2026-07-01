#pragma once
#include "Character.h"
#include <random>

class Enemy : public Character 
{
  private:
  std::mt19937 m_gen;
  std::uniform_int_distribution<> m_dist;

  public:
  Enemy(std::string name, int health);

  void update(Character& target);
};