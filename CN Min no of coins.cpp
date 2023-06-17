#include <bits/stdc++.h> 
int findMinimumCoins(int a) 
{
    // Write your code here
    int c=0;
    while(a){
        if(a>=1000) a-=1000;
        else if(a>=500) a-=500;
        else if(a>=100) a-=100;
        else if(a>=50) a-=50;
        else if(a>=20) a-=20;
        else if(a>=10) a-=10;
        else if(a>=5) a-=5;
        else if(a>=2) a-=2;
        else if(a>=1) a-=1;
        c++;

    }
    return c;
}
