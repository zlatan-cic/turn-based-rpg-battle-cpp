#pragma once
#include "Character.h"

class Player : public Character
{
  private:
  Character* m_target = nullptr;
  int m_choice = 0;
  bool m_hasChoice = false;

  public:
  Player(std::string name, int health);

  void setTarget(Character* target);
  void makeChoice(int choice);
  void update();

};
