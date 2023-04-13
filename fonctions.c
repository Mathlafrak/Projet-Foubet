#include <stdio.h>
#include <math.h>


// UNITE =10 000 ; -

/*void flotant_vers_fix (int UNITE , int nombre_flotant );{

    return  nombre_floatant*UNITE;  //If unite >>>>nombre flotant


}

void fix_vers_flotant (int UNITE , int fix );{

    return fix/UNITE; //If unite >>>>nombre flotant
 
} */



int main() {



    double nombre = 12.345;
    double partie_entiere, partie_decimale;

    partie_decimale = modf(nombre, &partie_entiere);

    printf("Partie entiere: %.0lf\n", partie_entiere);
    printf("Partie decimale: %lf\n", partie_decimale);

    return 0; 

}


extern vfix valeur(int partie_entiere, int partie_decimale) 
{
    return partie_entiere*UNITE;
}


extern vfix fraction(int numerateur, int denominateur)

{
    return numerateur/denominateur; 
}


extern vfix produit(vfix, vfix){

    return V1*V2;
}

extern vfix valeur(int partie_entiere, int partie_decimale) 
{
    return partie_entiere*UNITE;
}




extern vfix somme(vfix, vfix);  /* retourne la somme de 2 elts */


/* fonctions speciales */
extern vfix ch2decim(char *); /* retourne la partie decimale en fct de UNITE */
/* exemples : UNITE         1000      100000
           ch="12"           120       12000
           ch="0032"         003       00320
******************************************************************************/
extern int nbdecim(void);     /* retourne le nb de decimales en fct de UNITE */
/* exemples : UNITE         1000      100000
           nbdecim()           3           5
******************************************************************************/