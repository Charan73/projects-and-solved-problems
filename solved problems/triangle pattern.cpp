#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=1;
  
   while(i<=n){
       int j=1;
       
       while(j<=i){
       cout<<i;
       j=j+1;
       
   }
   cout<<endl;
   i=i+1;
   }  
}

#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int count=1;
  int i=1;
  while(i<=n){
      int j=1;
      while(j<=i){
          cout<<count<<" ";
          j=j+1;
           count+=1;
      }
      
      cout<<endl;
      i=i+1;
  }
  

  
}
6
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
6 7 8 9 10 11 




#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int i=1;
  while(i<=n){
      int j=1;
      int value=i;
      while(j<=i){
          cout<<value<<" ";
          value+=1;
          j=j+1;
          
      }
      
      cout<<endl;
      i=i+1;
  }
  

  

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j+=1;
            
        }
        cout<<endl;
        i+=1;
        
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
      
        while(j<=i){
             char hg='A' +i-1;
            cout<<hg<<" ";
            j+=1;
            
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}






A
B B
C C C
D D D D 
E E E E E
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
      
        while(j<=i){
             char hg='A' +i+j-2;
            cout<<hg<<" ";
            j+=1;
            
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}



A 
B C 
C D E 
D E F G 
E F G H I 
F G H I J K 
G H I J K L M 
H I J K L M N O 

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=1;
  
   while(i<=n){
       int j=1;
       
       while(j<=i){
       cout<<" $ ";
       j=j+1;
       
   }
   cout<<endl;
   i=i+1;
   }  
}
