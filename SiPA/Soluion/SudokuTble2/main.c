#include<stdio.h>

int main() {
    FILE *file;
    int i, j;
    int sudoku[9][9];

    file = fopen("input.txt", "r");
    for (i = 0;i < 9;i++) {
        for (j = 0;j < 9;j++) {
            fscanf(file, "%d", &sudoku[i][j]);
        }
    }
    fclose(file);

    for (i = 0;i < 9;i++) {
        if (i % 3 == 0) {
            printf("+---+---+---+\n");
        }
        for(j = 0; j < 9;j++) {
            if (j % 3 == 0) {
                printf("|");
            }
            if (sudoku[i][j] != 0) {
                printf("%d", sudoku[i][j]);
            }
            else {
                printf("#");
            }
            if (j == 8) {
                printf("|");
            }
        }
        printf("\n");
        if (i == 8) {
            printf("+---+---+---+\n");
        }
    }
    return 0;
}