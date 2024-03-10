#include "client.h"

using namespace hans_sdk;

void Client::ConnectToHR() {
  int ret_num =
      hr_pro::_Z12HRIF_ConnectjPKct(box_id_, ip_str_.c_str(), port_num_);

  if (ret_num != 0) {
    PrintError("Error HRIF_Connect", ret_num);
  } else {
    std::cout << "HRIF_Connect" << std::endl;
  }
}

int Client::DisconnectFromHR() { return hr_pro::_Z15HRIF_DisConnectj(box_id_); }

void Client::IsConnected() {
  std::cout << "Is connected to HR: " << hr_pro::_Z16HRIF_IsConnectedj(box_id_)
            << std::endl;
}

void Client::PrintError(const std::string &message, int ret_num) noexcept {
  std::cout << message << ": " << ret_num << ", " << __LINE__ << std::endl;
  exit(1);
}