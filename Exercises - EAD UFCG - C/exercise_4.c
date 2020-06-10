#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w = 0, h = 0, bmi = 0;

    printf("Weight: ");
    scanf("%f", &w);

    printf("Height: ");
    scanf("%f", &h);

    bmi = w/(h * h);

    if (bmi < 18.5) {
        printf("Abaixo do peso: %.2f\n", bmi);
    }else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Peso Normal: %.2f\n", bmi);
    }else if (bmi >= 25 && bmi <= 29.9) {
        printf("Acima do peso: %.2f\n", bmi);
    }else {
        printf("Obeso: %.2f\n", bmi);
    }

    return 0;
}
