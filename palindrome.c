#include <stdio.h>

const int longueur_max_chaine = 1000;
int longueur_chaine(char chaine[longueur_max_chaine]);
int detection_palindrome(char chaine[longueur_max_chaine], int longueur);

int main(void)
{
	char chaine[longueur_max_chaine];
	printf("Donner une chaîne de caractères de moins de %d caractères:\n", longueur_max_chaine);
	fgets(chaine, longueur_max_chaine, stdin);
	printf("Vous avez entré la chaîne de caractères suivante: %s\n", chaine);
	
	int longueur = longueur_chaine(chaine);
	printf("Cette chaîne contient %d caractères d'index 0 à %d\n", longueur, (longueur-1));
	
	int palindrome = detection_palindrome(chaine, longueur);
	if (palindrome == 0)
	{
		printf("Le mot n'est pas un palindrome");
	}
	else
	{
		printf("Le mot est un palindrome");
	}
	
}

int longueur_chaine(char chaine[longueur_max_chaine])
{
	int longueur;
	int i=0;
	
	while(chaine[i] != '\0')
	{
		i++;
	}
	longueur = i-1;
	return longueur;
}

int detection_palindrome(char chaine[longueur_max_chaine], int longueur)
{
	int i=0;
	while(i<=(longueur-i))
	{
		int num_lettre_corresp = (longueur-1)-i;
		if(chaine[i] == chaine[num_lettre_corresp])
		{
			printf("La lettre %d est équivalente à la lettre %d\n", i, num_lettre_corresp);
		}
		
		else
		{
			return 0;
		}
		i++;
	}
	return 1;
}

