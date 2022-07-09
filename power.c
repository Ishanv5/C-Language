#include<stdio.h>
int power(int x,int n){
    if(n==0){
        return 1;
    }
    else {
        return (x*power(x,n-1));    // termination condition  aur  recursion...
    }
}
void main(){
    int x,n;
    printf("Enter Base nos : ");
    scanf("%d",&x);
    printf("Enter Power : ");
    scanf("%d",&n);
    int result = power(x,n);
    printf("Result : %d",result);
}
