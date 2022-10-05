#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int j1,c1,op;
   do{
         do{
        printf("Escolha 1.pedra 2.papel 3.tesoura 4.Lagarto 5.Spock  :\n");
        scanf("%d",&j1);
         if(j1<1 || j1>5){
            printf("opçao errada digite novamente. \n");
          }
         }while(j1<1 || j1>5);
     srand(time(NULL));
      c1=rand()%4+1;
        if(c1==1)
        printf("computador escolheu pedra.\n");
        if(c1==2)
        printf("computador escolheu papel.\n");
        if(c1==3)
        printf("computador escolheu tesoura.\n");
        if(c1==4)
        printf("computador escolheu Lagarto.\n");
        if(c1==5)
        printf("computador escolheu Spock.\n");
      if((j1==1 && c1==3) || (j1==2 && c1==1) || (j1==3  && c1==2)||(j1==1 && c1==4)||(j1==4 && c1==5)||(j1==3 && c1==4)||(j1==5 && c1==3)||(j1==4 && c1==2)||(j1==2 && c1==5)||(j1==5 && c1==1)){
        printf("voce ganhou.\n");
      }
      else if(j1==c1){
        printf("voce empatou.\n");   
        }
      else
        printf("voce perdeu.\n");
        do{
            printf("deseja jogar novamente 1.Sim 2.Não:\n");
            scanf("%d",&op);
          if (op < 1 || op > 2) {
      printf("voce digitou uma opçao errada. \n");
          }
          }while(op!=1 && op!=2);
    }while(op!=2);

}