#include <stdlib.h>
#include "mystrlib.h"

int strComp(char* string1, char* string2)
{
	char match = 1;
	int i = 0;

	while(string1[i] != '\0')
	{
		if(string1[i] != string2[i])
			match = 0;

		i++;
	}

	if(string2[i] != '\0')
		match = 0;

	return match;
}

int strLen(char* stringIn)
{
	int length = 0, i = 0;

	while(stringIn[i] != '\0')
	{
		length++;
		i++;
	}
	return length;
}

char* strCat(char* string1, char* string2)
{
	char* stringOut;
	int length1, length2, i, j;

	length1 = strLen(string1);
	length2 = strLen(string2);

	stringOut = (char*) malloc(length1 + length2 + 1);

	for(i = 0; i < length1; i++)
	{
		stringOut[i] = string1[i];
	}

	for(j = 0; j < length2; j++)
	{
		stringOut[i + j] = string2[j];
	}

	stringOut[i + j] = '\0';

	return stringOut;
}

char* strCopy(char* dest, char* src)
{
	int i = 0;
	int srcLength = strLen(src);

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}
