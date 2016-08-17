#include "vector.h"
#include <iostream>
using namespace std;
int main(){
  vector hey1(6,1,2);
  vector hey2(5,2,2);
  vector hey3=hey1+hey2;

  cout<<hey3.getComponent(1)<<" "<<hey3.getComponent(2)<<" "<<hey3.getComponent(3) <<endl;

}
