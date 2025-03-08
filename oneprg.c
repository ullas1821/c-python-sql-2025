#include<stdio.h>
int main() 
{
int N=10, k=5,n;
printf("Input");
scanf("%d",&n);
if(n>N||n<=0) {
printf("Invalid Input");
printf("\nNumber of candies remaining %d",N);
}
else{
printf("Number of candies sold %d", n);
if(N-n<=k) {
N=10;
printf("\nNumber of candies remaining %d", N);
}
else{
printf("\nNumber of candies remaining %d", N-n);
}}
return 0;
}