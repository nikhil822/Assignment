#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabetically character you want to check\n");
    scanf("%c",&ch);
    switch(ch){
        case 'A': printf("It is a vowel\n");break;
        case 'a': printf("It is a vowel\n");break;
        case 'E': printf("It is a vowel\n");break;
        case 'e': printf("It is a vowel\n");break;
        case 'I': printf("It is a vowel\n");break;
        case 'i': printf("It is a vowel\n");break;
        case 'O': printf("It is a vowel\n");break;
        case 'o': printf("It is a vowel\n");break;
        case 'U': printf("It is a vowel\n");break;
        case 'u': printf("It is a vowel\n");break;
        default: printf("It is a consonant\n");break;
    }
}