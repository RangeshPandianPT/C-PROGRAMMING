// C program to demonstrate
// rotation of a matrix elements
#include <stdio.h>

#define R 4 // macros
#define C 4 // macros

void rotatematrix(int m, int n, int mat[R][C])
{
    int row = 0, col = 0;
    int prev, curr;

    while (row < m && col < n) {

        if (row + 1 == m || col + 1 == n)
            break;

        prev = mat[row + 1][col];

        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;

        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

// Driver code
int main()
{
    int mat[R][C] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

    printf("\n Input Matrix \n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    rotatematrix(R, C, mat);

    printf("\n Rotated Matrix \n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}