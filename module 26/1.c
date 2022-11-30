#include<stdio.h>
void star(int n){
for(int i=0; i<n; i++){
    printf("#");
}
printf("\n");
}

int main(){
    int i ,n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        star(i);
    }
return 0;
}
