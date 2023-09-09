#include <stdio.h>
void circle(){
    int r;
    printf("Enter radius:");
    scanf("%d",&r);
    int ar;
    ar=3.14*r*r;
    printf("\n Area of circle=%d",ar);
}
void rectangle(){
    int l,b;
    printf("\n Enter Length:");
    scanf("%d",&l);
    printf("\n Enter Breadth:");
    scanf("%d",&b);
    int ar;
    ar=l*b;
    printf("\n Area of rectangle=%d",ar); 
}

void si(){
    int p,r,t;
    float si;
    printf("\n Enter Principle:");
    scanf("%d",&p);
    printf("\n Enter Rate:");
    scanf("%d",&r);
    printf("\n Enter Time:");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("\n SI is: %f",si);
}

void temperature(){
    float c,f;
    printf("Enter temprature in farenheit:");
    scanf("%f",&c);
    f=c*9/5 + 32;
    printf("temprature in farenheit: %f",f);

}

void swap(){
    int a,b;
    printf("\n Enter 1st element");
    scanf("%d",&a);
    printf("\n Enter 2nd element");
    scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
    printf("1st element %d 2nd element %d",a,b);
}
void main(){
    int n;
    printf("\n Press 1 for area of circle:");
    printf("\n Press 2 for area of rectangle:");
    printf("\n Press 3 for SI interest");
    printf("\n Press 4 to convert centigrate temp into farenhiet");
    printf("\n Press 5 to swap two numbers");
    printf("\n Enter your choice:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    circle();
    break;
    case 2:
    rectangle(); 
    case 3:
    si();
    break;
    case 4:
    temperature();
    break;
    case 5:
    swap();
    break;
    default:
    break;
    }
}