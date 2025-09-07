#include <stdio.h>

int main() {
    float principal, rate;
    int time, i;
    float simple_interest, compound_interest, amount;

    printf("===== Interest Calculator =====\n");

   
    printf("Enter Principal amount : ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    printf("Enter Time (in years)  : ");
    scanf("%d", &time);

   
    simple_interest = (principal * rate * time) / 100;

    
    amount = principal;
    for (i = 1; i <= time; i++) {
        amount = amount * (1 + rate / 100); 
    }
    compound_interest = amount - principal;


    printf("\n------- Results -------\n");
    printf("Principal Amount   = %.2f\n", principal);
    printf("Rate of Interest   = %.2f%%\n", rate);
    printf("Time Period        = %d years\n", time);
    printf("Simple Interest    = %.2f\n", simple_interest);
    printf("Compound Interest  = %.2f\n", compound_interest);

    
}
