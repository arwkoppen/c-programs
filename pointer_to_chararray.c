#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthString(char *string)
{
	int i = 0;
	while(*string)
	{
		i++;
		string++;
	}
	return i;
}

char* returnPointer(char s[])
{
	int n = strlen(s);
	int i;
	char *copy = (char*) malloc(n * sizeof(char));
	for (i = 0; i < n; i++)
	{
		copy[i] = s[i];
	}
	copy[i] = '\0';
	return copy;

}

int main()
{
	char s[] = "abcde";
	printf("The length of the string is: %d\n", lengthString(s));
	char *ptr;
	ptr = returnPointer(s);
	printf("%s\n", ptr);
	return 0;
}