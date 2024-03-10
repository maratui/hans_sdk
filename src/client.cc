#include "client.h"

using namespace hans_sdk;

void Client::ConnectToHR() {
  int ret_num =
      hr_pro::_Z12HRIF_ConnectjPKct(box_id_, str_ip_.c_str(), n_port_);

  if (ret_num != 0) {
    PrintError("Error HRIF_Connect", ret_num);
  } else {
    std::cout << "HRIF_Connect" << std::endl;
  }
}

int Client::DisconnectFromHR() { return hr_pro::_Z15HRIF_DisConnectj(box_id_); }

void Client::PrintError(const std::string &message, int ret_num) noexcept {
  printf("%s %d, %d\n", message.c_str(), ret_num, __LINE__);
  exit(1);
}