#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend, total; 

float input(char type[], float var){
    printf("How much is your %s:  \n", type); 
    scanf( "%f" , &var); 
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;
    printf("Your %s is %d%% of your income.\n", type, per); 
}

int main(void) {
    printf("This is going to calculate your budget for the month.");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries); 
    transportation = input("transportation", transportation); 
    savings = income *.2;
    expenses = rent + utilities + groceries + transportation; 
    spend = income - expenses - savings;
    percent ("rent", rent);
    printf("Your expenses are: $%.2f%%", expenses);
    printf("Your savings are: $%.2f%%", savings); 
    printf("Your total left to spend is: $%.2f\n", total);

     percent ("rent", rent);
     percent ("utilities", utilities);
     percent ("groceries", groceries); 
     percent ("transportation", transportation); 
     percent ("savings", savings);
     percent ("expenses", expenses); 

    return 0;
}