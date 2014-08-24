#include <stdlib.h>
#include "cards.h"

struct TreasureCard CopperValue = {
	1
};

struct Card COPPER = {
	"copper", 0, &CopperValue, NULL, NULL
};

struct TreasureCard SilverValue = {
	2
};

struct Card SILVER = {
	"silver", 3, &SilverValue, NULL, NULL
};

struct TreasureCard GoldValue = {
	3
};

struct Card GOLD = {
	"gold", 6, &GoldValue, NULL, NULL
};

struct VictoryCard EstatePoints = {
	1
};

struct Card ESTATE = {
	"estate", 2, NULL, &EstatePoints, NULL
};

struct VictoryCard DuchyPoints = {
	3
};

struct Card DUCHY = {
	"duchy", 5, NULL, &DuchyPoints, NULL
};

struct VictoryCard ProvincePoints = {
	6
};

struct Card PROVINCE = {
	"province", 0, NULL, &ProvincePoints, NULL
};

struct ActionCard MoatDesc = {
	2, 0, 0, 0, "When another player plays an Attack card, you may reveal this from your hand. If you do, you are unaffected by that Attack."
};

struct Card MOAT = {
	"moat", 2, NULL, NULL, &MoatDesc
};

struct ActionCard CellarDesc = {
	0, 1, 0, 0, "Discard any number of cards. +1 Card per card discarded."
};

struct Card CELLAR = {
	"cellar", 2, NULL, NULL, &CellarDesc
};

struct ActionCard VillageDesc = {
	1, 2, 0, 0, ""
};

struct Card VILLAGE = {
	"village", 3, NULL, NULL, &VillageDesc
};

struct ActionCard WoodcutterDesc = {
	0, 0, 1, 2, ""
};

struct Card WOODCUTTER = {
	"woodcutter", 3, NULL, NULL, &WoodcutterDesc
};

struct ActionCard WorkshopDesc = {
	0, 0, 0, 0, "Gain a card costing up to 4."
};

struct Card WORKSHOP = {
	"workshop", 3, NULL, NULL, &WorkshopDesc
};

struct ActionCard MilitiaDesc = {
	0, 0, 0, 2, "Each other player discards down to 3 cards in his hand."
};

struct Card MILITIA = {
	"militia", 4, NULL, NULL, &MilitiaDesc
};

struct ActionCard RemodelDesc = {
	0, 0, 0, 0, "Trash a card from your hand. Gain a card costing up to 2 more than the trashed card."
};

struct Card REMODEL = {
	"remodel", 4, NULL, NULL, &RemodelDesc
};

struct ActionCard SmithyDesc = {
	3, 0, 0, 0, ""
};

struct Card SMITHY = {
	"smithy", 4, NULL, NULL, &SmithyDesc
};

struct ActionCard MarketDesc = {
	1, 1, 1, 1, ""
};

struct Card MARKET = {
	"market", 5, NULL, NULL, &MarketDesc
};

struct ActionCard MineDesc = {
	0, 0, 0, 0, "Trash a Treasure card from your hand. Gain a Treasure card costing up to 3 more; put it into your hand."
};

struct Card MINE = {
	"mine", 5, NULL, NULL, &MineDesc
};