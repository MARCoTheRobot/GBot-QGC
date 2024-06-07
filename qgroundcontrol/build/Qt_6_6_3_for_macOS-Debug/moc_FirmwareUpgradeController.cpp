/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/FirmwareUpgradeController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS = QtMocHelpers::stringData(
    "FirmwareUpgradeController",
    "boardFound",
    "",
    "showFirmwareSelectDlg",
    "noBoardFound",
    "boardGone",
    "flashComplete",
    "flashCancelled",
    "error",
    "selectedFirmwareBuildTypeChanged",
    "FirmwareBuildType_t",
    "firmwareType",
    "apmFirmwareNamesChanged",
    "px4StableVersionChanged",
    "px4StableVersion",
    "px4BetaVersionChanged",
    "px4BetaVersion",
    "downloadingFirmwareListChanged",
    "downloadingFirmwareList",
    "_firmwareDownloadProgress",
    "curr",
    "total",
    "_firmwareDownloadComplete",
    "remoteFile",
    "localFile",
    "errorMsg",
    "_foundBoard",
    "firstAttempt",
    "QSerialPortInfo",
    "portInfo",
    "boardType",
    "boardName",
    "_noBoardFound",
    "_boardGone",
    "_foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "_error",
    "errorString",
    "_status",
    "statusString",
    "_bootloaderSyncFailed",
    "_flashComplete",
    "_updateProgress",
    "_eraseStarted",
    "_eraseComplete",
    "_eraseProgressTick",
    "_px4ReleasesGithubDownloadComplete",
    "_ardupilotManifestDownloadComplete",
    "_buildAPMFirmwareNames",
    "startBoardSearch",
    "cancel",
    "flash",
    "AutoPilotStackType_t",
    "stackType",
    "FirmwareVehicleType_t",
    "vehicleType",
    "flashFirmwareUrl",
    "firmwareUrl",
    "flashSingleFirmwareMode",
    "vehicleTypeFromFirmwareSelectionIndex",
    "index",
    "availableBoardsName",
    "boardPort",
    "boardDescription",
    "pixhawkBoard",
    "px4FlowBoard",
    "selectedFirmwareBuildType",
    "apmFirmwareNames",
    "apmFirmwareNamesBestIndex",
    "apmFirmwareUrls",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "AutoPilotStackPX4",
    "AutoPilotStackAPM",
    "PX4FlowPX4",
    "PX4FlowAPM",
    "SiKRadio",
    "SingleFirmwareMode",
    "StableFirmware",
    "BetaFirmware",
    "DeveloperFirmware",
    "CustomFirmware",
    "CopterFirmware",
    "HeliFirmware",
    "PlaneFirmware",
    "RoverFirmware",
    "SubFirmware",
    "DefaultVehicleFirmware"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS_t {
    uint offsetsAndSizes[182];
    char stringdata0[26];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[13];
    char stringdata5[10];
    char stringdata6[14];
    char stringdata7[15];
    char stringdata8[6];
    char stringdata9[33];
    char stringdata10[20];
    char stringdata11[13];
    char stringdata12[24];
    char stringdata13[24];
    char stringdata14[17];
    char stringdata15[22];
    char stringdata16[15];
    char stringdata17[31];
    char stringdata18[24];
    char stringdata19[26];
    char stringdata20[5];
    char stringdata21[6];
    char stringdata22[26];
    char stringdata23[11];
    char stringdata24[10];
    char stringdata25[9];
    char stringdata26[12];
    char stringdata27[13];
    char stringdata28[16];
    char stringdata29[9];
    char stringdata30[10];
    char stringdata31[10];
    char stringdata32[14];
    char stringdata33[11];
    char stringdata34[16];
    char stringdata35[18];
    char stringdata36[8];
    char stringdata37[10];
    char stringdata38[7];
    char stringdata39[12];
    char stringdata40[8];
    char stringdata41[13];
    char stringdata42[22];
    char stringdata43[15];
    char stringdata44[16];
    char stringdata45[14];
    char stringdata46[15];
    char stringdata47[19];
    char stringdata48[35];
    char stringdata49[35];
    char stringdata50[23];
    char stringdata51[17];
    char stringdata52[7];
    char stringdata53[6];
    char stringdata54[21];
    char stringdata55[10];
    char stringdata56[22];
    char stringdata57[12];
    char stringdata58[17];
    char stringdata59[12];
    char stringdata60[24];
    char stringdata61[38];
    char stringdata62[6];
    char stringdata63[20];
    char stringdata64[10];
    char stringdata65[17];
    char stringdata66[13];
    char stringdata67[13];
    char stringdata68[26];
    char stringdata69[17];
    char stringdata70[26];
    char stringdata71[16];
    char stringdata72[10];
    char stringdata73[12];
    char stringdata74[12];
    char stringdata75[18];
    char stringdata76[18];
    char stringdata77[11];
    char stringdata78[11];
    char stringdata79[9];
    char stringdata80[19];
    char stringdata81[15];
    char stringdata82[13];
    char stringdata83[18];
    char stringdata84[15];
    char stringdata85[15];
    char stringdata86[13];
    char stringdata87[14];
    char stringdata88[14];
    char stringdata89[12];
    char stringdata90[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS_t qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "FirmwareUpgradeController"
        QT_MOC_LITERAL(26, 10),  // "boardFound"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 21),  // "showFirmwareSelectDlg"
        QT_MOC_LITERAL(60, 12),  // "noBoardFound"
        QT_MOC_LITERAL(73, 9),  // "boardGone"
        QT_MOC_LITERAL(83, 13),  // "flashComplete"
        QT_MOC_LITERAL(97, 14),  // "flashCancelled"
        QT_MOC_LITERAL(112, 5),  // "error"
        QT_MOC_LITERAL(118, 32),  // "selectedFirmwareBuildTypeChanged"
        QT_MOC_LITERAL(151, 19),  // "FirmwareBuildType_t"
        QT_MOC_LITERAL(171, 12),  // "firmwareType"
        QT_MOC_LITERAL(184, 23),  // "apmFirmwareNamesChanged"
        QT_MOC_LITERAL(208, 23),  // "px4StableVersionChanged"
        QT_MOC_LITERAL(232, 16),  // "px4StableVersion"
        QT_MOC_LITERAL(249, 21),  // "px4BetaVersionChanged"
        QT_MOC_LITERAL(271, 14),  // "px4BetaVersion"
        QT_MOC_LITERAL(286, 30),  // "downloadingFirmwareListChanged"
        QT_MOC_LITERAL(317, 23),  // "downloadingFirmwareList"
        QT_MOC_LITERAL(341, 25),  // "_firmwareDownloadProgress"
        QT_MOC_LITERAL(367, 4),  // "curr"
        QT_MOC_LITERAL(372, 5),  // "total"
        QT_MOC_LITERAL(378, 25),  // "_firmwareDownloadComplete"
        QT_MOC_LITERAL(404, 10),  // "remoteFile"
        QT_MOC_LITERAL(415, 9),  // "localFile"
        QT_MOC_LITERAL(425, 8),  // "errorMsg"
        QT_MOC_LITERAL(434, 11),  // "_foundBoard"
        QT_MOC_LITERAL(446, 12),  // "firstAttempt"
        QT_MOC_LITERAL(459, 15),  // "QSerialPortInfo"
        QT_MOC_LITERAL(475, 8),  // "portInfo"
        QT_MOC_LITERAL(484, 9),  // "boardType"
        QT_MOC_LITERAL(494, 9),  // "boardName"
        QT_MOC_LITERAL(504, 13),  // "_noBoardFound"
        QT_MOC_LITERAL(518, 10),  // "_boardGone"
        QT_MOC_LITERAL(529, 15),  // "_foundBoardInfo"
        QT_MOC_LITERAL(545, 17),  // "bootloaderVersion"
        QT_MOC_LITERAL(563, 7),  // "boardID"
        QT_MOC_LITERAL(571, 9),  // "flashSize"
        QT_MOC_LITERAL(581, 6),  // "_error"
        QT_MOC_LITERAL(588, 11),  // "errorString"
        QT_MOC_LITERAL(600, 7),  // "_status"
        QT_MOC_LITERAL(608, 12),  // "statusString"
        QT_MOC_LITERAL(621, 21),  // "_bootloaderSyncFailed"
        QT_MOC_LITERAL(643, 14),  // "_flashComplete"
        QT_MOC_LITERAL(658, 15),  // "_updateProgress"
        QT_MOC_LITERAL(674, 13),  // "_eraseStarted"
        QT_MOC_LITERAL(688, 14),  // "_eraseComplete"
        QT_MOC_LITERAL(703, 18),  // "_eraseProgressTick"
        QT_MOC_LITERAL(722, 34),  // "_px4ReleasesGithubDownloadCom..."
        QT_MOC_LITERAL(757, 34),  // "_ardupilotManifestDownloadCom..."
        QT_MOC_LITERAL(792, 22),  // "_buildAPMFirmwareNames"
        QT_MOC_LITERAL(815, 16),  // "startBoardSearch"
        QT_MOC_LITERAL(832, 6),  // "cancel"
        QT_MOC_LITERAL(839, 5),  // "flash"
        QT_MOC_LITERAL(845, 20),  // "AutoPilotStackType_t"
        QT_MOC_LITERAL(866, 9),  // "stackType"
        QT_MOC_LITERAL(876, 21),  // "FirmwareVehicleType_t"
        QT_MOC_LITERAL(898, 11),  // "vehicleType"
        QT_MOC_LITERAL(910, 16),  // "flashFirmwareUrl"
        QT_MOC_LITERAL(927, 11),  // "firmwareUrl"
        QT_MOC_LITERAL(939, 23),  // "flashSingleFirmwareMode"
        QT_MOC_LITERAL(963, 37),  // "vehicleTypeFromFirmwareSelect..."
        QT_MOC_LITERAL(1001, 5),  // "index"
        QT_MOC_LITERAL(1007, 19),  // "availableBoardsName"
        QT_MOC_LITERAL(1027, 9),  // "boardPort"
        QT_MOC_LITERAL(1037, 16),  // "boardDescription"
        QT_MOC_LITERAL(1054, 12),  // "pixhawkBoard"
        QT_MOC_LITERAL(1067, 12),  // "px4FlowBoard"
        QT_MOC_LITERAL(1080, 25),  // "selectedFirmwareBuildType"
        QT_MOC_LITERAL(1106, 16),  // "apmFirmwareNames"
        QT_MOC_LITERAL(1123, 25),  // "apmFirmwareNamesBestIndex"
        QT_MOC_LITERAL(1149, 15),  // "apmFirmwareUrls"
        QT_MOC_LITERAL(1165, 9),  // "statusLog"
        QT_MOC_LITERAL(1175, 11),  // "QQuickItem*"
        QT_MOC_LITERAL(1187, 11),  // "progressBar"
        QT_MOC_LITERAL(1199, 17),  // "AutoPilotStackPX4"
        QT_MOC_LITERAL(1217, 17),  // "AutoPilotStackAPM"
        QT_MOC_LITERAL(1235, 10),  // "PX4FlowPX4"
        QT_MOC_LITERAL(1246, 10),  // "PX4FlowAPM"
        QT_MOC_LITERAL(1257, 8),  // "SiKRadio"
        QT_MOC_LITERAL(1266, 18),  // "SingleFirmwareMode"
        QT_MOC_LITERAL(1285, 14),  // "StableFirmware"
        QT_MOC_LITERAL(1300, 12),  // "BetaFirmware"
        QT_MOC_LITERAL(1313, 17),  // "DeveloperFirmware"
        QT_MOC_LITERAL(1331, 14),  // "CustomFirmware"
        QT_MOC_LITERAL(1346, 14),  // "CopterFirmware"
        QT_MOC_LITERAL(1361, 12),  // "HeliFirmware"
        QT_MOC_LITERAL(1374, 13),  // "PlaneFirmware"
        QT_MOC_LITERAL(1388, 13),  // "RoverFirmware"
        QT_MOC_LITERAL(1402, 11),  // "SubFirmware"
        QT_MOC_LITERAL(1414, 22)   // "DefaultVehicleFirmware"
    },
    "FirmwareUpgradeController",
    "boardFound",
    "",
    "showFirmwareSelectDlg",
    "noBoardFound",
    "boardGone",
    "flashComplete",
    "flashCancelled",
    "error",
    "selectedFirmwareBuildTypeChanged",
    "FirmwareBuildType_t",
    "firmwareType",
    "apmFirmwareNamesChanged",
    "px4StableVersionChanged",
    "px4StableVersion",
    "px4BetaVersionChanged",
    "px4BetaVersion",
    "downloadingFirmwareListChanged",
    "downloadingFirmwareList",
    "_firmwareDownloadProgress",
    "curr",
    "total",
    "_firmwareDownloadComplete",
    "remoteFile",
    "localFile",
    "errorMsg",
    "_foundBoard",
    "firstAttempt",
    "QSerialPortInfo",
    "portInfo",
    "boardType",
    "boardName",
    "_noBoardFound",
    "_boardGone",
    "_foundBoardInfo",
    "bootloaderVersion",
    "boardID",
    "flashSize",
    "_error",
    "errorString",
    "_status",
    "statusString",
    "_bootloaderSyncFailed",
    "_flashComplete",
    "_updateProgress",
    "_eraseStarted",
    "_eraseComplete",
    "_eraseProgressTick",
    "_px4ReleasesGithubDownloadComplete",
    "_ardupilotManifestDownloadComplete",
    "_buildAPMFirmwareNames",
    "startBoardSearch",
    "cancel",
    "flash",
    "AutoPilotStackType_t",
    "stackType",
    "FirmwareVehicleType_t",
    "vehicleType",
    "flashFirmwareUrl",
    "firmwareUrl",
    "flashSingleFirmwareMode",
    "vehicleTypeFromFirmwareSelectionIndex",
    "index",
    "availableBoardsName",
    "boardPort",
    "boardDescription",
    "pixhawkBoard",
    "px4FlowBoard",
    "selectedFirmwareBuildType",
    "apmFirmwareNames",
    "apmFirmwareNamesBestIndex",
    "apmFirmwareUrls",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "AutoPilotStackPX4",
    "AutoPilotStackAPM",
    "PX4FlowPX4",
    "PX4FlowAPM",
    "SiKRadio",
    "SingleFirmwareMode",
    "StableFirmware",
    "BetaFirmware",
    "DeveloperFirmware",
    "CustomFirmware",
    "CopterFirmware",
    "HeliFirmware",
    "PlaneFirmware",
    "RoverFirmware",
    "SubFirmware",
    "DefaultVehicleFirmware"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFirmwareUpgradeControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      14,  350, // properties
       3,  420, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  242,    2, 0x06,   18 /* Public */,
       3,    0,  243,    2, 0x06,   19 /* Public */,
       4,    0,  244,    2, 0x06,   20 /* Public */,
       5,    0,  245,    2, 0x06,   21 /* Public */,
       6,    0,  246,    2, 0x06,   22 /* Public */,
       7,    0,  247,    2, 0x06,   23 /* Public */,
       8,    0,  248,    2, 0x06,   24 /* Public */,
       9,    1,  249,    2, 0x06,   25 /* Public */,
      12,    0,  252,    2, 0x06,   27 /* Public */,
      13,    1,  253,    2, 0x06,   28 /* Public */,
      15,    1,  256,    2, 0x06,   30 /* Public */,
      17,    1,  259,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    2,  262,    2, 0x08,   34 /* Private */,
      22,    3,  267,    2, 0x08,   37 /* Private */,
      26,    4,  274,    2, 0x08,   41 /* Private */,
      32,    0,  283,    2, 0x08,   46 /* Private */,
      33,    0,  284,    2, 0x08,   47 /* Private */,
      34,    3,  285,    2, 0x08,   48 /* Private */,
      38,    1,  292,    2, 0x08,   52 /* Private */,
      40,    1,  295,    2, 0x08,   54 /* Private */,
      42,    0,  298,    2, 0x08,   56 /* Private */,
      43,    0,  299,    2, 0x08,   57 /* Private */,
      44,    2,  300,    2, 0x08,   58 /* Private */,
      45,    0,  305,    2, 0x08,   61 /* Private */,
      46,    0,  306,    2, 0x08,   62 /* Private */,
      47,    0,  307,    2, 0x08,   63 /* Private */,
      48,    3,  308,    2, 0x08,   64 /* Private */,
      49,    3,  315,    2, 0x08,   68 /* Private */,
      50,    0,  322,    2, 0x08,   72 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      51,    0,  323,    2, 0x02,   73 /* Public */,
      52,    0,  324,    2, 0x02,   74 /* Public */,
      53,    3,  325,    2, 0x02,   75 /* Public */,
      53,    2,  332,    2, 0x22,   79 /* Public | MethodCloned */,
      53,    1,  337,    2, 0x22,   82 /* Public | MethodCloned */,
      58,    1,  340,    2, 0x02,   84 /* Public */,
      60,    1,  343,    2, 0x02,   86 /* Public */,
      61,    1,  346,    2, 0x02,   88 /* Public */,
      63,    0,  349,    2, 0x02,   90 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 28, QMetaType::Int, QMetaType::QString,   27,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   35,   36,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 10, 0x80000000 | 56,   55,   11,   57,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 10,   55,   11,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, 0x80000000 | 10,   11,
    0x80000000 | 56, QMetaType::Int,   62,
    QMetaType::QStringList,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00015003, uint(11), 0,
      64, QMetaType::QString, 0x00015001, uint(0), 0,
      65, QMetaType::QString, 0x00015001, uint(0), 0,
      30, QMetaType::QString, 0x00015003, uint(0), 0,
      66, QMetaType::Bool, 0x00015001, uint(0), 0,
      67, QMetaType::Bool, 0x00015001, uint(0), 0,
      68, 0x80000000 | 10, 0x0001510b, uint(7), 0,
      69, QMetaType::QStringList, 0x00015003, uint(8), 0,
      70, QMetaType::Int, 0x00015003, uint(8), 0,
      71, QMetaType::QStringList, 0x00015003, uint(8), 0,
      14, QMetaType::QString, 0x00015001, uint(9), 0,
      16, QMetaType::QString, 0x00015001, uint(10), 0,
      72, 0x80000000 | 73, 0x0001510b, uint(-1), 0,
      74, 0x80000000 | 73, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      54,   54, 0x0,    6,  435,
      10,   10, 0x0,    4,  447,
      56,   56, 0x0,    6,  455,

 // enum data: key, value
      75, uint(FirmwareUpgradeController::AutoPilotStackPX4),
      76, uint(FirmwareUpgradeController::AutoPilotStackAPM),
      77, uint(FirmwareUpgradeController::PX4FlowPX4),
      78, uint(FirmwareUpgradeController::PX4FlowAPM),
      79, uint(FirmwareUpgradeController::SiKRadio),
      80, uint(FirmwareUpgradeController::SingleFirmwareMode),
      81, uint(FirmwareUpgradeController::StableFirmware),
      82, uint(FirmwareUpgradeController::BetaFirmware),
      83, uint(FirmwareUpgradeController::DeveloperFirmware),
      84, uint(FirmwareUpgradeController::CustomFirmware),
      85, uint(FirmwareUpgradeController::CopterFirmware),
      86, uint(FirmwareUpgradeController::HeliFirmware),
      87, uint(FirmwareUpgradeController::PlaneFirmware),
      88, uint(FirmwareUpgradeController::RoverFirmware),
      89, uint(FirmwareUpgradeController::SubFirmware),
      90, uint(FirmwareUpgradeController::DefaultVehicleFirmware),

       0        // eod
};

Q_CONSTINIT const QMetaObject FirmwareUpgradeController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFirmwareUpgradeControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS_t,
        // property 'downloadingFirmwareList'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'boardPort'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'boardDescription'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'boardType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'pixhawkBoard'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'px4FlowBoard'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectedFirmwareBuildType'
        QtPrivate::TypeAndForceComplete<FirmwareBuildType_t, std::true_type>,
        // property 'apmFirmwareNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'apmFirmwareNamesBestIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'apmFirmwareUrls'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'px4StableVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'px4BetaVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusLog'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'progressBar'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // enum 'AutoPilotStackType_t'
        QtPrivate::TypeAndForceComplete<FirmwareUpgradeController::AutoPilotStackType_t, std::true_type>,
        // enum 'FirmwareBuildType_t'
        QtPrivate::TypeAndForceComplete<FirmwareUpgradeController::FirmwareBuildType_t, std::true_type>,
        // enum 'FirmwareVehicleType_t'
        QtPrivate::TypeAndForceComplete<FirmwareUpgradeController::FirmwareVehicleType_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FirmwareUpgradeController, std::true_type>,
        // method 'boardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFirmwareSelectDlg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'noBoardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boardGone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashCancelled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedFirmwareBuildTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FirmwareBuildType_t, std::false_type>,
        // method 'apmFirmwareNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'px4StableVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'px4BetaVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'downloadingFirmwareListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_firmwareDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_firmwareDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_foundBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSerialPortInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_noBoardFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_boardGone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_foundBoardInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_bootloaderSyncFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_flashComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_eraseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_eraseComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_eraseProgressTick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_px4ReleasesGithubDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_ardupilotManifestDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_buildAPMFirmwareNames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startBoardSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flash'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AutoPilotStackType_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<FirmwareBuildType_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<FirmwareVehicleType_t, std::false_type>,
        // method 'flash'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AutoPilotStackType_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<FirmwareBuildType_t, std::false_type>,
        // method 'flash'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AutoPilotStackType_t, std::false_type>,
        // method 'flashFirmwareUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'flashSingleFirmwareMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FirmwareBuildType_t, std::false_type>,
        // method 'vehicleTypeFromFirmwareSelectionIndex'
        QtPrivate::TypeAndForceComplete<FirmwareVehicleType_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'availableBoardsName'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
    >,
    nullptr
} };

void FirmwareUpgradeController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->boardFound(); break;
        case 1: _t->showFirmwareSelectDlg(); break;
        case 2: _t->noBoardFound(); break;
        case 3: _t->boardGone(); break;
        case 4: _t->flashComplete(); break;
        case 5: _t->flashCancelled(); break;
        case 6: _t->error(); break;
        case 7: _t->selectedFirmwareBuildTypeChanged((*reinterpret_cast< std::add_pointer_t<FirmwareBuildType_t>>(_a[1]))); break;
        case 8: _t->apmFirmwareNamesChanged(); break;
        case 9: _t->px4StableVersionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->px4BetaVersionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->downloadingFirmwareListChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->_firmwareDownloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 13: _t->_firmwareDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->_foundBoard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSerialPortInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 15: _t->_noBoardFound(); break;
        case 16: _t->_boardGone(); break;
        case 17: _t->_foundBoardInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 18: _t->_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->_status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->_bootloaderSyncFailed(); break;
        case 21: _t->_flashComplete(); break;
        case 22: _t->_updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->_eraseStarted(); break;
        case 24: _t->_eraseComplete(); break;
        case 25: _t->_eraseProgressTick(); break;
        case 26: _t->_px4ReleasesGithubDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 27: _t->_ardupilotManifestDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 28: _t->_buildAPMFirmwareNames(); break;
        case 29: _t->startBoardSearch(); break;
        case 30: _t->cancel(); break;
        case 31: _t->flash((*reinterpret_cast< std::add_pointer_t<AutoPilotStackType_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FirmwareBuildType_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<FirmwareVehicleType_t>>(_a[3]))); break;
        case 32: _t->flash((*reinterpret_cast< std::add_pointer_t<AutoPilotStackType_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FirmwareBuildType_t>>(_a[2]))); break;
        case 33: _t->flash((*reinterpret_cast< std::add_pointer_t<AutoPilotStackType_t>>(_a[1]))); break;
        case 34: _t->flashFirmwareUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->flashSingleFirmwareMode((*reinterpret_cast< std::add_pointer_t<FirmwareBuildType_t>>(_a[1]))); break;
        case 36: { FirmwareVehicleType_t _r = _t->vehicleTypeFromFirmwareSelectionIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FirmwareVehicleType_t*>(_a[0]) = std::move(_r); }  break;
        case 37: { QStringList _r = _t->availableBoardsName();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::boardFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::showFirmwareSelectDlg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::noBoardFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::boardGone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::flashComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::flashCancelled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(FirmwareBuildType_t );
            if (_t _q_method = &FirmwareUpgradeController::selectedFirmwareBuildTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)();
            if (_t _q_method = &FirmwareUpgradeController::apmFirmwareNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(const QString & );
            if (_t _q_method = &FirmwareUpgradeController::px4StableVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(const QString & );
            if (_t _q_method = &FirmwareUpgradeController::px4BetaVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FirmwareUpgradeController::*)(bool );
            if (_t _q_method = &FirmwareUpgradeController::downloadingFirmwareListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_downloadingFirmwareList; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->boardPort(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->boardDescription(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_boardTypeName; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->pixhawkBoard(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->px4FlowBoard(); break;
        case 6: *reinterpret_cast< FirmwareBuildType_t*>(_v) = _t->selectedFirmwareBuildType(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->_apmFirmwareNames; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->_apmFirmwareNamesBestIndex; break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->_apmFirmwareUrls; break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->px4StableVersion(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->px4BetaVersion(); break;
        case 12: *reinterpret_cast< QQuickItem**>(_v) = _t->statusLog(); break;
        case 13: *reinterpret_cast< QQuickItem**>(_v) = _t->progressBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FirmwareUpgradeController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_downloadingFirmwareList != *reinterpret_cast< bool*>(_v)) {
                _t->_downloadingFirmwareList = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->downloadingFirmwareListChanged(_t->_downloadingFirmwareList);
            }
            break;
        case 3:
            if (_t->_boardTypeName != *reinterpret_cast< QString*>(_v)) {
                _t->_boardTypeName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->boardFound();
            }
            break;
        case 6: _t->setSelectedFirmwareBuildType(*reinterpret_cast< FirmwareBuildType_t*>(_v)); break;
        case 7:
            if (_t->_apmFirmwareNames != *reinterpret_cast< QStringList*>(_v)) {
                _t->_apmFirmwareNames = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 8:
            if (_t->_apmFirmwareNamesBestIndex != *reinterpret_cast< int*>(_v)) {
                _t->_apmFirmwareNamesBestIndex = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 9:
            if (_t->_apmFirmwareUrls != *reinterpret_cast< QStringList*>(_v)) {
                _t->_apmFirmwareUrls = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->apmFirmwareNamesChanged();
            }
            break;
        case 12: _t->setStatusLog(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 13: _t->setProgressBar(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FirmwareUpgradeController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFirmwareUpgradeControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwareUpgradeController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void FirmwareUpgradeController::boardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FirmwareUpgradeController::showFirmwareSelectDlg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FirmwareUpgradeController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FirmwareUpgradeController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FirmwareUpgradeController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FirmwareUpgradeController::flashCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FirmwareUpgradeController::error()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FirmwareUpgradeController::selectedFirmwareBuildTypeChanged(FirmwareBuildType_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FirmwareUpgradeController::apmFirmwareNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FirmwareUpgradeController::px4StableVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FirmwareUpgradeController::px4BetaVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FirmwareUpgradeController::downloadingFirmwareListChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
