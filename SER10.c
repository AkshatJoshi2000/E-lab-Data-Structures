#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    //author Anas Khan
    int q;
    scanf("%d",&q);
    while(q--){
        int p;
        int count=0,sum=0;
        scanf("%d",&p);
        for(i=0;i<n;i++){
            if(s[i]<=p){
                count++;
                sum+=s[i];
            }
        }
 
        printf("%d %d\n",count,sum);
    }
    
    return 0;
}