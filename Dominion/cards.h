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

struct Card Province = {
	"province", 0, NULL, &ProvincePoints
};

struct CardSet {
	int size;
	struct Card* cards;
};