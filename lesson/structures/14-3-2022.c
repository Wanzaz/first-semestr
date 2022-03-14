#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int vektor[10];

/*
struct {
    char name[21];
    int age;
} student1, student2;

*/

typedef struct {
    char name[21];
    int age;
} STUDENT;

float average_age(STUDENT s1, STUDENT s2){
    float average;
    average = (s1.age + s2.age) / 2.;
    return average;
}

STUDENT older(STUDENT s1, STUDENT s2){
  if (s1.age > s2.age)
  		return s1;
  else
  		return s2;
}

typedef struct{
    char type[21];
    int branches;
    int age;
    float height;
} TTree;

int branches_amount(TTree s1, TTree s2)
{
    int amount_of_branches = s1.branches + s2.branches;
    return amount_of_branches;
}

int main()
{
    vektor u,v;

    STUDENT s1, s2;

    // dotted notation
    s1.age = 16;
    strcpy(s1.name,"Karel");
    scanf("%20s", &s2.name);
    s2.age = s1.age + 1;
    STUDENT s3 = s1; // it is possible to work with the whole notation

    // calling function
    printf("Average age of student is %f\n", average_age(s1, s2));

    // calling function
    s3 = older(s1, s2);
    printf("Older student is %s\n", s3.name);

    TTree se1={"dub", 150, 5, 3.7};
    TTree se2;

    printf("Enter type of tree: ");
    scanf("%20s", &se2.type);
    printf("Enter amount of branches: ");
    scanf("%d", &se2.branches);
    printf("Enter age of tree: ");
    scanf("%d", &se2.age);
    printf("Enter height of tree: ");
    scanf("%f", &se2.height);

    // calling function
    printf("The amount of branches is %d\n", branches_amount(se1, se2));

    return 0;
}

