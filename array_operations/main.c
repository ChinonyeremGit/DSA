#include <stdio.h>
#include <stdlib.h>

/*
 * arrry_traversaal - to create and print an array
 * arr - takes in array
 * arr_size - size
 * return - returns 0 on completion
 */
int array_traversal(int arr[], int arr_size);

/*
 * array_insertion - array to insert a number at a given position
 * arr - takes in an array
 * arr_ size - array size
 */
int array_insertion(int arr[], int arr_size);

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


int array_traversal(int arr[], int arr_size){
    int i;

    //gets the numbers
    for (i = 0; i < arr_size; i++)
        {
            printf("Enter number: ");
            scanf("%d", &arr[i]);
        }
    printf("Array elements are: ");
    for (i = 0; i < arr_size; i++){
        printf("%d,  ", arr[i]);
    }

}

int array_insertion(int arr[], int arr_size){
    int num, pos, i;
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);
    printf("Enter the position for the number(1 - %d): ", arr_size);
    scanf("%d", &pos);
    if (pos < 0 || pos > arr_size){
        printf("invalid position");
        return(0);
    }

        //adjust the array from the highest position to give room for inserrtion
        for (i = arr_size - 1; i >= pos - 1; i--){
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        arr_size++;

    return (arr_size);
}
