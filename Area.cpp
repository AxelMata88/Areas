#include <iostream>

int main()
{
	int radio;
    float area;
    printf("Radio: ");
    scanf_s("%i", &radio);
    area = 3.1416 * (radio *radio);
    printf("El circulo de %i de radio tiene un area de %.2f al cuadrado", radio, area);
}
