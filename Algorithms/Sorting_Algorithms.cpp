#include <iostream>

using namespace std;


void display_arr(int *array,int size){ // To Display the arrays 
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int * bubblesort(int * array,int size){ // Bubble sort:-Time complexity O(n^2)
    int temp;
    int count=0;
    for (int i = 0; i < size-1; i++){
        count=0;
        for (int j = 0; j < size-1-i; j++)
        {
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                count++;
            }
        }
        if (count==0)
        {
            return array;  // To make the algorithm adatptive to sorted arrays.
        }                  // And to complete the task in O(n) time rather than O(n^2).
        
    }
    return array;
}






int main (){

    // int array[]={1,49,54,7,2};
    int array[]={1,2,3,4,5};

    int array_sorted[sizeof(array)/sizeof(array[0])];
    display_arr(bubblesort(array,sizeof(array)/sizeof(array[0])),sizeof(array)/sizeof(array[0]));
 
       return 0;
}