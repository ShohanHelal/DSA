#include<stdio.h>
int largest(int a[6]){
int i,lar=a[0];
for(i=0;i<6;i++){
    if(a[i]>lar){
        lar =a[i];
    }

}
return lar;
}
int main(){
int arr[6],i,max;
for(i=0;i<6;i++){
  scanf("%d",&arr[i]);
    }

max=largest(arr);

printf("%d",max);

return 0;
}




