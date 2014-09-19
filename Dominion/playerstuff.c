#include <stdio.h>
#include <stdlib.h>
#include "playerstuff.h"
#include "cards.h"
#include "cardset.h"

void playerStuffInit(struct Player* player) {
  struct CardSet deck;
  startDeck(&deck);
  player->stuff = malloc(sizeof deck);
  player->stuff->deck = deck;
  struct CardSet hand;
  cardSetInit(&hand);
  player->stuff->hand = hand;
  for (int i = 0; i < 5; i++) {
    cardSetAddCard(&player->stuff->hand, player->stuff->deck.cards[0]);
    cardSetRemoveCard(&player->stuff->deck, player->stuff->deck.cards[0]);
  }
  struct CardSet discard;
  cardSetInit(&discard);
  player->stuff->discard = discard;
}

void playerStuffFree(struct Player* player) {
  free(player->stuff);
}