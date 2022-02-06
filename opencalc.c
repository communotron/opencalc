#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Copyright 2022 OpenSun

int main()
{
  char opt;
  char calc;
  int num1;
  int num2;
  int eq;
  printf("OpenCalc by Sun Open|Microsystems \n\n");
  printf("Select; for calc-(1), for ver-(2) \nNumber: ");
  scanf("%d", &opt);
  if (opt == 1)
    {
      printf("\nSelect; 1-[+] | 2-[-] | 3-[x] | 4-[/] \nNumber: ");
      scanf("%d", &calc);
      if (calc == 1)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 + num2;
      printf("Equal: %d \n", eq);
	}
      else if (calc == 2)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 - num2;
      printf("Equal: %d \n", eq);
	}
      else if (calc == 3)
	{
      printf("Enter Number 1: ");
      scanf("%d", &num1);
      printf("Enter Number 2: ");
      scanf("%d", &num2);
      eq = num1 * num2;
      printf("Equal: %d \n", eq);
	}
      else if (calc == 4)
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
      printf("Error: please select 1, 2, 3 or 4 - quit \n");
	}
    }
  else if (opt == 2)
    {
      printf("version: opencalc-ver-0.0_3 \n");
    }
  else
    {
      printf("Error: please select 1 or 2 - quit \n");
    }
  return 0;
}
