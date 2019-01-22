#ifndef VECTEURS_H_INCLUDED
#define VECTEURS_H_INCLUDED

//type
typedef struct tVecteur{
    int depX; //Je ne fais pas quatre points mais deux déplacements, un en X et un en Y.
    int depY;
}tVecteur;

//protoypes externes
extern tVecteur somme_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2);
extern tVecteur dif_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2);
extern tVecteur multScalaire_vecteur(const tVecteur *vecteur1,const int *nScalaire);
extern float prodScalaire_vecteur(const tVecteur *vecteur1,const tVecteur *vecteur2);

#endif // VECTEURS_H_INCLUDED
