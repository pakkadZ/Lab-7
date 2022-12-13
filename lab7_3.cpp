#include<iostream>
#include<cmath>
using namespace std;



int adiff(int x,int y){
  int a,b;
  int z=abs(y-x);
  a = z%360;
  if(a<=180){
    b=a;
  }
  else{
    b=360-a;
  }

return b;

}


int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244)<<"\n";
}
