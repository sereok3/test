#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc == 1)
    return 1;

  int result = 1;
  for (int i = 0; i < 3; i++) {
    result *= *argv[1];
  }

  printf("\n");
  printf(" _____          _          ____\n");
  printf("|  ___| __ ___ (_)_ __    / ___|  ___ __ _ _ __  _ __   ___ _ __\n");
  printf("| |_ | '__/ _ \\| | '_ \\  | |  _ / _ \\ / _` | '_ \\| '_ \\ / _ \\ '__|\n");
  printf("|  _|| | | (_) | | | | | | |_| | (_) | (_| | | | | | | |  __/ |\n");
  printf("|_|  |_|  \\___/|_|_| |_|  \\____|\\___/ \\__,_|_| |_|_| |_|\\___|_|\n");
  printf("\n");

  char *from = malloc(strlen(argv[1]) + 1);
  char *to = malloc(strlen(argv[1]) + 1);
  strcpy(from,argv[1]);
  char *save = from;
  char *save2 = to;
  while (*from){
    *to++ = *from++;
  }
  *to='\0';
  from = save;
  to = save2;

  printf(to);

  return 0;
}
