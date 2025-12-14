#include<stdio.h>

typedef struct  
{
    int day,month,year;
}date;

/*
    dateptr --------
                   |
                   |
                   *
    today struct holds {
    day,moth,year
    }

    dateptr points to the today;

*/
int main(){
    date today, *dateptr;
    dateptr = &today;
    // we can assign value through the pointer as well as direct
    today.day = 10; // direct method 
    (*dateptr).month = 12 ; // pointer assing 
    dateptr->year = 1997; // pointr assing 
    printf(" today date : %i/%i/%.2i.\n",dateptr->day,dateptr->month,dateptr->year); 
    printf("\n");
    return 0;
}