int main()
{
	int a,n,j=0,b;
	scanf("%d%d",&a);
	while(a)
	{
		b=a%10;
		j++;
		a=a/10;
		}
	printf("%d",j);
		}
