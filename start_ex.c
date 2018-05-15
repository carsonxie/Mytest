#include<stdio.h>

void printIStars(int);
void printStarTriangle(int);

int main(void)
{
    int i;
    printf("Enter the number of start you want to print in screen\n");
    scanf("%d",&i);
    printIStars(i);
    printStarTriangle(i);

}

// prints i stars
void printIStars(int i) {
  // Count (call it j) from 1 to i (inclusive)
  for (int j = 1; j <= i; j++) {
    // Print a star
    printf("*");
  }
}

// prints a triangle of n stars
void printStarTriangle(int n) {
  // Count (call it i) from 1 to n (inclusive)
  for (int i = 1; i <= n; i++) {
    // Print i stars
    printIStars (i);
    // Print a newline
    printf("\n");
  }
}