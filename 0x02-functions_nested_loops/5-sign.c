#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
  if (n > 0)
    {
      return (1);
      putchar('+');
    }
  else if (n < 0)
    {
      return(-1);
      putchar('-');
    }
  else
    {
      return (0);
      putchar('0');
    }

}
