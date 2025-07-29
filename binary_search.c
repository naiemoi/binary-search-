#include<stdio.h>
int main(){
    int arr[]={3,7,9,11,16,77,99};
    int item=7;
    int left,right,middle;
    left=0,right=6;
    while(left<=right){ 
        middle=(left+right)/2;
        if(arr[middle]==item){
            printf("item is found at %d\n",middle);
            return 0;
        }
        else if(arr[middle]<item){
            left=middle+1;
        }
        else{
            right=middle-1;
        }
   
}
printf("item is not found");
return 0;
}