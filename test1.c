#define _CRT_SECURE_NO_WARNINGS 1
#define Size 256
#include<stdio.h>
int main()
{
	int i = 0, count = 0;
	char arr[Size];
	gets(arr);
	while (arr[i] != '\0')
	{
		if (arr[i] == ' ')
		{
			count++;
		}
		i++;
	}
	printf("һ����%d������", count+1);
	return 0;
}