#include "menu.h"

int show_menu() {
  int choice;
  printf("Welcome to the Game Suite!\n");
  printf("Select a game to play:\n");
  printf("1. Towers of Hanoi\n");
  printf("2. Snake\n");
  printf("3. Tic-Tac-Toe\n");
  printf("4. Connect Four\n");
  printf("5. Minesweeper\n");
  printf("6. Sudoku\n");
  printf("7. Battleship\n");
  printf("8. Chess\n");
  printf("9. Checkers\n");
  printf("10. Hangman\n");
  printf("0. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  return choice;
}
