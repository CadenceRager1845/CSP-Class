#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend; 

float input(char type[]){
    printf("How much is your %s:  \n", type); 
    scanf( "%f" , &var); 
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;
    prinf("Your %s is %d%% of your income.\n", type, per); 
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
    printf("Your expenses are: $%d%%", expenses);
    printf("Your savings are: $%d%%", savings); 
    printf("Your total left to spend is: $%.2f\n", total);
    printf("Your rent is %d%% of your income",(int) prent); 
    printf("Your utilities  is %d%% of your income",(int) putilities); 
    printf("Your transportation is %d%% of your income",(int) ptransportation);

     percent ("rent", rent);
     percent ("utilities", utilities);
     percent ("groceries", groceries); 
     percent ("transportation", transportation); 
     percent ("savings", savings);
     percent ("expenses", expenses); 

    return 0;
}