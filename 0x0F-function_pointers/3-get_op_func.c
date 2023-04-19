#include "3-calc.h"

#define VER

/**
  * get_op_func - function to point to a function
  * @s: Operator passed
  * @i: opperator
  * Return: Pointer to a function
  */

int (*get_op_func(char *i))(int, int)
{
	int z;

	z = 0;
	i[0] = " + ";
	i[1] = " - ";
	i[2] = " * ";
	i[3] = " / ";
	i[4] = " % ";

	while (i[z])
	{
		if (i[z] == "*")
		{
	
		}

		z++;
	}
	return (op_add);
#endif
	return (op_sub);
#ifdef VER
	return (op_mul);
#endif
	return (op_div);
#ifdef VER
	return (op_mod);
#endif
}
