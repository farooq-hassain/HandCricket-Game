# HandCricket-Game 🏏❌⭕

### *A console-based gaming application featuring the classic Hand Cricket and Tic-Tac-Toe.*

This project delivers an interactive, console-based gaming application built in **C**. It bundles two classic games, **Hand Cricket** and **Tic-Tac-Toe**, designed for engaging, interactive gameplay against the computer or another player.

***

## 🚀 Key Features

The application provides core gaming logic and an interactive command-line interface for two distinct games.

### Hand Cricket Game 🏏
* **Toss System** 🪙: Implements a Head/Tails toss functionality to decide whether to bat or bowl first.
* **Player vs. Computer** 🤖: Features a full simulation of the Hand Cricket game mechanics.
    * **Batting Logic:** Score runs by selecting numbers while the computer tries to guess the same number to take a wicket.
    * **Bowling Logic:** Guess the computer's chosen number to take wickets while limiting their runs.
* **Statistics Tracking** 📊: Tracks game scores and maintains win/loss records for both the player and the computer.
* **Customization** 📝: Includes a system for changing player names.

### Tic-Tac-Toe Game ❌⭕
* **Two-Player Mode** 👥: Supports local multiplayer for interactive gameplay.
* **Interactive Grid** 🟩: Displays a responsive 3x3 grid and board system in the console.
* **Win Logic** ✅: Automatically checks for winning patterns across rows, columns, and diagonals.
* **Game Conclusion** 🏁: Declares the winner or a draw based on the gameplay.

***

## 📥 Installation

Since this is a C console application, installation requires compiling the source file using a standard C compiler (like GCC).

### Prerequisites

* A C compiler installed on your system (e.g., **GCC** or **Clang**).
* **Git** (for cloning the repository).

### Setup Guide

1.  **Clone the Repository** ⬇️
    Open your terminal and clone the project using Git:

    ```bash
    git clone [https://github.com/farooq-hassain/HandCricket-Game.git](https://github.com/farooq-hassain/HandCricket-Game.git)
    ```

2.  **Navigate to the Directory** 📂
    Change into the project folder:

    ```bash
    cd HandCricket-Game
    ```

3.  **Compile the Code** ⚙️
    Use your C compiler (e.g., GCC) to compile the source file and create an executable (named `game` in this example):

    ```bash
    gcc handcricket.c -o game
    ```

***

## ▶️ Usage

To start playing the game, simply run the compiled executable file from your terminal:

* **Run the Application:**

    ```bash
    ./game
    ```

* The console will present a menu allowing you to choose between **Hand Cricket** and **Tic-Tac-Toe** and guide you through the gameplay.

***

## 🛠️ Technology Stack

This project is built entirely using procedural programming:

| Technology | Percentage | Icon | Description |
| :--- | :--- | :--- | :--- |
| **Language** | 100.0% | 🧱 | C (Used for core game logic and console interface) |
| **Platform** | N/A | 🖥️ | Console/Terminal (Tested on Unix-like systems and Windows via MinGW/Cygwin) |

***

## 🤝 Contributing

Contributions are always welcome! If you have suggestions for new features (like more games!) or bug fixes, please feel free to:

1.  **Fork** the repository. 🍴
2.  **Create** a new feature branch (`git checkout -b feature/AddAI`). 🌿
3.  **Commit** your changes (`git commit -m 'Implement basic AI for Tic-Tac-Toe'`). 📝
4.  **Push** to the branch (`git push origin feature/AddAI`). 📤
5.  **Open** a Pull Request. ✨

***

## 📄 License

This project is open-source. Please check the repository for an explicit license file (like `LICENSE.md`) if available. In the absence of one, standard open-source conventions usually apply. ©️

***

## 👤 Author

**Farooq Hassain**
* [GitHub Profile](https://github.com/farooq-hassain) 🌐
