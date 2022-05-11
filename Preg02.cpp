#include <iostream>
#include <math.h>

using namespace std;

int cuantasCifras(int numero) {
 int divisor = 10;
 int residuo = 0;
 int cifras_aux = 0;

 while (residuo != numero){
  residuo = numero % divisor;
  divisor = divisor * 10;
  cifras_aux++;
 }
 cifras_aux--;
 return cifras_aux;
}

void dividir_en_digitos(int numero, int cifras) {

  int divisor = 10;
  int residuo = 0;
  int digito = 0;
  int cifras_aux = cifras;
  divisor = pow(divisor, (cifras_aux));  
 while (cifras_aux >= 0){
   digito = numero / divisor;

   residuo = numero % divisor;
   numero = residuo;
   divisor = divisor / 10;
   cout << "digito: " << digito << endl;
   cifras_aux--;
 }
}

int main() {
 
  int num;
  cout << "Ingrese un numero para mostrarlo separado en digitos: " << endl; 
  cin >> num; 

  dividir_en_digitos(num, cuantasCifras(num));
 
  system("PAUSE");
  return 0;
 
}