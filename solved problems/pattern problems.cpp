#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=1;
   int count=1;
   while(i<=n){
       int j=1;
       
       while(j<=n){
       cout<<count<<"  ";
       count =count +1;
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
    int i=1;
    char hg='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<hg++<<" ";
            j+=1;
            
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}



A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
      
        while(j<=n){
             char hg='A' +i+j-2;
            cout<<hg<<" ";
            j+=1;
            
            
        }
        cout<<endl;
        i++;
    }

    return 0;
}



A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
       int j=1;
       
       while(j<=n){
       cout<<n-j+1;
       j=j+1;
       
   }
   cout<<endl;
   i=i+1;
   }  
}

AAAAAA
BBBBBB
CCCCCC
DDDDDD
EEEEEE
FFFFFF

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char dog='A'+i-1;
            cout<<dog;
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
        while(j<=n){
            char dog='A'+j-1;
            cout<<dog;
            j+=1;
            
        }
        cout<<endl;
        i+=1;
        
    }

    return 0;
}

ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
