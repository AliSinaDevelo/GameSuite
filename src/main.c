#include "menu.h"

int main() {
  int choice;

  while (1) {
    choice = show_menu();

    switch (choice) {
      case 1: play_towers_of_hanoi(); break;
      case 2: play_snake(); break;
      case 3: play_tic_tac_toe(); break;
      case 4: play_connect_four(); break;
      case 5: play_minesweeper(); break;
      case 6: play_sudoku(); break;
      case 7: play_battleship(); break;
      case 8: play_chess(); break;
      case 9: play_checkers(); break;
      case 10: play_hangman(); break;
      case 0: return 0; // Exit
      default: printf("Invalid choice! Please Try Again.\n");
    }
  }

  return 0;
}
