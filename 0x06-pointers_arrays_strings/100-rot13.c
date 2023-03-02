#include "main.h"

/**
 * rot13 - encodes a string
 * @s: the string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int inx1 = 0, inx2;
	char alph[52] = {
		'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char rot13key[52] = {
		'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c',
		'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};

	while (s[inx1])
	{
		for (inx2 = 0; inx2 <= 52; inx2++)
		{
			if
				(s[inx1] == alph[inx2])
				{
					s[inx1] = rot13key[inx2];
					break;
				}
		}

		inx1++;
	}

	return (s);
}
