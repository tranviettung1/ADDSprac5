#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x) {
  return x < 100 && x > 9;
}
