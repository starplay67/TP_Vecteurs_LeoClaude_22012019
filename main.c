#include <stdio.h>
#include <stdlib.h>
#include "vecteurs.h"

int main()
{
    tVecteur vecteur1;
    tVecteur vecteur2;
    int nScalaire=3;
    vecteur1.depX=5;
    vecteur1.depY=8;
    vecteur2.depX=10;
    vecteur2.depY=2;
    printf("La somme est : %d ; %d\n",somme_vecteur(&vecteur1,&vecteur2).depX,somme_vecteur(&vecteur1,&vecteur2).depY);
    printf("La difference est : %d ; %d\n",dif_vecteur(&vecteur1,&vecteur2).depX,dif_vecteur(&vecteur1,&vecteur2).depY);
    printf("Le resultat de la multiplication scalaire est : %d ; %d\n",multScalaire_vecteur(&vecteur1,&nScalaire).depX,multScalaire_vecteur(&vecteur1,&nScalaire).depY);
    printf("Le produit scalaire de vecteur1 et vecteur2 est : %f\n",prodScalaire_vecteur(&vecteur1,&vecteur2));
    return 0;
}
