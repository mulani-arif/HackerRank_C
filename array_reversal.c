#include <stdio.h>

int main()
{
    //1
    int total;
    int i;
    //2
    int start, end, temp;

    //3
    //printf("How many numbers you want to enter : ");
    scanf("%d", &total);

    //4
    int array[total];

    //5
    for (i = 0; i < total; i++)
    {
        //printf("Enter element for position %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    //6
    //printf("Array entered : \n");
    /*for (i = 0; i < total; i++)
    {
        printf("%d ", array[i]);
    }*/

    //7
    start = 0;
    end = total - 1;

    //8
    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    //9
    //printf("\nArray after reversing is done : \n");
    for (i = 0; i < total; i++)
    {
        printf("%d ", array[i]);
    }
}
