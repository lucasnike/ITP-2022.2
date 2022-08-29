#include <stdio.h>

int main(){
    double temperatura, kelvin, fahrenheit, celsius;
    char unidadeDeMedida;

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    scanf("%c");

    printf("Digite a unidade de medida('c', 'f', 'k'): ");
    scanf("%c", &unidadeDeMedida);


        switch (unidadeDeMedida)
    {
    case 'c':
        kelvin = temperatura + 273.15;
        fahrenheit = (temperatura * 9 / 5) + 32;

        printf("\nKelvin = %.2lf K\n", kelvin);
        printf("Farenheit = %.2lf F\n", fahrenheit);
        printf("Celsius = %.2lf C\n", temperatura);
        break;

    case 'f':
        kelvin = (temperatura - 32) * 5 / 9 + 273.15;
        celsius = (temperatura - 32) * 5 / 9;

        printf("\nKelvin = %.2lf K\n", kelvin);
        printf("Farenheit = %.2lf F\n", temperatura);
        printf("Celsius = %.2lf C\n", celsius);

        break;

    case 'k':
        celsius = temperatura - 273.15;
        fahrenheit = (temperatura - 273.15) * 9 / 5 + 32;

        printf("\nKelvin = %.2lf K\n", temperatura);
        printf("Farenheit = %.2lf F\n", fahrenheit);
        printf("Celsius = %.2lf C\n", celsius);

        break;
    }

return 0;
}
