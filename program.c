#include <stdio.h>


// Example of a simple C program that adds two numbers

// int main() {
//     int a = 5;
//     int b = 7;
//     int zbir = a + b;

//     printf("Zbir je: %d\n", zbir);

//     return 0;
// }

// 1. Example of passing a pointer to a function in C

// void changeNumber(int *n){
//     *n = 99;
// }

// int main() {
//     int x = 10;
//     printf("pre-change: %d\n", x);

//     changeNumber(&x);
//     printf("post-change: %d\n", x);
// }

// 2. Example of passing an array to a function in C

void duplicateArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}

int main(){
    int numbers[5] = {2, 4, 6, 8, 10};

    printf("pre-duplicate:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
    }

    duplicateArray(numbers, 5);

    printf("\npost-duplicate:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
    }

    return 0;
}


