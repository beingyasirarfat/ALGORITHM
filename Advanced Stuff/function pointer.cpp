#include<bits/stdc++.h>
using namespace std;

void check(char*, char*,int(*) (const char*, const char*));

int main(void) {
    
    int (*p)(const char *, const char *);
    
    p = strcmp;
    
    printf("Enter two strings.\n");
    
    char s1[] =  "why not?";
    char s2[] =  "why not?";
    
    check(s1, s2, p);
    
    return 0; 
    
} 

void check(char *a, char *b, int (*cmp) (const char *, const char *)) {
    
    printf("Testing for equality.\n");
    
    if(!(*cmp)(a, b)) printf("Equal");
    
    else printf("Not Equal");
    
}
