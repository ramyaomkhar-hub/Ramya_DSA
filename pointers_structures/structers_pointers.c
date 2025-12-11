# include<stdio.h>

// define the rectangle structure 
typedef struct Rect
{

    int h,w;
    void (*set)(struct Rect*,int,int);
    int (*area)(struct Rect*);
    void (*show)(struct Rect*);
} Rect;

void set(Rect* r, int w,int h){
    r->w = w;
    r->h = h;
}
int area(Rect* r) {
    return r->w * r->h;
}
void show(Rect* r ){
    printf("Rectangle width %d and height %d\n",r->w,r->h);
}

void constructRect(Rect* r){
    r->w = 0;
    r->h = 0;
    r->set = set;
    r->area = area;
    r->show = show;

}
int main(){
    Rect r;
    constructRect(&r);
    r.set(&r,10,15);
    r.show(&r);
    printf("Area of the Rectangle %d\n",r.area(&r));
    printf("\n");
    return 0;
}