
#include <stdio.h>
#include <string.h>
int main (){

        int user;
        int i;
        int n;
        char search[50];
typedef struct person{

        char name[50];
        int number;
}pers;

pers s1[50];
do{
 printf("1:Ajouter un contact\n");
printf("2:Afficher tous les contacts\n");
 printf("3:Rechercher un contact par son nom\n");
printf("4:Supprimer un contact par son nom\n");
printf("5:Quitter:\n");
scanf("%d",&user);




switch(user){

    case 1:
        printf("how many n");
        scanf("%d",&n);
     for(i=0;i<n;i++){
            printf("enter your number:\n");
            scanf("%d",&s1[i].number);
            printf("enter your name:\n");
            scanf("%s",&s1[i].name);
            }


        break;
    case 2:

   for(i=0;i<n;i++){
        printf("contact:%d\n",i+1);
   printf("name:%s \n numbers:%d \n",s1[i].name ,s1[i].number);
   }

        break;
    case 3:
        printf("enter name you want to search:");
        scanf("%s",search);
        for(i=0;i<n;i++){

            if(strcmp(search,s1[i].name) == 0){
                 printf("name searched for found :%s %d\n",search , s1[i].number);

            }
}
        break;
    case 4:
        printf("enter name to delete");
        scanf("%s",search);
        for(i=0;i<n;i++){
            if(strcmp(search,s1[i].name)==0){

                        s1[i]=s1[i+1];
                        n--;
                    }

            }
    default:
        break;
        }


} while(user != 5);
}



