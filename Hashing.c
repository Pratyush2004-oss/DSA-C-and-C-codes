#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main() {
int a[10]= {1,2,2,4,5,6,7,8,9,10};
int n, value;
int temp, hash;
system("cls");
printf("Enter the value of n(table size):");
scanf("%d",&n);
do {
printf("\nEnter the hash value : ");
scanf("%d", &value);
hash = value % n;
if(a[hash] = 0){
    a[hash] = value;
    printf("a[%d] The value %d is stored",hash,value);
    }
else {
    for (hash++; hash < n; hash++) {
        if (a[hash] == 0) {
            printf("space is allocated give other value");
            a[hash] = value;
            printf(" a[%dJ The value %d is stored", hash, value);
            goto menu; 
            }
        }
    for (hash = 0; hash < n; hash++){
        if (a[hash] == 0){
            printf("Space is allocated give other value");
            a[hash] = value;
            printf(" a[%dJ The value %d is stored", hash, value);
            goto menu;
            }
        }
    printf("\nERROR\n");
    printf("Enter '0' and press 'Enter key' twice to exit"); 
    }
    menu:
    printf("Do u want enter more \n Press 1 to do so\n  -- ");
    scanf("%d", &temp);
    }
    while (temp == 1);
    getch();
}