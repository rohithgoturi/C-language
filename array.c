#include<stdio.h>
int main ()
{
    float price,gst,total_price;
    float mrp[3];

    //for item1
    printf("Enter the price of the item1 : ");
    scanf("%f",&price);
    total_price=price + price*(18.0/100.0);
    printf("The total price is : %f \n",total_price);
    return 0;
    
}