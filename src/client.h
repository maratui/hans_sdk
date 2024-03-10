#ifndef HANS_SDK_CLIENT_H_
#define HANS_SDK_CLIENT_H_

#include <iostream>
#include <sstream>

#include "hr_pro.h"

namespace hans_sdk {

class Client {
 public:
  Client() = delete;
  explicit Client(char **argv);

  void ConnectToHR();
  int DisconnectFromHR();
  void IsConnected();
  void ReadVersion();
  void ReadRobotState();
  void ReadRobotModel();

 private:
  unsigned short ArgToNumber(char *arg);
  void PrintError(const std::string &message, int ret_num) noexcept;

  std::string ip_str_ = "";
  unsigned short port_num_{};
  unsigned short box_id_{};
  unsigned short robot_id_{};

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
};

}  // namespace hans_sdk

#endif  // HANS_SDK_CLIENT_H_