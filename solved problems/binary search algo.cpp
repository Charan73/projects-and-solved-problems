#include <iostream>

using namespace std;

int BST(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
            
        }
        if(key>arr[mid]){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2; 
    }
    return -1;
    
    
}




int main()
{
   int evn[7]={2,4,6,8,10,12,14};
   
   int index =BST(evn,7,12);
   cout <<"the index of 12 is "<<index<<endl;
   
    return 0;
}
