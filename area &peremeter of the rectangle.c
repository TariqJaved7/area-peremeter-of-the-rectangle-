#include<stdio.h>
int main()
{
    int length,width,area,peremeter;
    printf("Enter the length");
    scanf("%d",&length);
    printf("enter the width");
    scanf("%d",&width);
    area=length*width;
    peremeter=2*(length*width);
    printf("the length and the peremeter of your input data is %d and %d is %d\t%d",length,width,area,peremeter);
}
