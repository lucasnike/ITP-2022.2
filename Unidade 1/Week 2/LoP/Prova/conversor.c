#include <stdio.h>

int main(){
    double temperatura, kelvin, fahrenheit, celsius;
    char unidadeDeMedida;

    scanf("%lf %c", &temperatura, &unidadeDeMedida);

    switch (unidadeDeMedida)
    {
    case 'C':
        kelvin = temperatura + 273.15;
        fahrenheit = (temperatura * 9 / 5) + 32;

        printf("Celsius: %.2lf\n", temperatura);
        printf("Farenheit: %.2lf\n", fahrenheit);
        printf("Kelvin: %.2lf\n", kelvin);
        break;

    case 'F':
        kelvin = (temperatura - 32) * 5 / 9 + 273.15;
        celsius = (temperatura - 32) * 5 / 9;

        printf("Celsius: %.2lf\n", celsius);
        printf("Farenheit: %.2lf\n", temperatura);
        printf("Kelvin: %.2lf\n", kelvin);

        break;

    case 'K':
        celsius = temperatura - 273.15;
        fahrenheit = (temperatura - 273.15) * 9 / 5 + 32;

        printf("Celsius: %.2lf\n", celsius);
        printf("Farenheit: %.2lf\n", fahrenheit);
        printf("Kelvin: %.2lf\n", temperatura);

        break;
    }

return 0;
}
