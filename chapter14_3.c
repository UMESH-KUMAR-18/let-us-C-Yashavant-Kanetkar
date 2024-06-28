/*
Match the following with reference to the following program segment:
int x[ 3 ][ 5 ] = {
{ 1, 2, 3, 4, 5 },
{ 6, 7, 8, 9, 10 },
{ 11, 12, 13, 14, 15 }
}, *n = &x ;
*/

Answer:
1.*(*( x + 2 ) + 1)             f. 12
2.*(*x + 2 ) + 5                j. 8
3.*(*( x + 1) )                 m. 6
4.*(*(x) + 2 ) + 1              c. 4
5.* ( *( x + 1 ) + 3 )          a. 9
6.*n                            i. 1
7.*( n +2 )                     d. 3
8.(*(n + 3 ) + 1                k. 5
9.*(n + 5)+1                    h. 7
10.++*n                         e. 2