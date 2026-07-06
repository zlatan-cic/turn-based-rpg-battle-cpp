# Turn-Based RPG Battle System (C++)

A console-based turn-based RPG battle system built in C++ as a learning project, focused on practicing object-oriented programming, inheritance, separation of responsibilities, and the update pattern commonly used in game development.

## Features

- **Turn-based combat** — player and enemy take turns attacking
- **Update pattern** — actions are stored with `makeChoice()` and executed during `update()`
- **Battle manager** — a dedicated `Battle` class controls the game loop and turn order
- **Inheritance** — `Character` base class with `Player` and `Enemy` subclasses
- **Enemy AI** — enemy chooses attacks based on its current health
- **Healing mechanic** — player can restore health up to the maximum HP

## How to Play

Run the game and choose a move during your turn:

- `1` — Attack (10 damage)
- `2` — Heavy Attack (20 damage)
- `3` — Heal (+15 HP, capped at max HP)

The enemy automatically chooses its move during its turn. The battle continues until one character's health reaches zero.

## Build & Run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp Character.cpp Player.cpp Enemy.cpp Battle.cpp -o battle
./battle
```

## Project Structure

```
├── Character.h / .cpp   # Base class - health, damage handling, isAlive()
├── Player.h / .cpp      # Player logic, stores player actions
├── Enemy.h / .cpp       # Enemy AI and attack logic
├── Battle.h / .cpp      # Battle flow, game loop and turn management
└── main.cpp             # Application entry point
```

## What I Learned

- Separating game logic from `main()` by introducing a dedicated `Battle` class
- Applying the Update Pattern by separating decision making (`makeChoice()`) from action execution (`update()`)
- Managing object relationships using pointers instead of passing objects every frame
- Designing classes with a single responsibility
- Using inheritance to share common functionality between `Player` and `Enemy`
- Implementing a simple turn-based game loop

