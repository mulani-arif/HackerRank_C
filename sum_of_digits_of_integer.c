#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,m;
    int sum=0;
    scanf("%d",&n);
    while(n>0){    // number will get divide by 10 remainder will be last digit
        m=n%10;    //now number get newly initialize by dividing it by 10 and converted to int.
        sum=sum+m;//same recurring till 0 comes
        n=n/10;
    }
    
   printf("%d",sum);
    return 0;
}
