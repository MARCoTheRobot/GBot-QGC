/****************************************************************************
** Meta object code from reading C++ file 'APMSensorsComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMSensorsComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMSensorsComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS = QtMocHelpers::stringData(
    "APMSensorsComponentController",
    "showGyroCalAreaChanged",
    "",
    "showOrientationCalAreaChanged",
    "orientationCalSidesDoneChanged",
    "orientationCalSidesVisibleChanged",
    "orientationCalSidesInProgressChanged",
    "orientationCalSidesRotateChanged",
    "resetStatusTextArea",
    "waitingForCancelChanged",
    "setupNeededChanged",
    "calibrationComplete",
    "QGCMAVLink::CalibrationType",
    "calType",
    "compass1CalSucceededChanged",
    "compass1CalSucceeded",
    "compass2CalSucceededChanged",
    "compass2CalSucceeded",
    "compass3CalSucceededChanged",
    "compass3CalSucceeded",
    "compass1CalFitnessChanged",
    "compass1CalFitness",
    "compass2CalFitnessChanged",
    "compass2CalFitness",
    "compass3CalFitnessChanged",
    "compass3CalFitness",
    "setAllCalButtonsEnabled",
    "enabled",
    "_handleUASTextMessage",
    "uasId",
    "compId",
    "severity",
    "text",
    "_mavlinkMessageReceived",
    "LinkInterface*",
    "link",
    "mavlink_message_t",
    "message",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "calibrateCompass",
    "calibrateAccel",
    "doSimpleAccelCal",
    "calibrateCompassNorth",
    "lat",
    "lon",
    "mask",
    "calibrateGyro",
    "calibrateMotorInterference",
    "levelHorizon",
    "calibratePressure",
    "cancelCalibration",
    "nextClicked",
    "usingUDPLink",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "nextButton",
    "cancelButton",
    "orientationCalAreaHelpText",
    "compassSetupNeeded",
    "accelSetupNeeded",
    "showOrientationCalArea",
    "orientationCalDownSideDone",
    "orientationCalUpsideDownSideDone",
    "orientationCalLeftSideDone",
    "orientationCalRightSideDone",
    "orientationCalNoseDownSideDone",
    "orientationCalTailDownSideDone",
    "orientationCalDownSideVisible",
    "orientationCalUpsideDownSideVisible",
    "orientationCalLeftSideVisible",
    "orientationCalRightSideVisible",
    "orientationCalNoseDownSideVisible",
    "orientationCalTailDownSideVisible",
    "orientationCalDownSideInProgress",
    "orientationCalUpsideDownSideInProgress",
    "orientationCalLeftSideInProgress",
    "orientationCalRightSideInProgress",
    "orientationCalNoseDownSideInProgress",
    "orientationCalTailDownSideInProgress",
    "orientationCalDownSideRotate",
    "orientationCalUpsideDownSideRotate",
    "orientationCalLeftSideRotate",
    "orientationCalRightSideRotate",
    "orientationCalNoseDownSideRotate",
    "orientationCalTailDownSideRotate",
    "waitingForCancel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS_t {
    uint offsetsAndSizes[184];
    char stringdata0[30];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[31];
    char stringdata5[34];
    char stringdata6[37];
    char stringdata7[33];
    char stringdata8[20];
    char stringdata9[24];
    char stringdata10[19];
    char stringdata11[20];
    char stringdata12[28];
    char stringdata13[8];
    char stringdata14[28];
    char stringdata15[21];
    char stringdata16[28];
    char stringdata17[21];
    char stringdata18[28];
    char stringdata19[21];
    char stringdata20[26];
    char stringdata21[19];
    char stringdata22[26];
    char stringdata23[19];
    char stringdata24[26];
    char stringdata25[19];
    char stringdata26[24];
    char stringdata27[8];
    char stringdata28[22];
    char stringdata29[6];
    char stringdata30[7];
    char stringdata31[9];
    char stringdata32[5];
    char stringdata33[24];
    char stringdata34[15];
    char stringdata35[5];
    char stringdata36[18];
    char stringdata37[8];
    char stringdata38[18];
    char stringdata39[10];
    char stringdata40[10];
    char stringdata41[8];
    char stringdata42[7];
    char stringdata43[21];
    char stringdata44[17];
    char stringdata45[15];
    char stringdata46[17];
    char stringdata47[22];
    char stringdata48[4];
    char stringdata49[4];
    char stringdata50[5];
    char stringdata51[14];
    char stringdata52[27];
    char stringdata53[13];
    char stringdata54[18];
    char stringdata55[18];
    char stringdata56[12];
    char stringdata57[13];
    char stringdata58[10];
    char stringdata59[12];
    char stringdata60[12];
    char stringdata61[11];
    char stringdata62[13];
    char stringdata63[27];
    char stringdata64[19];
    char stringdata65[17];
    char stringdata66[23];
    char stringdata67[27];
    char stringdata68[33];
    char stringdata69[27];
    char stringdata70[28];
    char stringdata71[31];
    char stringdata72[31];
    char stringdata73[30];
    char stringdata74[36];
    char stringdata75[30];
    char stringdata76[31];
    char stringdata77[34];
    char stringdata78[34];
    char stringdata79[33];
    char stringdata80[39];
    char stringdata81[33];
    char stringdata82[34];
    char stringdata83[37];
    char stringdata84[37];
    char stringdata85[29];
    char stringdata86[35];
    char stringdata87[29];
    char stringdata88[30];
    char stringdata89[33];
    char stringdata90[33];
    char stringdata91[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "APMSensorsComponentController"
        QT_MOC_LITERAL(30, 22),  // "showGyroCalAreaChanged"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 29),  // "showOrientationCalAreaChanged"
        QT_MOC_LITERAL(84, 30),  // "orientationCalSidesDoneChanged"
        QT_MOC_LITERAL(115, 33),  // "orientationCalSidesVisibleCha..."
        QT_MOC_LITERAL(149, 36),  // "orientationCalSidesInProgress..."
        QT_MOC_LITERAL(186, 32),  // "orientationCalSidesRotateChanged"
        QT_MOC_LITERAL(219, 19),  // "resetStatusTextArea"
        QT_MOC_LITERAL(239, 23),  // "waitingForCancelChanged"
        QT_MOC_LITERAL(263, 18),  // "setupNeededChanged"
        QT_MOC_LITERAL(282, 19),  // "calibrationComplete"
        QT_MOC_LITERAL(302, 27),  // "QGCMAVLink::CalibrationType"
        QT_MOC_LITERAL(330, 7),  // "calType"
        QT_MOC_LITERAL(338, 27),  // "compass1CalSucceededChanged"
        QT_MOC_LITERAL(366, 20),  // "compass1CalSucceeded"
        QT_MOC_LITERAL(387, 27),  // "compass2CalSucceededChanged"
        QT_MOC_LITERAL(415, 20),  // "compass2CalSucceeded"
        QT_MOC_LITERAL(436, 27),  // "compass3CalSucceededChanged"
        QT_MOC_LITERAL(464, 20),  // "compass3CalSucceeded"
        QT_MOC_LITERAL(485, 25),  // "compass1CalFitnessChanged"
        QT_MOC_LITERAL(511, 18),  // "compass1CalFitness"
        QT_MOC_LITERAL(530, 25),  // "compass2CalFitnessChanged"
        QT_MOC_LITERAL(556, 18),  // "compass2CalFitness"
        QT_MOC_LITERAL(575, 25),  // "compass3CalFitnessChanged"
        QT_MOC_LITERAL(601, 18),  // "compass3CalFitness"
        QT_MOC_LITERAL(620, 23),  // "setAllCalButtonsEnabled"
        QT_MOC_LITERAL(644, 7),  // "enabled"
        QT_MOC_LITERAL(652, 21),  // "_handleUASTextMessage"
        QT_MOC_LITERAL(674, 5),  // "uasId"
        QT_MOC_LITERAL(680, 6),  // "compId"
        QT_MOC_LITERAL(687, 8),  // "severity"
        QT_MOC_LITERAL(696, 4),  // "text"
        QT_MOC_LITERAL(701, 23),  // "_mavlinkMessageReceived"
        QT_MOC_LITERAL(725, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(740, 4),  // "link"
        QT_MOC_LITERAL(745, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(763, 7),  // "message"
        QT_MOC_LITERAL(771, 17),  // "_mavCommandResult"
        QT_MOC_LITERAL(789, 9),  // "vehicleId"
        QT_MOC_LITERAL(799, 9),  // "component"
        QT_MOC_LITERAL(809, 7),  // "command"
        QT_MOC_LITERAL(817, 6),  // "result"
        QT_MOC_LITERAL(824, 20),  // "noReponseFromVehicle"
        QT_MOC_LITERAL(845, 16),  // "calibrateCompass"
        QT_MOC_LITERAL(862, 14),  // "calibrateAccel"
        QT_MOC_LITERAL(877, 16),  // "doSimpleAccelCal"
        QT_MOC_LITERAL(894, 21),  // "calibrateCompassNorth"
        QT_MOC_LITERAL(916, 3),  // "lat"
        QT_MOC_LITERAL(920, 3),  // "lon"
        QT_MOC_LITERAL(924, 4),  // "mask"
        QT_MOC_LITERAL(929, 13),  // "calibrateGyro"
        QT_MOC_LITERAL(943, 26),  // "calibrateMotorInterference"
        QT_MOC_LITERAL(970, 12),  // "levelHorizon"
        QT_MOC_LITERAL(983, 17),  // "calibratePressure"
        QT_MOC_LITERAL(1001, 17),  // "cancelCalibration"
        QT_MOC_LITERAL(1019, 11),  // "nextClicked"
        QT_MOC_LITERAL(1031, 12),  // "usingUDPLink"
        QT_MOC_LITERAL(1044, 9),  // "statusLog"
        QT_MOC_LITERAL(1054, 11),  // "QQuickItem*"
        QT_MOC_LITERAL(1066, 11),  // "progressBar"
        QT_MOC_LITERAL(1078, 10),  // "nextButton"
        QT_MOC_LITERAL(1089, 12),  // "cancelButton"
        QT_MOC_LITERAL(1102, 26),  // "orientationCalAreaHelpText"
        QT_MOC_LITERAL(1129, 18),  // "compassSetupNeeded"
        QT_MOC_LITERAL(1148, 16),  // "accelSetupNeeded"
        QT_MOC_LITERAL(1165, 22),  // "showOrientationCalArea"
        QT_MOC_LITERAL(1188, 26),  // "orientationCalDownSideDone"
        QT_MOC_LITERAL(1215, 32),  // "orientationCalUpsideDownSideDone"
        QT_MOC_LITERAL(1248, 26),  // "orientationCalLeftSideDone"
        QT_MOC_LITERAL(1275, 27),  // "orientationCalRightSideDone"
        QT_MOC_LITERAL(1303, 30),  // "orientationCalNoseDownSideDone"
        QT_MOC_LITERAL(1334, 30),  // "orientationCalTailDownSideDone"
        QT_MOC_LITERAL(1365, 29),  // "orientationCalDownSideVisible"
        QT_MOC_LITERAL(1395, 35),  // "orientationCalUpsideDownSideV..."
        QT_MOC_LITERAL(1431, 29),  // "orientationCalLeftSideVisible"
        QT_MOC_LITERAL(1461, 30),  // "orientationCalRightSideVisible"
        QT_MOC_LITERAL(1492, 33),  // "orientationCalNoseDownSideVis..."
        QT_MOC_LITERAL(1526, 33),  // "orientationCalTailDownSideVis..."
        QT_MOC_LITERAL(1560, 32),  // "orientationCalDownSideInProgress"
        QT_MOC_LITERAL(1593, 38),  // "orientationCalUpsideDownSideI..."
        QT_MOC_LITERAL(1632, 32),  // "orientationCalLeftSideInProgress"
        QT_MOC_LITERAL(1665, 33),  // "orientationCalRightSideInProg..."
        QT_MOC_LITERAL(1699, 36),  // "orientationCalNoseDownSideInP..."
        QT_MOC_LITERAL(1736, 36),  // "orientationCalTailDownSideInP..."
        QT_MOC_LITERAL(1773, 28),  // "orientationCalDownSideRotate"
        QT_MOC_LITERAL(1802, 34),  // "orientationCalUpsideDownSideR..."
        QT_MOC_LITERAL(1837, 28),  // "orientationCalLeftSideRotate"
        QT_MOC_LITERAL(1866, 29),  // "orientationCalRightSideRotate"
        QT_MOC_LITERAL(1896, 32),  // "orientationCalNoseDownSideRotate"
        QT_MOC_LITERAL(1929, 32),  // "orientationCalTailDownSideRotate"
        QT_MOC_LITERAL(1962, 16)   // "waitingForCancel"
    },
    "APMSensorsComponentController",
    "showGyroCalAreaChanged",
    "",
    "showOrientationCalAreaChanged",
    "orientationCalSidesDoneChanged",
    "orientationCalSidesVisibleChanged",
    "orientationCalSidesInProgressChanged",
    "orientationCalSidesRotateChanged",
    "resetStatusTextArea",
    "waitingForCancelChanged",
    "setupNeededChanged",
    "calibrationComplete",
    "QGCMAVLink::CalibrationType",
    "calType",
    "compass1CalSucceededChanged",
    "compass1CalSucceeded",
    "compass2CalSucceededChanged",
    "compass2CalSucceeded",
    "compass3CalSucceededChanged",
    "compass3CalSucceeded",
    "compass1CalFitnessChanged",
    "compass1CalFitness",
    "compass2CalFitnessChanged",
    "compass2CalFitness",
    "compass3CalFitnessChanged",
    "compass3CalFitness",
    "setAllCalButtonsEnabled",
    "enabled",
    "_handleUASTextMessage",
    "uasId",
    "compId",
    "severity",
    "text",
    "_mavlinkMessageReceived",
    "LinkInterface*",
    "link",
    "mavlink_message_t",
    "message",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "calibrateCompass",
    "calibrateAccel",
    "doSimpleAccelCal",
    "calibrateCompassNorth",
    "lat",
    "lon",
    "mask",
    "calibrateGyro",
    "calibrateMotorInterference",
    "levelHorizon",
    "calibratePressure",
    "cancelCalibration",
    "nextClicked",
    "usingUDPLink",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "nextButton",
    "cancelButton",
    "orientationCalAreaHelpText",
    "compassSetupNeeded",
    "accelSetupNeeded",
    "showOrientationCalArea",
    "orientationCalDownSideDone",
    "orientationCalUpsideDownSideDone",
    "orientationCalLeftSideDone",
    "orientationCalRightSideDone",
    "orientationCalNoseDownSideDone",
    "orientationCalTailDownSideDone",
    "orientationCalDownSideVisible",
    "orientationCalUpsideDownSideVisible",
    "orientationCalLeftSideVisible",
    "orientationCalRightSideVisible",
    "orientationCalNoseDownSideVisible",
    "orientationCalTailDownSideVisible",
    "orientationCalDownSideInProgress",
    "orientationCalUpsideDownSideInProgress",
    "orientationCalLeftSideInProgress",
    "orientationCalRightSideInProgress",
    "orientationCalNoseDownSideInProgress",
    "orientationCalTailDownSideInProgress",
    "orientationCalDownSideRotate",
    "orientationCalUpsideDownSideRotate",
    "orientationCalLeftSideRotate",
    "orientationCalRightSideRotate",
    "orientationCalNoseDownSideRotate",
    "orientationCalTailDownSideRotate",
    "waitingForCancel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMSensorsComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      39,  270, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  194,    2, 0x06,   40 /* Public */,
       3,    0,  195,    2, 0x06,   41 /* Public */,
       4,    0,  196,    2, 0x06,   42 /* Public */,
       5,    0,  197,    2, 0x06,   43 /* Public */,
       6,    0,  198,    2, 0x06,   44 /* Public */,
       7,    0,  199,    2, 0x06,   45 /* Public */,
       8,    0,  200,    2, 0x06,   46 /* Public */,
       9,    0,  201,    2, 0x06,   47 /* Public */,
      10,    0,  202,    2, 0x06,   48 /* Public */,
      11,    1,  203,    2, 0x06,   49 /* Public */,
      14,    1,  206,    2, 0x06,   51 /* Public */,
      16,    1,  209,    2, 0x06,   53 /* Public */,
      18,    1,  212,    2, 0x06,   55 /* Public */,
      20,    1,  215,    2, 0x06,   57 /* Public */,
      22,    1,  218,    2, 0x06,   59 /* Public */,
      24,    1,  221,    2, 0x06,   61 /* Public */,
      26,    1,  224,    2, 0x06,   63 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    4,  227,    2, 0x08,   65 /* Private */,
      33,    2,  236,    2, 0x08,   70 /* Private */,
      38,    5,  241,    2, 0x08,   73 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      44,    0,  252,    2, 0x02,   79 /* Public */,
      45,    1,  253,    2, 0x02,   80 /* Public */,
      47,    3,  256,    2, 0x02,   82 /* Public */,
      51,    0,  263,    2, 0x02,   86 /* Public */,
      52,    0,  264,    2, 0x02,   87 /* Public */,
      53,    0,  265,    2, 0x02,   88 /* Public */,
      54,    0,  266,    2, 0x02,   89 /* Public */,
      55,    0,  267,    2, 0x02,   90 /* Public */,
      56,    0,  268,    2, 0x02,   91 /* Public */,
      57,    0,  269,    2, 0x02,   92 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   27,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   29,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 36,   35,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   39,   40,   41,   42,   43,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Int,   48,   49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      58, 0x80000000 | 59, 0x0001500b, uint(-1), 0,
      60, 0x80000000 | 59, 0x0001500b, uint(-1), 0,
      61, 0x80000000 | 59, 0x0001500b, uint(-1), 0,
      62, 0x80000000 | 59, 0x0001500b, uint(-1), 0,
      63, 0x80000000 | 59, 0x0001500b, uint(-1), 0,
      64, QMetaType::Bool, 0x00015001, uint(8), 0,
      65, QMetaType::Bool, 0x00015001, uint(8), 0,
      66, QMetaType::Bool, 0x00015003, uint(1), 0,
      67, QMetaType::Bool, 0x00015003, uint(2), 0,
      68, QMetaType::Bool, 0x00015003, uint(2), 0,
      69, QMetaType::Bool, 0x00015003, uint(2), 0,
      70, QMetaType::Bool, 0x00015003, uint(2), 0,
      71, QMetaType::Bool, 0x00015003, uint(2), 0,
      72, QMetaType::Bool, 0x00015003, uint(2), 0,
      73, QMetaType::Bool, 0x00015003, uint(3), 0,
      74, QMetaType::Bool, 0x00015003, uint(3), 0,
      75, QMetaType::Bool, 0x00015003, uint(3), 0,
      76, QMetaType::Bool, 0x00015003, uint(3), 0,
      77, QMetaType::Bool, 0x00015003, uint(3), 0,
      78, QMetaType::Bool, 0x00015003, uint(3), 0,
      79, QMetaType::Bool, 0x00015003, uint(4), 0,
      80, QMetaType::Bool, 0x00015003, uint(4), 0,
      81, QMetaType::Bool, 0x00015003, uint(4), 0,
      82, QMetaType::Bool, 0x00015003, uint(4), 0,
      83, QMetaType::Bool, 0x00015003, uint(4), 0,
      84, QMetaType::Bool, 0x00015003, uint(4), 0,
      85, QMetaType::Bool, 0x00015003, uint(5), 0,
      86, QMetaType::Bool, 0x00015003, uint(5), 0,
      87, QMetaType::Bool, 0x00015003, uint(5), 0,
      88, QMetaType::Bool, 0x00015003, uint(5), 0,
      89, QMetaType::Bool, 0x00015003, uint(5), 0,
      90, QMetaType::Bool, 0x00015003, uint(5), 0,
      91, QMetaType::Bool, 0x00015003, uint(7), 0,
      15, QMetaType::Bool, 0x00015001, uint(10), 0,
      17, QMetaType::Bool, 0x00015001, uint(11), 0,
      19, QMetaType::Bool, 0x00015001, uint(12), 0,
      21, QMetaType::Double, 0x00015001, uint(13), 0,
      23, QMetaType::Double, 0x00015001, uint(14), 0,
      25, QMetaType::Double, 0x00015001, uint(15), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMSensorsComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMSensorsComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS_t,
        // property 'statusLog'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'progressBar'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'nextButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'cancelButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'orientationCalAreaHelpText'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'compassSetupNeeded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'accelSetupNeeded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showOrientationCalArea'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalDownSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalUpsideDownSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalLeftSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalRightSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalNoseDownSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalTailDownSideDone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalDownSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalUpsideDownSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalLeftSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalRightSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalNoseDownSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalTailDownSideVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalDownSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalUpsideDownSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalLeftSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalRightSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalNoseDownSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalTailDownSideInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalDownSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalUpsideDownSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalLeftSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalRightSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalNoseDownSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientationCalTailDownSideRotate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'waitingForCancel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'compass1CalSucceeded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'compass2CalSucceeded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'compass3CalSucceeded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'compass1CalFitness'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'compass2CalFitness'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'compass3CalFitness'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMSensorsComponentController, std::true_type>,
        // method 'showGyroCalAreaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showOrientationCalAreaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orientationCalSidesDoneChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orientationCalSidesVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orientationCalSidesInProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orientationCalSidesRotateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetStatusTextArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'waitingForCancelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupNeededChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrationComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCMAVLink::CalibrationType, std::false_type>,
        // method 'compass1CalSucceededChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compass2CalSucceededChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compass3CalSucceededChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'compass1CalFitnessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'compass2CalFitnessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'compass3CalFitnessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setAllCalButtonsEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_handleUASTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_mavlinkMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method '_mavCommandResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'calibrateCompass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateAccel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'calibrateCompassNorth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'calibrateGyro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateMotorInterference'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'levelHorizon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibratePressure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelCalibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usingUDPLink'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void APMSensorsComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showGyroCalAreaChanged(); break;
        case 1: _t->showOrientationCalAreaChanged(); break;
        case 2: _t->orientationCalSidesDoneChanged(); break;
        case 3: _t->orientationCalSidesVisibleChanged(); break;
        case 4: _t->orientationCalSidesInProgressChanged(); break;
        case 5: _t->orientationCalSidesRotateChanged(); break;
        case 6: _t->resetStatusTextArea(); break;
        case 7: _t->waitingForCancelChanged(); break;
        case 8: _t->setupNeededChanged(); break;
        case 9: _t->calibrationComplete((*reinterpret_cast< std::add_pointer_t<QGCMAVLink::CalibrationType>>(_a[1]))); break;
        case 10: _t->compass1CalSucceededChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->compass2CalSucceededChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->compass3CalSucceededChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->compass1CalFitnessChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->compass2CalFitnessChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->compass3CalFitnessChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->setAllCalButtonsEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->_handleUASTextMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 18: _t->_mavlinkMessageReceived((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[2]))); break;
        case 19: _t->_mavCommandResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 20: _t->calibrateCompass(); break;
        case 21: _t->calibrateAccel((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->calibrateCompassNorth((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 23: _t->calibrateGyro(); break;
        case 24: _t->calibrateMotorInterference(); break;
        case 25: _t->levelHorizon(); break;
        case 26: _t->calibratePressure(); break;
        case 27: _t->cancelCalibration(); break;
        case 28: _t->nextClicked(); break;
        case 29: { bool _r = _t->usingUDPLink();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::showGyroCalAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::showOrientationCalAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::orientationCalSidesDoneChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::orientationCalSidesVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::orientationCalSidesInProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::orientationCalSidesRotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::resetStatusTextArea; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::waitingForCancelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)();
            if (_t _q_method = &APMSensorsComponentController::setupNeededChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(QGCMAVLink::CalibrationType );
            if (_t _q_method = &APMSensorsComponentController::calibrationComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (_t _q_method = &APMSensorsComponentController::compass1CalSucceededChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (_t _q_method = &APMSensorsComponentController::compass2CalSucceededChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (_t _q_method = &APMSensorsComponentController::compass3CalSucceededChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (_t _q_method = &APMSensorsComponentController::compass1CalFitnessChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (_t _q_method = &APMSensorsComponentController::compass2CalFitnessChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(double );
            if (_t _q_method = &APMSensorsComponentController::compass3CalFitnessChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (APMSensorsComponentController::*)(bool );
            if (_t _q_method = &APMSensorsComponentController::setAllCalButtonsEnabled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusLog; break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->_progressBar; break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_nextButton; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->_orientationCalAreaHelpText; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->compassSetupNeeded(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->accelSetupNeeded(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->_showOrientationCalArea; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideDone; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideDone; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideDone; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideDone; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideDone; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideDone; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideVisible; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideVisible; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideVisible; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideVisible; break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideVisible; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideVisible; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideInProgress; break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideInProgress; break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideInProgress; break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideInProgress; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideInProgress; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideInProgress; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideRotate; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideRotate; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideRotate; break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideRotate; break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideRotate; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideRotate; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_waitingForCancel; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->compass1CalSucceeded(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->compass2CalSucceeded(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->compass3CalSucceeded(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->compass1CalFitness(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->compass2CalFitness(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->compass3CalFitness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<APMSensorsComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_statusLog != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_statusLog = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 1:
            if (_t->_progressBar != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_progressBar = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 2:
            if (_t->_nextButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_nextButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 4:
            if (_t->_orientationCalAreaHelpText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_orientationCalAreaHelpText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 7:
            if (_t->_showOrientationCalArea != *reinterpret_cast< bool*>(_v)) {
                _t->_showOrientationCalArea = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showOrientationCalAreaChanged();
            }
            break;
        case 8:
            if (_t->_orientationCalDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 9:
            if (_t->_orientationCalUpsideDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 10:
            if (_t->_orientationCalLeftSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 11:
            if (_t->_orientationCalRightSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 12:
            if (_t->_orientationCalNoseDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 13:
            if (_t->_orientationCalTailDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 14:
            if (_t->_orientationCalDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 15:
            if (_t->_orientationCalUpsideDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 16:
            if (_t->_orientationCalLeftSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 17:
            if (_t->_orientationCalRightSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 18:
            if (_t->_orientationCalNoseDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 19:
            if (_t->_orientationCalTailDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 20:
            if (_t->_orientationCalDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 21:
            if (_t->_orientationCalUpsideDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 22:
            if (_t->_orientationCalLeftSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 23:
            if (_t->_orientationCalRightSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 24:
            if (_t->_orientationCalNoseDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 25:
            if (_t->_orientationCalTailDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 26:
            if (_t->_orientationCalDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 27:
            if (_t->_orientationCalUpsideDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 28:
            if (_t->_orientationCalLeftSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 29:
            if (_t->_orientationCalRightSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 30:
            if (_t->_orientationCalNoseDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 31:
            if (_t->_orientationCalTailDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 32:
            if (_t->_waitingForCancel != *reinterpret_cast< bool*>(_v)) {
                _t->_waitingForCancel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->waitingForCancelChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *APMSensorsComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMSensorsComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMSensorsComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMSensorsComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void APMSensorsComponentController::showGyroCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMSensorsComponentController::showOrientationCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void APMSensorsComponentController::orientationCalSidesDoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void APMSensorsComponentController::orientationCalSidesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void APMSensorsComponentController::orientationCalSidesInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void APMSensorsComponentController::orientationCalSidesRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void APMSensorsComponentController::resetStatusTextArea()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void APMSensorsComponentController::waitingForCancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void APMSensorsComponentController::setupNeededChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void APMSensorsComponentController::calibrationComplete(QGCMAVLink::CalibrationType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void APMSensorsComponentController::compass1CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void APMSensorsComponentController::compass2CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void APMSensorsComponentController::compass3CalSucceededChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void APMSensorsComponentController::compass1CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void APMSensorsComponentController::compass2CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void APMSensorsComponentController::compass3CalFitnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void APMSensorsComponentController::setAllCalButtonsEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
