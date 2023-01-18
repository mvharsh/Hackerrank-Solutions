#include <stdio.h>

void update(int *a,int *b) {
   int a1,b1;
   a1=*a+*b;
   if(*a>*b)
    b1=*a-*b;
   else
    b1=*b-*a;
   *a=a1;
   *b=b1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
