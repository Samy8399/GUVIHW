int main()
{
	int a,b,i=0,j;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		i=i+b;
		a=a/10;
	}
	printf("%d",i);
	}
