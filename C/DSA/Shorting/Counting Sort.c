#include<stdio.h>
int main(){
    int n , k ;
    printf("Enter The Length of A : ");
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    k = max + 1;
    int c[k];
    for(j=0;j<k;j++){
        c[j]=0;
    }

     for(i=0;i<n;i++){
        c[a[i]]=c[a[i]]+1;
     }


     for(j=1;j<k;j++){
        c[j] = c[j]+c[j-1];
    }

    int b[k];
    for (i=n-1;i>=0;i--){
        c[a[i]] = c[a[i]]-1;
        b[c[a[i]]] = a[i];
    }
    printf("out put\n");
    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }
}
