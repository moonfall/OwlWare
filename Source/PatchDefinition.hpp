#ifndef __PatchDefinition_hpp__
#define __PatchDefinition_hpp__

#include <stdint.h>
#include <string.h>

class PatchDefinition {
public:
  PatchDefinition(char* nm, uint8_t ins, uint8_t outs) :
    name(nm), inputs(ins), outputs(outs) {
  }
  virtual ~PatchDefinition(){}
  // ProgramFunction getProgramFunction(){
  //   return function;
  // }
  virtual void run(){}
  // uint32_t* getAddress(){
  //   return address;
  // }
  // uint32_t getSize(){
  //   return size;
  // }
  uint32_t* getStackBase(){
    return stackBase;
  }
  uint32_t getStackSize(){
    return stackSize;
  }
  char* getName(){
    return name;
  }
  // void clear();
protected:
  char* name;
  uint8_t inputs;
  uint8_t outputs;
  uint32_t* stackBase;
  uint32_t stackSize;
};

#endif // __PatchDefinition_hpp__
