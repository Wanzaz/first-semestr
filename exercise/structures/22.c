#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int mat, cz, ivt;
}TGrades;

typedef struct{
	char name[8];
	int age;
	TGrades grade;
}TStudent;

void list_class(TStudent t[], int size)
{
	printf("Name      age  mat   cz  ivt\n");
	for (int i=0; i< size; i++)
	{
		printf("%-8s%5d%5d%5d%5d\n",t[i].name, t[i].age, t[i].grade.mat, t[i].grade.cz, t[i].grade.ivt);
	}
}

float average_math(TStudent t[], int size)
{
	float sum = 0.0;
	for(int i=0;i < size; i++)
	{
		sum += t[i].grade.mat; 
	}

	return sum/size;
}

int total_of_ones(TStudent t[], int size)
{
	int total = 0;
	for(int i=0;i < size; i++)
	{
		if (t[i].grade.ivt==1)
			total++;
	}
	
	return total;
}

void print_ones_in_cz(TStudent t[], int size)
{
	for(int i=0;i < size; i++)
	{
		if (t[i].grade.cz==1)
			printf("%-8s%5d\n", t[i].name, t[i].age);
	}

}

int main()
{
	printf("A Work with students in a class\n");
	printf("-----------------------\n\n");
	// definuj pole zaku trida (typ ZAK) o 50 polozkach
	
    TStudent array[50] =  {
		  {"Adam", 16, {1,2,3}},
		  {"Eva",15, {2, 3, 1}},
		  {"Mirek", 17, {4, 3, 1}}, 
		  {"Alena", 16, {2, 5, 3}},
		  {"Oto", 15, {4, 4, 3}},
		  {"Petra", 16, {2, 4, 1}}, 
		  {"Pavel", 15, {1, 1, 1}}, 
		  {"Jana",15, {1, 5, 4}}};

    //definujte promenou, ve ktere bude aktualni pocet prvku v poli a inicializujte ji
	int length = 8;	

    //tridu si vypiste, vypis je hotov, staci ho zavolat
	list_class(array, length);
	
    //Napiste a zavolejte funkci, ktera vrati prumernou znamku z matematiky, vysledek vypiste na 2 desetinna mista
	float average = average_math(array, length);
	printf("The average grade in math is %.2f\n", average);
	
    //Napiste funkci a zavolejte ji, která vrati pocet jednicek z IVT, vysledek vypiste
	int total_of_1 = total_of_ones(array, length);
	printf("The amount of student that have 1 in ivt is %d\n", total_of_1);
	
	//Napiste funkci, ktera vypise jmena zaku, kteri maji z cestiny jednicku
	print_ones_in_cz(array, length);

	return 0;
}
