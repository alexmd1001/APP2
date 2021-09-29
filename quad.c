#include <stdio.h>

float calcul_x1(float a, float b, float c);
float calcul_x2(float a, float b, float c);
float det(float a, float b, float c);

int main(void)
{
	float a, b, c;
	
	printf("ax^2 + bx + c = 0\n");
	printf("Entrer la valeur a de l'équation au deuxième degré:\n");
	scanf("%f", &a);
	printf("Entrer la valeur b de l'équation au deuxième degré:\n");
	scanf("%f", &b);
	printf("Entrer la valeur c de l'équation au deuxième degré:\n");
	scanf("%f", &c);
	
	
	printf("La première valeur de x est %f.\n", calcul_x1(a, b, c));
	printf("La deuxième valeur de x est %f.\n", calcul_x2(a, b, c));
}

float calcul_x1(float a, float b, float c)
{
	float x1 = (-b + det(a, b, c))/(2*a);
	return x1;
}

float calcul_x2(float a, float b, float c)
{
	float x2 = (-b - det(a, b, c))/(2*a);
	return x2;
}

float det(float a, float b, float c)
{
	float d, sqrt, temp;
	
	d = (b*b)-(4*a*c);
	sqrt = 0;
	
	if(d >= 0)
	{
		sqrt = d/2;
		temp = 0;
	
		while(sqrt != temp){
			temp = sqrt;
			sqrt = (d/temp + temp)/2;
	}
	}
	else
	{
		printf("Cette équation quadratique n'est pas valide, ignorer les valeurs suivantes.\n");
		
	}
	
	return sqrt;
}
