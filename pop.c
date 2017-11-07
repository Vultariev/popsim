#include "pop.h"
#include <stdio.h>


void cycle(pop *in)
{
  int r = in->range - 1;
  double next[r + 1];
  while(r > 0)
  {
    next[r] = in->current[r-1]*in->survivalrate[r-1];
    r--;
  }
  r = in->range - 1;
  double new = 0;
  while(r >= 0)
  {
    new += in->current[r]*in->birthrate[r];
    r--;
  }
  next[0] = new;
  r = in->range - 1;
  while(r >= 0)
  {
    in->current[r] = next[r];
    r--;
  }
}
