#include <stdio.h>
void tsp(){
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

}
void ltsp(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
    for(k=0;k<i;k++){
            printf("*");
        }
         printf("\n");
    }
    
}
void pyramid(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
    for(k=1;k<i;k++){
            printf(" *");
        }
         printf("\n");
    }
    
}
void numberpattern(){
    int i,j,k,n, sum=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(k=0;k<i;k++){
        printf("%d",sum);
        sum++;
        }
        printf("\n");
    }
}
void hollowrectangle(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i==0 || i==n || j==0 || j==n)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void semihollowrectangle(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i==0 || i==n || j==0 || j==n|| i==n/2 || j==n/2)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void diamondpyramid(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
    for(k=0;k<=i;k++){
            printf(" *");
        }
 printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
    for(k=i;k>=0;k--){
            printf(" *");
        }
         printf("\n");
    } 
}
/*void hollowtriangle(){
    int i,j,k,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
    for(k=0;k<=i;k++){
        if(){
            printf(" *");
        }
 printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
    for(k=i;k>=0;k--){
            printf(" *");
        }
         printf("\n");
    } 
}
}*/



void main(){
    int n;
    printf("\n Press 1 for right triangle star pattern:");
    printf("\n Press 2 for left triangle star pattern");
    printf("\n Press 3 for full pyramid star pattern");
    printf("\n Press 4 for number pattern");
    printf("\n Press 5 for hollow rectangle");
    printf("\n Press 6 for semi hollow rectangle");
    printf("\n Press 7 for diamond shape pyramid");
    printf("\n Press 8 for hollow triangle");
    printf("\n Enter your choice:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    tsp();
    break;
    case 2:
    ltsp(); 
    case 3:
    pyramid();
    break;
    case 4:
    numberpattern();
    break;
    case 5:
    hollowrectangle();
    break;
    case 6:
    semihollowrectangle();
    break;
    case 7:
    diamondpyramid();
    break;
    /*case 8:
    hollowtriangle();
    break;*/
    default:
    break;
    }
}
