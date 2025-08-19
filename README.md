# My C++ Learning Journey 🚀

This repository contains the first projects I've built while learning the fundamentals of C++. The main project is a fully playable console-based casino slot machine game.

---

## Featured Project: Casino Slot Machine 🎰

A command-line slot machine game written in C++.

### Features:
-   **Endless Gameplay:** A `while` loop allows the player to keep spinning as long as they have credits.
-   **Betting System:** Players start with 100 credits and can bet on each spin.
-   **Dynamic Payouts:** Features a standard 2x payout for a regular win and a 10x "JACKPOT" payout for getting three 7s.
-   **3x3 Grid:** Displays a full 3x3 grid of symbols for a classic slot machine feel.
-   **Game Over Condition:** The game ends if the player runs out of credits.

---

## Concepts I've Learned 🧠

This project helped me practice and understand the following C++ concepts:

-   **Variables and Data Types:** Using `int`, `double`, and `bool` to store data like credits, bets, and game state.
-   **Standard I/O:** Using `<iostream>` for printing text to the console (`std::cout`) and getting user input (`std::cin`).
-   **Conditional Logic:**
    -   Using `if`, `else if`, and `else` statements to create the core game logic for winning, losing, and hitting the jackpot.
    -   Using `switch` statements to handle menu navigation.
-   **Loops:** Implementing a `while(true)` loop to create a continuous game session that can be exited with a `break` statement.
-   **Operators:**
    -   **Arithmetic:** `+`, `-`, `*` for managing the player's credits.
    -   **Relational:** `==`, `<`, `<=` for comparing values in conditions.
    -   **Logical:** `&&` (AND) and `||` (OR) to build complex win conditions.
-   **Libraries and Random Number Generation:**
    -   Including libraries like `<iostream>`, `<cstdlib>`, and `<ctime>`.
    -   Using `srand(time(0))` to seed the random number generator.
    -   Using `rand() % 3` to generate random slot machine outcomes.

---

## How to Compile and Run

1.  Make sure you have a C++ compiler like G++.
2.  Navigate to the project directory in your terminal.
3.  Compile the program using the command:
    ```sh
    g++ casino.cpp -o casino
    ```
4.  Run the executable:
    ```sh
    ./casino
    ```
