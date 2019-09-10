#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 16
#define NUMBER 20

struct numbers{ //структура для записи строчек двоичных чисел
    int tch; //десятичные числа
    char dch[SIZE]; //двоичные числа
};

int main(){
    setlocale(0, "rus");
    int exit=0;
    struct numbers chislo[NUMBER];
    printf("каждое число вводится с новой строки\nвведите '5',чтобы перевести\n");
    int t=0;
    while(exit==0){                     // главный цикл, при вводе, чтобы записать следующее число нужно перейти на след. строку
        scanf("%s",&chislo[t].dch); //записываем строку с двоичным числом в массив
        if(strcmp(chislo[t].dch,"5")==0){ //теперь при вводе буквы T мы обозначаем что ввели все числа которые хотели и цикл прерывается
            printf("перевод...\n");
            break;
        }
        t++;
    }
    int i, k, n;
    int lng;
    for(i=0;i<t;i++){ // цикл который перебирает строки (двоичные числа)
        chislo[i].tch=0;
        lng=0;
        n=0;
        for(n;n<SIZE;n++){  //цикл который считает количество символов в двоичном числе
            if(chislo[i].dch[n]=='0'||chislo[i].dch[n]=='1'){
                lng++;
            }
        }
        lng--;
        for(n=0;n<=lng;n++){ //цикл который переводит двоичное числов в десятичное
            if(chislo[i].dch[n]=='1'){
                chislo[i].tch=chislo[i].tch+pow(2,lng-n);
            }
        }
        printf("%12s => ",chislo[i].dch); // печатаем результат
        printf("%d\n",chislo[i].tch);
    }
    return 0;
}


