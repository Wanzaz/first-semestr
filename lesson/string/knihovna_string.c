/*
 Knihovna <string.h>

Delka retezce 
= strlen()
-funkce strlen() pocita kolik ten retezec ma znaku
int strlen(char *s)
Pr: printf("Delka retezce %s je %d", s, strlen(s));


Kopirovani retezcu 
= strcpy()
-funkce strcpy() kopirovani retezcu
char *strcpy(char *s1, char *s2);
Pr: strcpy(s, "Metodej"); //Do retezce s se vlozi retezcova konstanta "Metodej"
Pr: strcpy(s, t); //Do retezce s se vlozi obsah retezce t

Spojeni retezcu
= strcat()
char *strcat(char *s1, char *char s2);
-K retezci s1 pripoji retezec s2
Pr: char s[] = "Jan ", t[] = "Novak";
	strcat(s, t); // v retezci s bde "Jan Novak"

Porovnavani retezcu
= strcmp()
int strcmp(char *s1, char *s2);
-Funkce strmcp() vraci 0, pokud jsou retezce s1 a s2 shodne

Nalezeni podretezce v retezci
= int strstr(char *s1, char *s2)
-Funkce strstr() vraci ukazatel na prvni vyskyt retezce s2 v retezci s1. Pokud retezce s 1 neobsahuje retezec s2, vraci NULL

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


