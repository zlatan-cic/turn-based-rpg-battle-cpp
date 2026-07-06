#include "Enemy.h"
#include <iostream>



Enemy::Enemy(std::string name, int health)
            : Character(name, health),m_gen(std::random_device{}()), m_dist(1,2) {} 

void Enemy::setTarget(Character* target)
{
    m_target = target;
}
void Enemy::makeChoice()
{
  if (m_health <= 30)
    {
        m_choice = 2; // heavy attack kad je low HP
    }
    else
    {
        m_choice = m_dist(m_gen); // random 1 ili 2
    }

    m_hasChoice = true;
}

void Enemy::update()
{
    if (!m_hasChoice)
    {
        return;
    }

    if (m_target == nullptr)
    {
        return;
    }

    switch (m_choice)
    {
    case 1:
        m_target->takeDamage(8);
        std::cout << m_name << " attacks for 8 damage!\n";
        break;

    case 2:
        m_target->takeDamage(18);
        std::cout << m_name << " deals a heavy blow for 18 damage!\n";
        break;

    default:
        std::cout << m_name << " is confused and does nothing.\n";
        break;
    }

    m_choice = 0;
    m_hasChoice = false;
}