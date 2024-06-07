/****************************************************************************
** Meta object code from reading C++ file 'SensorsComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/SensorsComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SensorsComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS = QtMocHelpers::stringData(
    "SensorsComponentController",
    "showGyroCalAreaChanged",
    "",
    "showOrientationCalAreaChanged",
    "orientationCalSidesDoneChanged",
    "orientationCalSidesVisibleChanged",
    "orientationCalSidesInProgressChanged",
    "orientationCalSidesRotateChanged",
    "resetStatusTextArea",
    "waitingForCancelChanged",
    "magCalComplete",
    "_handleUASTextMessage",
    "uasId",
    "compId",
    "severity",
    "text",
    "_handleParametersReset",
    "success",
    "calibrateCompass",
    "calibrateGyro",
    "calibrateAccel",
    "calibrateLevel",
    "calibrateAirspeed",
    "cancelCalibration",
    "usingUDPLink",
    "resetFactoryParameters",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "compassButton",
    "gyroButton",
    "accelButton",
    "airspeedButton",
    "levelButton",
    "cancelButton",
    "setOrientationsButton",
    "orientationCalAreaHelpText",
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
struct qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS_t {
    uint offsetsAndSizes[126];
    char stringdata0[27];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[31];
    char stringdata5[34];
    char stringdata6[37];
    char stringdata7[33];
    char stringdata8[20];
    char stringdata9[24];
    char stringdata10[15];
    char stringdata11[22];
    char stringdata12[6];
    char stringdata13[7];
    char stringdata14[9];
    char stringdata15[5];
    char stringdata16[23];
    char stringdata17[8];
    char stringdata18[17];
    char stringdata19[14];
    char stringdata20[15];
    char stringdata21[15];
    char stringdata22[18];
    char stringdata23[18];
    char stringdata24[13];
    char stringdata25[23];
    char stringdata26[10];
    char stringdata27[12];
    char stringdata28[12];
    char stringdata29[14];
    char stringdata30[11];
    char stringdata31[12];
    char stringdata32[15];
    char stringdata33[12];
    char stringdata34[13];
    char stringdata35[22];
    char stringdata36[27];
    char stringdata37[23];
    char stringdata38[27];
    char stringdata39[33];
    char stringdata40[27];
    char stringdata41[28];
    char stringdata42[31];
    char stringdata43[31];
    char stringdata44[30];
    char stringdata45[36];
    char stringdata46[30];
    char stringdata47[31];
    char stringdata48[34];
    char stringdata49[34];
    char stringdata50[33];
    char stringdata51[39];
    char stringdata52[33];
    char stringdata53[34];
    char stringdata54[37];
    char stringdata55[37];
    char stringdata56[29];
    char stringdata57[35];
    char stringdata58[29];
    char stringdata59[30];
    char stringdata60[33];
    char stringdata61[33];
    char stringdata62[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS_t qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "SensorsComponentController"
        QT_MOC_LITERAL(27, 22),  // "showGyroCalAreaChanged"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 29),  // "showOrientationCalAreaChanged"
        QT_MOC_LITERAL(81, 30),  // "orientationCalSidesDoneChanged"
        QT_MOC_LITERAL(112, 33),  // "orientationCalSidesVisibleCha..."
        QT_MOC_LITERAL(146, 36),  // "orientationCalSidesInProgress..."
        QT_MOC_LITERAL(183, 32),  // "orientationCalSidesRotateChanged"
        QT_MOC_LITERAL(216, 19),  // "resetStatusTextArea"
        QT_MOC_LITERAL(236, 23),  // "waitingForCancelChanged"
        QT_MOC_LITERAL(260, 14),  // "magCalComplete"
        QT_MOC_LITERAL(275, 21),  // "_handleUASTextMessage"
        QT_MOC_LITERAL(297, 5),  // "uasId"
        QT_MOC_LITERAL(303, 6),  // "compId"
        QT_MOC_LITERAL(310, 8),  // "severity"
        QT_MOC_LITERAL(319, 4),  // "text"
        QT_MOC_LITERAL(324, 22),  // "_handleParametersReset"
        QT_MOC_LITERAL(347, 7),  // "success"
        QT_MOC_LITERAL(355, 16),  // "calibrateCompass"
        QT_MOC_LITERAL(372, 13),  // "calibrateGyro"
        QT_MOC_LITERAL(386, 14),  // "calibrateAccel"
        QT_MOC_LITERAL(401, 14),  // "calibrateLevel"
        QT_MOC_LITERAL(416, 17),  // "calibrateAirspeed"
        QT_MOC_LITERAL(434, 17),  // "cancelCalibration"
        QT_MOC_LITERAL(452, 12),  // "usingUDPLink"
        QT_MOC_LITERAL(465, 22),  // "resetFactoryParameters"
        QT_MOC_LITERAL(488, 9),  // "statusLog"
        QT_MOC_LITERAL(498, 11),  // "QQuickItem*"
        QT_MOC_LITERAL(510, 11),  // "progressBar"
        QT_MOC_LITERAL(522, 13),  // "compassButton"
        QT_MOC_LITERAL(536, 10),  // "gyroButton"
        QT_MOC_LITERAL(547, 11),  // "accelButton"
        QT_MOC_LITERAL(559, 14),  // "airspeedButton"
        QT_MOC_LITERAL(574, 11),  // "levelButton"
        QT_MOC_LITERAL(586, 12),  // "cancelButton"
        QT_MOC_LITERAL(599, 21),  // "setOrientationsButton"
        QT_MOC_LITERAL(621, 26),  // "orientationCalAreaHelpText"
        QT_MOC_LITERAL(648, 22),  // "showOrientationCalArea"
        QT_MOC_LITERAL(671, 26),  // "orientationCalDownSideDone"
        QT_MOC_LITERAL(698, 32),  // "orientationCalUpsideDownSideDone"
        QT_MOC_LITERAL(731, 26),  // "orientationCalLeftSideDone"
        QT_MOC_LITERAL(758, 27),  // "orientationCalRightSideDone"
        QT_MOC_LITERAL(786, 30),  // "orientationCalNoseDownSideDone"
        QT_MOC_LITERAL(817, 30),  // "orientationCalTailDownSideDone"
        QT_MOC_LITERAL(848, 29),  // "orientationCalDownSideVisible"
        QT_MOC_LITERAL(878, 35),  // "orientationCalUpsideDownSideV..."
        QT_MOC_LITERAL(914, 29),  // "orientationCalLeftSideVisible"
        QT_MOC_LITERAL(944, 30),  // "orientationCalRightSideVisible"
        QT_MOC_LITERAL(975, 33),  // "orientationCalNoseDownSideVis..."
        QT_MOC_LITERAL(1009, 33),  // "orientationCalTailDownSideVis..."
        QT_MOC_LITERAL(1043, 32),  // "orientationCalDownSideInProgress"
        QT_MOC_LITERAL(1076, 38),  // "orientationCalUpsideDownSideI..."
        QT_MOC_LITERAL(1115, 32),  // "orientationCalLeftSideInProgress"
        QT_MOC_LITERAL(1148, 33),  // "orientationCalRightSideInProg..."
        QT_MOC_LITERAL(1182, 36),  // "orientationCalNoseDownSideInP..."
        QT_MOC_LITERAL(1219, 36),  // "orientationCalTailDownSideInP..."
        QT_MOC_LITERAL(1256, 28),  // "orientationCalDownSideRotate"
        QT_MOC_LITERAL(1285, 34),  // "orientationCalUpsideDownSideR..."
        QT_MOC_LITERAL(1320, 28),  // "orientationCalLeftSideRotate"
        QT_MOC_LITERAL(1349, 29),  // "orientationCalRightSideRotate"
        QT_MOC_LITERAL(1379, 32),  // "orientationCalNoseDownSideRotate"
        QT_MOC_LITERAL(1412, 32),  // "orientationCalTailDownSideRotate"
        QT_MOC_LITERAL(1445, 16)   // "waitingForCancel"
    },
    "SensorsComponentController",
    "showGyroCalAreaChanged",
    "",
    "showOrientationCalAreaChanged",
    "orientationCalSidesDoneChanged",
    "orientationCalSidesVisibleChanged",
    "orientationCalSidesInProgressChanged",
    "orientationCalSidesRotateChanged",
    "resetStatusTextArea",
    "waitingForCancelChanged",
    "magCalComplete",
    "_handleUASTextMessage",
    "uasId",
    "compId",
    "severity",
    "text",
    "_handleParametersReset",
    "success",
    "calibrateCompass",
    "calibrateGyro",
    "calibrateAccel",
    "calibrateLevel",
    "calibrateAirspeed",
    "cancelCalibration",
    "usingUDPLink",
    "resetFactoryParameters",
    "statusLog",
    "QQuickItem*",
    "progressBar",
    "compassButton",
    "gyroButton",
    "accelButton",
    "airspeedButton",
    "levelButton",
    "cancelButton",
    "setOrientationsButton",
    "orientationCalAreaHelpText",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSSensorsComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      36,  157, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,   37 /* Public */,
       3,    0,  129,    2, 0x06,   38 /* Public */,
       4,    0,  130,    2, 0x06,   39 /* Public */,
       5,    0,  131,    2, 0x06,   40 /* Public */,
       6,    0,  132,    2, 0x06,   41 /* Public */,
       7,    0,  133,    2, 0x06,   42 /* Public */,
       8,    0,  134,    2, 0x06,   43 /* Public */,
       9,    0,  135,    2, 0x06,   44 /* Public */,
      10,    0,  136,    2, 0x06,   45 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    4,  137,    2, 0x08,   46 /* Private */,
      16,    1,  146,    2, 0x08,   51 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  149,    2, 0x02,   53 /* Public */,
      19,    0,  150,    2, 0x02,   54 /* Public */,
      20,    0,  151,    2, 0x02,   55 /* Public */,
      21,    0,  152,    2, 0x02,   56 /* Public */,
      22,    0,  153,    2, 0x02,   57 /* Public */,
      23,    0,  154,    2, 0x02,   58 /* Public */,
      24,    0,  155,    2, 0x02,   59 /* Public */,
      25,    0,  156,    2, 0x02,   60 /* Public */,

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

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Bool,   17,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
      26, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      28, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      29, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      30, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      31, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      32, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      33, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      34, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      35, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      36, 0x80000000 | 27, 0x0001500b, uint(-1), 0,
      37, QMetaType::Bool, 0x00015003, uint(1), 0,
      38, QMetaType::Bool, 0x00015003, uint(2), 0,
      39, QMetaType::Bool, 0x00015003, uint(2), 0,
      40, QMetaType::Bool, 0x00015003, uint(2), 0,
      41, QMetaType::Bool, 0x00015003, uint(2), 0,
      42, QMetaType::Bool, 0x00015003, uint(2), 0,
      43, QMetaType::Bool, 0x00015003, uint(2), 0,
      44, QMetaType::Bool, 0x00015003, uint(3), 0,
      45, QMetaType::Bool, 0x00015003, uint(3), 0,
      46, QMetaType::Bool, 0x00015003, uint(3), 0,
      47, QMetaType::Bool, 0x00015003, uint(3), 0,
      48, QMetaType::Bool, 0x00015003, uint(3), 0,
      49, QMetaType::Bool, 0x00015003, uint(3), 0,
      50, QMetaType::Bool, 0x00015003, uint(4), 0,
      51, QMetaType::Bool, 0x00015003, uint(4), 0,
      52, QMetaType::Bool, 0x00015003, uint(4), 0,
      53, QMetaType::Bool, 0x00015003, uint(4), 0,
      54, QMetaType::Bool, 0x00015003, uint(4), 0,
      55, QMetaType::Bool, 0x00015003, uint(4), 0,
      56, QMetaType::Bool, 0x00015003, uint(5), 0,
      57, QMetaType::Bool, 0x00015003, uint(5), 0,
      58, QMetaType::Bool, 0x00015003, uint(5), 0,
      59, QMetaType::Bool, 0x00015003, uint(5), 0,
      60, QMetaType::Bool, 0x00015003, uint(5), 0,
      61, QMetaType::Bool, 0x00015003, uint(5), 0,
      62, QMetaType::Bool, 0x00015003, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SensorsComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSensorsComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS_t,
        // property 'statusLog'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'progressBar'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'compassButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'gyroButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'accelButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'airspeedButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'levelButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'cancelButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'setOrientationsButton'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'orientationCalAreaHelpText'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
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
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SensorsComponentController, std::true_type>,
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
        // method 'magCalComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_handleUASTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_handleParametersReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'calibrateCompass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateGyro'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateAccel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateAirspeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelCalibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usingUDPLink'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resetFactoryParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SensorsComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SensorsComponentController *>(_o);
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
        case 8: _t->magCalComplete(); break;
        case 9: _t->_handleUASTextMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 10: _t->_handleParametersReset((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->calibrateCompass(); break;
        case 12: _t->calibrateGyro(); break;
        case 13: _t->calibrateAccel(); break;
        case 14: _t->calibrateLevel(); break;
        case 15: _t->calibrateAirspeed(); break;
        case 16: _t->cancelCalibration(); break;
        case 17: { bool _r = _t->usingUDPLink();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->resetFactoryParameters(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::showGyroCalAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::showOrientationCalAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::orientationCalSidesDoneChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::orientationCalSidesVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::orientationCalSidesInProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::orientationCalSidesRotateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::resetStatusTextArea; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::waitingForCancelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SensorsComponentController::*)();
            if (_t _q_method = &SensorsComponentController::magCalComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SensorsComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusLog; break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->_progressBar; break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_compassButton; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_gyroButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->_accelButton; break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->_airspeedButton; break;
        case 6: *reinterpret_cast< QQuickItem**>(_v) = _t->_levelButton; break;
        case 7: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 8: *reinterpret_cast< QQuickItem**>(_v) = _t->_setOrientationsButton; break;
        case 9: *reinterpret_cast< QQuickItem**>(_v) = _t->_orientationCalAreaHelpText; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->_showOrientationCalArea; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideDone; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideDone; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideDone; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideDone; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideDone; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideDone; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideVisible; break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideVisible; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideVisible; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideVisible; break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideVisible; break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideVisible; break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideInProgress; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideInProgress; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideInProgress; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideInProgress; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideInProgress; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideInProgress; break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideRotate; break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideRotate; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideRotate; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideRotate; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideRotate; break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideRotate; break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->_waitingForCancel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SensorsComponentController *>(_o);
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
            if (_t->_compassButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_compassButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_t->_gyroButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_gyroButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 4:
            if (_t->_accelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_accelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 5:
            if (_t->_airspeedButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_airspeedButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 6:
            if (_t->_levelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_levelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 7:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 8:
            if (_t->_setOrientationsButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_setOrientationsButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 9:
            if (_t->_orientationCalAreaHelpText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_orientationCalAreaHelpText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 10:
            if (_t->_showOrientationCalArea != *reinterpret_cast< bool*>(_v)) {
                _t->_showOrientationCalArea = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showOrientationCalAreaChanged();
            }
            break;
        case 11:
            if (_t->_orientationCalDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 12:
            if (_t->_orientationCalUpsideDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 13:
            if (_t->_orientationCalLeftSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 14:
            if (_t->_orientationCalRightSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 15:
            if (_t->_orientationCalNoseDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 16:
            if (_t->_orientationCalTailDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 17:
            if (_t->_orientationCalDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 18:
            if (_t->_orientationCalUpsideDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 19:
            if (_t->_orientationCalLeftSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 20:
            if (_t->_orientationCalRightSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 21:
            if (_t->_orientationCalNoseDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 22:
            if (_t->_orientationCalTailDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 23:
            if (_t->_orientationCalDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 24:
            if (_t->_orientationCalUpsideDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 25:
            if (_t->_orientationCalLeftSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 26:
            if (_t->_orientationCalRightSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 27:
            if (_t->_orientationCalNoseDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 28:
            if (_t->_orientationCalTailDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 29:
            if (_t->_orientationCalDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 30:
            if (_t->_orientationCalUpsideDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 31:
            if (_t->_orientationCalLeftSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 32:
            if (_t->_orientationCalRightSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 33:
            if (_t->_orientationCalNoseDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 34:
            if (_t->_orientationCalTailDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 35:
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

const QMetaObject *SensorsComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SensorsComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSensorsComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int SensorsComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void SensorsComponentController::showGyroCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SensorsComponentController::showOrientationCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SensorsComponentController::orientationCalSidesDoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SensorsComponentController::orientationCalSidesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SensorsComponentController::orientationCalSidesInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SensorsComponentController::orientationCalSidesRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SensorsComponentController::resetStatusTextArea()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SensorsComponentController::waitingForCancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SensorsComponentController::magCalComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
