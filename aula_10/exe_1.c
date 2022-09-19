#include<stdlib.h>
#include<stdio.h>
#include "pilha.h"

int forma_part (char f, chr d){
    int r;
    switch(f){
        case ')':
            if (d == '(')
            r =1;
            else
                r =0;
        break;
        case 'j':
                if (d =='[')
                    r = 1;
                else
                    r = 0;
        break;
        case '}':
            if (d =='{')
                r = 0;
        break;
    }
    return r;
}