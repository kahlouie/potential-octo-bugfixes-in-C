#include <stdio.h>
#include <stdlib.h>
#include "cards.h"

void cardSetInit(struct CardSet* cs) {
	cs->size = 0;
	cs->cards = NULL;
}

void cardSetFree(struct CardSet* cs) {
	free(cs->cards);
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
			cardSetAddCard(cs, COPPER);
		} else {
			cardSetAddCard(cs, ESTATE);
		}
	}
}

void printCardSet(struct CardSet* cs) {
	for (int i = 0; i < cs->size; i++){
		printf("%s\n", cs->cards[i].name);
	}
}

void cardSetRemoveCard(struct CardSet* cs, struct Card oldCard){
	int i = 0;
	while (cs->cards[i].name != oldCard.name && i < cs->size) {
		i++;
	}
	while (i < cs->size - 1) {
		cs->cards[i] = cs->cards[i + 1];
		i++;
	}
	cs->size--;
	cs->cards = realloc(cs->cards, sizeof (struct Card) * cs->size);
}