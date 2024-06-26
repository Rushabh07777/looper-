#include <stdio.h>

int main()
{
    int num;
    int count = 0;
    printf("enter a any number:-");
    scanf("%d", &num);
   
    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    printf("%d", count);
}