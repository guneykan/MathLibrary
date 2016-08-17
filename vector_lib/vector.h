class vector
{
private:
  float x1;
  float x2;
  float x3;
public:
  float getComponent(int index);
  float getLength();
  vector(float x1,float x2,float x3);
  vector operator+(const vector& vec2);
  float operator*(const vector& vec2);
  vector operator-(const vector& vec2);
  void operator=(const vector& vec2);
  void operator+=(const vector& vec2);
  void operator-=(const vector& vec2);


};
