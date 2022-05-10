#include<iostream>
using namespace std ;
int main()
{
int sm , bi ;
int sum = 0;
cout<<"Enter two values : ";
cin>> sm ; 
cin>> bi ;
if(sm>bi){
    int sw = bi;
    bi = sm ;
    sm = sw ;
}

for(int sm ; sm <=bi ; sm ++ ){

cout << sm <<","<<'\t';
sum += sm ; 

}
cout<<endl;

if (sm == bi)
{
   cout<<"the values are the same: "<<sm<<endl;
}
cout<<"the sum of the number between two values is: "<< sum <<endl;

    return 0;
}