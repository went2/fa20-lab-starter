#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x, unsigned n) {
  unsigned mask = x >> n;
  return mask & 1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x, unsigned n, unsigned v) {
  unsigned mask = 1 << n;
  // Clear the nth bit in x if v is 0
  if(v == 0) {
    *x &= ~mask;
  } else {
    // Set the nth bit in x if v is 1
    *x |= mask;
  }
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x, unsigned n) {
  unsigned mask = 1 << n;
  *x ^= mask;
}

