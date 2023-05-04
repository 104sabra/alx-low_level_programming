#inclue "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: the string
 * Return: string
*/

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = {32, 9, 10, ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	int new_word = 1;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				new_word = 1;
				break;
			}
		}
		i++;
	}

	if ((s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z') ||
			(s[i] >= '0' && s[i] <= '9'))
	{
		new_word = 0;
	}

	if (new_word && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	return (s);
}
