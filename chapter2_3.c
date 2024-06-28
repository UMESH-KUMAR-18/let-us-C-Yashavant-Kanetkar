/*
Write a program to receive values of latitude (L1,L2) and 
Longitude (G1,G2) in degrees, of two places on the earth and
output the distance(D) between them in nautical miles.The formula
for Distance in nautical Miles is;

D=3963 cos inverse(sinL1*sinL2 + cosL1 *cosL2* cos(G2-G1))
*/

#include<stdio.h>
#include<math.h>
int main(){
    float L1,L2,G1,G2,D;
    printf("Enter the Latitude and Longitude :");
    scanf("%f %f %f %f",&L1,&L2,&G1,&G2);

    //digree to radian
    L1=L1*3.14/180;
    L2=L2*3.14/180;
    G1=G1*3.14/180;
    G2=G2*3.14/180;

    D=3963*acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1));
    printf("Distance between them in Nautical miles %f: ",D);
    return 0;
}