int main()
{
	char a[10];
	int b,i,j=0;
	gets(a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
		if((a[i]=='0')||(a[i]=='1'))
		j++;
	}
	if(j==b)
	printf("Yes");
	else
	printf("No");
}
