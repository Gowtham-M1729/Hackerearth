#include <stdio.h> 

// Declaration of union is same as structures 
union test { 
	int x, y;
  float z;
  char a;
}; 

int main() 
{ 
	// A union variable t 
	union test t; 
  t.x=2;
  t.z=4.0;
  t.a='b';
    // t.y also gets value 2 
  printf("%ld %ld %ld",sizeof(t.a),sizeof(t.x),sizeof(t.z));
    printf("After making x = 2:\n x = %d, y = %d z=%f,a=%c\n\n", 
		t.x, t.y,t.z,t.a); 

	t.a ='b'; // t.x is also updated to 10 
	printf("After making y = 10:\n x = %d, y = %d ,z=%f,a=%c\n\n", 
		t.x, t.y,t.z,t.a); 
	return 0; 
} 

