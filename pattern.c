#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{  // m=rows x rows, k=n=input, i&j=for loop
  
    int i,j,k,m,n,x; 
    scanf("%d",&n);//consider with input of 4
    k=n;
    m = n+(n-1);// 7 rows needed
    for(i=0;i<m;i++)//total loops for rows
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)//if loop is less than 3(as i strts from 0)
            {        
                if(i==0)//for 1st line
                {
                printf("%d ",k);//print 4
                }
                if(i>=1)//from 4 to 1
                {
                    if(j<i)//rows>columns
                    {
                        printf("%d ",k-j);//it will print required no.
                    }
                    else if(j>=i && j<m-i)//columns>=rows & but less than total rows-loop no.
                    {
                        printf("%d ",k-i);//input-loop no.
                    }
                    else //remaining condition
                    {
                        printf("%d ",(j-k+1)+1);//columns-input+2
                    }
                }
            }
            else if(i==n-1)//row = input-1(2nd row in case as i starts with 0)
            {
                if(j<n)
                {
                    printf("%d ",k-j);
                }
                else
                {
                    printf("%d ",(j-k+1)+1);
                }
            }
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                {
                printf("%d ",k);
                }
                if(j<x)
                {
                    printf("%d ",k-j);
                }
                else if(j>=x && j<m-x)
                {
                    printf("%d ",k-x);
                }
                else 
                {
                    printf("%d ",(j-k+1)+1);
                }    
            }
        }
        printf("\n");
    }
}
