#include<stdio.h>
#include<string.h>
int main(){
    int la,lb,i,j,k=0;
    char a[20],b[20],buf[20];
    printf("enter the word 1: \n");
    scanf("%s",a);
    printf("enter the word 2: \n");
    scanf("%s",b);
    la=strlen(a);
    lb=strlen(a);
    int c[la+1][lb+1];
    char dir[la+1][lb+1];

    for(i=0;i<la;i++){
        c[i][0]=0;
    }
    for(i=0;i<la;i++){
        c[0][j]=0;
    }
    for(i=1;i<=la;i++){
        for(j=1;j<=lb;j++){
            if(a[i-1]==b[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                dir[i][j]='d';
            }else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
                dir[i][j]='v';
            }else{
                c[i][j]=c[i][j-1];
                 dir[i][j]='d';
            }
        }
    }
   
    i=la;
    j=lb;
    while(i != 0 || j != 0){
        if(dir[i][j]=='d'){
            buf[k]=a[i-1];
            k++;
            i--;
            j--;
        }else if(dir[i][j]=='v'){
            i--;

        }else{
            j--;
        }
         printf("the Lcs is");
         for(i=k-1;i>=0;i--){
            printf("%c",buf[i]);
         }
    }

    return 0;
}