#include <stdio.h>

void strcatt(char s[], char t[])
{
	int i = 0, j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s[i++] = ' ';
	while((s[i++] = t[j++]) != '\0');
}

int main()
{
	char s[] = "Hello";
	char t[] = "mate!";
	strcatt(s, t);
	printf("My string is: %s\n", s);
	return 0;
}