#include <stdio.h>
#include <stdlib.h>

int main(){

    float avgProfit;
    int priceOfTomato = 10;
    int sales = 69;
    int daysWorked = 90;

    avgProfit = ( (float)priceOfTomato * sales ) / daysWorked;
    printf("Average daily profit= %.2fTL", avgProfit);

    return 0;
}
