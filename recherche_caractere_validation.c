#include <stdio.h>

const int longueur_max_chaine = 1000; //Mémoire allouée à la chaîne de caractères (1000 caractères, 1000 bytes)

//Prototypes des fonctions
int premiere_occurence(char lettre, char chaine[longueur_max_chaine]);
int longueur_chaine(char chaine[longueur_max_chaine]);
int test_auto(char chaine_test[longueur_max_chaine], char lettre_test);
int operation(char chaine[longueur_max_chaine], char lettre);

int main(void)
{
	//Test automatisé
	char chaine_test[longueur_max_chaine] = "test";
	char lettre_test = 's';
	
	printf("TEST AUTOMATISÉ \nChaîne de caractères test: %s.\n", chaine_test);
	printf("On cherche la première occurrence du caractère %c \n", lettre_test);
	
	if (test_auto(chaine_test, lettre_test) == -1)
	{
		printf("La lettre ne se trouve pas dans la chaîne de caractère, position: %d", test_auto(chaine_test, lettre_test));
	}
	else
	{
		printf("La lettre que vous avez entrée a sa première occurence à la position %d\n\n", test_auto(chaine_test, lettre_test));
	}
	
	//Fonction normale (validation) ENTRER VALEURS ICI
	char chaine[longueur_max_chaine] = "gasket"; //Entrer chaine
	char lettre = 't'; //Entrer caractère recherché
	
	printf("FONCTION NORMALE\nLa chaîne de caractères suivante sera analysée: %s\n", chaine);
	printf("La valeur de la position de la première occurence de la lettre %c sera analysée.\n", lettre);
	
	if (operation(chaine, lettre) == -1)
	{
		printf("La lettre ne se trouve pas dans la chaîne de caractère, position: %d", operation(chaine, lettre));
	}
	else
	{
		printf("La lettre que vous avez entrée a sa première occurence à la position %d\n", operation(chaine, lettre));
	}
}

//Fonction détermine si la position de la première occurence est valide pour la validation
int operation(char chaine[longueur_max_chaine], char lettre)
{	
	int position = premiere_occurence(lettre, chaine);
	if (position < 0 || position > longueur_chaine(chaine))
	{
		return -1;
		
	}
	else
	{
		return position;
	}
}

//Fonction détermine si la position de la première occurence est valide pour le test automatisé
int test_auto(char chaine_test[longueur_max_chaine], char lettre_test)
{	
	int position = premiere_occurence(lettre_test, chaine_test);
	
	//Si la position trouvée par la fonction premiere_occurence est < 0 ou > longueur, celle-ci n'est pas valide
	if (position < 0 || position > longueur_chaine(chaine_test))  
	{
		return -1;
		
	}
	else
	{
		return position;
	}
}

//Fonction trouve la première occurence de la lettre dans la chaine de caractères
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

//Fonction trouve la longueur de la chaîne de caractères
int longueur_chaine(char chaine[longueur_max_chaine])
{
	int i=0;
	
	while(chaine[i] != '\0')
	{
		i++;
	}
	return i;
}
