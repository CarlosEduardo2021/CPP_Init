#include <cstdio>

int main() {
    // type indentifier = value
    double price = 99.80;
    double tax ;
    tax = 0.08;

    // type indentifier = exp;
    double final_price = price * (1 +  tax);
    printf("The final price is %.2f \n", final_price);
    printf("The final price is %f \n", final_price);
    printf("Age = %d", 35);

    return 0;
}