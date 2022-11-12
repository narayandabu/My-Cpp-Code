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
// Worst Time Complexities are given:-  
int * bubble_sort(int * array,int size){           // Bubble    sort:- Time complexity O(n^2)
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
int * insertion_sort(int * array, int size){       // Insertion sort:- Time Complexity O(n^2)
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
int * selection_sort(int * array , int size){      // selection sort:- Time Complexity O(n^2)
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
int partition(int* array, int low, int high){     //Used in Quick Sort
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    int temp;
    do{
        while (array[i] <= pivot){
            i++;
        }
        while (array[j] > pivot){
            j--;
        }
        if (i < j){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }while(i < j);
    temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    return j;
}
int * quick_sort(int * array,int low,int high){    //quick sort:- Time Complexity O(n^2).
    // Works on the principle of recursions.
    //Average time complexity is O(nlogn).
    int partitionIndex; // Index of pivot after partition.
    if(low < high){
        partitionIndex = partition(array, low, high); 
        quick_sort(array, low, partitionIndex - 1);  // sort left subarray.
        quick_sort(array, partitionIndex + 1, high); // sort right subarray.
    }
    return array;
}
void merging(int * array,int low,int high,int mid){// This Function is used merge two sorted arrays
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int * temp = new int[high+1];
    while (i<=mid and j<=high){
        if (array[i]>array[j]){
            temp[k]=array[j];
            k++; j++;
        }
        else{
            temp[k]=array[i];
            k++; i++;
        } 
    }
    while(i<=mid){
        temp[k]=array[i];
        k++; 
        i++;
    }
    while(j<=high){
        temp[k]=array[j];
        k++; 
        j++;
    }
    for (int l = low; l <= high; l++)
    {
        array[l]=temp[l];
    }       
    delete [] temp;
}
int * merge_sort(int * array,int low,int high){    //     Merge sort:- Time Complexity O(nlogn)  

if(low<high){
    int mid=(low+high)/2;
    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);
    merging(array,low,high,mid);
    return array;
}
else{
    return array;
}


}
int * count_sort(int * array,int size){            //     Count sort:- Time Complexity O(n+k)
    // One the Fastest Algo till now but Space Complexity O(n)
    // Generally used when Max number is not significantly high like 10k,50k etc.
    int max=0;
    for(int i = 0; i <= size-1; i++){
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    int * temp = new int [max+1];
    for (int j = 0; j <= max; j++){
        temp[j]=0;
    }
    for (int k = 0; k <=size-1; k++){
        temp[array[k]]= temp[array[k]] + 1;
    }
    int num=0;
    for (int m = 0; m <=max;){
        if (temp[m]==0){
            m++;
            continue;
        }
        else{ 
           array[num]=m;
           temp[m]=temp[m]-1;
           num++;
        } 
    }
    delete [] temp;
    return array;
    
    

}


int main (){
    int array[]={5,4,3,2,0,1,56,32};

    // int array[]={1,2,3,4,5,6};
    int size = (sizeof(array))/(sizeof(array[0]));
    // display_arr(quick_sort(array,0,(size-1)),size,"Merge Sort");
    display_arr(count_sort(array,size),size,"Count Sort");

    return 0;
}