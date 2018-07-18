#include "App.h"
#include<ctime>
int main(void)
{
	srand((unsigned int)time(NULL));
	int arr[] = { 1,2,3,4,5,6 };
	while (1) {
		int choice = rand() % 6;
		cout << arr[choice];
	}
}