#include "main.h"

/**
<<<<<<< HEAD
 * *_strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
=======
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/
>>>>>>> 2dced31d5121247261a019ef0c251fcee0f88eb7

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);/* values null*/
}
