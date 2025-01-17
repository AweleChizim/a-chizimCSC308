#include <stdio.h>

int bankOperations(int operation, int accBalance) {
    float credit;
    float debit;

    if (operation == 1){
        printf("How much would you like to withdraw? ");
        scanf("%f", debit);
        accBalance -= debit;
    } else if (operation == 2){
        printf("How much would you like to transfer? ");
        scanf("%f", debit);
        accBalance -= debit;
    } else if (operation == 3){
        printf("How much would you like to deposit? ");
        scanf("%f", credit);
        accBalance += credit;
    } else if (operation == 4){
        accBalance;
    }

    return accBalance;
}

int accTransactions(float accBalance) {
    int operation;
    
    printf("Please select which transaction you would like to perform:\n\tEnter 1 to withdraw\n\t      2 to transfer\n\t      3 to deposit\n\t      4 to check account balance.\n\t      5 to exit application.\n");
    scanf("%i", operation);
    bankOperations(operation, accBalance);
    
    int anotherTransaction;
    printf("Would you like to perform another transaction?\n\tEnter 1 for yes.\n\t      2 for no");
    scanf("%d", anotherTransaction);
    if (anotherTransaction == 1){
        printf("Please select which transaction you would like to perform:\n\tEnter 1 to withdraw\n\t      2 to transfer\n\t      3 to deposit\n\t      4 to check account balance.\n\t      5 to exit application.\n");
        scanf("%d", operation);
        bankOperations(operation, accBalance);    
    } else {
        printf("Thanks for Banking with AC!");
    }
    
    return 0;
}

int main() {
    float accBalance = 1000000.00;
    
    accTransactions(accBalance);
    printf("Account Balance: %.2fnaira\n", accBalance);

    return 0;
}

