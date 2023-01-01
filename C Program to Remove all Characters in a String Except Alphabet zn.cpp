#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("write a sring:");
	gets(str);
	
	for(int i=0; str[i]!= '\0'; i++)
	{
		while( !(str[i]>='a'&& str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0'))
		{
			int j=0;
			for(j=i; str[j]!='\0'; j++)
			{
				str[j] = str[j+1];
			}
		}
		
	}
	printf("output:");
	puts(str);
	return 0;
}
