/*
How will you initialize a three-dimensional array threed[3][2][3]?
 How will you refer the first and last element in this array?
*/
int arr[ 3 ][ 2 ][ 3 ] = {
{
{ 1, 2, 3 },
{ 4, 5, 6 }
},
{
{ 1, 2, 3 },
{ 4, 5, 6 }
},
{
{ 1, 2, 3 },
{ 4, 5, 6 }
}
} ;

The first element of the array is arr[ 0 ][ 0 ][ 0 ] or ***arr. 
The last element of the array is arr[ 2 ][ 1 ][ 2 ] or *(*(*(arr + 2) + 1 ) + 2).