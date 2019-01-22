#include <stdio.h>
#include <stdlib.h>
#include "vecteurs.h"

tVecteur somme_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2)
{
    int sommeX;
    int sommeY;
    tVecteur somme;
    sommeX=((vecteur1->depX)+(vecteur2->depX));
    sommeY=((vecteur1->depY)+(vecteur2->depY));
    somme.depX=sommeX;
    somme.depY=sommeY;
    return somme;
}

tVecteur dif_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2)
{
    int difX;
    int difY;
    tVecteur dif;
    difX=((vecteur1->depX)-(vecteur2->depX));
    difY=((vecteur1->depY)-(vecteur2->depY));
    dif.depX=difX;
    dif.depY=difY;
    return dif;
}

tVecteur multScalaire_vecteur(const tVecteur *vecteur1,const int *nScalaire)
{
    tVecteur res;
    int resX;
    int resY;
    resX=((vecteur1->depX)*(*nScalaire));
    resY=((vecteur1->depY)*(*nScalaire));
    res.depX=resX;
    res.depY=resY;
    return res;
}

float prodScalaire_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2)
{
    float res;
    float resX;
    float resY;
    resX=((vecteur1->depX)+(vecteur2->depX));
    resY=((vecteur1->depY)+(vecteur2->depY));
    res=resX+resY;
    return res;
}

//Le produit vectoriel ne peut-être réalisé que dans un repère de dimension 3.
