#include <stdio.h>
#include <stdlib.h>
//http://linguagemc.com.br/o-comando-syzeof/



void quadrado();// protótipo
void quadrado()//sem valor de retorno e parâmetros de entrada
{
    int k;
    for(k=1; k<=10; k++){
        printf("%d\n", k*k);

    }
}

int multiplica(int x){
    x = x*x;
    return x;
}

float converteTemp(float f){
   return 5.0 * (f - 32.0) / 9.0;
   /*float c;
  // c= 5/9*(f-32);
  // return c;
  //https://pt.wikihow.com/Fazer-a-Convers%C3%A3o-entre-Fahrenheit-e-Celsius*
https://www.ime.usp.br/~pf/mac0122-2003.2/aulas/temperatura.html
*/
}

int oDiaAcabaEm(int h, int m, int s){
        return 86400-(h*3600 + m*60 + s);
}

int tempoDoDiaQPassou(int h, int m, int s){
    return h*3600 + m*60 + s;
}

int main()
{
     quadrado();

     int v = 97;
     printf("%d - %d\n", multiplica(v), v);
     int v2 = 94;
     printf("%d - %d\n", multiplica(v2), v2);

     float t = 77;
     printf("%.1f\n",converteTemp(t));


     int h = 2;
     int m = 10;
     int s = 50;
     printf("%d segundos faltam para o dia acabar\n", oDiaAcabaEm(h,m,s));
     printf("%d segundos do seu dia ja passaram", tempoDoDiaQPassou(h,m,s));

      float vteste;
    printf(" --- TIPO ---|--- BYTES ---\n");
    printf(" char .......: %d bytes\n", sizeof(char));
    printf(" short.......: %d bytes\n", sizeof(short));
    printf(" int.........: %d bytes\n", sizeof(int));
    printf(" long........: %d bytes\n", sizeof(long));
    printf(" float ......: %d bytes\n", sizeof(float));
    printf(" double......: %d bytes\n", sizeof(double));
    printf(" long double.: %d bytes\n\n", sizeof(long double));
    printf("\nO tamanho de vteste e...: %d \n\n",sizeof vteste);

    getch();



    return 0;
}
