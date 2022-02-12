#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Copyright 2022 OpenSun

int main()
{
  char calc[1], add[] = "+", sub[] = "-", mul[] = "*", div[] = "/";  
  int num1, num2, num3, num4;
  int eq;
  printf("OpenCalc by OpenSun Project\n\n");
 recalc:
      printf("Select; | + | - | * | / |: ");
      scanf("%s", &calc);
      if (strcmp(calc,add)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 + num2;
      printf("Equal: %d\n\n", eq);
	}
      else if (strcmp(calc,sub)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 - num2;
      printf("Equal: %d\n\n", eq);
	}
      else if (strcmp(calc,mul)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 * num2;
      printf("Equal: %d\n\n", eq);
	}
      else if (strcmp(calc,div)==0)
	{
      printf("Enter Biggest Number: ");
      scanf("%d", &num1);
      printf("Enter Smaller Number: ");
      scanf("%d", &num2);
      eq = num1 / num2;
      printf("Equal: %d\n\n", eq);
	}
      else
	{
      printf("\nError: please select +, -, * or / \n");
	}
      goto recalc;
}
