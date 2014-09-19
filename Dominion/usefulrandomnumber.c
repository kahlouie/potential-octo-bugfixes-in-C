#include <stdlib.h>

int usefulRandomNumber(int cslength, int shuffled) {
  int finalnumber;
  do {
    finalnumber = rand() % cslength;
  } while (finalnumber < shuffled);
  return finalnumber;
}