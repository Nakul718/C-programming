#include <stdio.h>
float cost_price(float totalSP, float totalProfit)
{
    float totalCP, cp_peritem;
    totalCP=totalSP-totalProfit;
    cp_peritem=totalCP/15;
    
    return cp_peritem;
}
int main()
{
    float totalSP, totalProfit, cp;
    
    printf("enter the total selling price of 15 items:");
    scanf("%f", &totalSP);
    
    printf("enter total profit earned:");
    scanf("%f", &totalProfit);
    
    cp=cost_price(totalSP, totalProfit);
    
    printf("cost price of one item=%.2f\n", cp);
    return 0;
}
