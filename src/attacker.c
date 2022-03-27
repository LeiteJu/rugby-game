// Standard headers
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(
    position_t attacker_position, Spy defender_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(attacker_position);
  UNUSED(defender_spy);

//  srand(time(NULL));
  int dir = rand()%2;

  printf ("Dir: %d\n", dir);

  if (dir) {
    return (direction_t) DIR_UP_RIGHT;
  }

  return (direction_t) DIR_DOWN_RIGHT;
}

/*----------------------------------------------------------------------------*/
