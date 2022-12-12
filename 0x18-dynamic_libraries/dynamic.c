#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_islower - checks for lowercase character.
 *@c: the parameter
 *
 *Return: check the code
 */
int _islower(int c)
{

        return (islower(c) == 0 ? 0 : 1);
}

/**
 *_isalpha -  that checks for alphabetic character.
 *@c: the parameter
 *
 *Return: check the code
 */
int _isalpha(int c)
{
        return (isalpha(c) != 0 ? 1 : 0);
}

/**
 *_abs - computes the absolute value of an integer.
 *@n: the parameter
 *
 *Return: check the code
 */
int _abs(int n)
{
        return (abs(n));
}

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{

        if (c >= 'A' && c <= 'Z')
                return (1);

        else
                return (0);

}

/**
 *_isdigit - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
int _isdigit(int c)
{
        return (isdigit(c) != 0 ? 1 : 0);
}

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 *Return: return the result
 */
int _atoi(char *s)

{

        int sign = 1;

        unsigned int num = 0;


        do {

                if (*s == '-')

                        sign *= -1;


                else if (*s >= '0' && *s <= '9')

                        num = (num * 10) + (*s - '0');


                else if (num > 0)

                        break;


        } while (*s++);


        return (num * sign);

}

/**
 * _strlen - returns the length of a string.
 * @s: the string
 *
 * Return: lenght of s
 */
int _strlen(char *s)
{
        return (strlen(s));
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string
 */
void _puts(char *str)
{
        size_t i;

        for (i = 0 ; i < strlen(str) ; i++)
        {
                _putchar(*(str + i));
        }
        _putchar('\n');

}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the destination
 * @src: the source
 *
 *Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        strcpy(dest, src);

        return (dest);
}

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string.
 *
 * Return: the result
 */
char *_strcat(char *dest, char *src)
{
        return (strcat(dest, src));
}

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string.
 * @n: use at most n bytes from src
 * Return: the result
 */
char *_strncat(char *dest, char *src, int n)
{
        return (strncat(dest, src, n));
}

/**
 * _strncpy - copy a string in another.
 * @dest: the destination string
 * @src: the source string.
 * @n: use at most n bytes from src
 * Return: the result
 */
char *_strncpy(char *dest, char *src, int n)
{
        return (strncpy(dest, src, n));
}

/**
 * _strcmp - compares two strings.
 * @s1: the destination string
 * @s2: the source string.
 *
 * Return: the result
 */
int _strcmp(char *s1, char *s2)
{
        return (strcmp(s1, s2));
}

/**
 *_memset - fills memory with a constant byte.
 *@s: pointer of memory area
 *@b: filling constant
 *@n: the first n bytes
 *
 *Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        memset(s, b, n);

        return (s);
}

/**
 *_memcpy - fills memory with a constant byte.
 *@dest: destination memory area
 *@src: soure memory area
 *@n: the number of bytes
 *
 *Return: the destination dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        while (n--)
                dest[n] = src[n];

        return (dest);
}

/**
 *_strchr - locates a character in a string.
 *@s: the string
 *@c: the charactere
 *
 *Return:  a pointer to the first occurrence
 *of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
        return (strchr(s, c));

}

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: the string
 *@accept: the list of char
 *
 *Return: pointer to the byte in s that matches one of
 *the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
        return (strpbrk(s, accept));

}

/**
 *_strstr - locates a substring.
 *@haystack: string
 *@needle: substring
 *
 *Return: pointer to the beginning of the
 *located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
        return (strstr(haystack, needle));

}
