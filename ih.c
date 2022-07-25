#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter");
    scanf("%d",&n);
    int t=n;
    while(count<n){
        for(int i=0;i<count;i++){
        printf("%d ",t);
        t--;
        }
        for(int i=1;i<=t+t-1;i++){
            printf("%d ",t);
        }
        t++;
        while(t<=n){
            printf("%d ",t);
            t++;
        }
        printf("\n");
        count++;
        t=n;
        }
    int temp=2;
    t=temp;
    count=0;
    while(count<n-1){
        for(int i=n;i>t;i--){
        printf("%d ",i);
        }
        for(int i=1;i<=t+t-1;i++){
            printf("%d ",t);
        }
        t++;
        while(t<=n){
            printf("%d ",t);
            t++;
        }
        printf("\n");
        count++;
        temp++;
        t=temp;
    }
}
