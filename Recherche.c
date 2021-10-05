#include <stdio.h>

const int longueur_max_chaine = 1000; //Mémoire allouée à la chaîne de caractères (1000 caractères, 1000 bytes)

//Prototypes des fonctions
int premiere_occurence(char lettre, char chaine[longueur_max_chaine]);
int longueur_chaine(char chaine[longueur_max_chaine]);

int main(void)
{
	//Chaînes de caractères évaluées
	char chaine1[longueur_max_chaine] = "anticonstitutionnellement";
	char chaine2[longueur_max_chaine] = "bonjour";
	char chaine3[longueur_max_chaine] = "bonjour";
	char chaine4[longueur_max_chaine] = "allocommentcava";
	
	//Lettre recherchée dans chacune des chaines
	char lettre1 = 'n';
	char lettre2 = 'e';
	char lettre3 = 'r';
	char lettre4 = 'a';
	
	//Impression du tableau des résultats de la validation
	printf("\n VALIDATION");
	printf("\n============");
	printf("\n\n\tChaîne\t\t\tCaractère\tRésultat");
	printf("\n=========================\t==========\t==========");
    printf("\n %s\t%c \t\t%d", chaine1, lettre1, premiere_occurence(lettre1, chaine1));
	printf("\n %s\t\t\t%c \t\t%d", chaine2, lettre2, premiere_occurence(lettre2, chaine2));
	printf("\n %s\t\t\t%c \t\t%d", chaine3, lettre3, premiere_occurence(lettre3, chaine3));
	printf("\n %s\t\t%c \t\t%d", chaine4, lettre4, premiere_occurence(lettre4, chaine4));
	
	return 0;
}


//Fonction trouve la première occurence de la lettre dans la chaine de caractères
int premiere_occurence(char lettre, char chaine[longueur_max_chaine])
{
	int i = 0;

	while(chaine[i] != lettre)
	{
		i++;
	}
	
	if (i<0 || i>longueur_chaine(chaine))
	{
		return -1;
	}
	else
	{
		return i;
	}
}

//Fonction trouve la longueur de la chaine en appel
int longueur_chaine(char chaine[longueur_max_chaine])
{
	int i=0;
	
	while(chaine[i] != '\0')
	{
		i++;
	}
	return i;
}

