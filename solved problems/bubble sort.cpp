void bubbleSort(vector<int>& arr, int n)
{   
  for(int i=1;i<n;i++){
      for(int j=0; j<n-1; j++){
          if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
          }
      }
  }
}





////i is round here