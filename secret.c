#include <stdio.h>

int main()
{
    int SPACE = 42 & (42 * 42);                               //32
    int COMMA = 42 + 42 / 42 + 42 / 42;                       //44
    int A = (42 + 42) ^ (42 >> (42 / 42));                    //65
    int E = ((42 + 42) & (42 * 42)) + 42 / 42;                //69
    int L = (42 & 42 * 42) + 42 + 42 / 42 + 42 / 42;          //76
    int Q = 42 + 42 - (42 ^ (42 - 42 / 42));                  //81
    int T = 42 + 42;                                          //84
    int U = 42 + 42 + 42 / 42;                                //85
    int a = (42 & 42 * 42) + (42 + 42) ^ (42 >> (42 / 42));   //97
    int d = 42 * 42 & (42 + 42 + 42);                         //100
    int e = (42 * 42 & 42 + 42 + 42) + 42 / 42;               //101
    int f = 42 + 42 + 42 & (42 * 42 + (42 & -42));            //102
    int g = (42 >> 42 / 42) + 42 + 42 + (42 | -42);           //103
    int h = (42 ^ (42 * 42)) % (42 + 42 + 42);                //104
    int i = 42 + 42 + (42 >> 42 / 42);                        //105
    int l = (42 ^ 42 * 42) / (42 + 42 & (42 * 42 ^ ~42));     //108
    int m = -42 ^ -(((42 + 42) & (42 * 42)) + 42 / 42);       //109
    int n = 42 + ((42 + 42) & (42 * 42));                     //110
    int o = 42 + 42 / 42 + ((42 + 42) & (42 * 42));           //111
    int r = (42 + 42 + 42) & (42 * ~42);                      //114
    int s = 42 + 42 + 42 - (42 / 42 + (42 & (42 + 42 * 42))); //115
    int t = ~-((42 & 42 * 42) + 42 + 42 + 42 / 42);           //116
    int u = (42 & 42 * 42) + 42 + 42 + 42 / 42;               //117
    int v = (42 & 42 * 42) + 42 + 42 + (42 & -42);            //118
    int w = (42 ^ 42 * 42) ^ (42 * 42 + ~42);                 //119
    int y = (42 + 42 / 42 + 42 / 42) ^ (42 + 42 + 42 / 42);   //121
    char S[] = {
        T,h,e,SPACE,A,n,s,w,e,r,SPACE,t,o,SPACE,t,h,e,SPACE,
        U,l,t,i,m,a,t,e,SPACE,Q,u,e,s,t,i,o,n,SPACE,o,f,SPACE,
        L,i,f,e,COMMA,SPACE,t,h,e,SPACE,u,n,i,v,e,r,s,e,COMMA,
        SPACE,a,n,d,SPACE,E,v,e,r,y,t,h,i,n,g,0
    };
    printf("%s", S);
}
