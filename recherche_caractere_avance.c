#include <stdio.h>

const int longueur_max_chaine = 1000;
int longueur_chaine(char chaine[longueur_max_chaine]);
int premiere_occurence(char lettre, char chaine[longueur_max_chaine]);

int test_auto();

int main(void)
{
	test_auto();
	
	char chaine[longueur_max_chaine];
	printf("Donner une chaîne de caractères de moins de %d caractères:\n", longueur_max_chaine);
	fgets(chaine, longueur_max_chaine, stdin);
	printf("Vous avez entré la chaîne de caractères suivante: %s\n", chaine);
	
	int longueur = longueur_chaine(chaine);
	printf("Cette chaîne contient %d caractères.\n", longueur);
	
	char lettre;
	printf("Donner une lettre dont vous voulez la valeur de la position de sa première occurence: \n");
	scanf("%c", &lettre);
	
	int position = premiere_occurence(lettre, chaine);
	if (position <0 || position > longueur )
	{
		printf("La lettre ne se trouve pas dans la chaîne de caractère");
	}
	else
	{
	printf("La lettre que vous avez entrée a sa première occurence à la position %d\n", position);
	}
}

int test_auto()
{
	char chaine[longueur_max_chaine] = "Life is good";
	printf("Chaîne de caractères test: %s.\n", chaine);
	
	int longueur = longueur_chaine(chaine);
	printf("Cette chaîne contient %d caractères.\n", longueur);
	
	char lettre = 'g';
	printf("On cherche la première occurrence du caractère %c \n", lettre);
	
	int position = premiere_occurence(lettre, chaine);
	if (position <0 || position > longueur )
	{
		printf("La lettre ne se trouve pas dans la chaîne de caractère.\n");
	}
	else
	{
	printf("La lettre qui est recherchée a sa première occurence à la position %d\n", position);
	printf("Test automatisé réussi, veuillez procéder.\n");
	}
	return 0;
}

int longueur_chaine(char chaine[longueur_max_chaine])
{
	int longueur;
	int i=0;
	
	while(chaine[i] != '\0')
	{
		i++;
	}
	longueur = i;
	return longueur;
}

int premiere_occurence(char lettre, char chaine[longueur_max_chaine])
{
	int finder;
	
	int i = 0;
	finder = chaine[i];

	while(finder != lettre)
	{
		i++;
		finder = chaine[i];
	}
	return i;
		
}

