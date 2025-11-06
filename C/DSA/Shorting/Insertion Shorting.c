#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int a[n],i,j,t;

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=1;i<n;i++){

    j=i-1;
    t = a[i];
    while(a[j]>t&&j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=t;

}

for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
