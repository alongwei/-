#include<stdio.h>
int main()
{
	char *s="120119110";
	int n0,n1,n2,nn,i;
	n0=n1=n2=nn=i=0;
	do{
		switch(s[i++])
		{default :nn++;
		case '0':n0++;
		case '1':n1++;
		case '2':n2++;
		}
	}while(s[i]);
	printf("%d %d %d %d",n0,n1,n2,nn);
	return 0;
 } 
