//Heap Sort -> Yığın Sıralaması 

/* Min Heap ve Max Heap olarak ayrilir.
Min Heap de her ata kendisinden  sonrasindaki cocuklardan daha kücük olmalı. Max heap de her ata kensinden sonraki cocuktan daha büyük olmali.

                6
            14         45
        78  18          47  53
    83 91  81 77      84 99     64    

    6-> 1.eleman                left(i) = 2i     misal 45 3.eleman 3.2= 6 (47 6.eleman)
    14-> 2.eleman               Right(i) = 2i+1  misal 45 3.eleman 3.2 + 1 = 7 (53. 7.eleman) atanın solu 2i sağı 2i+1 e denk gelmis oluyor.
    45-> 3.elaman
    78-> 4.eleman
    18-> 5.eleman
    47-> 6.eleman
    53-> 7.eleman
    ..... diye gider.   

    Ekleme işlemi boş yere yapılır sonra cocugun atassına bakılır eger atasından kücükse yer degisir(min heap icin max heap tam tersi) sonra diger ataya bakılır islem devam eder.
    Eleman Silme:Kökteki elemai sil en sağdaki elemani köke taşı.Bu sekilde agacın yapısı degisir tekrar heapi düzeltir(heapify) 

    //https://www.youtube.com/watch?v=HYLiT2wffUE (ekleme-silme-sıralama islemleri sadi evren şeker)

*/

#include <stdio.h>
#include <conio.h>
  
  // Function to swap the the position of two elements
  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  // Driver code
  int main() {
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    printf("Sorted array is \n");
    printArray(arr, n);

    getch();

  }