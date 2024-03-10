#include "client.h"

using namespace std;
string Msg;
int nRet;
#define err(Msg) printf("%s %d, %d\n", Msg, nRet, __LINE__)

int Client::ConnectToHR() {
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
