#include <stdio.h>
#include <stdlib.h>

struct TreasureCard {
	int value;
};

struct VictoryCard {
	int points;
};

struct Card {
	char* name;
	int cost;
	struct TreasureCard* treasure;
	struct VictoryCard* victorypoints;
};

struct TreasureCard CopperValue = {
	1
};

struct Card Copper = {
	"copper", 0, &CopperValue, NULL
};

struct TreasureCard SilverValue = {
	2
};

struct Card Silver = {
	"silver", 3, &SilverValue, NULL
};

struct TreasureCard GoldValue = {
	3
};

struct Card Gold = {
	"gold", 6, &GoldValue, NULL
};

struct VictoryCard EstatePoints = {
	1
};

struct Card Estate = {
	"estate", 2, NULL, &EstatePoints
};

struct VictoryCard DuchyPoints = {
	3
};

struct Card Duchy = {
	"duchy", 5, NULL, &DuchyPoints
};

struct VictoryCard ProvincePoints = {
	6
};

struct CardSet {
	int size;
	struct Card* cards;
};

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

struct Card Province = {
	"province", 0, NULL, &ProvincePoints
};

void setup() {
	int deck;
}

int main() {
	struct CardSet deck;
	startDeck(&deck);
	printCardSet(&deck);
}