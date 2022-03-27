// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"
#include "dimension.h"
#include "field.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

int pos = -1;

int descendo= 0;

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(defender_position);
  UNUSED(attacker_spy);

  if (pos == -1) {

    pos = (int) defender_position.i;
    descendo = 0;
    return (direction_t) DIR_UP_LEFT;

  }

  if (pos == (int) defender_position.i) {

    if (descendo) {
      descendo = 0;
      return (direction_t) DIR_UP;
    }

    descendo = 1;
    return (direction_t) DIR_DOWN;

  }

  pos = (int) defender_position.i;

  if (descendo)
    return (direction_t) DIR_DOWN;

  return (direction_t) DIR_UP;
}

/*----------------------------------------------------------------------------*/
