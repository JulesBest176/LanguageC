#include <stdio.h>


int main(){
    char c;
    int a,b;


    printf("Veuillez saisir entier 1 : ");
    scanf("%d", &a);
    printf("Veuillez saisir entier 2 : ");
    scanf("%d", &b);
    printf("Veuillez saisir L'operateur : ");
    scanf("%s", &c);

    switch(c){
    case '+':
        printf("Addition : %d + %d = %d \n",a,b, a+b);
        break;
    case '-':
        printf("Soustraction : %d - %d = %d \n",a,b, a-b);
        break;
    case '*':
        printf("Multiplication : %d * %d = %d \n",a,b, a*b);
        break;
    case 'd':
        printf("Division Entiere : %d / %d = %d \n",a,b, a/b);
        break;
    case '/':
        printf("Division reelle : %d / %d = %.1f \n",a,b, (float)a/b);
        break;
    case '%':
        printf("Modulo : %d mod %d = %d\n",a,b, a%b);
        break;
    }

    return 0;
}


