#include<stdio.h>  
#include<graphics.h>    //ͼ�ο⣺easyX201905 

#define MAXSTAR 1314 
#define MAXMETEOR 520 
struct Star {
    
        int x, y;
        int color;
        int step;  
}
star[MAXSTAR];
struct Meteor {
    int x, y;
    int style;
    int step;

}
meteor[MAXMETEOR];