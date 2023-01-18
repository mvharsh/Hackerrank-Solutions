#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    char ch, s[50], sen[100];
    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}
