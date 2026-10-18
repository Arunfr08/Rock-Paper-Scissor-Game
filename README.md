# 🎮 Rock Paper Scissors Game in C

A simple **Rock Paper Scissors** game developed in C where the player competes against the computer. The computer randomly selects Rock, Paper, or Scissors, and the program determines the winner according to the game's rules.

This project demonstrates fundamental C programming concepts, including functions, conditional statements, loops, random number generation, and user input handling.

## ✨ Features

- **Player Input:** Choose Rock, Paper, or Scissors.
- **Random Computer Choice:** The computer generates a random move.
- **Winner Detection:** Determines whether the player wins, loses, or draws.
- **Input Validation:** Rejects invalid choices and non-numeric input.
- **Interactive Gameplay:** Displays both the player's and computer's choices.
- **Instant Results:** Announces the outcome after each round.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Header Files:** `stdio.h`, `stdlib.h`, `time.h`
- **Compiler:** GCC
- **Interface:** Command-Line Interface (CLI)

## 📋 Game Rules

| Player's Choice | Computer's Choice | Result |
|---|---|---|
| Rock | Scissors | Player Wins |
| Rock | Paper | Player Loses |
| Paper | Rock | Player Wins |
| Paper | Scissors | Player Loses |
| Scissors | Paper | Player Wins |
| Scissors | Rock | Player Loses |
| Same choice | Same choice | Tie |

**Basic rule:** Rock beats Scissors, Scissors beats Paper, and Paper beats Rock.

## 🚀 Getting Started

### Prerequisites

Install a C compiler such as GCC. Windows users can use GCC through MinGW-w64 or MSYS2.

### Compilation

Open a terminal in the project directory and run:

```bash
gcc RockPaperScissors.c -o RockPaperScissors
```

Replace `RockPaperScissors.c` with your actual source filename if it differs.

### Run the Game

**Windows (PowerShell):**

```powershell
.\RockPaperScissors.exe
```

**Linux/macOS:**

```bash
./RockPaperScissors
```

## 💻 Example Output

```text
*** Rock - Paper - Scissor ***
Choose any one option =>
1. ROCK
2. PAPER
3. SCISSOR
Enter your Choice : 1

You chose Rock!
Computer chose Scissor!
You Won!!
```

*The computer's choice and game result will vary each time you play.*

## 📚 Concepts Practiced

- Functions and function calls
- User input with `scanf()`
- Conditional statements using `if-else`
- `while` loops for input validation
- `switch-case` statements
- Random number generation using `rand()`
- Seeding random numbers with `srand(time(NULL))`
- Logical operators
- Comparing values and implementing game rules
- Standard C library headers

## ⚠️ Current Limitations

- The game consists of only one round per execution.
- There is no score tracking.
- The player cannot restart a round without restarting the program.
- Random number generation is suitable for a simple game but is not cryptographically secure.

## 🔮 Future Improvements

- Add multiple rounds and replay functionality.
- Track player and computer scores.
- Display the final winner after a fixed number of rounds.
- Add a best-of-three or best-of-five game mode.
- Improve input handling for end-of-file conditions.
- Add a menu for starting or exiting the game.
- Introduce a two-player mode.

## 🎯 Project Objective

The objective of this project is to practice basic C programming by developing an interactive game that combines random number generation, user input, conditional logic, and winner determination.

## 👨‍💻 Author

**Arun Saini**

This project is part of my programming practice and GitHub portfolio, showcasing my progress in C programming and problem-solving.

---

⭐ If you find this project useful, consider giving the repository a star!
