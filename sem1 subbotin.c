#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 16
#define NUMBER 20

struct numbers{ //��������� ��� ������ ������� �������� �����
    int tch; //���������� �����
    char dch[SIZE]; //�������� �����
};

int main(){
    setlocale(0, "rus");
    int exit=0;
    struct numbers chislo[NUMBER];
    printf("������ ����� �������� � ����� ������\n������� '5',����� ���������\n");
    int t=0;
    while(exit==0){                     // ������� ����, ��� �����, ����� �������� ��������� ����� ����� ������� �� ����. ������
        scanf("%s",&chislo[t].dch); //���������� ������ � �������� ������ � ������
        if(strcmp(chislo[t].dch,"5")==0){ //������ ��� ����� ����� T �� ���������� ��� ����� ��� ����� ������� ������ � ���� �����������
            printf("�������...\n");
            break;
        }
        t++;
    }
    int i, k, n;
    int lng;
    for(i=0;i<t;i++){ // ���� ������� ���������� ������ (�������� �����)
        chislo[i].tch=0;
        lng=0;
        n=0;
        for(n;n<SIZE;n++){  //���� ������� ������� ���������� �������� � �������� �����
            if(chislo[i].dch[n]=='0'||chislo[i].dch[n]=='1'){
                lng++;
            }
        }
        lng--;
        for(n=0;n<=lng;n++){ //���� ������� ��������� �������� ������ � ����������
            if(chislo[i].dch[n]=='1'){
                chislo[i].tch=chislo[i].tch+pow(2,lng-n);
            }
        }
        printf("%12s => ",chislo[i].dch); // �������� ���������
        printf("%d\n",chislo[i].tch);
    }
    return 0;
}


