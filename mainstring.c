#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "hw3String.h"
#define SIZELINE 256
#define SIZEWORD 30
int newchar = ' ';
int getLine(char line[SIZELINE]){
    bzero(line,256);
    for(int i=0; i<SIZELINE; i++){ 
    newchar = fgetc(stdin);
    if(newchar == '\0' ||newchar == EOF) return 0;
    if(newchar == '\n') break;
    if(newchar != '\r') line[i] = newchar;
    }
    return 1;
}
int getWord(char word[SIZEWORD] ){
    bzero(word,30);
    for(int i=0; i<SIZEWORD; i++){ 
        newchar = fgetc(stdin);
        if(newchar == '\0'||newchar == EOF) return 0;
        if(newchar == ' ' || newchar == '\t' || newchar == '\n') break;
        word[i] = newchar;
    }
    return 1;

}
int main(){
    char line[SIZELINE] = {0};
    char word[SIZEWORD] = {0};;
    char wordcheck[SIZEWORD] = {0};;
    if(getWord(word) ==0) exit(0);
    newchar = fgetc(stdin);
    if(newchar == 'a'){
        newchar = fgetc(stdin);
        while(getLine(line) != 0 ) {
            if(substring(word, line) == 1)
                printf("%s\n", line);  
        }
    }
    else if(newchar == 'b' ){
        newchar = fgetc(stdin);
        while(getWord(wordcheck) != 0 ) {
            if(similar(word,wordcheck,1) == 1)
                printf("%s\n", wordcheck);
        }
    }
    else{
        printf("wrong input\n");
        exit(0);
    }
    return 0;
}
