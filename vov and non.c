#include<stdio.h>
main()
{
	char a;
	int vov=0,non=0;
	printf("enter any charector for a\n");
	a=0;

	while(a!='!')
{
	scanf("%c",&a)	;
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
	vov++;	
	}
	else if (a=='\n')
	{
		continue;
	}
	else
	{
     non++;
	}
}
	
	if(vov>non)
	{
		printf("\n %d \n vov bigger",vov);
	}
	else
	{
		printf("\n %d \n non bigger ",non);
	}
	

}

