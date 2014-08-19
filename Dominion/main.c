#include <stdio.h>

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

cardSetAddCard(struct CardSet* cs) {
	cs->size++;
	// TODO: ALL THE THINGS, BUT ESPECIALLY FINISH THIS METHOD!!!!
	cs->cards = realloc(sizeof cs->cards + sizeof struct Card card)
}

realloc(sizeof cards + sizeof struct Card card)

struct Card Province = {
	"province", 0, NULL, &ProvincePoints
};

int setup() {
	int deck;

	printf("%s\n", hand);
}

int main() {
	setup();
}