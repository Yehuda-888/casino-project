# My C++ Learning Journey 🚀

This repository contains the first projects I've built while learning the fundamentals of C++. The main project is a fully playable and robust console-based casino slot machine game.

---

## Featured Project: Casino Slot Machine 🎰

A command-line slot machine game written in C++.

### Features:
-   **Visual Interface:** Displays emoji symbols (🍋, 💲, 🎰) instead of numbers for a true casino feel.
-   **Endless Gameplay:** A `while` loop allows the player to keep spinning as long as they have credits.
-   **Betting System:** Players start with 100 credits and can bet on each spin.
-   **Robust Input Validation:** The game is crash-proof and will not break if the user enters text instead of a number for their bet.
-   **Multiple Win Conditions:** Detects wins on all three horizontal and all three vertical lines.
-   **Dynamic Payouts:** Features a standard 2x payout for a regular win and a 10x "JACKPOT" payout.
-   **Game Over Condition:** The game ends cleanly if the player runs out of credits.

---

## Concepts I've Learned 🧠

This project helped me practice and understand the following C++ concepts:

-   **Functions:** Creating and calling custom functions (`getSymbol`) to organize code, avoid repetition, and make the program easier to read.
-   **Variables and Data Types:** Using `int`, `double`, `bool`, and `std::string`.
-   **Standard I/O:** Using `<iostream>` for printing to the console (`std::cout`) and getting user input (`std::cin`).
-   **Input Stream Management:** Handling `std::cin` error states with `!std::cin`, `std::cin.clear()`, and `std::cin.ignore()` for robust input validation.
-   **Conditional Logic:** Using `if`, `else if`, and `else` statements to create the core game logic.
-   **Loops:** Implementing a `while(true)` loop for continuous gameplay and input validation.
-   **Operators:** Using arithmetic, relational (`==`, `<`), and logical (`&&`, `||`) operators.
-   **Libraries:** Including and using functionality from `<iostream>`, `<cstdlib>`, `<ctime>`, `<string>`, and `<limits>`.

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
