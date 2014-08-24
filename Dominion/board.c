#include "board.h"
#include "cards.h"
#include "cardset.h"

void initializepile(struct CardSet* cs, int amount, struct Card c) {
	cardSetInit(cs);
	for (int i = 0; i < amount; i++) {
		cardSetAddCard(cs, c);
	}
}

void initializepiles(struct Board* board) {
	initializepile(&board->copperpile, 46, COPPER);
	initializepile(&board->silverpile, 40, SILVER);
	initializepile(&board->goldpile, 30, GOLD);
	initializepile(&board->estatepile, 8, ESTATE);
	initializepile(&board->duchypile, 8, DUCHY);
	initializepile(&board->provincepile, 8, PROVINCE);
	initializepile(&board->moatpile, 10, MOAT);
	initializepile(&board->cellarpile, 10, CELLAR);
	initializepile(&board->villagepile, 10, VILLAGE);
	initializepile(&board->woodcutterpile, 10, WOODCUTTER);
	initializepile(&board->workshoppile, 10, WORKSHOP);
	initializepile(&board->militiapile, 10, MILITIA);
	initializepile(&board->remodelpile, 10, REMODEL);
	initializepile(&board->smithypile, 10, SMITHY);
	initializepile(&board->marketpile, 10, MARKET);
	initializepile(&board->minepile, 10, MINE);
}