#include <stdio.h>
#include <stdbool.h>
int findIndex(int frames[], int n, int page)
{
    for (int i = 0; i < n; i++)
    {
        if (frames[i] == page)
            return i;
    }
    return -1;
}

void printFrames(int frames[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(frames[i]==-1)
        
    }
}