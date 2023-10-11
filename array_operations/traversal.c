/*
 * arrry_traversaal - to create and print an array
 * arr - takes in array
 * arr_size - size
 * return - returns 0 on completion
 */

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