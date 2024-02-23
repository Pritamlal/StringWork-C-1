#include<stdio.h>
int main()
{
	int count=0;
	char str[100];
	printf("Enter the string::");
	gets(str);
	
	while(str[++count]!='\0');
	
	printf("%d",count);
}
