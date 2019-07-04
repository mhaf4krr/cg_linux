#include<stdlib.h>
#include<graphics.h>

void boundaryFill(int x,int y){
    if(getpixel(x,y) == BLACK && getpixel(x,y)!=RED){
        putpixel(x,y,RED);
    
        boundaryFill(x+1,y);
        boundaryFill(x-1,y);
        boundaryFill(x,y+1);
        boundaryFill(x,y-1);
    }
}

int main(){
    int gd = DETECT , gm;
    initgraph(&gd,&gm,NULL);

    circle(100,100,60);
    boundaryFill(100,100);
    getch();
}