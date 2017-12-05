#define HDL64E

#ifdef HDL64E
const int N_SCANS = 64;
const int N_POINTS = 160000;
const int imuQueLength = 800;
const int maxIterNum = 100;
#else
const int N_SCANS = 16;
const int N_POINTS = 40000;
const int imuQueLength = 200;
const int maxIterNum = 25;
#endif
