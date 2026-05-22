#include <stdio.h>

int main() {
    float notas[] = {6.5, 7.1, 6.0, 5.0, 6.1};
    float suma = 0;
    int n = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < n; i++) {
        printf("%.1f\n", notas[i]);
        suma = suma + notas[i];
    }

    printf("El promedio es %.2f\n", (float)suma / n);

    return 0;
}