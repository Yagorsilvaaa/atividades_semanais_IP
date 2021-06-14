#include <stdio.h>

double areaTrapezio(double baseMaior, double basemenor, double altura){
    double areaT = (baseMaior+basemenor)/2 * (altura);
    return areaT;
}

double areaRetangulo(double base, double altura){
    double areaR = areaTrapezio(base,base,altura);
    printf("Area do retangulo: %.2lf\n", areaR);
    return areaR;
}

double areaDoQuadrado(double lado){
    double areaQ = areaRetangulo(lado, lado);
    return areaQ;
}

int main(){
    //valores aleatórios
    printf("Area do trapezio: %.2lf\n", areaTrapezio(3, 2, 1));
    areaRetangulo(11, 27);
    //valores aleatórios
    printf ("Area do quadrado %.2lf\n", areaDoQuadrado(5));
    return 0;
}
