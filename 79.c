int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a>b)
	c=a-b;
	else
	c=b-a;
	if(c%2==0)
	printf("Even");
	else
	printf("odd");
}
