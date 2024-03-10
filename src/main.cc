#include "client.h"

int main() {
  hans_sdk::Client client;

  client.ConnectToHR();
  client.IsConnected();
  client.ReadVersion();
  client.ReadRobotState();

  return client.DisconnectFromHR();
}
