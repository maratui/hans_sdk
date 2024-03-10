#ifndef HANS_SDK_CLIENT_H_
#define HANS_SDK_CLIENT_H_

#include <iostream>

#include "hr_pro.h"

namespace hans_sdk {

class Client {
 public:
  Client() = default;

  void ConnectToHR();
  int DisconnectFromHR();
  void IsConnected();
  void ReadVersion();
  void ReadRobotState();
  void ReadRobotModel();

 private:
  void PrintError(const std::string &message, int ret_num) noexcept;

  std::string ip_str_ = "192.168.56.10";
  unsigned short port_num_ = 10003;
  unsigned int box_id_ = 0;
  unsigned int robot_id_ = 0;

  std::string ver_str_ = "";
  int cps_version_num_{};
  int codesys_version_num_{};
  int major_box_ver_num_{};
  int box_mid_ver_num_{};
  int box_min_ver_num_{};
  int algorithm_ver_num_{};
  int elfin_firmware_ver_num_{};

  int moving_state_{};
  int enable_state_{};
  int error_state_{};
  int error_code_{};
  int error_axis_{};
  int breaking_{};
  int pause_{};
  int emergency_stop_{};
  int safty_guard_{};
  int electrify_{};
  int is_connect_to_box_{};
  int blending_done_{};
  int inpos_{};

  std::string model_str_ = "";
};

}  // namespace hans_sdk

#endif  // HANS_SDK_CLIENT_H_