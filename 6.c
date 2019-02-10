int main()
{
	char a[100];
	int b,j=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
		if(((a[i]>64)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122))||((a[i]>=48)&&(a[i]<=57)))
		j=1;
		
	}
	if(j==1)
		printf("yes");
		else
		printf("no");
	}
