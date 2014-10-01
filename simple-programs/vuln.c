#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main (int argc, char **argv){
  char buf1[4];
  char buf2[4] = "1111111";
  strcpy(buf1, argv[1]);
  printf("Buffer value:%s\n\n", buf1);
  printf("Target value:%s\n\n", buf2);
  return 0;
}
