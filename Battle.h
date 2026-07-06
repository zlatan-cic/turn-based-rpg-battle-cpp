#pragma once

#include "Player.h"
#include "Enemy.h"

class Battle
{
private:
    Player& m_player;
    Enemy& m_enemy;

    bool m_isPlayerTurn = true;

    bool ShouldGameContinue() const;
    void PrintWinner() const;
    void ProcessTurn();

public:
    Battle(Player& player, Enemy& enemy);

    void run();
};