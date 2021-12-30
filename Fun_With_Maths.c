#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,number_of_guess=1,lower=1,upper=100;
    int guess,multiple,x,nat,y,add,v,difference;
    float s,division;
    char str[20];
    char ch[20];
    printf("WELCOME TO FUN GAME OF MATHS\n");
    printf("Please enter your name to start a game\n");
    scanf("%[^\n]%*c", str);
    printf("LEVEL 1\n");
    srand(time(NULL));
    number=rand()%(upper-lower+1)+lower;
    // printf("%d\n",number);
    abc :
    number_of_guess=1;
    printf("Guess a number between 1 and 100\n");
  
     
    do
    {
  scanf("%d",&guess);
        if(guess>number)
        {
            printf("Please enter a lower number\n");
           
        }
        else if(guess<number)
        {
            printf("Please enter a larger number\n");
        
        }
        
        else 
        {
            printf("you found the number in %d guesses\n",number_of_guess);
        }
        if(number_of_guess%13==0){
           printf("You have exceeded maximum number of guesses\n");
                goto abc;
        } number_of_guess++;
    }while(guess!=number);
    

    
    printf("\n\nLEVEL 1 COMPLETED, CONGRATULATIONS!!!!\n\n\n");
    printf(" You moved to 'level-2' ");
    // scanf("%[^\n]%*c", ch);
    printf("\n\nLEVEL 2\n\n\n");
    printf("Now multiply number with 8\n Enter the result\n");
  
    do{
          scanf("%d",&x);
          multiple=8*number;
          if(multiple==x){
              printf("you guessed it right\n");
              printf("\n\n\n\n LEVEL 2 COMPLETED, CONGRATULATIONS!!!\n\n\n\n");
          }
          else
          {
              printf("your answer is wrong\n");
              printf("Please answer again\n");
          }
    }while(multiple!=x);

     printf("\n\nLEVEL 2 COMPLETED, CONGRATULATIONS!!!!\n\n\n");
    printf(" You moved to 'level-3' ");
    // scanf("%[^\n]%*c", ch);
    printf("\n\nLEVEL 3\n\n\n");
    printf("Now add number with 8\n Enter the result\n");
  
    do{
          scanf("%d",&y);
          add=8+x;
          if(add==y){
              printf("you guessed it right\n");
              printf("\n\n\n\n LEVEL 3 COMPLETED, CONGRATULATIONS!!!\n\n\n\n");
          }
          else
          {
              printf("your answer is wrong\n");
              printf("Please answer again\n");
          }
    }while(add!=y);

     printf("\n\nLEVEL 3 COMPLETED, CONGRATULATIONS!!!!\n\n\n");
    printf(" You moved to 'level-4' ");
    // scanf("%[^\n]%*c", ch);
    printf("\n\nLEVEL 4\n\n\n");
    printf("Now subtract number with 8\n Enter the result\n");
  
    do{
          scanf("%d",&v);
          difference=y-8;
          if(difference==v){
              printf("you guessed it right\n");
              printf("\n\n\n\n LEVEL 2 COMPLETED, CONGRATULATIONS!!!\n\n\n\n");
          }
          else
          {
              printf("your answer is wrong\n");
              printf("Please answer again\n");
          }
    }while(difference!=v);

     printf("\n\nLEVEL 4 COMPLETED, CONGRATULATIONS!!!!\n\n\n");
    printf(" You moved to 'level-5' ");
    // scanf("%[^\n]%*c", ch);
    printf("\n\nLEVEL 5\n\n\n");
    printf("Now divide number with 8\n Enter the result\n");
  
    do{
          scanf("%f",&s);
          division=v/8;
          if(division==s){
              printf("you guessed it right\n");
              printf("\n\n\n\n LEVEL 2 COMPLETED, CONGRATULATIONS!!!\n\n\n\n");
          }
          else
          {
              printf("your answer is wrong\n");
              printf("Please answer again\n");
          }
    }while(division!=s);


    // scnaf("")

    return 0;
    }
