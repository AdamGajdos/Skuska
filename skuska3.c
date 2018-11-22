#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,n,p,k;
	
	scanf("%d %d",&n,&p);

	if (n>=1 && n<=5 && p>=1 && p <=4)
	for (i = 0; i < n*p; i++)   
	{	
		if (i>=2*p && i<3*p || i<p)
		 for (j = 0; j < n*p; j++)
		 {
		   if ((j>=2*p ) && (j<3*p) || j<p)
		  	printf("*");
		   else
		    printf("-");
		 }
		
		else
		for (j = 0; j < n*p; j++)
		{
		 if ((j>=2*p ) && (j<3*p) || j<p )
		 	printf("-");
		 else
		  printf("*");
		}
		
		
		
		printf("\n");
	}
	else printf("Zly vstup");
	return 0;
}
