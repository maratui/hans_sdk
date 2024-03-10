#ifndef HANS_SDK_HR_PRO_H_
#define HANS_SDK_HR_PRO_H_

namespace hr_pro {

#ifdef __cplusplus
extern "C" {
#endif

extern int _Z12HRIF_ConnectjPKct(unsigned int boxID, const char *hostName,
                                 unsigned short nPort);
extern int _Z15HRIF_DisConnectj(unsigned int boxID);
extern bool _Z16HRIF_IsConnectedj(unsigned int boxID);
extern int
_Z16HRIF_ReadVersionjjRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERiS6_S6_S6_S6_S6_S6_(
    unsigned int boxID, unsigned int rbtID, std::string &strVer,
    int &nCPSVersion, int &nCodesysVersion, int &nBoxVerMajor, int &nBoxVerMID,
    int &nBoxVerMin, int &nAlgorithmVer, int &nElfinFirmwareVer);
extern int
_Z19HRIF_ReadRobotModeljRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(
    unsigned int boxID, unsigned int rbtID, std::string &strModel);
extern int _Z19HRIF_ReadRobotStatejjRiS_S_S_S_S_S_S_S_S_S_S_S_(
    unsigned int boxID, unsigned int rbtID, int &nMovingState,
    int &nEnableState, int &nErrorState, int &nErrorCode, int &nErrorAxis,
    int &nBreaking, int &nPause, int &nEmergencyStop, int &nSaftyGuard,
    int &nElectrify, int &nIsConnectToBox, int &nBlendingDone, int &nInpos);

#ifdef __cplusplus
}
#endif

}  // namespace hr_pro

#endif  // HANS_SDK_HR_PRO_H_