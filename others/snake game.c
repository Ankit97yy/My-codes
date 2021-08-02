#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int i=20,j=10,x,y;
char c;
void up();
void down();
void left();
void down();
int random_y();
int random_x();
int scre=-1;
void food();
void score();
void border();
void delay(int n){
    int m=200*n;
    clock_t st=clock();
    while(clock()<st+m)
    ;
}
void score(){
    scre=scre+1;
    gotoxy(50,5);
    printf("SCORE: %d",scre);
}
void gotoxy(int x,int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void right(){


    for(;i<43;i++){
              if(j==19||j==0){
            exit(1);
          }
            if(i==43||i==0){
                exit(1);
            }
        if(j==y && i==x){
                food();

                score();
            }
        if(kbhit()){
            c=getch();
            if(c=='a'){
                left();
            }
            else if(c=='w'){
                up();
            }
            else if(c=='s'){
                down();
            }
            else{
               exit(1);
            }
        }
        gotoxy(i,j);
        delay(1);
        printf("--");
    }
}

void left(){

     for(;i>=0;i--){
             if(j==19||j==0){
            exit(1);
           }
           if(i==43||i==0){
                exit(1);
            }

            if(j==y && i==x){
                food();
                score();
            }
         if(kbhit()){
            c=getch();
            if(c=='d'){
                right();
            }
            else if(c=='w'){
                up();
            }
            else if(c=='s'){
                down();
            }
            else{
               i=85;
               exit(1);
            }
         }
        gotoxy(i,j);
        delay(1);
        printf("--");
    }
}
void up(){

     for(;j>0;j--){
             if(i==43||i==0){
                exit(1);
            }


            if(j==y && i==x){
                food();

                score();
            }
         if(kbhit()){
            c=getch();
            if(c=='a'){
                left();
            }
            else if(c=='d'){
                right();
            }
            else if(c=='s'){
                down();
            }
            else{

               i=85;
               exit(1);
            }
         }
        gotoxy(i,j);
        delay(1);
        printf("!");

    }


}
void down(){

    for(;j<19;j++){
             if(i==43||i==0){
            exit(1);
          }

          if(j==y && i==x){
                food();

                score();
            }
         if(kbhit()){
            c=getch();
            if(c=='a'){
                left();
            }
            else if(c=='w'){
                up();
            }
            else if(c=='d'){
                right();
            }
            else{
               i=85;
               exit(1);
            }
         }
        gotoxy(i,j);
        delay(1);
        printf("!");

    }

}
int random_x(){
    srand(time(NULL));
     x=(rand()%42)+1;
}
int random_y(){
    srand(time(NULL));
     y=(rand()%18)+1;
}
void food(){
    random_x();
    random_y();
    gotoxy(x,y);
    printf("o");
}

int main(){
    printf("press any key to start the game");
    getch();
    system("cls");
    for(int i=0;i<20;i++){
        {
            if(i==0||i==19){
               for(int k=0;k<45;k++){
                   printf("*");
               }
            }
            else{
                for(int l=0;l<45;l++){
                    if(l==0||l==44){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            printf("\n");

        }
    }
    score();
    food();
   right();

}
