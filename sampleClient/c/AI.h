#ifndef AI_H
#define AI_H

#include "BaseAI.h"

///The class implementing gameplay logic.
class AI: public BaseAI
{
public:
  virtual const char* username();
  virtual const char* password();
  virtual void init();
  virtual bool run();
private:
  void displayBoard();
  void displayStack(int,int);
  int getPoint(int);
  int getDie(int);
};

#endif
