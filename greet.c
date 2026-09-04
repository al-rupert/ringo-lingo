#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("usage: greet [name]\n");
    return 1;
  }

  char *name = argv[1];
  printf("hii, %s. have a nice day!\n", name);
  reurn 0;
}
