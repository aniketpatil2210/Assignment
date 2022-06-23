#include<stdio.h>
int tollcal(int,int);
void  main()
{
	int a,b,s;
		printf("enter choice= \n1.twowheeler \n2.threewheeler \n3.fourwheeler \n4.heavywheel");
	scanf("%d",&a);
	printf("enter the no. of person:");
	scanf("%d",&b);
	s=tollcal(a,b);
	if((a==1)||(a==2)||(a==3)||(a==4))
	printf("total toll= %d",s);
	else 
	printf("enter right vehicle");
}
int tollcal(int a,int b)
{
	int c;
	if(a==1)
	{
		if(b>2)
		{
			c=20+(10*(b-2));
			return c;
		}
		else 
		return 20;
	}
	else if(a==2)
	{
		if(b>3)
		{
			c=30+(20*(b-3));
			return c;
		}
		else 
		return 30;
	}
	else if(a==3)
	{
		if(b>4)
		{
			c=40+(40*(b-4));
			return c;
		}
		else
		return 40;
	}
	else if(a==4)
	{
		if(b>6)
		{
			c=60+(100*(b-6));
			return c;
		}
		else
		return 60;
	}


}
