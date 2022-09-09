/* 1. Faça um programa que receba dois números e mostre qual deles é o maior. */ 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    
    int n1;
    int n2;

    printf("Enter the FIRST Number: ");
    scanf("%d",&n1);

    printf("Enter the SECOND Number: ");
    scanf("%d",&n2);

    if (n1 > n2){
        printf("The FIRST Number, %d is Bigger !",n1);
    } else 
        if (n2 > n1){
        printf("The SECOND Number, %d is Bigger !",n2);
        }  
}