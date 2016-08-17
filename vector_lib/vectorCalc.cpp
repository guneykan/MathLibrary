#include <iostream>
#include "vector.h"
#include "vectorCalc.h"

vector vectorCalc::crossProduct(vector& vec1,vector& vec2){

  float x1=vec1.getComponent(2)*vec2.getComponent(3)-vec1.getComponent(3)*vec2.getComponent(2);
  float x2=vec1.getComponent(3)*vec2.getComponent(1)-vec1.getComponent(1)*vec2.getComponent(3);
  float x3=vec1.getComponent(1)*vec2.getComponent(2)-vec1.getComponent(2)*vec2.getComponent(1);
  vector resVec(x1,x2,x3);
  return resVec;

}
