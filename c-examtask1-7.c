#include<stdio.h>
int main(){
	
	int a, b, c;
	
	for(a=10; a>=6; a--)
	{
		for(b=a; b>=1; b--)
		{
			printf(" ");
		}
		
		for(c=a; c<=10; c++)
		{
			printf("%d", c);
		}
		
		printf("\n");
	}
	
}
