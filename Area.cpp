#include <iostream>

int main()
{
    int area;
    int altura;
    int base;
    printf("Altura: ");
    scanf_s("%i", &altura);
    printf("Base: ");
    scanf_s("%d", &base);
    area = base * altura;
    printf("El rectangulo de %i x %i tiene area de %i", base, altura, area);
}

