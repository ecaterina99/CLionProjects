#include <stdio.h>

/**
 * Ask the user his name, age and home adress
 * Display his name, age and home adress
 * @return
 */
int main(void) {
    char name[50];
    int age;
    char home_adress[60];

    printf("enter your name: \n");
    scanf("%s", name);

    printf("enter your age: \n");
    scanf("%d", &age);

    printf("enter your home adress: \n");
    scanf("%s", home_adress);

    printf("Name: %s\nAge: %d years old\nHome adress: %s\n", name, age, home_adress);

    return 0;
}
