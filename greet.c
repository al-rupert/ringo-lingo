#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("usage: greet [name]\n");
    return 1;
  }

  char *name = argv[1];

  for (int i = 0; i < 100; i++)
    {
      printf("hiii %s, have a nice day!\n", name);
    }
  
  reurn 0;
}
