#ifndef VFIX_H
#define VFIX_H

typedef int32_t vfix;

#define UNITE 1000   

/* toutes ces fonctions retournent un element en virgule fixe */
extern vfix valeur(int part_ent, int part_decim);
extern vfix fraction(int numerateur, int denominateur);
extern vfix somme(vfix a, vfix b);  /* retourne la somme de 2 elts */
extern vfix produit(vfix a, vfix b);/* retourne le produit de 2 elts */

/* fonctions speciales */
extern vfix ch2decim(char *); /* retourne la partie decimale en fct de UNITE */
extern int nbdecim(void);     /* retourne le nb de decimales en fct de UNITE */

#endif