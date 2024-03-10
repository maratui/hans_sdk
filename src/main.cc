#include "client.h"

int main(int argc, char **argv) {
  int ret_num = 0;

  if (argc == 5) {
    hans_sdk::Client client(argv);

    client.ConnectToHR();
    client.IsConnected();
    client.ReadVersion();
    client.ReadRobotState();
    ret_num = client.DisconnectFromHR();
  } else {
    std::cout << "Input 4 parametrs" << std::endl;
  }

  return ret_num;
}
