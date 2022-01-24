/*
-misto int je tu char
-retezec je ukoncem znakem '\0'
-musime pocitat s koncovym znakem:
char s[10] = "AHOJ";
= retezec s muze mit maximalne 9 znaku

char s[] = "AHOJ";
= retezec s muze mit maximalne 4 znaky


char retezec[21];
scanf("%20s", retezec); //pole musi byt omezeno '\0'
printf("%s", retezec);i


-u scanf neni potreba &
char s[101];
scanf("%100", s); //neni tu znak &


Funkce gets()
-nacita cely radek (i mezery az do entru)
-bezpecnejsi funkce fgets()

cahr jmeno[21] = "Metodej";
printf("%5s", jmeno) //vytiskne Metodej ale presahne velikost 5


Knihovna <string.h>
-funkce strlen() pocita kolik ten retezec ma znaku
-funkce strcpy(char *s1, char *)
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void retezec_a(char s[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		s[i] = 'a';
		s[n] = '\0'; //Ukoncovaci znak musime vlozit sami
	}

}

int main ()
{
	char pole[5];
	printf("Zadej retezec: ");
	scanf("%4s", pole); //musi tam byt omezeni jinak to bude vypisovat random znaky
	
	printf("Pole je %s", pole);
	printf("Pole je %10s", pole); //na kolik mist to vytiskneme

 	char pole[10];
	printf("Zadej retezec: ");
	scanf("%4s", pole); 
	
	printf("Pole je %s", pole);
	printf("Pole %s ma velikost %d\n", pole,strlen(pole)); //na kolik mist to vytiskneme, a kolik ma mist z knihovny string.h
		
	return 0;

}

