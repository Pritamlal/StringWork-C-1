#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int count=0,i=0;
	char str[MAX_SIZE];
	printf("Enter the string::");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count); 
	 
}
