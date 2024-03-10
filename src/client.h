#ifndef HANS_SDK_CLIENT_H_
#define HANS_SDK_CLIENT_H_

#include <iostream>

#include "hr_pro.h"

namespace hans_sdk {

class Client {
 public:
  void ConnectToHR();
  int DisconnectFromHR();

 private:
  void PrintError(const std::string &message, int ret_num) noexcept;

  std::string str_ip_ = "192.168.56.10";
  unsigned short n_port_ = 10003;
  int box_id_ = 0;
};

}  // namespace hans_sdk

#endif  // HANS_SDK_CLIENT_H_