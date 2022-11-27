#include <stdio.h>


int fun() {
	//static int num = 10; // static  -- initilized only once -- when program started (like global)
	static int num; 
    num = 10; 
    num++;
	printf("%d\n", num);
}

int main() {
	//printf("%d\n", num); // error: num is not in scope
	fun(); // 11
	fun(); // 12
	fun(); // 13
	return 0;
}


// int num = 10; // global variable
// int fun() {
// 	num++;
// 	printf("%d\n", num);
// }

// int main() {
// 	//printf("%d\n", num); // 10
// 	fun(); // 11
// 	fun(); // 12
// 	fun(); // 13
// 	return 0;
// }



// void fun() {
// 	int num = 10; // local variable
// 	num++;
// 	printf("%d\n", num);
// }

// int main() {
// 	//printf("%d\n", num); // error: num is not in scope
// 	fun(); // 11
// 	fun(); // 11
// 	fun(); // 11
// 	return 0;
// }


