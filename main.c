#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc == 1)
    return 1;

  char *from = malloc(strlen(argv[1]) + 1);
  strcpy(from,argv[1]);

  printf(from);

  return 0;
}
