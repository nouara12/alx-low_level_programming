#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

			while (*a == *b && *b != '\0')
			{
				a++;
				b++;
			}
			if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
