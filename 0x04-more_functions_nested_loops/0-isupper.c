#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c){
  if (c <= 'A' || c <= 'Z')
  {
  printf("%c:",c);
      return (1);
  }
  else
  {
       printf("%c:",c);
    return (0);
  }
    return 0;
}
