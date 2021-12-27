#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Bon hadi fonction bch dirlaak tableau dynamic----------------------------

int *createTableDynamic(int n){
    return (int*)malloc(n*sizeof(int));
}

//------------------------------------------------------------------
// hadi la fonction li dirlaaa la recherche 

int searchVal(int val,int *tab,int taille){
    //ida l9ina la valeur nreddo l'index ta3ha sinon nrad -1 ya3ni matexisitich 
    int i = 0;
    for(i;i<taille;i++){
        if(*(tab+i) == val)
        {
            return i;
        }}
    return -1;}
//------------------------------------------------------------------
int main()
{

int *p,i=0,n,val;

// had la variable bch na3erfo le temp d'excution 
double temp_exe ;
clock_t t_debut,t_fin;


printf("Donnez la taille du tableau \n");
scanf("%d",&n);
p = createTableDynamic(n);


printf("Enter les valeurs\n");
for(i;i<n;i++){
    scanf("%d",p+i);
};
printf("DOnner la valuer a rechcerche dans le tableau\n");
scanf("%d",&val);
t_debut = clock();
printf("L'index de val :%d \n",searchVal(val,p,n));
t_fin = clock();

temp_exe = (double)(t_fin - t_debut)/CLOCKS_PER_SEC;
printf("Le temp de la recherche dans un tableau de taille = %d est %f ",n,temp_exe);
return 0;
}
