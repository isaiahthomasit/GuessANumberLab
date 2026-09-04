#include <stdio.h>
 // This imports standard input/output, it gives you printf()
 // and scanf (), which prompts the user for somthing.

#include <stdlib.h>
 // Provies various commands like rand() and srand() which you'll use
 // for generatiing random numbers


int main(){
  char userName[20];
  
  printf("what is your name? ");
  scanf("%s", userName);

  printf("Hello, %s!, My name is Isaiah\n", userName)

  return 0;

 }


