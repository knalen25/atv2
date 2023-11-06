#include <stdio.h>

int main() {
    int vetor[10], npos;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &npos);
        printf("%d", npos);

        if (i < 9) {
            printf(" ");
        }

        vetor[i] = npos;
    }
    printf("\n");

    for (int vezes = 9; vezes > 0; vezes--) {
        for (int i = 0; i < vezes; i++) {
            vetor[i] += vetor[i + 1];
            printf("%d", vetor[i]);

            if (i < vezes - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
