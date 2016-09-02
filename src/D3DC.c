/*
  D3DC.c

  > mingw32-make -f makefile.mingw32
*/

#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  for(i = 0; i < ac; ++i)
    printf("%d %s\n", i, av[i]);
  return 0;
}
