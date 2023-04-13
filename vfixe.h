#ifndef VFIXE_H
#define VFIXE_H

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

typedef int32_t vfix;

#define UNITE 1000 

extern vfix valeur(int part_ent, int part_decim);

extern vfix fraction(int numerateur, int denominateur);

extern vfix somme(vfix, vfix);  

extern vfix produit(vfix, vfix);

extern vfix ch2decim(char *ch);

extern int nbdecim(void); 

#endif 
