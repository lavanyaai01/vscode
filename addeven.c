#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("The value is Even");
    }
    else
    {
        printf("The value is Odd");
    }
    return 0;
}