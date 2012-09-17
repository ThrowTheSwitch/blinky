#ifndef Timer_H
#define Timer_H

#include "Types.h"

extern int ticks;
void Timer_Init(void);
BOOL Timer_ToggleRequested(void);

#endif // Timer_H
