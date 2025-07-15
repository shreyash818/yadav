#include<stdio.h>
int main(){

    int ch;
    float radius,base,height,length;
    float circal,tarea,reatagel;

    
    printf("\n------------------------MENU---------------------------------");
    printf("\n1-Area of circal\n2-Area of Triangle\n3-Area of Reatagal");
    printf("\nEnter youe choice :");
    scanf("%d",&ch);

    switch (ch){
    case 1:
        printf("Enter radius for circle :");
        scanf("%f",&circal);
        circal=3.14*radius*radius;
        printf("Area of circal is :%f",circal);
        break;
    
    case 2:
        printf("Enter base and height:");
        scanf("%f%f",&base,&height);
        tarea=0.5*base*height;
        printf("\n Area of Triangle is :%f",tarea);
        break;

    case 3:
        printf("Enter radius of Reatagal :");
        scanf("%f%f",&base,&length);
        reatagel=base*length;
        printf("\nArea of Reatagal :%f",reatagel);
    
    default:
        printf("invalid");
        break;
    }
}