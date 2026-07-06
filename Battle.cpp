#include "Battle.h"
#include <iostream>

Battle::Battle(Player& player, Enemy& enemy)
    : m_player(player), m_enemy(enemy)
{
}

bool Battle::ShouldGameContinue() const
{
    return m_player.isAlive() && m_enemy.isAlive();
}

void Battle::PrintWinner() const
{
    std::cout << "\n=========================\n";

    if (m_player.isAlive())
    {
        std::cout << "Player wins!\n";
    }
    else if (m_enemy.isAlive())
    {
        std::cout << "Enemy wins!\n";
    }
    else
    {
        std::cout << "Draw!\n";
    }

    std::cout << "=========================\n";
}

void Battle::ProcessTurn()
{
    if (m_isPlayerTurn)
    {
        int choice;

        std::cout << "\n===== Player Turn =====\n";
        std::cout << "1. Attack\n";
        std::cout << "2. Heavy Attack\n";
        std::cout << "3. Heal\n";
        std::cout << "Choice: ";

        std::cin >> choice;

        m_player.makeChoice(choice);
    }
    else
    {
        std::cout << "\n===== Enemy Turn =====\n";

        m_enemy.makeChoice();
    }

    m_isPlayerTurn = !m_isPlayerTurn;
}

void Battle::run()
{
    while (true)
    {
        if (!ShouldGameContinue())
        {
            PrintWinner();
            break;
        }

        ProcessTurn();

        m_player.update();
        m_enemy.update();
    }
}