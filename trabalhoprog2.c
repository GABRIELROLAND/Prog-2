#include<stdio.h>
int triangulo_valido( int ,int,int);
int main()
{
int a,b,c;
int result;

printf("Entre com 1 numero\n");
scanf("%d",&a);

printf("Entre com 2 numero\n");
scanf("%d",&b);

printf("Entre com 3 numero\n");
scanf("%d",&c);
result=triangulo_valido(a,b,c);
if(result==1)
    printf("\nEh triangulo!");
else
    printf("\nNao eh triangulo!");

return 0;
}
int triangulo_valido(int a, int b , int c)
{
int mod1=fabs(b - c);
int mod2=fabs(a - c);
int mod3=fabs(a - b);

if(mod1 < a && a < (b + c) && mod2< b && b< (a+c) && mod3<c && c<(a+b))

return 1;

}



