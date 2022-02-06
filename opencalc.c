#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Copyright 2022 OpenSun

int main()
{
  char a;
  int b;
  int c;
  int eq;
  printf("Please Select; 1-(+) | 2-(-) | 3-(x) | 4-(/) ");
  scanf("%d", &a);
  if (a == 1)
    {
      printf("Enter Number 1: ");
      scanf("%d", &b);
      printf("Enter Number 2: ");
      scanf("%d", &c);
      eq = b + c;
      printf("Equal: %d \n", eq);
    }
  else if (a == 2)
    {
      printf("Enter Number 1: ");
      scanf("%d", &b);
      printf("Enter Number 2: ");
      scanf("%d", &c);
      eq = b - c;
      printf("Equal: %d \n", eq);
    }
   else if (a == 3)
    {
      printf("Enter Number 1: ");
      scanf("%d", &b);
      printf("Enter Number 2: ");
      scanf("%d", &c);
      eq = b * c;
      printf("Equal: %d \n", eq);
    }
   else if (a == 4)
    {
      printf("Enter Biggest Number: ");
      scanf("%d", &b);
      printf("Enter Smaller Number: ");
      scanf("%d", &c);
      eq = b / c;
      printf("Equal: %d \n", eq);
    }
  else
    {
      printf("Error: please select 1, 2, 3 or 4 - quit \n");
    }
  return 0;
}
