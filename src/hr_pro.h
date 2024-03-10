#ifndef HANS_SDK_HR_PRO_H_
#define HANS_SDK_HR_PRO_H_

namespace hr_pro {

#ifdef __cplusplus
extern "C" {
#endif

extern int _Z12HRIF_ConnectjPKct(unsigned int box_id, const char* host_name,
                                 unsigned short port_num);
extern int _Z15HRIF_DisConnectj(unsigned int box_id);
extern bool _Z16HRIF_IsConnectedj(unsigned int box_id);

#ifdef __cplusplus
}
#endif

}  // namespace hr_pro

#endif  // HANS_SDK_HR_PRO_H_