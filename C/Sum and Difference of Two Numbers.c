#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,m1;
    float n2,m2;
    scanf("%d%d",&n1,&m1);
    scanf("%f%f",&n2,&m2);
    printf("%d %d\n",n1+m1,n1-m1);
    printf("%0.1f %0.1f",n2+m2,n2-m2);
    return 0;
}
