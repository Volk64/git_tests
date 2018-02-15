#include<stdio.h>

int draw_rectangle(int x, int y){
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
* Draws a triangle on the terminal.
*/
int draw_triangle(int y){
	for(int i = 0; i <= y; i++){
		for(int j = 0; j < i; j++){
			// No newline is passed, so the character
			// is printed on the current line.
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}

int draw_pyramid(int y){
	for(int i = 0; i <= y; i++){
		for(int j = 0; j < i; j++){
			// TODO: append spaces to each row depending
			// on the height of the pyramid
			if(j % 2 == 0){
				printf("%s", "*");
			}
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}

int main(){
	printf("Result of 5x5\n");
	draw_rectangle(5, 5);
	printf("Result of 3x2\n");
	draw_rectangle(3, 2);
	printf("%s\n", "Result of triangle 5");
	draw_triangle(5);
	printf("%s\n", "Result of triangle 15");
	draw_triangle(15);
	printf("%s\n", "Result of pyramid 3");
	draw_pyramid(13);
	return 0;
}
