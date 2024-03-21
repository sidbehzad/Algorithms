#include<stdio.h>
#include<limits.h>
void mcm(int p[],int n){
    int m[n][n],s[n][n],len,t,min,i,j,k;
    // len is the difference between i and j for each diagonal
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m[i][j]=0;
            s[i][j]=0;

        }
    }
    for(len=1;len<n-1;len++){   //outer loop for differnece in i and j
        for(i=1;i<n-len;i++){
            j=i+len;
             m[i][j] = INT_MAX; // Initialize min to INT_MAX
            for (k = i; k < j; k++) {
                t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (t < m[i][j]) {
                    m[i][j] = t;
                    s[i][j] = k;
                }
            }
            
        }
    }
      printf("\nMatrix m:\n");
     for(i=0;i<n;i++){
         printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",m[i][j]);
        }
    }
      printf("\n Matrix s:\n");
     for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",s[i][j]);
        }
    }


}
int main(){
    
    // we take n as five as we have 4 matrices and array goes from 0-4
    int p[]={5,4,6,2,7};
    // p[] array is used to get the dimentions of matrix 
    // eg here is A1(5*4) A2(4*6) A3(6*2) A4(2*7)
    int n=(sizeof(p)/sizeof(p[0]));
    mcm(p,n);
    return 0;
}
