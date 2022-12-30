#include <stdio.h>

int main(){
    int jours, mois, annees, jourAu,moisAu,anneeAu;
    //une date de naissance doit etre inferieur ou egale à la date actuelle
    printf("Veuillez saisir la date d'aujourd'hui aux formats JJ MM AAAA separees par une espace : ");
    scanf("%d %d %d",&jourAu,&moisAu,&anneeAu);
    printf("Veuillez saisir votre date de naissance aux formats JJ MM AAAA separees par une espace : ");
    scanf("%d %d %d", &jours, &mois, &annees);

    if (jours<=0 || mois<=0 || annees<0){//ici on verifie si la date saisie ne contient pas des nombres negatifs
        printf("Date Inexistante\n");
    } else {
        if((annees>anneeAu) || (annees==anneeAu && mois>moisAu) || (annees==anneeAu && mois==moisAu && jours>jourAu)){ //ici on verifie si la date saisie est superieur à la date actuelle
            printf("Date Inexistante");
        } else {
            if (jours>31 || mois>12){ // ici on verifie si la date saisit respecte les normes generales en jours et mois
                printf("Date Inexistante");
            } else {
                if((mois==4 || mois==6 || mois==9 || mois==11) && jours>30){//ici on verifie pour les mois contenant 30jours
                    printf("Date Inexistante");
                } else {
                    if(!((annees%4==0 && annees%100!=0)  || (annees%400==0)) && jours>28){//ici on verifie le mois de fevrier dans le cas ou il n'est pas bissextile
                        printf("Date Inexistante");
                    } else {
                        printf("Date Existante");
                    }
                }
            }
        }
    }


    return 0;
}

