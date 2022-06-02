// ch2_vowels.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include "platform.h"

char my_char_array[] =
"This is a test of the EMERGENCY broadcast system";
char char_message_out_1[] = "Only the vowels in the string:";
char char_message_out_2[] = "will be printed:";

int main()
{
	system(CLEAR);

	printf("%s\n\"%s\" \n%s\n\n", char_message_out_1, my_char_array,
		char_message_out_2);

	for (int i = 0; my_char_array[i] != '\0'; i++)
	{
		if ((my_char_array[i] == 'A') ||
			(my_char_array[i] == 'E') ||
			(my_char_array[i] == 'I') ||
			(my_char_array[i] == 'O') ||
			(my_char_array[i] == 'U') ||
			(my_char_array[i] == 'a') ||
			(my_char_array[i] == 'e') ||
			(my_char_array[i] == 'i') ||
			(my_char_array[i] == 'o') ||
			(my_char_array[i] == 'u'))
			printf("%c is a vowel found in position %d\n",
				my_char_array[i], (i + 1));
		else
			if (my_char_array[i] == 'Y')
				printf("And sometimes Y!\n");
			else
				if (my_char_array[i] == 'y')
					printf("And sometimes y!\n");
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}