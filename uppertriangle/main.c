#include <stdio.h>
int main(int argc, const char * argv[]) {
    int matrix[3][3];
        int sum = 0;

        printf("Enter the elements of the 3x3 matrix:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (j > i) {
                    sum += matrix[i][j];
                }
            }
        }

        printf("Sum of upper triangle elements: %d\n", sum);

        return 0;
}
