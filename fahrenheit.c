#include<stdio.h>

double fahrenheit(double centigrade){
    if (centigrade < -273.15){
        return -500;
    }
    else{
        return centigrade * 1.8 + 32;
    }
}
int main(){
    double centigrade;
    printf("Enter the Centigrades: ");
    scanf("%lf",&centigrade);
    double f = fahrenheit(centigrade);
    printf("Fahrenheit: %lf\n", f);

}