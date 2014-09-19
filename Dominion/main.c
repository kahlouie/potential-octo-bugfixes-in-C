#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cardset.h"
#include "cards.h"
#include "board.h"
#include "playerstuff.h"

void setup() {
  time_t t;
  // Intializes random number generator
  srand((unsigned) time(&t));
  struct Board board;
  initializepiles(&board);
  struct Stuff p1stuff;
	struct Player p1 = {
    "player1", false, &p1stuff
  };
  playerStuffInit(&p1);
  printf("Deck:\n");
  printCardSet(&p1.stuff->deck);
  printf("\nHand:\n");
  printCardSet(&p1.stuff->hand);
}

int main() {
	setup();
}