#include<stdio.h>
int sum_of_digit(int a){
int sum=0;
while(a>0){
    sum += (a%10);
    a /= 10;
}
return sum;
}

int is_Prime(int n){
int i;
for(i=2; i<n; i++){
    if(n%i==0){
        return 0;
    }
}
        return 1;
}

int main(){
 int n;
 scanf("%d", &n);
 int total=sum_of_digit(n);
 if(is_Prime(total)==1){
    printf("Prime Number.");
 }
 else{
    printf("Not Prime Number.");
 }
}
