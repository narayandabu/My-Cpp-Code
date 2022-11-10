#include <iostream>

using namespace std;


void display_arr(int *array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int * bubblesort(int * array,int size){
    int temp;
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1-i; j++)
        {
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            } 
        }
    }
    return array;
}






int main (){

    int array[]={1,49,54,7,2};
    int array_sorted[sizeof(array)/sizeof(array[0])];
    display_arr(bubblesort(array,sizeof(array)/sizeof(array[0])),sizeof(array)/sizeof(array[0]));
 
       return 0;
}