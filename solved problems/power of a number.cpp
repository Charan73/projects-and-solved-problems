long long Pow(int X, int N){
    if (N==0) return 1;
long long partialans=Pow(X,N-1);
    return X*partialans;
    }
   
