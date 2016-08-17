#include <iostream>
#include "vector.h"
#include <math.h>
using namespace std;

vector::vector(float x1,float x2,float x3){
  this->x1=x1;
  this->x2=x2;
  this->x3=x3;
}
float vector::getComponent(int index){
  switch(index) {
      case 1 : return this->x1;
      case 2 : return this->x2;
      case 3 : return this->x3;
  }
}
float vector::getLength(){
  return sqrt(this->x1*this->x1+this->x2*this->x2+this->x3*this->x3);
}
vector vector::operator+(const vector& vec2){
  vector resVec(this->x1+vec2.x1,this->x2+vec2.x2,this->x3+vec2.x3);
  return resVec;
}
float vector::operator*(const vector& vec2){
    return this->x1*vec2.x1+this->x2*vec2.x2+this->x3*vec2.x3;
}

vector vector::operator*(const float& scalar){
  vector resVec(this->x1*scalar,this->x2*scalar,this->x3*scalar);
  return resVec;
}
vector vector::operator-(const vector& vec2){
  vector resVec(this->x1-vec2.x1,this->x2-vec2.x2,this->x3-vec2.x3);
  return resVec;
}
void vector::operator=(const vector& vec2){
  this->x1=vec2.x1;
  this->x2=vec2.x2;
  this->x3=vec2.x3;
}
void vector::operator+=(const vector& vec2){
  this->x1=vec2.x1+this->x1;
  this->x2=vec2.x2+this->x2;
  this->x3=vec2.x3+this->x3;
}
void vector::operator-=(const vector& vec2){
  *this=*this-vec2;
}
void vector::operator*=(const float& scalar){
  *this=*this*scalar;
}
