#include "Player.h"
#include "Enemy.h"
#include "Battle.h"
#include <iostream>

int main()
{
  Player player("Robin", 100);
  Enemy enemy("Witch", 90);

  player.setTarget(&enemy);
  enemy.setTarget(&player);

  Battle battle(player, enemy);

  battle.run();
  
  return 0;
}