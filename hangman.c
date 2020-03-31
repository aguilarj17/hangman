//------------------------------------------------------------------------------------------------------------------------------------------------------
//Juego de ahorcado
//jugador uno debe colocar palabre y referencia 
//jugador dos debe adivinar con 5 intentos 
//------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char referencia[25];
char palabra[25];
char adivina[25];
char original[25];

int indice =0;
int intentos =5;
char caracter;
int encontroletra;
int letrasadivinadas =0;
int letrafallida = 0;

puts("Captura la referencia:");
gets(referencia);

puts("Captura palabra y presiona enter para finalizar");
puts("No puedes equivocarte y corregir usando el backspace");

do{

caracter = getch();
putchar ('*');

	if (caracter == 13)
		break;
		
palabra[indice] = toupper(caracter);
original[indice] = toupper(caracter);

adivina[indice] ='_';
indice++;

}while(1);
printf("\n");

palabra[indice] = '\x0';
original[indice] = '\x0';
adivina[indice] = '\x0';

do{
	printf("La referencia es: %s\n", referencia);
int longi = strlen(palabra);
	printf("La palabra a adivinar es de %d letras asi: ", longi);
puts (adivina);
puts("capture una letra");

caracter = toupper(getchar());
	printf("\n");

encontroletra = 0;

for(indice = 0; indice < strlen(palabra); indice++){

if(palabra[indice] != '*'){

if(palabra[indice] == caracter){
	encontroletra=1;

	letrasadivinadas++;

	adivina[indice] = palabra[indice];

	palabra[indice] ='*';
	}
else if(palabra[indice] != caracter){
	letrafallida = 1;
}
}
}

if(encontroletra == 1){
	puts("La letra  es correcta");

}


	else if(encontroletra == 0){

	puts("Error de letra");
	intentos--;
	printf("Te quedan %i intentos\n\n", intentos);
	

}
if(letrasadivinadas == strlen(palabra)){
	puts("Has adivinado la palabra");
	puts(adivina);
	break;

}else{
if(intentos == 1){
	puts("¡Has fallado!");
	printf("La palabra correcta era: %s", original);
	break;
}
}
}while(intentos > 0);
return 0;
}


