#include <iostream>
#include <vector>


using namespace std;

bool isPowerofTwo(long long n){
      if(n==1 or n==2){
        return true;
      }
      if (n==0)
      {
        return false;
      }
      if((n%2)==0){
        long long m=n/2;
        isPowerofTwo(m);
      }
      else if ((n%2)!=0){
        return false;
      }
    return true;
}

void rotate(int arr[],int n){

    int last=arr[n-1];
    for (int i = n; i > 1; i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=last;
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      return;
      
}
pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long min,max;
    for (int i = 0; i < n; i++)
    {
      if (i==0)
      {
        min=a[i];
        max=a[i];
        continue;
      }
      else{
        if(a[i]<=min){
          min=a[i];
        }
        if (a[i]>=max){
          max=a[i];
        }        
      }  
    }
    return std::make_pair(min,max);



}
void sort012(int a[],int n){

    int*temp = new int[3];
    temp[0]=0;
    temp[1]=0;
    temp[2]=0;
    for (int i = 0; i < n; i++)
    {
      int index=a[i];
      temp[index]=temp[index]+1;
    }
    int num=0;
    for (int i = 0; i <= 2; )
    {
      if (temp[i]==0){
        i++;
        continue;
      }
      else
      {
        a[num]=i;
        temp[i]=temp[i]-1;
        num++;
      } 
    }
    delete temp;
    

}
vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> result;
        for(int i=1;i<n;i++)
        {
            if(A[i]>A[i-1])
            {
                vector<int>temp;
                temp.push_back(i-1);
                temp.push_back(i);
                result.push_back(temp);
            }
        }
        return result;
    }







int main (){
     
      vector<int> arr={109,344,234,54,322,121};

    //  cout<<getMinMax(arr,5).first<<" is Min."<<endl;
    //  cout<<getMinMax(arr,5).second<<" is Max"<<endl;
    vector<vector<int>> temp = stockBuySell(arr,arr.size());
    
      
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = 0; j < temp[i].size(); j++)
        {
            cout <<temp[i][j] << " ";
        }    
        cout << endl;
    }


      return 0;
}