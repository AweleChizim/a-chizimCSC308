#include <stdio.h>

int question1(){
    int age;
    printf("Please enter your age:");
    if (scanf("%d", &age) == 0){
        printf("Invalid Input\n");
        return -1;
    }
    if (age >= 18){
        printf("You can vote!\n");
    } else {
        printf("You cannot vote!\n");
    }

    return 0;
}

int question2(){
    int CSC_201;
    int CSC_205;
    int STA_205;
    printf("Please enter your CSC_201 score:");
    scanf("%i", &CSC_201);
    printf("Please enter your CSC_205 score:");
    scanf("%i", &CSC_205);
    printf("Please enter your STA_205 score:");
    scanf("%i", &STA_205);

    int total = CSC_201 + CSC_205 + STA_205;
    int average = total / 3;
    int percentage = 
    printf("Total = %i\n", CSC_201);
    printf("Average = %i\n", CSC_205);
    printf("Percentage = %i\n", STA_205);

    return 0;
}

int question3(){
    char letter;
    printf("Please enter any letter between A - J or a - j: ");
    scanf("%c", &letter);

    if ((letter >= 'A' && letter <= 'J') || (letter >= 'a' && letter <= 'j')){
        for (int i = 1; i<=6; i++){
            printf("%c\n", letter + i);
        }
    } else {
        printf("Invalid Input");
    }

    return 0;
}

int add(){
    int a, b, answer;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value b:");
    scanf("%i", &b);
    answer = a + b;
    printf("Answer = %i", answer);
}
int subtract(){
    int a, b, answer;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value b:");
    scanf("%i", &b);
    answer = a - b;
    printf("Answer = %i", answer);
}
int multiplication(){
    int a, b, answer;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value b:");
    scanf("%i", &b);
    answer = a * b;
    printf("Answer = %i", answer);
}
int divide(){
    int a, b, answer;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value b:");
    scanf("%i", &b);
    answer = a / b;
    printf("Answer = %i", answer);
}
int question4(){
    int operation;
    printf("Please select which operation you would like to perform:\n\tEnter 1 to ADD\n\t      2 to SUBTRACT\n\t      3 to MULTIPLY\n\t      4 to DIVIDE\n\t      5 to exit application\n");
    scanf("%d", &operation);
    
    if (operation == 1){
        add();
    } else if (operation == 2){
       subtract();
    } else if (operation == 3){
        multiplication();
    } else if (operation == 4){
        divide();
    } else if (operation == 5){
        printf("Thanks");
    }
}

int main(){
    question3();

    return 0;
}