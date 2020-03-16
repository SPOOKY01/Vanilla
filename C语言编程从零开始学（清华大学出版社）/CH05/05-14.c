#include<stdio.h>
int main()
{
	char a,b,c;
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			if(a!=b)
			{
				for(c='x';c<='z';c++)
				{
					if(a!=c&&b!=c)
					{
						if(a!='x'&&c!='x'&&c!='z')
						{
							printf("顺序为:a--%c\tb--%c\tc--%c\n",a,b,c);
						}
					}
				}
			}
		}
	}
	return 0;
}
