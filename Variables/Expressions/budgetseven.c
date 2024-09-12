#include <stdio.h>

int main(void) {
    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    printf("This is going to calculate your budget for the month.");
    printf("How much do you make in a month?\n");
    scanf("%f", &income);
    scanf("Your income is: $%.2f\n", income);
    printf("How much is rent?\n");
    scanf("%f",&rent)
    printf("How much is utilities?\n");
    scanf("%f",&utilities);
    printf("How much is groceries?\n");
    scanf("%f", &groceries);
    printf("How much is transportation\n");
    scanf("%f", &transportation);
    expenses = rent + utilities + groceries + transportation 
    savings = income *.2;
    total = income - expenses - savings;
    printf("Your income is: $%.2f\n", income);
    printf("Your expenses are: $%.2f\n", expenses);
    printf("Your savings are: $%.2f\n", saving); 
    printf("Your total left to spend is: $%.2f\n", total);
    return 0;
}