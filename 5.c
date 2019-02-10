int main()
{
	int a,b,i=1;
	scanf("%d",&a);
	while(a)
	{
		b=a%10;
		i=i*b;
		a=a/10;
	}
	if(i%2==0)
	printf("even");
	else
	printf("odd");
	}
