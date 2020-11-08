#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int sumary(char text[1000],int* pointer);
void fact(int sum);
int main()
{
	char text[1000];
	char* pointer;

	int sum = 0;

	scanf("%s", &text);
	pointer = &text[0];
	for (int i = 0; i < strlen(text); i++)
	{
		sum += *pointer;
		pointer++;
	}
	printf("sum = %d\n", sum);
	fact(sum);
	return 0;
}

void fact(int sum)
{
	int i = 2;
	printf("%d = ", sum);
	if (sum == 1)
	{
		printf("1");
	}
	while (sum > 1)
	{
		if (sum % i == 0)
		{
			sum /= i;
			printf("%d ", i);
			if (sum > 1)
			{
				printf("x ");
			}
		}
		else
		{
			i++;
		}
	}
}
