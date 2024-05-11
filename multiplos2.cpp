#include  <iostream>
using namespace std;
/*Mostrar por consola los numeros del 1 al 100
[x] los multiplos de 3 deben mostrarse por la palabra fizz
[x] los multiplos de 5 deben mostrarse por la palabra buzz
[x] los multiplos de 3 y 5 deben mostrarse por la palabra fizzbuz
*/
int main(){
for (int i=0; i<=100; i++){

if (i%3!=0 && i%5!=0){
    cout <<i; }
else if (i%3==0 && i%5==0){
    cout <<"buzzfizz"; }
else if (i%3==0 ){
       cout <<"fizz"; }
else if (i%5==0){
      cout << "buzz"; }
cout <<endl;
}
return 0;
}
