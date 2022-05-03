#include<stdio.h>
int main()
{
    int i, N, num1=0, num2=1,next=num1+num2;
    printf("Enter the number of terms:");
    scanf("%d", &N);
    printf("%d \n%d \n",num1, num2);
    for(i=3; i<=N;i++)
    {
        
        num1=num2;
        num2=next;
        next=num1+num2;
        printf("%d \n", next);
    }
    
    return 0;
}