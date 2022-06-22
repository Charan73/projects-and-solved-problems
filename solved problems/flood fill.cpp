void help(int i,int j,vector<vector<int>> &image,int oldcolor,int newcolor,int n,int m){
    if(i<0||j<0||i==n||j==m||image[i][j]!=oldcolor)
        return;
    image[i][j]=newcolor;
    help(i+1,j,image,oldcolor,newcolor,n,m);
     help(i-1,j,image,oldcolor,newcolor,n,m);
     help(i,j+1,image,oldcolor,newcolor,n,m);
     help(i,j-1,image,oldcolor,newcolor,n,m);
}







vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int oldColor=image[x][y];
    if(oldColor == newColor) return image;
    int n=image.size(),m=image[0].size();
    help (x,y,image,oldColor,newColor,n,m);
    return image;
}
