#include "array_operations.h"
#include "insertion.h"
#include "traversal.h"


int main()
{
    int array[50], size, i;
    printf("How many numbers do you want to enter?: ");
    scanf("%d", &size);
    if (size > 50 || size < 0)
    {
        printf("Invalid size");
    }
    else {
            array_traversal(array, size);

            // returns new array size after insertion
            size = array_insertion(array, size);

            for (i = 0; i < size; i++){
                printf("%d", array[i]);
            }
    }
    return 0;
}


