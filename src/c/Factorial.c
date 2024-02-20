#include<stdio.h>
#include<stdlib.h>

/*
*	Exemplos de função para retornar o fatorial de um número n
*	função recursiva
*/
long long factorial(int);

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    long long result = factorial(num);
    printf("1 => ");
    printf("%d! é : %lld\n", num, result);
    return(0);
}

long long factorial(int num){
    if(num <= 1 ){
        return 1;
    }
    printf("%d * ", num);
    return (long long)num * factorial(num - 1);
}
