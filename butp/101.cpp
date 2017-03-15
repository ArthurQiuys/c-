#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	int t, a, b, c, d;
	char s[20], k;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("%s",s);
		k = 0;
		if ( sscanf(s,"%d.%d.%d.%d%c",&a,&b,&c,&d,&k)==4)
		{
			if ( k==0 && 0<=a && a<=255 && 0<=b && b<= 255 && 0<=c && c<=255 && 0<=d && d<=255)
			printf("Yes\n");
			else printf("No\n");
		}
		else printf("No\n");
	}
	return 0;
}
