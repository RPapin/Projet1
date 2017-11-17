#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "donnees.h"

void TRIABULLEStempscroissant(personne pouls[],int maxtab)
{
  int  c, d;
  personne swap;

   for (c = 0 ; c < ( maxtab - 1 ); c++)
  {

    for (d = 0 ; d < maxtab - c - 1; d++)
    {
      if (pouls[d].temps > pouls[d+1].temps) /* For decreasing order use < */
      {
        swap       = pouls[d];
        pouls[d]   = pouls[d+1];
        pouls[d+1] = swap;
      }
    }
  }



  for ( c = 0 ; c < maxtab ; c++ )
  {
      printf("Test:%d\n%d\n%d\n\n", c, pouls[c].Battements,pouls[c].temps);
  }
  return 0;
}

void TRIABULLESbattementcroissant(personne pouls[],int maxtab)
{
  int  c, d;
  personne swap;

   for (c = 0 ; c < ( maxtab - 1 ); c++)
  {

    for (d = 0 ; d < maxtab - c - 1; d++)
    {
      if (pouls[d].Battements > pouls[d+1].Battements) /* For decreasing order use < */
      {
        swap       = pouls[d];
        pouls[d]   = pouls[d+1];
        pouls[d+1] = swap;
      }
    }
  }



  for ( c = 0 ; c < maxtab ; c++ )
  {
      printf("Test:%d\n%d\n%d\n\n", c, pouls[c].Battements,pouls[c].temps);
  }

}

void TRIABULLESbattementDecroissant(personne pouls[],int maxtab)
{
  int  c, d;
  personne swap;

   for (c = 0 ; c < ( maxtab - 1 ); c++)
  {

    for (d = 0 ; d < maxtab - c - 1; d++)
    {
      if (pouls[d].Battements < pouls[d+1].Battements) /* For decreasing order use < */
      {
        swap       = pouls[d];
        pouls[d]   = pouls[d+1];
        pouls[d+1] = swap;
      }
    }
  }



  for ( c = 0 ; c < maxtab ; c++ )
  {
      printf("Test:%d\n%d\n%d\n\n", c, pouls[c].Battements,pouls[c].temps);
  }

}

void TRIABULLEStempsDecroissant(personne pouls[],int maxtab)
{
  int  c, d;
  personne swap;

   for (c = 0 ; c < ( maxtab - 1 ); c++)
  {

    for (d = 0 ; d < maxtab - c - 1; d++)
    {
      if (pouls[d].temps < pouls[d+1].temps) /* For decreasing order use < */
      {
        swap       = pouls[d];
        pouls[d]   = pouls[d+1];
        pouls[d+1] = swap;
      }
    }
  }



  for ( c = 0 ; c < maxtab ; c++ )
  {
      printf("Test:%d\n%d\n%d\n\n", c, pouls[c].Battements,pouls[c].temps);
  }

}


void recherchedichotomiquetemps(int maxtab,personne pouls[])
{


  int iRecherche; /* Elément recherché */
  int iPremier; /* Indice du premier élément du sous-tableau analysé */
  int iMilieu; /* Indice de l'élément du milieu du sous-tableau analysé */
  int iTrouve; /* Booléen indiquant si l'élément est trouvé */
  int iFin=1; /* Indication de fin de saisie (0=fin) */

    while(iFin)
    {
      printf("Quel element temps recherchez vous ?");
      scanf("%d",&iRecherche);

      iPremier=0;
      iTrouve=0;

        while((iPremier <= maxtab)&&(iTrouve==0))
          {

           iMilieu=(iPremier+maxtab)/2;

              if(pouls[iMilieu].temps==iRecherche) iTrouve =1;
              else
                 {

                  if(pouls[iMilieu].temps>iRecherche) maxtab = iMilieu -1;
                  else iPremier = iMilieu +1;

                 }
          }
                    if(!iTrouve) printf("Cette valeur n'appartient pas à la liste\n");
                    else printf("Cette valeur appartient a la liste\nTest:%d\n%d:pouls\n%d:temps\n",iMilieu,pouls[iPremier].Battements,pouls[iPremier].temps);

                        printf("Voulez-vous continuer ? (Taper 0 pour sortir du programme) : ");
                        scanf("%d",&iFin);

                        if(!isalpha(iFin)) iFin=0;
                         iTrouve=0;
    }
}




void recherchedichotomiquepouls(int maxtab,personne pouls[])
{


  int iRecherche;
  int iPremier;
  int iMilieu;
  int iTrouve;
  int iFin=1;

    while(iFin)
    {
      printf("Quel element pouls recherchez vous ?");
      scanf("%d",&iRecherche);

      iPremier=0;
      iTrouve=0;

        while((iPremier <= maxtab)&&(iTrouve==0))
          {

           iMilieu=(iPremier+maxtab)/2;

              if(pouls[iMilieu].Battements==iRecherche) iTrouve =1;
              else
                 {

                  if(pouls[iMilieu].Battements>iRecherche) maxtab = iMilieu -1;
                  else iPremier = iMilieu +1;

                 }
          }
                    if(!iTrouve) printf("Cette valeur n'appartient pas à la liste\n");
                    else printf("Cette valeur appartient a la liste\nTest:%d\n%d:pouls\n%d:temps\n",iMilieu,pouls[iPremier].Battements,pouls[iPremier].temps);

                        printf("Voulez-vous continuer ? (Taper 0 pour sortir du programme) : ");
                        scanf("%d",&iFin);

                        if(!isalpha(iFin)) iFin=0;
                         iTrouve=0;
    }
}
