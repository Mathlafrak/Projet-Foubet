#include "vfixe.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>



#define UNITE 1000 
typedef int32_t vfix ;


extern vfix valeur(int part_ent, int part_decim){

    return (part_ent , part_decim);
}


extern vfix fraction(int numerateur, int denominateur){

    return numerateur/denominateur;
}

extern vfix somme(vfix a , vfix b ) {

    return a+b ;
}

extern vfix produit(vfix a, vfix b ) {

    return a*b;

}

extern vfix ch2decim(char *ch) {
    

    int num_zeros = nbdecim (); 
    int len = strlen(ch);
    int extra_zeros = num_zeros - len;
    char output[20];

    if (extra_zeros > 0) {
        strncpy(output, ch, len);
        for (int i = len; i < len + extra_zeros; i++) {
            output[i] = '0';
        }
        output[len + extra_zeros] = '\0';
    } else {
        strncpy(output, ch, num_zeros);
        output[num_zeros] = '\0';
    }

    return atoi(output);

}


extern int nbdecim(void) {

        int nbdecim =0;
        int buff=UNITE;


        while (buff %10==0)  {


            buff=buff/10;
            nbdecim ++ ;
        }

    return nbdecim;

}

