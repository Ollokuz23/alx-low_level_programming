#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int le, int ind);
int is_palindrome(char *s);

/**
 * find_strlen - checks the string's length
 * @s: string to be measured
 *
 * Return: length of string
 */

int find_strlen(char *s)
{
	int le = 0;

	if (*(s + le))
	{
		le++;
		le += find_strlen(s + le);
	}
	return (le);
}

/**
 * check_palindrome - checks if a string is a palidrome
 * @s: string to be checked
 * @le: length of the string
 * @ind: index of the string
 *
 * Return: 1 If string is a palindrome
 *         0 If else
 */

int check_palindrome(char *s, int le, int ind)
{
	if (s[ind] == s[le / 2])
		return (1);

	if (s[ind] == s[le - ind - 1])
		return (check_palindrome(s, le, ind + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: If is a palindrome - 1
 *         Else - 0
 */

int is_palindrome(char *s)
{
	int ind = 0;

	int le = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, le, ind));
}
