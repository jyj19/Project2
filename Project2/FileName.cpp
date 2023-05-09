#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int plus(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];

	}
	return sum;

}






int main() {
	int arr[4];
	srand(time(0));
	int i;
	for (i = 0; i < 4; i++) {
		arr[i] = rand();
		if (arr[i] < 0) {
			arr[i] * -1;

		}
		if (arr[i] > 256) {

			while (arr[i] < 256) {

				arr[i] = rand();


			}


		}
		else {

		}
	}

	printf("%d %d %d %d %d", arr[4]);
	qlwn

	return 0;
}