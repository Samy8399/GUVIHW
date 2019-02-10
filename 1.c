int main()
{
	int a,b,i=3;
	scanf("%d",&a);
	while(a)
	{
		b=a/100;
		printf("%d ",b);
		a=a%100;
	}
}
