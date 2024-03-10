#include <pthread.h>
#include <sys/time.h>
#include <unistd.h>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

#include "hr_pro.h"

using namespace std;
string Msg;
int nRet;
#define err(Msg) printf("%s %d, %d\n", Msg, nRet, __LINE__)

class InitRobot {
 public:
  int HR_Connect();
};

int InitRobot::HR_Connect() {
  string strCPSIP("192.168.56.10");
  unsigned short nCmdPort = 10003;
  int boxID = 0;

  nRet = _Z12HRIF_ConnectjPKct(boxID, strCPSIP.c_str(), nCmdPort);
  if (nRet != 0) {
    err("HRIF_Connect");
  } else {
    cout << "HRIF_Connect" << endl;
  }

  return nRet;
}

int val = 2;

void func(const int arg) {
  cout << arg << val;
}

int main(int, char**) {
  InitRobot robot;

  robot.HR_Connect();

  return 0;
}
