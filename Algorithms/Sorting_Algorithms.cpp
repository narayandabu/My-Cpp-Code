#include <iostream>

using namespace std;


void display_arr(int *array,int size,string type_of_sort){ // To Display the arrays and its type
    cout<<type_of_sort<<" is used:-"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int * bubble_sort(int * array,int size){ // Bubble sort:-Time complexity O(n^2)
    // worst time complexity:- O(n^2) and best time complexity:- O(n)
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
int * insertion_sort(int * array, int size){ // Insertion sort:- Time Complexity O(n^2)
        // worst time complexity:- O(n^2) and best time complexity:- O(n)
        int index,j;
        for(int i = 1; i <= size-1; i++){
            index=array[i];
            j=i-1;
            while(j>=0 and array[j]>index){
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=index;
        }
        return array;
        

}
int * selection_sort(int * array , int size){ // selection sort:- Time Complexity O(n^2)
        // worst time complexity:- O(n^2) and best time complexity:- O(n^2)
        int temp=0,min_index=0;
        for (int i = 0; i < size-1; i++){    // Check for each element.
            min_index=i;
            for (int j = i+1; j <= size-1; j++){ // To Find the index value of the 
                if(array[min_index]>array[j]){  // minimum element in the array.
                    min_index=j;}               // . 
                }
            temp=array[i];                  //To Swap the min value
            array[i]=array[min_index];      // .
            array[min_index]=temp;          // .
        }
        return array;
        
}




int main (){

    int array[]={5,4,3,2};
    // int array[]={1,2,3,4,5};
    int size = (sizeof(array))/(sizeof(array[0]));
    int array_sorted[sizeof(array)/sizeof(array[0])];
    // display_arr(bubble_sort(array,size),size,"Bubble sort"); 
    // display_arr(insertion_sort(array,size),size,"Insertion sort");
    display_arr(selection_sort(array,size),size,"selection sort");
    return 0;
}