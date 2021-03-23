#include"ptDeform.h"

ptDeform::ptDeform()
{

}

ptDeform::~ptDeform()
{

}

bool ptDeform::Init(char* file)
{
  return true;
}

bool ptDeform::setPuncturePosRealTime(const float* pos)
{
  return true;
}

 bool ptDeform::getDeform(float* deform)
 {
   deform[0] = 0.0f;
   deform[1] = 0.0f;
   deform[2] = 0.0f;

   return true;
 }