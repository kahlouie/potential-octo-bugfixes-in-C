#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cardset.h"
#include "cards.h"
#include "board.h"

void setup() {
  time_t t;
  // Intializes random number generator
  srand((unsigned) time(&t));
	struct CardSet deck;
	startDeck(&deck);
	struct Board board;
	initializepiles(&board);
  printCardSet(&deck);
  printf("Shuffling...\n");
  shuffleCardSet(&deck);
  printf("Shuffled?\n");
  printCardSet(&deck);
  // printf("\n");
}

int main() {
	setup();
}