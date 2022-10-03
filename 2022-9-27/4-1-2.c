#include<stdio.h>
int main()
{
	char c;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:");
	c=getchar();
	if(c>=97&&c<=122)
	{c-=32;
	 printf("letter %c\n",c);
	}

	else if(c>='A'&&c<='Z')
	{c+=32;
	 printf("letter %c\n",c);
	}

	else if(c>='0'&&c<='9')
		printf("digit %c\n",c);
	
	else
	{
		printf("other character \n");
		if(c=='@'||c=='#')
		printf("%c\n",c);
	}
	return 0;
}