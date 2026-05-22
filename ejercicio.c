#include <stdio.h>
float calcular_promedio(float *a);

float notas[] = {6.5 , 7.1, 6, 5, 6.1};

int n = sizeof (notas) / sizeof (notas[0]);
int main(){
    printf("\nEl promedio puntero -> %.2f", calcular_promedio(notas));
    return 0;
}

float calcular_promedio(float *a) {
    float suma = 0;
    for (int i = 0; i < 5; i++){
        printf("%.1f\n", a[i] );
        suma = suma + a[i];
    }
    return suma / 5;
}