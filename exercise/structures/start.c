#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char street[21];
    int number_of_descriptive;
} TAddress;


typedef struct{
    char name[21];
    int age;
    TAddress address;
} TPerson;

int main()
{
    TPerson person;
    TPerson array[10];
    TAddress address;

    printf("Enter a name and age: ");
    scanf("%20s", person.name);
    scanf("%d", &person.age);

    //array.name = "";
    printf("Enter a number of desccriptive: ");
    scanf("%d", &person.address.number_of_descriptive);

    printf("Name %s, age %d", person.name, person.age);
    printf("The number of descriptive is %d", person.address.number_of_descriptive);

    return 0;
}
