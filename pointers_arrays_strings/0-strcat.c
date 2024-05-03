#include "main.h"
#include <stdio.h>

/**
 * strcat - Concatenates the string pointed to by @src, including the
 * terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src) {
  char *dest_end = dest;

  while (*dest_end != '\0') {
    dest_end++;
  }

  while (*src != '\0') {
    *dest_end = *src;
    dest_end++;
    src++;
  }

  *dest_end = '\0';

  return dest;
}
