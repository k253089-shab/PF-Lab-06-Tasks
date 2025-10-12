#include <stdio.h>

int main()
{
    int income, food, transport, entertainment, utilities;
    printf("Enter monthly income: ");
    scanf("%d", &income);
    printf("Enter food expenses: ");
    scanf("%d", &food);
    printf("Enter transport expenses: ");
    scanf("%d", &transport);
    printf("Enter entertainment expenses: ");
    scanf("%d", &entertainment);
    printf("Enter utilities expenses: ");
    scanf("%d", &utilities);
    
    int totalExpense, balance, savings;
    float savingsPercent;
    totalExpense = food + transport + entertainment + utilities;
    printf("\nTotal monthly expenses: Rs.%d", totalExpense);
    balance = income-totalExpense;
    printf("\nRemaining balance after expenses: Rs.%d", balance);
    if(balance>0){ savings=balance; }
    else { savings=0; }
    savingsPercent = ((float)savings / income) * 100;
    printf("\nSavings: Rs.%d (%.2f%% of income)\n", savings, savingsPercent);
    
    float foodPercent, transportPercent, entertainmentPercent, utilitiesPercent;
    printf("\nExpense Breakdown (as percentage of total expenses):\n");
    foodPercent = ((float)food / totalExpense) * 100;
    printf("Food: %.2f%%\n", foodPercent);
    transportPercent = ((float)transport / totalExpense) * 100;
    printf("Transport: %.2f%%\n", transportPercent);
    entertainmentPercent = ((float)entertainment / totalExpense) * 100;
    printf("Entertainment: %.2f%%\n", entertainmentPercent);
    utilitiesPercent = ((float)utilities / totalExpense) * 100;
    printf("Utilities: %.2f%%\n", utilitiesPercent);
    
    printf("\n----- Financial Advice -----\n");
    
    if (totalExpense > income) {
        printf("You are overspending!\n");
    } else {
        if (savingsPercent > 20) {
            printf("Excellent savings!\n");
        }

        if (foodPercent > 40)
            printf("Warning: High spending in Food.\n");
        if (transportPercent > 40)
            printf("Warning: High spending in Transport.\n");
        if (entertainmentPercent > 40)
            printf("Warning: High spending in Entertainment.\n");
        if (utilitiesPercent > 40)
            printf("Warning: High spending in Utilities.\n");
    }
    
    return 0;
}
