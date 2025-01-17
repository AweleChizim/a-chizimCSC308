#include <stdio.h>

int meetNewFriend(int age) {
    char newFriendName[20];
    int newFriendAge;
    int ageDifference;
    printf("What is your name? ");
    scanf("%s", newFriendName);
    printf("Hello %s. Nice to meet you!\n", newFriendName);
    printf("How old are you? ");
    scanf("%d", &newFriendAge);
    if (newFriendAge > age) {
        ageDifference = newFriendAge - age;
        printf("You are %d year(s) older than me.\n", ageDifference);
    }
    else if (newFriendAge < age) {
        ageDifference = age - newFriendAge;
        printf("I am %d year(s) older than you.\n", ageDifference);
    }
    else {
        printf("We are both %d year(s) old.\n", newFriendAge);
    }
    return 0;
}

int main() {
    char name[] = "Awele";
    int age = 18;
    char gender = 'F';
    printf("My name is %s, and I am %d year(s) old.\nMy gender is %c.\n", name, age, gender);
    
    meetNewFriend(age);
    return 0;
}