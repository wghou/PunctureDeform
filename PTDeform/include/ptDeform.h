#ifndef PT_DEFORM_H
#define PT_DEFORM_H

#include"ptDeformBase.h"

class ptDeform : ptDeformBase
{
private:
  /* data */
public:
  ptDeform();
  virtual ~ptDeform();
    
    /* initialization of the object */
    virtual bool Init(char* file);
    /* set the puncture position in real time */
    virtual bool setPuncturePosRealTime(const float* pos);
    /* get the deformation of target point after set puncture position */
    virtual bool getDeform(float* deform);
};
#endif