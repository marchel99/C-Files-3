#include <stdio.h>    

int main (){
int a= 200;

int *p;
p=&a;

int **q;
q=&p;



printf("Adres pointeujr: %d Adresa %d\n",&p,&a);


printf("Adres: %d zmiennej %d\n",p,*p);
printf("200:%d 201:%d\n",*p,*p+1);
printf("Adres*q:%d **q:%d",q,**q);



    return 0;
}

