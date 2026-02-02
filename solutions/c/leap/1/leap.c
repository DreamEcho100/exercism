#include "leap.h"

bool leap_year(int year) {
  return (
      // - In every year that is evenly divisible by 4.
      (year % 4 == 0)
      // - Unless the year is evenly divisible by 100, in which case it's only a
      // leap year if the year is also evenly divisible by 400.
      || (year % 100 == 0 && year % 400 == 0));
}