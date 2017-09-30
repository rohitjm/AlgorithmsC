#import <stdio.h>
#import <stdbool.h>
#define MAX 7

void selectionSort(int arr[]) {
  for(int i = 0; i < MAX; i++) {
    for(int j = i+1; j < MAX; j++) {
      if(arr[j] < arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = j;
      }
    }
    printLine(arr[]);
  }
}

int main() {
  int myArray[MAX] = {}; 
  selectionSort(myArray);
  return 0;
}


void printLine(int myArr[]) {
  for(int k = 0; k < MAX; k++) {
    printf("%d ", arr[k]);
  }
}
