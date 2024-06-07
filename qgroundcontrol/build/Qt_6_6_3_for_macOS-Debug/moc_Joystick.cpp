/****************************************************************************
** Meta object code from reading C++ file 'Joystick.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Joystick/Joystick.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Joystick.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS = QtMocHelpers::stringData(
    "AssignedButtonAction"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS_t qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20)   // "AssignedButtonAction"
    },
    "AssignedButtonAction"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAssignedButtonActionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject AssignedButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAssignedButtonActionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AssignedButtonAction, std::true_type>
    >,
    nullptr
} };

void AssignedButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AssignedButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignedButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAssignedButtonActionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignedButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS = QtMocHelpers::stringData(
    "AssignableButtonAction",
    "action",
    "canRepeat"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[23];
    char stringdata1[7];
    char stringdata2[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS_t qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "AssignableButtonAction"
        QT_MOC_LITERAL(23, 6),  // "action"
        QT_MOC_LITERAL(30, 9)   // "canRepeat"
    },
    "AssignableButtonAction",
    "action",
    "canRepeat"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAssignableButtonActionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AssignableButtonAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAssignableButtonActionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS_t,
        // property 'action'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'canRepeat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AssignableButtonAction, std::true_type>
    >,
    nullptr
} };

void AssignableButtonAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssignableButtonAction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->action(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRepeat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AssignableButtonAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignableButtonAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAssignableButtonActionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssignableButtonAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSJoystickENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSJoystickENDCLASS = QtMocHelpers::stringData(
    "Joystick",
    "rawAxisValueChanged",
    "",
    "index",
    "value",
    "rawButtonPressedChanged",
    "pressed",
    "calibratedChanged",
    "calibrated",
    "buttonActionsChanged",
    "assignableActionsChanged",
    "throttleModeChanged",
    "mode",
    "negativeThrustChanged",
    "allowNegative",
    "exponentialChanged",
    "exponential",
    "accumulatorChanged",
    "accumulator",
    "enabledChanged",
    "enabled",
    "circleCorrectionChanged",
    "circleCorrection",
    "axisValues",
    "roll",
    "pitch",
    "yaw",
    "throttle",
    "axisFrequencyHzChanged",
    "buttonFrequencyHzChanged",
    "startContinuousZoom",
    "direction",
    "stopContinuousZoom",
    "stepZoom",
    "stepCamera",
    "stepStream",
    "triggerCamera",
    "startVideoRecord",
    "stopVideoRecord",
    "toggleVideoRecord",
    "gimbalPitchStep",
    "gimbalYawStep",
    "centerGimbal",
    "gimbalControlValue",
    "setArmed",
    "arm",
    "setVtolInFwdFlight",
    "set",
    "setFlightMode",
    "flightMode",
    "emergencyStop",
    "gripperAction",
    "GRIPPER_ACTIONS",
    "landingGearDeploy",
    "landingGearRetract",
    "_activeVehicleChanged",
    "Vehicle*",
    "activeVehicle",
    "_vehicleCountChanged",
    "count",
    "_flightModesChanged",
    "setButtonRepeat",
    "button",
    "repeat",
    "getButtonRepeat",
    "setButtonAction",
    "action",
    "getButtonAction",
    "name",
    "totalButtonCount",
    "axisCount",
    "requiresCalibration",
    "buttonActions",
    "assignableActions",
    "QmlObjectListModel*",
    "assignableActionTitles",
    "disabledActionName",
    "throttleMode",
    "axisFrequencyHz",
    "minAxisFrequencyHz",
    "maxAxisFrequencyHz",
    "buttonFrequencyHz",
    "minButtonFrequencyHz",
    "maxButtonFrequencyHz",
    "negativeThrust"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJoystickENDCLASS_t {
    uint offsetsAndSizes[170];
    char stringdata0[9];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[24];
    char stringdata6[8];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[21];
    char stringdata10[25];
    char stringdata11[20];
    char stringdata12[5];
    char stringdata13[22];
    char stringdata14[14];
    char stringdata15[19];
    char stringdata16[12];
    char stringdata17[19];
    char stringdata18[12];
    char stringdata19[15];
    char stringdata20[8];
    char stringdata21[24];
    char stringdata22[17];
    char stringdata23[11];
    char stringdata24[5];
    char stringdata25[6];
    char stringdata26[4];
    char stringdata27[9];
    char stringdata28[23];
    char stringdata29[25];
    char stringdata30[20];
    char stringdata31[10];
    char stringdata32[19];
    char stringdata33[9];
    char stringdata34[11];
    char stringdata35[11];
    char stringdata36[14];
    char stringdata37[17];
    char stringdata38[16];
    char stringdata39[18];
    char stringdata40[16];
    char stringdata41[14];
    char stringdata42[13];
    char stringdata43[19];
    char stringdata44[9];
    char stringdata45[4];
    char stringdata46[19];
    char stringdata47[4];
    char stringdata48[14];
    char stringdata49[11];
    char stringdata50[14];
    char stringdata51[14];
    char stringdata52[16];
    char stringdata53[18];
    char stringdata54[19];
    char stringdata55[22];
    char stringdata56[9];
    char stringdata57[14];
    char stringdata58[21];
    char stringdata59[6];
    char stringdata60[20];
    char stringdata61[16];
    char stringdata62[7];
    char stringdata63[7];
    char stringdata64[16];
    char stringdata65[16];
    char stringdata66[7];
    char stringdata67[16];
    char stringdata68[5];
    char stringdata69[17];
    char stringdata70[10];
    char stringdata71[20];
    char stringdata72[14];
    char stringdata73[18];
    char stringdata74[20];
    char stringdata75[23];
    char stringdata76[19];
    char stringdata77[13];
    char stringdata78[16];
    char stringdata79[19];
    char stringdata80[19];
    char stringdata81[18];
    char stringdata82[21];
    char stringdata83[21];
    char stringdata84[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJoystickENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJoystickENDCLASS_t qt_meta_stringdata_CLASSJoystickENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Joystick"
        QT_MOC_LITERAL(9, 19),  // "rawAxisValueChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "index"
        QT_MOC_LITERAL(36, 5),  // "value"
        QT_MOC_LITERAL(42, 23),  // "rawButtonPressedChanged"
        QT_MOC_LITERAL(66, 7),  // "pressed"
        QT_MOC_LITERAL(74, 17),  // "calibratedChanged"
        QT_MOC_LITERAL(92, 10),  // "calibrated"
        QT_MOC_LITERAL(103, 20),  // "buttonActionsChanged"
        QT_MOC_LITERAL(124, 24),  // "assignableActionsChanged"
        QT_MOC_LITERAL(149, 19),  // "throttleModeChanged"
        QT_MOC_LITERAL(169, 4),  // "mode"
        QT_MOC_LITERAL(174, 21),  // "negativeThrustChanged"
        QT_MOC_LITERAL(196, 13),  // "allowNegative"
        QT_MOC_LITERAL(210, 18),  // "exponentialChanged"
        QT_MOC_LITERAL(229, 11),  // "exponential"
        QT_MOC_LITERAL(241, 18),  // "accumulatorChanged"
        QT_MOC_LITERAL(260, 11),  // "accumulator"
        QT_MOC_LITERAL(272, 14),  // "enabledChanged"
        QT_MOC_LITERAL(287, 7),  // "enabled"
        QT_MOC_LITERAL(295, 23),  // "circleCorrectionChanged"
        QT_MOC_LITERAL(319, 16),  // "circleCorrection"
        QT_MOC_LITERAL(336, 10),  // "axisValues"
        QT_MOC_LITERAL(347, 4),  // "roll"
        QT_MOC_LITERAL(352, 5),  // "pitch"
        QT_MOC_LITERAL(358, 3),  // "yaw"
        QT_MOC_LITERAL(362, 8),  // "throttle"
        QT_MOC_LITERAL(371, 22),  // "axisFrequencyHzChanged"
        QT_MOC_LITERAL(394, 24),  // "buttonFrequencyHzChanged"
        QT_MOC_LITERAL(419, 19),  // "startContinuousZoom"
        QT_MOC_LITERAL(439, 9),  // "direction"
        QT_MOC_LITERAL(449, 18),  // "stopContinuousZoom"
        QT_MOC_LITERAL(468, 8),  // "stepZoom"
        QT_MOC_LITERAL(477, 10),  // "stepCamera"
        QT_MOC_LITERAL(488, 10),  // "stepStream"
        QT_MOC_LITERAL(499, 13),  // "triggerCamera"
        QT_MOC_LITERAL(513, 16),  // "startVideoRecord"
        QT_MOC_LITERAL(530, 15),  // "stopVideoRecord"
        QT_MOC_LITERAL(546, 17),  // "toggleVideoRecord"
        QT_MOC_LITERAL(564, 15),  // "gimbalPitchStep"
        QT_MOC_LITERAL(580, 13),  // "gimbalYawStep"
        QT_MOC_LITERAL(594, 12),  // "centerGimbal"
        QT_MOC_LITERAL(607, 18),  // "gimbalControlValue"
        QT_MOC_LITERAL(626, 8),  // "setArmed"
        QT_MOC_LITERAL(635, 3),  // "arm"
        QT_MOC_LITERAL(639, 18),  // "setVtolInFwdFlight"
        QT_MOC_LITERAL(658, 3),  // "set"
        QT_MOC_LITERAL(662, 13),  // "setFlightMode"
        QT_MOC_LITERAL(676, 10),  // "flightMode"
        QT_MOC_LITERAL(687, 13),  // "emergencyStop"
        QT_MOC_LITERAL(701, 13),  // "gripperAction"
        QT_MOC_LITERAL(715, 15),  // "GRIPPER_ACTIONS"
        QT_MOC_LITERAL(731, 17),  // "landingGearDeploy"
        QT_MOC_LITERAL(749, 18),  // "landingGearRetract"
        QT_MOC_LITERAL(768, 21),  // "_activeVehicleChanged"
        QT_MOC_LITERAL(790, 8),  // "Vehicle*"
        QT_MOC_LITERAL(799, 13),  // "activeVehicle"
        QT_MOC_LITERAL(813, 20),  // "_vehicleCountChanged"
        QT_MOC_LITERAL(834, 5),  // "count"
        QT_MOC_LITERAL(840, 19),  // "_flightModesChanged"
        QT_MOC_LITERAL(860, 15),  // "setButtonRepeat"
        QT_MOC_LITERAL(876, 6),  // "button"
        QT_MOC_LITERAL(883, 6),  // "repeat"
        QT_MOC_LITERAL(890, 15),  // "getButtonRepeat"
        QT_MOC_LITERAL(906, 15),  // "setButtonAction"
        QT_MOC_LITERAL(922, 6),  // "action"
        QT_MOC_LITERAL(929, 15),  // "getButtonAction"
        QT_MOC_LITERAL(945, 4),  // "name"
        QT_MOC_LITERAL(950, 16),  // "totalButtonCount"
        QT_MOC_LITERAL(967, 9),  // "axisCount"
        QT_MOC_LITERAL(977, 19),  // "requiresCalibration"
        QT_MOC_LITERAL(997, 13),  // "buttonActions"
        QT_MOC_LITERAL(1011, 17),  // "assignableActions"
        QT_MOC_LITERAL(1029, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(1049, 22),  // "assignableActionTitles"
        QT_MOC_LITERAL(1072, 18),  // "disabledActionName"
        QT_MOC_LITERAL(1091, 12),  // "throttleMode"
        QT_MOC_LITERAL(1104, 15),  // "axisFrequencyHz"
        QT_MOC_LITERAL(1120, 18),  // "minAxisFrequencyHz"
        QT_MOC_LITERAL(1139, 18),  // "maxAxisFrequencyHz"
        QT_MOC_LITERAL(1158, 17),  // "buttonFrequencyHz"
        QT_MOC_LITERAL(1176, 20),  // "minButtonFrequencyHz"
        QT_MOC_LITERAL(1197, 20),  // "maxButtonFrequencyHz"
        QT_MOC_LITERAL(1218, 14)   // "negativeThrust"
    },
    "Joystick",
    "rawAxisValueChanged",
    "",
    "index",
    "value",
    "rawButtonPressedChanged",
    "pressed",
    "calibratedChanged",
    "calibrated",
    "buttonActionsChanged",
    "assignableActionsChanged",
    "throttleModeChanged",
    "mode",
    "negativeThrustChanged",
    "allowNegative",
    "exponentialChanged",
    "exponential",
    "accumulatorChanged",
    "accumulator",
    "enabledChanged",
    "enabled",
    "circleCorrectionChanged",
    "circleCorrection",
    "axisValues",
    "roll",
    "pitch",
    "yaw",
    "throttle",
    "axisFrequencyHzChanged",
    "buttonFrequencyHzChanged",
    "startContinuousZoom",
    "direction",
    "stopContinuousZoom",
    "stepZoom",
    "stepCamera",
    "stepStream",
    "triggerCamera",
    "startVideoRecord",
    "stopVideoRecord",
    "toggleVideoRecord",
    "gimbalPitchStep",
    "gimbalYawStep",
    "centerGimbal",
    "gimbalControlValue",
    "setArmed",
    "arm",
    "setVtolInFwdFlight",
    "set",
    "setFlightMode",
    "flightMode",
    "emergencyStop",
    "gripperAction",
    "GRIPPER_ACTIONS",
    "landingGearDeploy",
    "landingGearRetract",
    "_activeVehicleChanged",
    "Vehicle*",
    "activeVehicle",
    "_vehicleCountChanged",
    "count",
    "_flightModesChanged",
    "setButtonRepeat",
    "button",
    "repeat",
    "getButtonRepeat",
    "setButtonAction",
    "action",
    "getButtonAction",
    "name",
    "totalButtonCount",
    "axisCount",
    "requiresCalibration",
    "buttonActions",
    "assignableActions",
    "QmlObjectListModel*",
    "assignableActionTitles",
    "disabledActionName",
    "throttleMode",
    "axisFrequencyHz",
    "minAxisFrequencyHz",
    "maxAxisFrequencyHz",
    "buttonFrequencyHz",
    "minButtonFrequencyHz",
    "maxButtonFrequencyHz",
    "negativeThrust"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJoystickENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
      20,  371, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  260,    2, 0x06,   21 /* Public */,
       5,    2,  265,    2, 0x06,   24 /* Public */,
       7,    1,  270,    2, 0x06,   27 /* Public */,
       9,    0,  273,    2, 0x06,   29 /* Public */,
      10,    0,  274,    2, 0x06,   30 /* Public */,
      11,    1,  275,    2, 0x06,   31 /* Public */,
      13,    1,  278,    2, 0x06,   33 /* Public */,
      15,    1,  281,    2, 0x06,   35 /* Public */,
      17,    1,  284,    2, 0x06,   37 /* Public */,
      19,    1,  287,    2, 0x06,   39 /* Public */,
      21,    1,  290,    2, 0x06,   41 /* Public */,
      23,    4,  293,    2, 0x06,   43 /* Public */,
      28,    0,  302,    2, 0x06,   48 /* Public */,
      29,    0,  303,    2, 0x06,   49 /* Public */,
      30,    1,  304,    2, 0x06,   50 /* Public */,
      32,    0,  307,    2, 0x06,   52 /* Public */,
      33,    1,  308,    2, 0x06,   53 /* Public */,
      34,    1,  311,    2, 0x06,   55 /* Public */,
      35,    1,  314,    2, 0x06,   57 /* Public */,
      36,    0,  317,    2, 0x06,   59 /* Public */,
      37,    0,  318,    2, 0x06,   60 /* Public */,
      38,    0,  319,    2, 0x06,   61 /* Public */,
      39,    0,  320,    2, 0x06,   62 /* Public */,
      40,    1,  321,    2, 0x06,   63 /* Public */,
      41,    1,  324,    2, 0x06,   65 /* Public */,
      42,    0,  327,    2, 0x06,   67 /* Public */,
      43,    2,  328,    2, 0x06,   68 /* Public */,
      44,    1,  333,    2, 0x06,   71 /* Public */,
      46,    1,  336,    2, 0x06,   73 /* Public */,
      48,    1,  339,    2, 0x06,   75 /* Public */,
      50,    0,  342,    2, 0x06,   77 /* Public */,
      51,    1,  343,    2, 0x06,   78 /* Public */,
      53,    0,  346,    2, 0x06,   80 /* Public */,
      54,    0,  347,    2, 0x06,   81 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      55,    1,  348,    2, 0x08,   82 /* Private */,
      58,    1,  351,    2, 0x08,   84 /* Private */,
      60,    0,  354,    2, 0x08,   86 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      61,    2,  355,    2, 0x02,   87 /* Public */,
      64,    1,  360,    2, 0x02,   90 /* Public */,
      65,    2,  363,    2, 0x02,   92 /* Public */,
      67,    1,  368,    2, 0x02,   95 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   24,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   25,   26,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   51,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   62,   63,
    QMetaType::Bool, QMetaType::Int,   62,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   62,   66,
    QMetaType::QString, QMetaType::Int,   62,

 // properties: name, type, flags
      68, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015003, uint(2), 0,
      69, QMetaType::Int, 0x00015401, uint(-1), 0,
      70, QMetaType::Int, 0x00015401, uint(-1), 0,
      71, QMetaType::Bool, 0x00015401, uint(-1), 0,
      72, QMetaType::QStringList, 0x00015001, uint(3), 0,
      73, 0x80000000 | 74, 0x00015009, uint(4), 0,
      75, QMetaType::QStringList, 0x00015001, uint(4), 0,
      76, QMetaType::QString, 0x00015401, uint(-1), 0,
      77, QMetaType::Int, 0x00015103, uint(5), 0,
      78, QMetaType::Float, 0x00015003, uint(12), 0,
      79, QMetaType::Float, 0x00015401, uint(-1), 0,
      80, QMetaType::Float, 0x00015401, uint(-1), 0,
      81, QMetaType::Float, 0x00015003, uint(13), 0,
      82, QMetaType::Float, 0x00015401, uint(-1), 0,
      83, QMetaType::Float, 0x00015401, uint(-1), 0,
      84, QMetaType::Bool, 0x00015103, uint(6), 0,
      16, QMetaType::Float, 0x00015103, uint(7), 0,
      18, QMetaType::Bool, 0x00015103, uint(8), 0,
      22, QMetaType::Bool, 0x00015103, uint(10), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Joystick::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSJoystickENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJoystickENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJoystickENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'calibrated'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'totalButtonCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'axisCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'requiresCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'buttonActions'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'assignableActions'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'assignableActionTitles'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'disabledActionName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'throttleMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'axisFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'minAxisFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'maxAxisFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'buttonFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'minButtonFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'maxButtonFrequencyHz'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'negativeThrust'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'exponential'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'accumulator'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'circleCorrection'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Joystick, std::true_type>,
        // method 'rawAxisValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rawButtonPressedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'calibratedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'buttonActionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'assignableActionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'throttleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'negativeThrustChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'exponentialChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'accumulatorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'circleCorrectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'axisValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'axisFrequencyHzChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonFrequencyHzChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startContinuousZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stopContinuousZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stepZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stepCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stepStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'triggerCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startVideoRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopVideoRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleVideoRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalPitchStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gimbalYawStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'centerGimbal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalControlValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setArmed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVtolInFwdFlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFlightMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emergencyStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gripperAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GRIPPER_ACTIONS, std::false_type>,
        // method 'landingGearDeploy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'landingGearRetract'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_activeVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_vehicleCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_flightModesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setButtonRepeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getButtonRepeat'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setButtonAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getButtonAction'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Joystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Joystick *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rawAxisValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->rawButtonPressedChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->calibratedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->buttonActionsChanged(); break;
        case 4: _t->assignableActionsChanged(); break;
        case 5: _t->throttleModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->negativeThrustChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->exponentialChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 8: _t->accumulatorChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->enabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->circleCorrectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->axisValues((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[4]))); break;
        case 12: _t->axisFrequencyHzChanged(); break;
        case 13: _t->buttonFrequencyHzChanged(); break;
        case 14: _t->startContinuousZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->stopContinuousZoom(); break;
        case 16: _t->stepZoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->stepCamera((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->stepStream((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->triggerCamera(); break;
        case 20: _t->startVideoRecord(); break;
        case 21: _t->stopVideoRecord(); break;
        case 22: _t->toggleVideoRecord(); break;
        case 23: _t->gimbalPitchStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->gimbalYawStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->centerGimbal(); break;
        case 26: _t->gimbalControlValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 27: _t->setArmed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setVtolInFwdFlight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->setFlightMode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->emergencyStop(); break;
        case 31: _t->gripperAction((*reinterpret_cast< std::add_pointer_t<GRIPPER_ACTIONS>>(_a[1]))); break;
        case 32: _t->landingGearDeploy(); break;
        case 33: _t->landingGearRetract(); break;
        case 34: _t->_activeVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 35: _t->_vehicleCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->_flightModesChanged(); break;
        case 37: _t->setButtonRepeat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 38: { bool _r = _t->getButtonRepeat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->setButtonAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 40: { QString _r = _t->getButtonAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GRIPPER_ACTIONS >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Joystick::*)(int , int );
            if (_t _q_method = &Joystick::rawAxisValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int , int );
            if (_t _q_method = &Joystick::rawButtonPressedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::calibratedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::buttonActionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::assignableActionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::throttleModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::negativeThrustChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float );
            if (_t _q_method = &Joystick::exponentialChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::accumulatorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::enabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::circleCorrectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(float , float , float , float );
            if (_t _q_method = &Joystick::axisValues; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::axisFrequencyHzChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::buttonFrequencyHzChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::startContinuousZoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::stopContinuousZoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::stepZoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::stepCamera; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::stepStream; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::triggerCamera; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::startVideoRecord; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::stopVideoRecord; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::toggleVideoRecord; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::gimbalPitchStep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(int );
            if (_t _q_method = &Joystick::gimbalYawStep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::centerGimbal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(double , double );
            if (_t _q_method = &Joystick::gimbalControlValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::setArmed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(bool );
            if (_t _q_method = &Joystick::setVtolInFwdFlight; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(const QString & );
            if (_t _q_method = &Joystick::setFlightMode; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::emergencyStop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Joystick::*)(GRIPPER_ACTIONS );
            if (_t _q_method = &Joystick::gripperAction; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::landingGearDeploy; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Joystick::*)();
            if (_t _q_method = &Joystick::landingGearRetract; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_calibrated; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->totalButtonCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->axisCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->requiresCalibration(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->buttonActions(); break;
        case 6: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->assignableActions(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->assignableActionTitles(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->disabledActionName(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->throttleMode(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->axisFrequencyHz(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 12: *reinterpret_cast< float*>(_v) = _t->_minAxisFrequencyHz; break;
        case 13: *reinterpret_cast< float*>(_v) = _t->buttonFrequencyHz(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->_minButtonFrequencyHz; break;
        case 15: *reinterpret_cast< float*>(_v) = _t->_maxButtonFrequencyHz; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->negativeThrust(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->exponential(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->accumulator(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->circleCorrection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Joystick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_calibrated != *reinterpret_cast< bool*>(_v)) {
                _t->_calibrated = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->calibratedChanged(_t->_calibrated);
            }
            break;
        case 9: _t->setThrottleMode(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setAxisFrequency(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setButtonFrequency(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setNegativeThrust(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setExponential(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setAccumulator(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setCircleCorrection(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Joystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Joystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJoystickENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Joystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Joystick::rawAxisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Joystick::rawButtonPressedChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Joystick::calibratedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Joystick::buttonActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Joystick::assignableActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Joystick::throttleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Joystick::negativeThrustChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Joystick::exponentialChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Joystick::accumulatorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Joystick::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Joystick::circleCorrectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Joystick::axisValues(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Joystick::axisFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Joystick::buttonFrequencyHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Joystick::startContinuousZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Joystick::stopContinuousZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Joystick::stepZoom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Joystick::stepCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Joystick::stepStream(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Joystick::triggerCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Joystick::startVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Joystick::stopVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Joystick::toggleVideoRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Joystick::gimbalPitchStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Joystick::gimbalYawStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Joystick::centerGimbal()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Joystick::gimbalControlValue(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Joystick::setArmed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Joystick::setVtolInFwdFlight(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Joystick::setFlightMode(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Joystick::emergencyStop()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Joystick::gripperAction(GRIPPER_ACTIONS _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Joystick::landingGearDeploy()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Joystick::landingGearRetract()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}
QT_WARNING_POP
