#include "../../common/SocketsExchanger.h"

//#include <unistd.h>
#include <iostream>
using namespace std;


int main()
{
  IExchanger* commandExchanger = new UDPExchanger();

  while(1) 
  {
    cout << commandExchanger->Receive() << endl;
  }
}
