#include <stdio.h>
int main(){
    char a[50];
    scanf("%s",a);
    int m=0;
    for(int i=0;a[i]!='\0';i++){
        m++;
    }
    if (m>10){
        char b,e;
        b=a[0];
        e=a[m-1];
        m=m-2;
        printf("%c%d%c",b,m,e);
        }
}