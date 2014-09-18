#include "cards.h"

void cardSetInit(struct CardSet* cs);

void cardSetFree(struct CardSet* cs);

void cardSetAddCard(struct CardSet* cs, struct Card newCard);

void startDeck(struct CardSet* cs);

void printCardSet(struct CardSet* cs);

void cardSetRemoveCard(struct CardSet* cs, struct Card oldCard);