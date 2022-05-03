#include<stdio.h>
int main()
{
    int num, evensum=0, oddsum=0, i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &num);
    
        if(num%2==0)
        {
            evensum=evensum+num;
        }
        else
        {
            oddsum=oddsum+num;
        }
    }
    printf("Sum of all even numbers: %d \n", evensum);
    printf("Sum of all odd numers: %d", oddsum);

    return 0;
}