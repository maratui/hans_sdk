#ifndef HANS_SDK_CLIENT_H_
#define HANS_SDK_CLIENT_H_

#include <iostream>

#include "hr_pro.h"

namespace hans_sdk {

class Client {
 public:
  void ConnectToHR();
  int DisconnectFromHR();
  void IsConnected();

 private:
  void PrintError(const std::string &message, int ret_num) noexcept;

  std::string ip_str_ = "192.168.56.10";
  unsigned short port_num_ = 10003;
  int box_id_ = 0;
};

}  // namespace hans_sdk

#endif  // HANS_SDK_CLIENT_H_