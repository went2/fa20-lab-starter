#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
  uint16_t new_bit = (*reg & 0x0001) ^           // reg[0]
                     ((*reg >> 2) & 0x0001) ^    // reg[2]
                     ((*reg >> 3) & 0x0001) ^    // reg[3]
                     ((*reg >> 5) & 0x0001);     // reg[5]
  *reg = (*reg >> 1) | (new_bit << 15);
}

