#ifndef PT_DEFORM_BASE_H
#define PT_DEFORM_BASE_H

class ptDeformBase
{
private:
  /* data */
public:
  virtual ~ptDeformBase() {};
    
    /* initialization of the object */
    virtual bool Init(char* file) = 0;
    /* set the puncture position in real time */
    virtual bool setPuncturePosRealTime(const float* pos) = 0;
    /* get the deformation of target point after set puncture position */
    virtual bool getDeform(float* deform) = 0;
};
#endif