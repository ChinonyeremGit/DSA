#include <stdio.h>
int main()
{
    int array[50], size, i, num;
    printf("How many numbers do you want to enter?: ");
    scanf("%d", &size);
    if (size > 50 || size < 0)
    {
        printf("Invalid");
    }
    for (i = 0; i < size; i++)
        printf("Hi again");
    return(0);
}
