#include <stdbool.h>
#include "cardset.h"

struct Stuff {
  struct CardSet deck;
  struct CardSet hand;
  struct CardSet discard;
};

struct Player {
  char* name;
  bool robot;
  struct Stuff* stuff;
};

void playerStuffInit(struct Player* player);