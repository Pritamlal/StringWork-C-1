#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int count=0;
	char text[MAX_SIZE];
	char *str = text;

	
	printf("Enter the string::");
	gets(text);
	
	while(*(str++)!='\0')
	count++;
	printf("%d",count);
}
