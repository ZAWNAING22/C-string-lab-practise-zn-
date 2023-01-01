#include <stdio.h>
#include <string.h>
int main()
{

	char str[5][60], temp[60];
	int i,j;
	printf("write  five sring:");
	 for(i=0; i<5; i++)
	 {
	 	fgets(str[i], sizeof(str[i]), stdin);
	 }
	 
	 for( i=0; i<5; i++)
	 {
	  for(j=i+1; j<5; j++)
	 	{
		 	   if( strcmp(str[i],str[j])> 0 )
			    {
			    	strcpy(temp , str[i]);
			    	strcpy(str[i], str[j]);
			    	strcpy(str[j] , temp);
			    }	
	     }
	 }
	 puts("lexicographicall order");
	 for(i=0; i<5; i++)
	 {
	 	fputs(str[i], stdout);
	 }
	 return 0;
	 
}
