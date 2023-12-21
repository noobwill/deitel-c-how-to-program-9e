/*
* (Sort in Ascending Order)
* Write a program that inputs three different numbers from the user.
* Display the numbers in increasing order.
* Recall that an if statement’s body can contain more than one statement.
* Prove that your script works by running it on all six possible orderings of the numbers.
* Does your script work with duplicate numbers?
* [This is challenging. In later chapters you’ll do this more conveniently and with many more numbers.]
*/

#include <stdio.h>
int main(void){
	printf("%s", "Enter three integers: ");
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);

	// x = y = z
	if (x == y){
		if (x == z){
			printf("%d %d %d\n", x, y, z);
		}
	}

	// x = y < z
	if (x == y){
		if (x < z){
			printf("%d %d %d\n", x, y, z);
		}
	}

	// x = z < y
	if (x == z){
		if (x < y){
			printf("%d %d %d\n", x, z, y);
		}
	}

	// y = z < x
	if (y == z){
		if (y < x){
			printf("%d %d %d\n", y, z, x);
		}
	}

	// x = y > z
	if (x == y){
		if (x > z){
			printf("%d %d %d\n", z, x, y);
		}
	}

	// x = z > y
	if (x == z){
		if (x > y){
			printf("%d %d %d\n", y, x, z);
		}
	}

	// y = z > x
	if (y == z){
		if (y > x){
			printf("%d %d %d\n", x, y, z);
		}
	}

	// x < y < z
	if (x < y){
		if (x < z){
			if (y < z){
				printf("%d %d %d\n", x, y, z);
			}
		}
	}

	// x < z < y
	if (x < z){
		if (x < y){
			if (z < y){
				printf("%d %d %d\n", x, z, y);
			}
		}
	}

	// y < x < z
	if (y < x){
		if (y < z){
			if (x < z){
				printf("%d %d %d\n", y, x, z);
			}
		}
	}

	// y < z < x
	if (y < z){
		if (y < x){
			if (z < x){
				printf("%d %d %d\n", y, z, x);
			}
		}
	}

	// z < x < y
	if (z < x){
		if (z < y){
			if (x < y){
				printf("%d %d %d\n", z, x, y);
			}
		}
	}

	// z < y < x
	if (z < y){
		if (z < x){
			if (y < x){
				printf("%d %d %d\n", z, y, x);
			}
		}
	}

	return 0;
}