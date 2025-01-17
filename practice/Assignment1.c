#include <stdio.h>
#include <stdlib.h>

int main() {
    char input;
    printf("Please enter a character or integer or 'f' for float: ");
    scanf("%c", &input);

    switch(input){
        case 'a' ... ('f' - 1):
        case ('f' + 1) ... 'z':
        case 'A' ... ('F' - 1):
        case ('F' + 1) ... 'Z':
            printf("The next four characters after '%c':\n", input);
            for (int i = 1; i < 5; i++) {
                printf("%c\n", input+i);
            }
            printf("The ASCII code of '%c': %d\n", input, input);
            printf("The size of '%c': %li bytes\n", input, sizeof(input));
            break;
        
        case '0' ... '9':
            int number = atoi(&input);
            printf("The next four characters after '%c':\n", input);
            for (int i = 1; i < 5; i++) {
                printf("%i\n", number + i);
            }
            char asciiInt = number + '0';
            printf("The ASCII code of '%c': %d\n", input, asciiInt);
            printf("The size of '%c': %li bytes\n", input, sizeof(number));
            break;

        case 'f':
        case 'F':
            float number2;
            printf("Please enter a float: ");
            scanf("%f", &number2);
            // if (!(scanf("%f", &number2))) {
            //     printf("Invalid Input!");
            //     return -1;
            // }
            printf("The next four characters after '%.2f':\n", number2);
            for (int i = 1; i < 5; i++) {
                printf("%.2f\n", number2 += 0.01);
            }
            char asciiFloat = (char)((int)number2 + '0');
            printf("The ASCII code of '%c': %d\n", asciiFloat, asciiFloat);
            printf("The size of '%.2f': %li bytes\n", number2, sizeof(number2));
            break;

        default:
            printf("Unsupported input type.\n");
            break;
    }

    return 0;
}