#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
  if (n > 0)
    {
      putchar('+');
      return (1);
    }
  else if (n < 0)
    {
      putchar('-');
      return(-1);
    }
  else
    {
      putchar('0');
      return (0);
    }

}
