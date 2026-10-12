#include <stdio.h>

int main(void)
{
    int matrix1[3][2];
    int matrix2[3][2];

    printf("Enter elements of first matrix: ");
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix: ");
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // printf("Result:\n");
    // for (int i=0; i<3; i++) {
    //     for (int j=0; j<2; j++) {
    //         printf("%d ", matrix1[i][j] + matrix2[i][j]);
    //     }
    //     puts("");
    // }

    int res[3][2];

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            res[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", res[i][j]);
        }
        puts("");
    }

    return 0;
}