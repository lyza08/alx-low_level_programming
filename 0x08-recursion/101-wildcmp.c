#include "main.h"

/**
 * wildcmp - Entry point
 * Description - comparing two strings
 * @s1 : char string type
 * @s2 : char string type
 * Return: the integer length (successful)
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && (!(*s2)))  /*Base Case*/
	{
		return (1);
	}

	else if (*s1 == *s2)   /*If strings equal return 1. Add 1 to args*/
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')                  /* When equal with *, add 1*/
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (!(*s1))              /*When unequal, return 0*/
		{
			return (0);
		}

		if (wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}
