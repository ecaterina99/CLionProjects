#include <stdio.h>
#include <stdlib.h>

/**
 * Ask the user his name, age and home address
 * Display his name, age and home address
 * @return
 */
int main(void) {
    char name[50];
    int age;
    char home_address[60];

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);


    printf("Enter your age: \n");
    scanf("%d",&age);
    getchar();


    // Ввод адреса
    printf("Enter your home address: \n");
    fgets(home_address, sizeof(home_address), stdin);

    // Вывод данных
    printf("Name: %sAge: %d years old\nHome address: %s\n", name, age, home_address);

    return 0;
}