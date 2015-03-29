
#pragma once

inline int pow2(int);
int pow(int, int);


inline int pow2(int num) { 
    return num*num; 
} 


int pow(int n, int p) {
    int r = 1; 

    for(int i = 0; i < p; i++) 
        r *= n;
 
    return r; 
}