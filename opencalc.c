#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Copyright 2022 OpenSun

int main()
{
  char opt[1], cal[] = "c", ver[] = "v";
  char calc[1], add[] = "+", sub[] = "-", mul[] = "*", div[] = "/";  
  int num1, num2, num3, num4;
  int eq;
  printf("OpenCalc by Sun Open|Microsystems \n\n");
 reopt:
  printf("Select; (c)-calculation | (v)-version \nNumber: ");
  scanf("%s", &opt);
  if (strcmp(opt,cal)==0)
    {
    recalc:
      printf("\nSelect; | + | - | * | / |: ");
      scanf("%s", &calc);
      if (strcmp(calc,add)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 + num2;
      printf("Equal: %d \n", eq);
	}
      else if (strcmp(calc,sub)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 - num2;
      printf("Equal: %d \n", eq);
	}
      else if (strcmp(calc,mul)==0)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 * num2;
      printf("Equal: %d \n", eq);
	}
      else if (strcmp(calc,div)==0)
	{
      printf("Enter Biggest Number: ");
      scanf("%d", &num1);
      printf("Enter Smaller Number: ");
      scanf("%d", &num2);
      eq = num1 / num2;
      printf("Equal: %d \n", eq);
	}
      else
	{
      printf("\nError: please select +, -, * or / \n");
	}
      goto recalc;
    }
  else if (strcmp(opt,ver)==0)
    {
      printf("\nversion: opencalc-ver-0.0_4 \n\n");
    }
  else
    {
      printf("\nError: please select c or v \n\n");
      goto reopt;
    }  
  return 0;
}
