#include <stdio.h>

class Rectangle{
private:
    float height;
    float width;
public:
    Rectangle():height(1),width(1){}

    Rectangle(float h, float w):height(h),width(w){}

    float area(){
        return height*width;
    }
    void setHeight(float h){
        height=h;
    }
    void setWidth(float w){
        width=w;
    }
    float getHeight(){
        return height;
    }
    float getWidth(){
        return width;
    }
};

int main(){

    float userHeight,userWidth;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &userHeight);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &userWidth);

    Rectangle rect(userHeight,userWidth);
    printf("The area of the rectangle is: %.2f\n",rect.area());

    return 0;

}