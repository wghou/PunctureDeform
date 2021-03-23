#include<iostream>
#include"ptDeform.h"

int main()
{
  ptDeform deform;
  bool rlt = deform.Init("xx");
  if(rlt != true)
  {
    std::cout<<"wrong when init the ptDeform!" << std::endl;
    return -1;
  }

  float ptPos[12]; // 针的位姿
  rlt = deform.setPuncturePosRealTime(ptPos);
  if(rlt != true)
  {
    std::cout<<"wrong when set the pt position!" << std::endl;
    return -1;
  }

  float len[3]; // 用于存放靶点偏移量
  rlt = deform.getDeform(len);
  if(rlt != true)
  {
    std::cout<<"wrong when get the target basis!" << std::endl;
    return -1;
  }
  else{
    std::cout<<"target basis is: "<<len[0] << " , " << len[1] << " and " << len[2] << std::endl;
  }

  return 0;
}