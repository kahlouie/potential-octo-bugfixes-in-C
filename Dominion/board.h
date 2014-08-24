#pragma once
#include "cards.h"
#include "cardset.h"

struct Board {
	struct CardSet copperpile;
	struct CardSet silverpile;
	struct CardSet goldpile;
	struct CardSet estatepile;
	struct CardSet duchypile;
	struct CardSet provincepile;
	struct CardSet moatpile;
	struct CardSet cellarpile;
	struct CardSet villagepile;
	struct CardSet woodcutterpile;
	struct CardSet workshoppile;
	struct CardSet militiapile;
	struct CardSet remodelpile;
	struct CardSet smithypile;
	struct CardSet marketpile;
	struct CardSet minepile;
};


void initializepiles(struct Board* board);