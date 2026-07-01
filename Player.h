#pragma once
#include "Character.h"

class Player : public Character
{
  public:
  Player(std::string name, int health);

  void update(Character& target, int choice);

};
