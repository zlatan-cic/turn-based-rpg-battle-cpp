# Turn-Based RPG Battle System (C++)

A console-based turn-based battle system built in C++ as a learning project, focused on practicing object-oriented programming, inheritance, and the update pattern commonly used in game development.

## Features

- **Turn-based combat** — player chooses a move each turn, enemy responds
- **Update pattern** — each character (`Player`, `Enemy`) implements its own `update()` logic
- **Inheritance** — `Character` base class with `Player` and `Enemy` subclasses
- **Random enemy AI** — enemy picks between attack types using `<random>`
- **Damage tracking** — characters track whether they were hit and how much damage was taken

## How to Play

Run the game and choose a move each turn:
- `1` — Attack (10 damage)
- `2` — Heavy Attack (20 damage)
- `3` — Heal (+15 HP, capped at max HP)

The enemy responds automatically after your turn. Battle continues until one side's HP reaches 0.

## Build & Run

```bash
g++ -std=c++17 main.cpp Character.cpp Player.cpp Enemy.cpp -o battle
./battle
```

## Project Structure

```
├── Character.h / .cpp   # Base class - HP, damage handling, isAlive()
├── Player.h / .cpp      # Player-controlled character, reads input
├── Enemy.h / .cpp       # AI-controlled character, random move selection
└── main.cpp             # Game loop
```

## What I Learned

- Designing a base class (`Character`) shared by `Player` and `Enemy`, and deciding which behavior belongs in the base vs. subclasses
- Why `update()` didn't need to live in the base class once `Player` and `Enemy` needed different signatures (avoiding a "fake" pure virtual contract)
- Using `protected` members for subclass access
- Const-correctness on getter methods
- Why random number generators (`std::mt19937`, `std::uniform_int_distribution`) should be class members instead of being recreated every function call

## Next Steps

- Add a real miss-chance mechanic (percentage-based, not just invalid input)
- Add more move types / character classes
- Replace blocking `cin` input with real-time key detection