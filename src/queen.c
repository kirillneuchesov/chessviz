#include <stdio.h>
#include <stdlib.h>
#include "queen.h"

int Queen (char k[5], char s[9][9])
{
    int flag1, a, b, c, d;
    for (int i = 97;i <= 104;i++) {
        for (int j = 49;j < 57;j++) {
            for (int l = 97;l <= 104;l++) {
                for (int h = 49;h < 57;h++) {			
if (i == 97) a = 1;
else if (i == 98) a = 2;
else if (i == 99) a = 3;
else if (i == 100) a = 4;
else if (i == 101) a = 5;
else if (i == 102) a = 6;
else if (i == 103) a = 7;
else if (i == 104) a = 8;

if (l == 97) b = 1;
else if (l == 98) b = 2;
else if (l == 99) b = 3;
else if (l == 100) b = 4; 
else if (l == 101) b = 5;
else if (l == 102) b = 6;
else if (l == 103) b = 7;
else if (l == 104) b = 8;
			
if (j == 49) c = 1; 
else if (j == 50) c = 2;
else if (j == 51) c = 3;
else if (j == 52) c = 4;
else if (j == 53) c = 5;
else if (j == 54) c = 6;
else if (j == 55) c = 7;
else if (j == 56) c = 8;
			
if (h == 49) d = 1; 
else if (h == 50) d = 2;
else if (h == 51) d = 3;
else if (h == 52) d = 4;
else if (h == 53) d = 5;
else if (h == 54) d = 6;
else if (h == 55) d = 7;
else if (h == 56) d = 8;
			
if ((k[0] == i) && (k[1] == j) && (k[3] == l) && (k[4] == h) && (s[c][a] == 'Q') 
    && ((s[d][b] == 'r') || (s[d][b] == 'h') || (s[d][b] == 'q') || (s[d][b] == 'k') 
    || (s[d][b] == 'e') || (s[d][b] == 'p') || (s[d][b] == 32)) && ((c-a == 5) || (c-b == 5) 
    ||(d-a == 5) || (d-b == 5) || (a-h == 5) || (a-c == 5) || (b-d == 5) || (b-c == 5) 
    || (c-a == 4) || (c-b == 4) ||(d-a == 4) || (d-b == 4) || (a-h == 4) || (a-c == 4) 
    || (b-d == 4) || (b-c == 4)|| (c-a == 3) || (c-b == 3) || (d-a == 3) || (d-b == 3) 
    || (a-h == 3) || (a-c == 3) || (b-d == 3) || (b-c == 3)|| (c-a == 2) || (c-b == 2) 
    || (d-a == 2) || (d-b == 2) || (a-h == 2) || (a-c == 2) || (b-d == 2) || (b-c == 2) 
    || (c-a == 1) || (c-b == 1) || (d-a == 1) || (d-b == 1) || (a-h == 1) || (a-c == 1) 
    || (b-d == 1) || (b-c == 1) || (i == l) || (j == h))) {
    s[d][b] = s[c][a]; 
    s[c][a] = 32;   
    flag1 = 0;
}
                }
            }
        }
    }
if (flag1!=0) {
    return 1;
} 
else return 0;
}

int queen (char k[5], char s[9][9])
{
    int flag1, a, b, c, d;
    for (int i = 97;i <= 104;i++) {
        for (int j = 49;j < 57;j++) {
            for (int l = 97;l <= 104;l++) {
                for (int h = 49;h < 57;h++) {
if (i == 97) a = 1;
else if (i == 98) a = 2;
else if (i == 99) a = 3;
else if (i == 100) a = 4;
else if (i == 101) a = 5;
else if (i == 102) a = 6;
else if (i == 103) a = 7;
else if (i == 104) a = 8;

if (l == 97) b = 1;
else if (l == 98) b = 2;
else if (l == 99) b = 3;
else if (l == 100) b = 4; 
else if (l == 101) b = 5;
else if (l == 102) b = 6;
else if (l == 103) b = 7;
else if (l == 104) b = 8;
			
if (j == 49) c = 1; 
else if (j == 50) c = 2;
else if (j == 51) c = 3;
else if (j == 52) c = 4;
else if (j == 53) c = 5;
else if (j == 54) c = 6;
else if (j == 55) c = 7;
else if (j == 56) c = 8;
			
if (h == 49) d = 1; 
else if (h == 50) d = 2;
else if (h == 51) d = 3;
else if (h == 52) d = 4;
else if (h == 53) d = 5;
else if (h == 54) d = 6;
else if (h == 55) d = 7;
else if (h == 56) d = 8;
			
if ((k[0] == i) && (k[1] == j) && (k[3] == l) && (k[4] == h) && (s[c][a] == 'q') 
    && ((s[d][b] == 'R') || (s[d][b] == 'H') || (s[d][b] == 'Q') || (s[d][b] == 'K') 
    || (s[d][b] == 'E') || (s[d][b] == 'P') || (s[d][b] == 32)) && ((c-a == 5) || (c-b == 5) 
    ||(d-a == 5) || (d-b == 5) || (a-h == 5) || (a-c == 5) || (b-d == 5) || (b-c == 5) 
    || (c-a == 4) || (c-b == 4) ||(d-a == 4) || (d-b == 4) || (a-h == 4) || (a-c == 4) 
    || (b-d == 4) || (b-c == 4)|| (c-a == 3) || (c-b == 3) || (d-a == 3) || (d-b == 3) 
    || (a-h == 3) || (a-c == 3) || (b-d == 3) || (b-c == 3)|| (c-a == 2) || (c-b == 2) 
    || (d-a == 2) || (d-b == 2) || (a-h == 2) || (a-c == 2) || (b-d == 2) || (b-c == 2) 
    || (c-a == 1) || (c-b == 1) || (d-a == 1) || (d-b == 1) || (a-h == 1) || (a-c == 1) 
    || (b-d == 1) || (b-c == 1) || (i == l) || (j == h))) {
    s[d][b] = s[c][a]; 
    s[c][a] = 32;  
    flag1 = 1;
}
                }
            }
        }
    }
if (flag1!=1) {
    return 1;
} 
else return 0;
}
