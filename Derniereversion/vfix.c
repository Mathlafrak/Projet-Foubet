#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef int32_t vfix;

#define UNITE 1000   


extern vfix valeur(int part_ent, int part_decim)
{
	
	//printf("%d\n",(part_ent * UNITE) - (part_decim * UNITE/100));
	return ((part_ent * UNITE) + (part_decim * UNITE/100));
}

extern vfix fraction(int numerateur, int denominateur)
{
	return (numerateur * UNITE /denominateur);
}

extern vfix somme(vfix a, vfix b)
{
	return (a + b);
}

extern vfix produit(vfix a, vfix b)
{
	return ((a * b) / UNITE);
}

extern vfix ch2decim(char *str_d)
{
	 // Calculer la longueur de la chaîne
  	 int len = strlen(str_d);
    
   	 // Convertir la chaîne en entier et multiplier par UNITE pour obtenir la valeur en virgule fixe
   	 vfix resultat = atoi(str_d) * UNITE;
   	 
   	 // Diviser la valeur en virgule fixe par 10 à la puissance de la longueur de la chaîne pour conserver la virgule fixe
   	 for(int i = 0; i < len; i++)
   	 {
   	     resultat /= 10;
   	 }
    
   	 return resultat;
}

extern int nbdecim(void)
{
	// Retourner le nombre de décimales en fonction de la valeur de UNITE
	return sizeof(UNITE) == 2 ? 1 : (sizeof(UNITE) == 4 ? 2 : 3);
}
