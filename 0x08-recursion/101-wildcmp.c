#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: String to compare
 * @s2: String to compare
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match_substring(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}

/**
 * match_substring - matches the substring after wildcard
 * @s1: String
 * @s2: String
 * @after_match; Placeholder
 * Return: 1 if matching, 0 otherwise
 */

int match_substring(char *s1, char *s2, char *after_match)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (match_substring(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (match_substring(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (match_substring(s1 + 1, s2 + 1, after_match));
	else
		return (match_substring(s1 + 1, after_match, after_match));
}
