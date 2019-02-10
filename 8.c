int main()
{
	int a,n,j=0,b;
	scanf("%d%d",&a,&n);
	while(a)
	{
		b=a%10;
		if(b==n)
		j++;
		a=a/10;
	}
	if(j==0)
	printf("no");
	else
	printf("yes");
}
