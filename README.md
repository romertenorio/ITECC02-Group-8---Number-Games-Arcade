# ITECC02 Group 8 - The Magic Number: A Number Games Arcade

A console number games arcade for one to four players, with three selectable games: **Hot or Cold?**, **I Forgot My Password...**, and **Race to 21**. It aims to entertain players and to encourage logic and careful thinking over random guessing.

## Features

- A main menu with three games, and a play-again option after every game
- Support for 1 to 4 players with names, taking turns
- Input validation for letters, out-of-range numbers, and wrong lengths
- Colored hints in the console (hot/cold, and green/yellow/gray)

## Games

### 1. Hot or Cold?

The program picks a mystery number from 0 to 30. Players take turns guessing, with 7 chances each. A guess within 10 of the number is **HOT**, and anything farther is **COLD**. Whoever guesses it first wins.

### 2. I Forgot My Password...

The program creates a random 4-digit password. Players have 8 attempts to guess it. After each guess, every digit is colored:

| Color | Meaning |
|---|---|
| Green | Right digit, right position |
| Yellow | Right digit, wrong position |
| Gray | Digit is not in the password |

### 3. Race to 21

Players take turns adding 1, 2, or 3 to a running total that starts at 0. The player who makes the total exactly 21 wins. With one player, the computer plays the other turns.

