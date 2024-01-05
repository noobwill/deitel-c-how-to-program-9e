// scoping

#include <stdio.h>

// function prototypes
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

// global variable
int x = 1;

int main(void){
	// local variable to main
	int x = 5;

	printf("local x in outer scope of main is %d\n", x);

	// start new scope
	{
		// local variable to new scope
		int x = 7;
		printf("local x in inner scope of main is %d\n", x);
	// end new scope
	}

	printf("local x in outer scope of main is %d\n", x);

	// useLocal has automatic local x
	useLocal();
	// useStaticLocal has static local x
	useStaticLocal();
	// useGlobal uses global x
	useGlobal();
	// useLocal reinitializes automatic local x
	useLocal();
	// static local x retains its prior value
	useStaticLocal();
	// global x also retains its value
	useGlobal();

	printf("\nlocal x in main is %d\n", x);
}

// useLocal reinitializes local variable x during each call
void useLocal(void){
	int x = 25;
	printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
	x++;
	printf("local x in useLocal is %d before exiting useLocal\n", x);
}

// useStaticLocal initializes static local variable x only the first time
// the function is called; value of x is saved between calls to this function
void useStaticLocal(void){
	// initialized once
	static int x = 50;
	printf("\nlocal static x is %d on entering useStaticLocal\n", x);
	x++;
	printf("local static x is %d on exiting useStaticLocal\n", x);
}

// useGlobal modifies global variable x during each call
void useGlobal(void){
	printf("\nglobal x is %d on entering useGlobal\n", x);
	x *= 10;
	printf("global x is %d on exiting useGlobal\n", x);
}