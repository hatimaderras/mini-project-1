
#include <stdio.h>
int main (){

        int user;
        int i;
struct person{

        char name[50];
        int number;
};
struct person h1;
struct person h2;
do{
 printf("1:Ajouter un contact\n");
printf("2:Afficher tous les contacts\n");
 printf("3:Rechercher un contact par son nom\n");
printf("4:Supprimer un contact par son nom\n");
printf("5:Quitter:\n");
scanf("%d",&user);




switch(user){
    case 1:

            printf("enter your number:\n");
            scanf("%d",&h1.number);
            printf("enter your name:\n");
            scanf("%s",&h1.name);
            printf("enter your number:\n");
            scanf("%d",&h2.number);
            printf("enter your name:\n");
            scanf("%s",&h2.name);


        break;
    case 2:

                 printf(" name is %s :\n",h1.name);
                 printf(" number is %d :\n",h1.number);
                 printf(" name is %s :\n",h2.name);
                 printf(" number is %d :\n",h2.number);

        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
}
} while(user != 5);
}



