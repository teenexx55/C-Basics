#include <stdio.h>

int main() {

    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++) 
            scanf("%d", &matrix[i][j]); 

     int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0; 

}