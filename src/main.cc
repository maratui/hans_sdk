#include "client.h"

int main() {
  hans_sdk::Client client;

  client.ConnectToHR();

  return client.DisconnectFromHR();
}
