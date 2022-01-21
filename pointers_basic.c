#include <stdio.h>

void update(int *a,int *b) {
    int *c;
    if(a<b){
        *c=*a;
        *a=*b;
        *b=*c;
    }
    
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    if(a<b){
    update(pa, pb);
    }
    printf("%d\n", a+b);
    printf("%d\n",a-b);
    return 0;
}
