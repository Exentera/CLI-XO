#include<stdio.h>

int main(){
    char jn=' ', feld[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int wahl, runde=0, gewonnen=0, vb=186, hb=205, xb=206;

    do{    
        gewonnen=0;
        char feld[10] = {'0','1','2','3','4','5','6','7','8','9'};

        //Spielfeld
        printf("%c%c%c%c%c\n%c%c%c%c%c\n",feld[7],vb,feld[8],vb,feld[9],hb,xb,hb,xb,hb);
        printf("%c%c%c%c%c\n%c%c%c%c%c\n",feld[4],vb,feld[5],vb,feld[6],hb,xb,hb,xb,hb);
        printf("%c%c%c%c%c\n",feld[1],vb,feld[2],vb,feld[3]);

        for(runde=0;runde<9;runde++){
            int valid = 0;
            
            if(runde%2==0 && gewonnen==0){
                do{
                    printf("\n\nPlayer 1 input: ");
                    scanf("%i",&wahl);
                    if(wahl<1||wahl>9||feld[wahl]=='X'||feld[wahl]=='O')
                        printf("Invalid move!");
                    else valid = 1;
                }while(!valid);
                feld[wahl]='X';    
            }
            else if(runde%2==1 && gewonnen==0){
                do{
                    printf("\n\nPlayer 2 input: ");
                    scanf("%i",&wahl);
                    if(wahl<1||wahl>9||feld[wahl]=='X'||feld[wahl]=='O')
                        printf("Invalid move!");
                    else valid = 1;
                }while(!valid);
                feld[wahl]='O';
            }

            //Spielfeld Aktualisieren
            system("cls");    
            printf("%c%c%c%c%c\n%c%c%c%c%c\n",feld[7],vb,feld[8],vb,feld[9],hb,xb,hb,xb,hb);
            printf("%c%c%c%c%c\n%c%c%c%c%c\n",feld[4],vb,feld[5],vb,feld[6],hb,xb,hb,xb,hb);
            printf("%c%c%c%c%c\n",feld[1],vb,feld[2],vb,feld[3]);

            //Gewinnbedingung Spieler 1
            if(    
                (feld[7]=='X')&&(feld[8]=='X')&&(feld[9]=='X')|| 
                (feld[4]=='X')&&(feld[5]=='X')&&(feld[6]=='X')||
                (feld[1]=='X')&&(feld[2]=='X')&&(feld[3]=='X')||
                (feld[7]=='X')&&(feld[4]=='X')&&(feld[1]=='X')||
                (feld[8]=='X')&&(feld[5]=='X')&&(feld[2]=='X')||
                (feld[9]=='X')&&(feld[6]=='X')&&(feld[3]=='X')||
                (feld[7]=='X')&&(feld[5]=='X')&&(feld[3]=='X')||
                (feld[1]=='X')&&(feld[5]=='X')&&(feld[9]=='X')
            ){
                printf("\n\nPlayer 1 has won!");
                gewonnen=1;
                runde=9;
            }
            //Gewinnbedingung Spieler 2
            else if(    
                (feld[7]=='O')&&(feld[8]=='O')&&(feld[9]=='O')|| 
                (feld[4]=='O')&&(feld[5]=='O')&&(feld[6]=='O')||
                (feld[1]=='O')&&(feld[2]=='O')&&(feld[3]=='O')||
                (feld[7]=='O')&&(feld[4]=='O')&&(feld[1]=='O')||
                (feld[8]=='O')&&(feld[5]=='O')&&(feld[2]=='O')||
                (feld[9]=='O')&&(feld[6]=='O')&&(feld[3]=='O')||
                (feld[7]=='O')&&(feld[5]=='O')&&(feld[3]=='O')||
                (feld[1]=='O')&&(feld[5]=='O')&&(feld[9]=='O')
            ){
                printf("\n\nPlayer 2 has won!");
                gewonnen=1;    
                runde=9;
            }
        }

        while(jn!='y'&&jn!='n'){
            printf("\n\nNew game (y)||(n): ");
            fflush(stdin);
            scanf("%c",&jn);
            system("cls");    
        }
    }while(jn=='y');

    return 0;
}