#include <stdio.h>
#include <string.h>
// BELOW FUCNTION IS TO CONVERT UPPER CASE TO LOWER CASE
#include <ctype.h>
int main()
{
	char str[100];
	int i;
	int vowel,consonant,digit,whitespace;
	vowel = consonant = digit = whitespace = 0;
	printf("write a string");
	gets(str);
	
	for( i= 0; str[i]!='\0'; i++)
	{
		str[i] = tolower(str[i]);
		if( str[i]=='a' || str[i] =='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'	)
			{
				vowel++;
			}
		if ( str[i]>='a' && str[i]<='z')
			{
				consonant++;
			}
		if( str[i]>='0' && str[i]<='9' )
			{
				digit++;
			}
		if( str[i]==' ')
			{
				whitespace++;
			}
	}
	printf("here is the result:\n");
	printf("vowel= %d\n", vowel);
	printf("consonat= %d\n", consonant);
	printf("digit=%d\n", digit);
	printf("whitespace= %d", whitespace);
	return 0;
}
