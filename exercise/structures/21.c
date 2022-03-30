#include <stdio.h>
#include <stdlib.h>
/*
CZ:
1. Otevři si nový projekt.
2. Nadefinuj (typedef)  strukturu ZAK, která má dvě položky a to jméno a věk. Datové typy zvol vhodně sám.
3. Ve funkci main vytvoř dvě proměnné zak1 a zak2 typu ZAK.
4. Do prvního žáka vlož hodnoty při definici: "Adam", 15.
5. Hodnoty druhého žáka načti z klávesnice.
6. Napiš funkci, která vrátí průměrný věk dvou žáků. Aplikuj na naše žáky.
7. Napiš funkci, která vrátí ze dvou žáků toho mladšího. Vypiš jméno mladšího žáka.
8. Napiš funkci bez parametrů, která načte z klávesnice hodnoty pro nového žáka a vrátí proměnnou typu ZAK. Ve funkci main vytvoř proměnnou zak3 typu žák a ulož do něj hodnoty, které vrátí tato funkce.
9. Napiš funkci, která vezme proměnnou typu žák a vypíše jeho konkrétní hodnoty: Zak Adam ma 15 roku.
10. Bonus: Definuj strukturu ZNAMKY, ve které budou tři známky z matematiky, informatiky a fyziky. Přidej tuto strukturu jako položku struktury ZAK. Uprav celý program, aby se při načítání vkládaly i známky.

11. Otevři si nový projekt. Překopíruj do něj kód z přiloženého souboru.
12. Prostuduj kód.
13. Doplň funkce pro součin a součet zlomku (funkce budou vracet zkrácený zlomek a k výpisu dojde ve funkci main: 5/6 + 7/6 = 2/1. Začněte součinem, je lehčí.

EN:
1. Open a new project.
2. Define (typedef) the structure of ZAK, which has two items, namely name and age. Choose the data types appropriately yourself.
3. In the main function, create two variables zak1 and zak2 of type ZAK.
4. Enter the values ​​in the first pupil when defining: "Adam", 15.
5. Read the second student's values ​​from the keyboard.
6. Write a function that returns the average age of two students. Apply to our students.
7. Write a function that returns the younger of the two pupils. Write down the name of the younger student.
8. Write a function without parameters, which reads the values ​​for the new student from the keyboard and returns a variable of type ZAK. In the main function, create a variable zak3 of the pupil type and store in it the values ​​that this function returns.
9. Write a function that takes a variable of the pupil type and lists its specific values: Zak Adam is 15 years old.
10. Bonus: Define the STAMP structure, which will contain three marks from mathematics, computer science and physics. Add this structure as a ZAK structure item. Edit the entire program so that marks are inserted when loading.

11. Open a new project. Copy the code from the attached file into it.
12. Study the code.
13. Add functions for product and sum of fractions (functions will return an abbreviated fraction and will be output in the function main: 5/6 + 7/6 = 2/1. Start with the product, it is lighter.
*/

// 2
typedef struct{
    char name[21];
    int age;
} TStudent;

float average_age(TStudent s1, TStudent s2);
TStudent younger(TStudent s1, TStudent s2);
TStudent new_student(TStudent s3);
void list(TStudent student);

int main()
{
    // 3, 4
    TStudent student1={"Adam", 15}, student2;

    // 5
    printf("Enter a name and age: ");
    scanf("%20s %d", student2.name, &student2.age);

    // 6
    printf("The average age is %f\n", average_age(student1, student2));

    // 7
    printf("The younger student is %s\n", younger(student1, student2));

    // 8
    TStudent student3;
    student3 = new_student(student3);

    // 9
    list(student3);

    return 0;
}

float average_age(TStudent s1, TStudent s2){
    float average;
    average = (s1.age + s2.age) / 2.;
    return average;
}

TStudent younger(TStudent s1, TStudent s2){
  if (s1.age < s2.age)
  		return s1;
  else
        return s2;
}

TStudent new_student(TStudent s3){
    TStudent student3;
    printf("Enter a name and age: ");
    scanf("%20s %d", student3.name, &student3.age);
    return student3;
}

void list(TStudent student) {
    printf("The name is %s and the age is %d", student.name, student.age);
}

