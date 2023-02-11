#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc == 1)
    return 1;

  char *test = malloc(strlen(argv[1]) + 1);
  strcpy(test,argv[1]);
  printf(test);

  return 0;
}
