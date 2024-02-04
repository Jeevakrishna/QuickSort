#include<iostream>
#include<cstdlib>


using namespace std;

void printArray(int *array, int n){
   for(int i = 0 ; i < n ; ++i){
      cout << array[i] << endl;
   }
}

void quickSort(int *array, int low, int high){
   int i = low;
   int j = high;
   int pivot = array[(i+j) / 2];
   int temp;

   while(i <= j){
      while(array[i] < pivot)
          i++;
      while(array[j] > pivot)
          j--;
      if(i <= j){
         temp = array[i];
         array[i] = array[j];
         array[j] = temp;
         i++;
         j--;
      }
   }
   
   if(j > low)
      quickSort(array,low,j);
   if(i < high)
      quickSort(array, i , high);
}

int main(){
   int array[15];
   
   for(int i = 0 ; i< 15 ; i++)
      array[i] = rand()%100;
  
    printArray(array, 15);
   
   quickSort(array,0,14);

   cout << "After Sorting" << endl;

    printArray(array, 15);

}