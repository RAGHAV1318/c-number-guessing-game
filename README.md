
# Number Guessing Game (C)

A minimal console number guessing game in C. Generate a pseudorandom number between 1 and 100 and let the user guess it in as few steps as possible.

## Features

* **Dynamic Seeding:** system clock (time(NULL)) is used to seed the pseudorandom number generator (srand), resulting in a different target each time.

* **HINTS ON THE DIRECTION:** Checks the user input for each turn and gives an immediate output (`HIGHER` or `LOWER`).

* **Attempt Tracking:** Tracks and shows the total number of guesses made once finished.

## Prerequisites

* a standard C compiler such as gcc or clang or MinGW on Windows.

## Compilation & Execution

1. **Clone the repository:**

```bash

git clone [https://github.com/RAGHAV1318/c-number-guessing-game. Git](https://github.com/RAGHAV1318/c-number-guessing-game. Git)

cd c-number-guessing-game
