#include <iostream>

int main()
{
    int lado;
    int area;
    printf("Lado: ");
    scanf_s("%i", &lado);
    area = (lado * lado);
    printf("El cuadrado de %i tiene un area de %i", lado, area);
}
