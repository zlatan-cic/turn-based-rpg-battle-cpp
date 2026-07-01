#include "Player.h"
#include "Enemy.h"
#include <iostream>

int main()
{
  Player player("Robin", 100);
  Enemy enemy("Witch", 90);

  while (player.isAlive() && enemy.isAlive())
  {
    std::cout << "\n--- Status ---\n";
    std::cout << player.getName() << " HP: " << player.getHealth() << "\n";
    std::cout << enemy.getName() << " HP: " << enemy.getHealth() << "\n";

    std::cout << "\nChoose a move: 1-Attack 2-Heavy Attack 3-Heal\n>";
    int choice;
    std::cin >> choice;

    player.update(enemy, choice);

    if(!enemy.isAlive())
    {
      std::cout << '\n' << enemy.getName() << " is defeated! You have won!";
      break;
    }
    enemy.update(player);

    if(!player.isAlive())
    {
      std::cout << '\n' << player.getName() << " is defeated! You lost FATALITY!";
      break;
    }
  }
  
  return 0;
}