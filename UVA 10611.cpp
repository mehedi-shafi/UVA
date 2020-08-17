#include <bits/stdc++.h>
using namespace std;
int n,q;
int h[50000];
int key, mid, shouldBeIndex;
int binarySearch(int lo, int hi){
    if(lo>hi){
        shouldBeIndex = ceil(double(lo+hi)/2);
        return -1;
    }
    mid = lo + (hi-lo)/2;
    if(key==h[mid])return mid;
    else if(key<h[mid])return binarySearch(lo, mid-1);
    else return binarySearch(mid+1,hi);
}
int main()
{
    int i,height,index;
    scanf("%d", &n);
    for(i=0;i<n;i++)scanf("%d",&h[i]);
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &height);
        key = height-1;
        index = binarySearch(0,n-1);
        if(index!=-1)printf("%d", h[index]);
        else if(shouldBeIndex-1<0)printf("X");
        else printf("%d",h[shouldBeIndex-1]);

        printf(" ");
        key = height +1;
        index = binarySearch(0,n-1);
        if(index!=-1)printf("%d", h[index]);
        else if(shouldBeIndex==n)printf("X");
        else printf("%d",h[shouldBeIndex]);

        printf("\n");

    }
	return 0;
}
