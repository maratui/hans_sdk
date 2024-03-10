#include "client.h"

int main() {
  hans_sdk::Client client;

  client.ConnectToHR();
  client.IsConnected();

  return client.DisconnectFromHR();
}
