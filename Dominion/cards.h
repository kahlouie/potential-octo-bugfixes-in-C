#pragma once

struct TreasureCard {
	int value;
};

struct VictoryCard {
	int points;
};

struct ActionCard {
	int cards;
	int actions;
	int buys;
	int moola;
	char* description;
};

struct Card {
	char* name;
	int cost;
	struct TreasureCard* treasure;
	struct VictoryCard* victorypoints;
	struct ActionCard* action;
};

extern struct Card COPPER;

extern struct Card SILVER;

extern struct Card GOLD;

extern struct Card ESTATE;

extern struct Card DUCHY;

extern struct Card PROVINCE;

extern struct Card MOAT;

extern struct Card CELLAR;

extern struct Card VILLAGE;

extern struct Card WOODCUTTER;

extern struct Card WORKSHOP;

extern struct Card MILITIA;

extern struct Card REMODEL;

extern struct Card SMITHY;

extern struct Card MARKET;

extern struct Card MINE;