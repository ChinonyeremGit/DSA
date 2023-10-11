#include "array_operations.h"
/*
 * item_deletion - to delete an item from an array
 * arr - takes in array
 * arr_size - size
 * return - returns new size of array
 */

int item_deletion(int arr[], int arr_size){
    int i, pos, item;
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < arr_size - 1; i++)
        arr[i] = arr[i + 1];
    arr_size--;
    return(arr_size);
    }
