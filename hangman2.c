#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
char game( int argc, char** argv){

int num = rand() % argc; 

int longi = strlen(argv[num]);

char word[20];
char palabra2[20];
 strcpy(word,argv[num]);

int oportunities=0;
int i=1;
int j=1;

while(oportunities<6){ 

  oportunities ++;
      printf("insert the letter \n");
      char letter;
        scanf(" %c", &letter);

      for(j=0;j<strlen(argv[num]);j++){

          if(letter==word[j]){
            printf("The letter is correct  %c \n",word[j]);
           palabra2[j]=letter;
        printf("%c \n",palabra2[j]);

          }
      }
       if( !memcmp( palabra2, word, sizeof( palabra2 ))){
     printf( "congratulations you win " ); 
      printf( "The word is %s", word ); 
     break;}
   }
  if(oportunities>=6) {
     printf( "you have lost" );


}
}
int main(int  argc, char** argv){

game(argc,argv);
}
