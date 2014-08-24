#include <stdio.h>
#include <stdlib.h>
#include "cards.h"


void cardSetInit(struct CardSet* cs) {
	cs->size = 0;
	cs->cards = NULL;
}

void cardSetAddCard(struct CardSet* cs, struct Card newCard) {
	cs->size++;
	cs->cards = realloc(cs->cards, sizeof (struct Card) * cs->size);
	cs->cards[cs->size - 1] = newCard;
}

void startDeck(struct CardSet* cs) {
	cardSetInit(cs);
	for (int i = 0; i < 10; i++) {
		if (i < 7) {
			cardSetAddCard(cs, Copper);
		} else {
			cardSetAddCard(cs, Estate);
		}
	}
}

void printCardSet(struct CardSet* cs) {
	for (int i = 0; i < cs->size; i++){
		printf("%s\n", cs->cards[i].name);
	}
}


void setup() {
	int deck;
}

int main() {
	struct CardSet deck;
	startDeck(&deck);
	printCardSet(&deck);
}