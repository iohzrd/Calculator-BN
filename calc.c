#include <stdio.h>
#include <stdbool.h>
#include <gmp.h>

int main()
{
	char function;

  mpf_t number1, number2, output;

  mpf_init_set_ui(number1, 0);
  mpf_init_set_ui(number2, 0);
  mpf_init_set_ui(output, 0);

  while(true)
  {
      printf("enter a calculation using A +,-,*,/ B format.\n");
      gmp_scanf("%Ff%c%Ff", number1, &function, number2);

      if (function == '+')
      {
        mpf_add(output, number1, number2);
        gmp_printf("%Ff\n", output);
      }

      if (function == '-')
      {
        mpf_sub(output, number1, number2);
        gmp_printf("%Ff\n", output);
      }

      if (function == 'x' || function == '*')
      {
        mpf_mul(output, number1, number2);
        gmp_printf("%Ff\n", output);
      }

      if (function == '/')
      {
        mpf_div(output, number1, number2);
        gmp_printf("%Ff\n", output);
      }
  }

  mpf_clear(number1);
  mpf_clear(number2);
  mpf_clear(output);
}
