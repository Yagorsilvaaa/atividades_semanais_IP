#include <stdio.h>
#include <stdlib.h>

int palindromo(char* texto, int n) {
  int i;

  if (n%2 ==0){

    for (i=0; i<(n/2); i++){

      if (texto[i] == texto[(n-(1+i))]){
        return 1;
      } 
      else {
        return 0;
      } 
    }
  } 

  else {

    for (i=0; i<((n+1)/2); i++){

      if (texto[i] == texto[n-(1+i)]){
        return 1;
      } else {
        return 0;
      }
    }
  }
}

int main() {
  char* p1 = (char*) malloc(sizeof(char)*5);
  p1[0] = 'r';
  p1[1] = 'a';
  p1[2] = 'd';
  p1[3] = 'a';
  p1[4] = 'r';

  if(palindromo(p1,5)){
    printf("radar eh palindromo!\n");
  }else{
    printf("radar nao eh palindromo!\n");
  }

  if(palindromo(p1,4)){
    printf("rada eh palindromo!\n");
  }else{
    printf("rada nao eh palindromo!\n");
  }

  
  return 0;
}


/* SAIDA
radar eh palindromo!
rada nao eh palindromo!
*/