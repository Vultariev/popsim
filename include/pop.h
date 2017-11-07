#define DEBUG 1
#ifndef DEBUG
#define DEBUG 0
#endif

struct pop
{
  int range; //Amount of array values in the array
  float current[4];
  float birthrate[4];
  float survivalrate[4];
};

typedef struct pop pop;

void logd(char *in[]);

void cycle(pop *in);
