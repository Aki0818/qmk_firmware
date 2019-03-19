#ifndef C6KEYPAD_H
#define C6KEYPAD_H

#include "quantum.h"

#define LAYOUT( \
      k_insert, k_home, k_pgup,\
      k_delete, k_end,  k_pgdn \
) \
{ \
    { k_insert, k_home, k_pgup,\
      k_delete, k_end , k=pgdn } \
} 

#endif
