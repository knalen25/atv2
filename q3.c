#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int m1[4][4], m2[4][4], resultado[4][4];
    char op[10];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    scanf("%s", op);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(op, "soma") == 0) {
                resultado[i][j] = m1[i][j] + m2[i][j];
            } else if (strcmp(op, "sub") == 0) {
                resultado[i][j] = m1[i][j] - m2[i][j];
            } else if (strcmp(op, "mult") == 0) {
                for (int k = 0; k < 4; k++) {
                    resultado[i][j] += m1[i][k] * m2[k][j];
                }
            }
            printf("%4d", resultado[i][j]);
            if (j==3)
            {
                printf("\n");
            }
            
        }
    }

    return 0;
}
