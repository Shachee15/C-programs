#include <stdio.h>
void main(){
    int a[100], i, n, flag=0, beg, end, mid, key;
    printf("Enter the total number of elements in array:");
    scanf("%d", &n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", a[i]);
    }
    printf("Enter the element position you want to search:");
    scanf("%d", &key);
//code for binary search//
beg=0;
end=n-1;
mid=beg+end/2
 if(a[mid]==key){
    printf("Element found!");
    return a[mid];
 }
 else{
    while (a[mid] !=key && beg<=end)
    {
    if (a[mid]<key){
flag=1;
break;
else
if(a[mid>key]){

}

    }
 }
    }