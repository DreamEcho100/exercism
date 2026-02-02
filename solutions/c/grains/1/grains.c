#include "grains.h"
#include <math.h>
#include <stddef.h>
#include <stdint.h>

uint64_t square(uint8_t index) {
  // return (index == 0 || index > 64) ? 0 : (1ull << (index - 1));
  return (uint64_t)((index == 0 || index > 64) ? 0 : pow(2, index - 1));
}

uint64_t total(void) {
  // return ((((uint64_t)1 << 63) - 1) << 1) + 1;
  uint64_t total_sum = 0;
  for (uint8_t i = 1; i <= 64; i++) {
    total_sum += square(i);
  }
  return total_sum;
}
