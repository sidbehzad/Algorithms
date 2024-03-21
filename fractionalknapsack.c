#include<stdio.h>
int knapsack(int weight[],int profit[], int capacity,int n){
float vector[n],p;
int i;
for(i=0;i<n;i++){
if(weight[i]<capacity){
    vector[i]=1.0;
    capacity=capacity-weight[i];
}}
if(i<n){
    vector[i]=capacity/weight[i];
    
}
for(i=0;i<n;i++){
	p=p+(vector[i]*profit[i]);
}

printf("total profit:%f",p);
return 0;
}
int main(){
    int capacity;
    // profit and weight are arranged in their profit/wight ratio
 int weight[]={1,2,4,5,1,3,7};
 int n=7;
 int profit[]={6,10,18,15,3,5,7};
 printf("Enter the capacity: ");
 scanf("%d",&capacity);
 knapsack(weight,profit,capacity,n);
 
  return 0;

}
