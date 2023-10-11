/*
 * array_insertion - array to insert a number at a given position
 * arr - takes in an array
 * arr_ size - array size
 */

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
