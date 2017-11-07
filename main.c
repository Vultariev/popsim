#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include "pop.h"
#define DEBUG 0

pop mice;

int main(void)
{
  mice.range = 4;
  mice.current[0] = 25;
  mice.current[1] = 0;
  mice.current[2] = 0;
  mice.current[3] = 0;

  mice.birthrate[0] = 0;
  mice.birthrate[1] = 0.5;
  mice.birthrate[2] = 1;
  mice.birthrate[3] = 0.7;

  mice.survivalrate[0] = 0.5;
  mice.survivalrate[1] = 0.8;
  mice.survivalrate[2] = 0.6;
  mice.survivalrate[3] = 0;

  int cycles = 20;

  while(cycles > 0)
  {
    printf("%f, %f, %f, %f\n",mice.current[0],mice.current[1],mice.current[2],mice.current[3]);
    cycle(&mice);
    cycles--;
  }
}
