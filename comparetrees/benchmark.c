#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    clock_t start,end;
    double duration;

    FILE* fp=fopen("input","r");

    =buildAVLtree();
    =buildsplaytree();
    =buildrbtree();
    =buildbptree();

    //insert
    start=clock();
    end=clock();
    duration=(double)(end-start)/CLK_TCK；
    printf("insert:");
    
    //delete
    start=clock();
    end=clock();
    printf("delete:");

    //find
    start=clock();
    end=clock();
    printf("find:");

}