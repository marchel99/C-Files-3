#include <stdio.h>    

int main (){

int a=0;

int *pa=&a;


struct book {
char title[30];
char author[30];
char text [200];
char desc [150];
int date;
};



struct book* b;


int c,d,e,f;

int *pc=&c;
int *pd=&d;
int *pe=&e;
int *pf=&f;


printf("pc: %d\n",pc);
printf("pd: %d\n",pd);
printf("pc: %d\n",pe);
printf("pd: %d\n",pf);

printf("Size of this struct: %d\n",sizeof(struct book));
printf("Size of the pointer to that struct: %d\n",sizeof(b));




printf("Decimal: %d\n",pa);

printf("Decimal: %d\n",&a);



    return 0;
}

