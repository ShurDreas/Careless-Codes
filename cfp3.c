#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0;i<n;i++){
        for (int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(int i=0;i<n;i++){
        for (int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
        }
    
    int k=0,m;
    for(int i=0;i<n;i++){
        m=0;
        for (int j=0;j<3;j++){
            if (a[i][j]==1) m++;
            }
        if(m>=2) k++;
    }
    printf("\t%d",k);

}