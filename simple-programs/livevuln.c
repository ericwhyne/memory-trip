#include <stdio.h>
int main (){
  char buf1[4] = "aaaa";
  char buf2[4] = "1111";
  while (1){  
    printf("Enter a string:");
    gets(buf1);
    printf("\n\nBuffer value:%s\n\n", buf1);
    printf("Target value:%s\n\n", buf2);
  }
  return 0;
}
