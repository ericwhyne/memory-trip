#include <stdio.h>
int main (){
  char buf1[8] = "aaaa";
  char tripwire[8] = "12345678";
  char buf2[8] = "1111";
  while (1){  
    printf("Enter a string:");
    gets(buf1);
    printf("\n\nBuffer value:%s\n\n", buf1);
    printf("Target value:%s\n\n", buf2);
  }
  return 0;
}
