#include "client.h"

using namespace hans_sdk;

void Client::ConnectToHR() {
  int ret_num =
      hr_pro::_Z12HRIF_ConnectjPKct(box_id_, ip_str_.c_str(), port_num_);

  if (ret_num != 0) {
    PrintError("Error HRIF_Connect", ret_num);
  } else {
    std::cout << "HRIF_Connect" << std::endl << std::endl;
  }
}

int Client::DisconnectFromHR() { return hr_pro::_Z15HRIF_DisConnectj(box_id_); }

void Client::IsConnected() {
  std::cout << "Is connected to HR: " << hr_pro::_Z16HRIF_IsConnectedj(box_id_)
            << std::endl
            << std::endl;
}

void Client::ReadVersion() {
  int ret_num = hr_pro::
      _Z16HRIF_ReadVersionjjRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERiS6_S6_S6_S6_S6_S6_(
          box_id_, robot_id_, ver_str_, cps_version_num_, codesys_version_num_,
          major_box_ver_num_, box_mid_ver_num_, box_min_ver_num_,
          algorithm_ver_num_, elfin_firmware_ver_num_);

  if (ret_num != 0) {
    PrintError("Error HRIF_ReadVersion", ret_num);
  } else {
    std::cout << "HRIF_ReadVersion:" << std::endl;
    std::cout << "the overall version number = " << ver_str_ << std::endl;
    std::cout << "the CPS version number = " << cps_version_num_ << std::endl;
    std::cout << "the controller version number = " << codesys_version_num_
              << std::endl;
    std::cout << "the electric box version = " << major_box_ver_num_
              << std::endl;
    std::cout << "the firmware version = " << box_mid_ver_num_ << std::endl;
    std::cout << "the firmware version = " << box_min_ver_num_ << std::endl;
    std::cout << "the algorithm version = " << algorithm_ver_num_ << std::endl;
    std::cout << "the driver firmware version = " << elfin_firmware_ver_num_
              << std::endl
              << std::endl;
  }
}

void Client::ReadRobotState() {
  int ret_num = hr_pro::_Z19HRIF_ReadRobotStatejjRiS_S_S_S_S_S_S_S_S_S_S_S_(
      box_id_, robot_id_, moving_state_, enable_state_, error_state_,
      error_code_, error_axis_, breaking_, pause_, emergency_stop_,
      safty_guard_, electrify_, is_connect_to_box_, blending_done_, inpos_);

  if (ret_num != 0) {
    PrintError("Error HRIF_ReadRobotState", ret_num);
  } else {
    std::cout << "HRIF_ReadRobotState:" << std::endl;
    std::cout << "the exercise state = " << moving_state_ << std::endl;
    std::cout << "the enable state = " << enable_state_ << std::endl;
    std::cout << "the error state = " << error_state_ << std::endl;
    std::cout << "the error code = " << error_code_ << std::endl;
    std::cout << "the error axis = " << error_axis_ << std::endl;
    std::cout << "the breaking = " << breaking_ << std::endl;
    std::cout << "the emergency stop = " << emergency_stop_ << std::endl;
    std::cout << "the safty guard = " << safty_guard_ << std::endl;
    std::cout << "the electrify = " << electrify_ << std::endl;
    std::cout << "is_connect to box = " << is_connect_to_box_ << std::endl;
    std::cout << "the blending done = " << blending_done_ << std::endl;
    std::cout << "the inpos = " << inpos_ << std::endl << std::endl;
  }
}

void Client::PrintError(const std::string &message, int ret_num) noexcept {
  std::cout << message << ": " << ret_num << ", " << __LINE__ << std::endl;
  exit(1);
}