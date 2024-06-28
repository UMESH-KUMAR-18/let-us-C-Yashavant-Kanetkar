/*
A dequeue is an ordered set of elements in which elements may be
inserted or retrieved from either end. Using an array simulate a
dequeue of characters and the operations retrieve left, retrieve
right, insert left, insert right. Exceptional conditions such as
dequeue full or empty should be reported. Use two pointers left
and right for this simulation.
*/

# include <stdio.h>
void add_front ( int ) ;
void add_rear ( int ) ;
int retrieve_front( ) ;
int retrieve_rear( ) ;
void display( ) ;
int capacity=2;
int size=0;
int *arr ;
int main( )
{
    arr= (int*)malloc(capacity*sizeof(int));
int item ;
printf ( "\nAdding elements at front of a deque: " ) ;
add_front ( 10 ) ;
add_front ( 40 ) ;
add_front ( 30 ) ;
display( ) ;
printf ( "\n\nAdding an element at rear of a deque: " ) ;
add_rear ( 50 ) ;
display( ) ;
printf ( "\n\nRetreiving an element from front of a deque: " ) ;
item = retrieve_front( ) ;
if ( item == -1 )
printf ( "\nDeQueue Empty " ) ;
else
printf ( "\n\nFront Item = %d ", item ) ;
display( ) ;
printf ( "\n\nRetreiving an element from rear of a deque: " ) ;
item = retrieve_rear( ) ;
if ( item == -1 )
printf ( "\nDeQueue Empty " ) ;
else
printf ( "\n\nRear Item = %d ", item ) ;
display( ) ;
return 0 ;
}

/* Function to retrieve item from rear */
int retrieve_rear( )
{
int item;
if ( size==0 )
{
printf("queue is empty.");
return -1;
}
item=arr[size-1];
size--;
return item ;
}
/* Function to retrieve item from front */
int retrieve_front( )
{
int item;
if ( size==0 )
{
printf("queue is empty.");
return -1;
}
item=arr[0];
for ( int j = 0 ; j<size ; j ++ )
arr[ j ] = arr [ j + 1 ] ;
size--;
return item;
}

/* Function to add item to rear */
void add_rear ( int item )
{
int i, j ;
if ( capacity == size )
{
capacity*=2;
arr=(int*)realloc(arr,capacity*sizeof(int));
}
arr[size]=item;
size++;
}
/* Function to add item at front */
void add_front ( int item )
{
if ( capacity == size )
{
capacity*=2;
arr=(int*)realloc(arr,capacity*sizeof(int));
}

for (int i = size ; i >0 ; i-- )
arr[ i ] = arr[ i - 1 ] ;
arr[0] = item ;
size++ ;
}
/* Function to display the deque */
void display( )
{
if ( size==0)
{
printf ( "\n\nDeQueue Empty " ) ;
}
else
{
printf ( "\n" ) ;
for ( int i = 0 ; i <size ; i++ )
printf ( "\n a[ %d ] = %d ", i, arr[i]) ;
}
}