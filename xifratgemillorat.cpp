#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>


using namespace std;



int numerolletra (char lletra){

    switch(lletra){

        case '/':
        return -1;
        break;

        case 'a':
        return 1;
        break;

        case 'b':
        return 2;
        break;

        case 'c':
        return 3;
        break;

        case 'd':
        return 4;
        break;

        case 'e':
        return 5;
        break;

        case 'f':
        return 6;
        break;

        case 'g':
        return 7;
        break;

        case 'h':
        return 8;
        break;

        case 'i':
        return 9;
        break;

        case 'j':
        return 10;
        break;

        case 'k':
        return 11;
        break;

        case 'l':
        return 12;
        break;

        case 'm':
        return 13;
        break;

        case 'n':
        return 14;
        break;

        case 'o':
        return 15;
        break;

        case 'p':
        return 16;
        break;

        case 'q':
        return 17;
        break;

        case 'r':
        return 18;
        break;

        case 's':
        return 19;
        break;

        case 't':
        return 20;
        break;

        case 'u':
        return 21;
        break;

        case 'v':
        return 22;
        break;

        case 'w':
        return 23;
        break;

        case 'x':
        return 24;
        break;

        case 'y':
        return 25;
        break;

        case 'z':
        return 26;
        break;

    }
    return 0;
}

char lletranumero (int numero){
    switch (numero) {

        case -1:
        return '/';
        break;


        case 1:
        return 'a';
        break;

        case 2:
        return 'b';
        break;

        case 3:
        return 'c';
        break;

        case 4:
        return 'd';
        break;

        case 5:
        return 'e';
        break;

        case 6:
        return 'f';
        break;

        case 7:
        return 'g';
        break;

        case 8:
        return 'h';
        break;

        case 9:
        return 'i';
        break;

        case 10:
        return 'j';
        break;

        case 11:
        return 'k';
        break;

        case 12:
        return 'l';
        break;

        case 13:
        return 'm';
        break;

        case 14:
        return 'n';
        break;

        case 15:
        return 'o';
        break;

        case 16:
        return 'p';
        break;

        case 17:
        return 'q';
        break;

        case 18:
        return 'r';
        break;

        case 19:
        return 's';
        break;

        case 20:
        return 't';
        break;

        case 21:
        return 'u';
        break;

        case 22:
        return 'v';
        break;

        case 23:
        return 'w';
        break;

        case 24:
        return 'x';
        break;

        case 25:
        return 'y';
        break;

        case 26:
        return 'z'; 
        break;
        
    } 
   return 0;
}

int main(){

int mode;
static const int CLAUS[20] = { 22,16,23,19,5,24,10,12,8,3,25,13,4,15,11,6,20,26,21,14 };
string missatge;
string missatge2;
string missatge_nou;
int aux;
int a = 0; 
while(mode != 3){
std::cout << "Seleccioni el mode (1,2 o 3): \n \n";
std::cout << "1- Encriptar. \n \n";
std::cout << "2- Desencriptar. \n \n";
std::cout << "3- Tancar el programa. \n \n";
std::cin >> mode;
missatge_nou = " ";

if (mode == 1){
    
    std::cout << "\n" << "Escriu el missatge a encriptar: (Nomes minuscules. No utilitzis espais, utilitza / per separar.) \n";
    std::cin >> missatge;
    std::cout << "MISSATGE ENCRIPTAT: ";

    for(int  i = 0; i < missatge.length(); i++){
    
        if(missatge[i] != ' '){
            
            aux = numerolletra(missatge [i]);

            if (aux == -1){
                missatge_nou += lletranumero(-1);
            }
            else if( (aux + CLAUS[a]) <= 26 ){
                
                missatge_nou += lletranumero(aux + CLAUS[a]);
                a++;
                if (a > 19){
                    a = 0;
                }
        
            }
            else if( (aux + CLAUS[a]) > 26){
                missatge_nou += lletranumero((aux + CLAUS[a]) - 26);
                a++;
                if (a > 19){
                    a = 0;
                }
            }
            
        }


            }

        std::cout << missatge_nou << " \n \n";
        a = 0;
    
    
    
}

    


if (mode == 2){
    

    std::cout << "Escriu el missatge a desencriptar: ";
    std::cin >> missatge2;
    std::cout << "\n MISSATGE DESENCRIPTAT: ";

    for(int x = 0; x < missatge2.length(); x++){

        if(missatge2[x] != ' '){

            aux = numerolletra(missatge2[x]);

            if (aux == -1){

                missatge_nou += lletranumero(-1);
            }
            else if( (aux - CLAUS[a]) > 0){
                missatge_nou += lletranumero(aux - CLAUS[a]);
                a++;
                if (a > 19){
                    a = 0;
                }
            }
            else if( (aux - CLAUS[a]) <= 0){
               missatge_nou += lletranumero((aux - CLAUS[a])+26);
               a++;
               if (a > 19){
                a = 0;
               }
            }
            
        }

        
        }

std::cout << missatge_nou << "\n \n";
a=0;
} 
}


if(mode == 3){
    std::cout << "A reveure! \n";

}
}
