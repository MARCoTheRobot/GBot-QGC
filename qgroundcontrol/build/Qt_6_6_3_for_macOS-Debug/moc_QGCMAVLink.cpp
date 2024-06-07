/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MAVLink/QGCMAVLink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLink.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS = QtMocHelpers::stringData(
    "QGCMAVLink",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "MAV_BATTERY_FUNCTION",
    "MAV_BATTERY_FUNCTION_UNKNOWN",
    "MAV_BATTERY_FUNCTION_ALL",
    "MAV_BATTERY_FUNCTION_PROPULSION",
    "MAV_BATTERY_FUNCTION_AVIONICS",
    "MAV_BATTERY_TYPE_PAYLOAD",
    "MAV_BATTERY_CHARGE_STATE",
    "MAV_BATTERY_CHARGE_STATE_UNDEFINED",
    "MAV_BATTERY_CHARGE_STATE_OK",
    "MAV_BATTERY_CHARGE_STATE_LOW",
    "MAV_BATTERY_CHARGE_STATE_CRITICAL",
    "MAV_BATTERY_CHARGE_STATE_EMERGENCY",
    "MAV_BATTERY_CHARGE_STATE_FAILED",
    "MAV_BATTERY_CHARGE_STATE_UNHEALTHY",
    "MAV_BATTERY_CHARGE_STATE_CHARGING",
    "MavlinkSysStatus",
    "SysStatusSensor3dGyro",
    "SysStatusSensor3dAccel",
    "SysStatusSensor3dMag",
    "SysStatusSensorAbsolutePressure",
    "SysStatusSensorDifferentialPressure",
    "SysStatusSensorGPS",
    "SysStatusSensorOpticalFlow",
    "SysStatusSensorVisionPosition",
    "SysStatusSensorLaserPosition",
    "SysStatusSensorExternalGroundTruth",
    "SysStatusSensorAngularRateControl",
    "SysStatusSensorAttitudeStabilization",
    "SysStatusSensorYawPosition",
    "SysStatusSensorZAltitudeControl",
    "SysStatusSensorXYPositionControl",
    "SysStatusSensorMotorOutputs",
    "SysStatusSensorRCReceiver",
    "SysStatusSensor3dGyro2",
    "SysStatusSensor3dAccel2",
    "SysStatusSensor3dMag2",
    "SysStatusSensorGeoFence",
    "SysStatusSensorAHRS",
    "SysStatusSensorTerrain",
    "SysStatusSensorReverseMotor",
    "SysStatusSensorLogging",
    "SysStatusSensorBattery",
    "GRIPPER_OPTIONS",
    "Gripper_release",
    "Gripper_grab",
    "Invalid_option",
    "CalibrationType",
    "CalibrationNone",
    "CalibrationRadio",
    "CalibrationGyro",
    "CalibrationMag",
    "CalibrationAccel",
    "CalibrationLevel",
    "CalibrationEsc",
    "CalibrationCopyTrims",
    "CalibrationAPMCompassMot",
    "CalibrationAPMPressureAirspeed",
    "CalibrationAPMPreFlight",
    "CalibrationPX4Airspeed",
    "CalibrationPX4Pressure",
    "CalibrationAPMAccelSimple"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS_t {
    uint offsetsAndSizes[136];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[1];
    char stringdata7[21];
    char stringdata8[29];
    char stringdata9[25];
    char stringdata10[32];
    char stringdata11[30];
    char stringdata12[25];
    char stringdata13[25];
    char stringdata14[35];
    char stringdata15[28];
    char stringdata16[29];
    char stringdata17[34];
    char stringdata18[35];
    char stringdata19[32];
    char stringdata20[35];
    char stringdata21[34];
    char stringdata22[17];
    char stringdata23[22];
    char stringdata24[23];
    char stringdata25[21];
    char stringdata26[32];
    char stringdata27[36];
    char stringdata28[19];
    char stringdata29[27];
    char stringdata30[30];
    char stringdata31[29];
    char stringdata32[35];
    char stringdata33[34];
    char stringdata34[37];
    char stringdata35[27];
    char stringdata36[32];
    char stringdata37[33];
    char stringdata38[28];
    char stringdata39[26];
    char stringdata40[23];
    char stringdata41[24];
    char stringdata42[22];
    char stringdata43[24];
    char stringdata44[20];
    char stringdata45[23];
    char stringdata46[28];
    char stringdata47[23];
    char stringdata48[23];
    char stringdata49[16];
    char stringdata50[16];
    char stringdata51[13];
    char stringdata52[15];
    char stringdata53[16];
    char stringdata54[16];
    char stringdata55[17];
    char stringdata56[16];
    char stringdata57[15];
    char stringdata58[17];
    char stringdata59[17];
    char stringdata60[15];
    char stringdata61[21];
    char stringdata62[25];
    char stringdata63[31];
    char stringdata64[24];
    char stringdata65[23];
    char stringdata66[23];
    char stringdata67[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS_t qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QGCMAVLink"
        QT_MOC_LITERAL(11, 11),  // "QML.Element"
        QT_MOC_LITERAL(23, 4),  // "auto"
        QT_MOC_LITERAL(28, 13),  // "QML.Creatable"
        QT_MOC_LITERAL(42, 5),  // "false"
        QT_MOC_LITERAL(48, 21),  // "QML.UncreatableReason"
        QT_MOC_LITERAL(70, 0),  // ""
        QT_MOC_LITERAL(71, 20),  // "MAV_BATTERY_FUNCTION"
        QT_MOC_LITERAL(92, 28),  // "MAV_BATTERY_FUNCTION_UNKNOWN"
        QT_MOC_LITERAL(121, 24),  // "MAV_BATTERY_FUNCTION_ALL"
        QT_MOC_LITERAL(146, 31),  // "MAV_BATTERY_FUNCTION_PROPULSION"
        QT_MOC_LITERAL(178, 29),  // "MAV_BATTERY_FUNCTION_AVIONICS"
        QT_MOC_LITERAL(208, 24),  // "MAV_BATTERY_TYPE_PAYLOAD"
        QT_MOC_LITERAL(233, 24),  // "MAV_BATTERY_CHARGE_STATE"
        QT_MOC_LITERAL(258, 34),  // "MAV_BATTERY_CHARGE_STATE_UNDE..."
        QT_MOC_LITERAL(293, 27),  // "MAV_BATTERY_CHARGE_STATE_OK"
        QT_MOC_LITERAL(321, 28),  // "MAV_BATTERY_CHARGE_STATE_LOW"
        QT_MOC_LITERAL(350, 33),  // "MAV_BATTERY_CHARGE_STATE_CRIT..."
        QT_MOC_LITERAL(384, 34),  // "MAV_BATTERY_CHARGE_STATE_EMER..."
        QT_MOC_LITERAL(419, 31),  // "MAV_BATTERY_CHARGE_STATE_FAILED"
        QT_MOC_LITERAL(451, 34),  // "MAV_BATTERY_CHARGE_STATE_UNHE..."
        QT_MOC_LITERAL(486, 33),  // "MAV_BATTERY_CHARGE_STATE_CHAR..."
        QT_MOC_LITERAL(520, 16),  // "MavlinkSysStatus"
        QT_MOC_LITERAL(537, 21),  // "SysStatusSensor3dGyro"
        QT_MOC_LITERAL(559, 22),  // "SysStatusSensor3dAccel"
        QT_MOC_LITERAL(582, 20),  // "SysStatusSensor3dMag"
        QT_MOC_LITERAL(603, 31),  // "SysStatusSensorAbsolutePressure"
        QT_MOC_LITERAL(635, 35),  // "SysStatusSensorDifferentialPr..."
        QT_MOC_LITERAL(671, 18),  // "SysStatusSensorGPS"
        QT_MOC_LITERAL(690, 26),  // "SysStatusSensorOpticalFlow"
        QT_MOC_LITERAL(717, 29),  // "SysStatusSensorVisionPosition"
        QT_MOC_LITERAL(747, 28),  // "SysStatusSensorLaserPosition"
        QT_MOC_LITERAL(776, 34),  // "SysStatusSensorExternalGround..."
        QT_MOC_LITERAL(811, 33),  // "SysStatusSensorAngularRateCon..."
        QT_MOC_LITERAL(845, 36),  // "SysStatusSensorAttitudeStabil..."
        QT_MOC_LITERAL(882, 26),  // "SysStatusSensorYawPosition"
        QT_MOC_LITERAL(909, 31),  // "SysStatusSensorZAltitudeControl"
        QT_MOC_LITERAL(941, 32),  // "SysStatusSensorXYPositionControl"
        QT_MOC_LITERAL(974, 27),  // "SysStatusSensorMotorOutputs"
        QT_MOC_LITERAL(1002, 25),  // "SysStatusSensorRCReceiver"
        QT_MOC_LITERAL(1028, 22),  // "SysStatusSensor3dGyro2"
        QT_MOC_LITERAL(1051, 23),  // "SysStatusSensor3dAccel2"
        QT_MOC_LITERAL(1075, 21),  // "SysStatusSensor3dMag2"
        QT_MOC_LITERAL(1097, 23),  // "SysStatusSensorGeoFence"
        QT_MOC_LITERAL(1121, 19),  // "SysStatusSensorAHRS"
        QT_MOC_LITERAL(1141, 22),  // "SysStatusSensorTerrain"
        QT_MOC_LITERAL(1164, 27),  // "SysStatusSensorReverseMotor"
        QT_MOC_LITERAL(1192, 22),  // "SysStatusSensorLogging"
        QT_MOC_LITERAL(1215, 22),  // "SysStatusSensorBattery"
        QT_MOC_LITERAL(1238, 15),  // "GRIPPER_OPTIONS"
        QT_MOC_LITERAL(1254, 15),  // "Gripper_release"
        QT_MOC_LITERAL(1270, 12),  // "Gripper_grab"
        QT_MOC_LITERAL(1283, 14),  // "Invalid_option"
        QT_MOC_LITERAL(1298, 15),  // "CalibrationType"
        QT_MOC_LITERAL(1314, 15),  // "CalibrationNone"
        QT_MOC_LITERAL(1330, 16),  // "CalibrationRadio"
        QT_MOC_LITERAL(1347, 15),  // "CalibrationGyro"
        QT_MOC_LITERAL(1363, 14),  // "CalibrationMag"
        QT_MOC_LITERAL(1378, 16),  // "CalibrationAccel"
        QT_MOC_LITERAL(1395, 16),  // "CalibrationLevel"
        QT_MOC_LITERAL(1412, 14),  // "CalibrationEsc"
        QT_MOC_LITERAL(1427, 20),  // "CalibrationCopyTrims"
        QT_MOC_LITERAL(1448, 24),  // "CalibrationAPMCompassMot"
        QT_MOC_LITERAL(1473, 30),  // "CalibrationAPMPressureAirspeed"
        QT_MOC_LITERAL(1504, 23),  // "CalibrationAPMPreFlight"
        QT_MOC_LITERAL(1528, 22),  // "CalibrationPX4Airspeed"
        QT_MOC_LITERAL(1551, 22),  // "CalibrationPX4Pressure"
        QT_MOC_LITERAL(1574, 25)   // "CalibrationAPMAccelSimple"
    },
    "QGCMAVLink",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "MAV_BATTERY_FUNCTION",
    "MAV_BATTERY_FUNCTION_UNKNOWN",
    "MAV_BATTERY_FUNCTION_ALL",
    "MAV_BATTERY_FUNCTION_PROPULSION",
    "MAV_BATTERY_FUNCTION_AVIONICS",
    "MAV_BATTERY_TYPE_PAYLOAD",
    "MAV_BATTERY_CHARGE_STATE",
    "MAV_BATTERY_CHARGE_STATE_UNDEFINED",
    "MAV_BATTERY_CHARGE_STATE_OK",
    "MAV_BATTERY_CHARGE_STATE_LOW",
    "MAV_BATTERY_CHARGE_STATE_CRITICAL",
    "MAV_BATTERY_CHARGE_STATE_EMERGENCY",
    "MAV_BATTERY_CHARGE_STATE_FAILED",
    "MAV_BATTERY_CHARGE_STATE_UNHEALTHY",
    "MAV_BATTERY_CHARGE_STATE_CHARGING",
    "MavlinkSysStatus",
    "SysStatusSensor3dGyro",
    "SysStatusSensor3dAccel",
    "SysStatusSensor3dMag",
    "SysStatusSensorAbsolutePressure",
    "SysStatusSensorDifferentialPressure",
    "SysStatusSensorGPS",
    "SysStatusSensorOpticalFlow",
    "SysStatusSensorVisionPosition",
    "SysStatusSensorLaserPosition",
    "SysStatusSensorExternalGroundTruth",
    "SysStatusSensorAngularRateControl",
    "SysStatusSensorAttitudeStabilization",
    "SysStatusSensorYawPosition",
    "SysStatusSensorZAltitudeControl",
    "SysStatusSensorXYPositionControl",
    "SysStatusSensorMotorOutputs",
    "SysStatusSensorRCReceiver",
    "SysStatusSensor3dGyro2",
    "SysStatusSensor3dAccel2",
    "SysStatusSensor3dMag2",
    "SysStatusSensorGeoFence",
    "SysStatusSensorAHRS",
    "SysStatusSensorTerrain",
    "SysStatusSensorReverseMotor",
    "SysStatusSensorLogging",
    "SysStatusSensorBattery",
    "GRIPPER_OPTIONS",
    "Gripper_release",
    "Gripper_grab",
    "Invalid_option",
    "CalibrationType",
    "CalibrationNone",
    "CalibrationRadio",
    "CalibrationGyro",
    "CalibrationMag",
    "CalibrationAccel",
    "CalibrationLevel",
    "CalibrationEsc",
    "CalibrationCopyTrims",
    "CalibrationAPMCompassMot",
    "CalibrationAPMPressureAirspeed",
    "CalibrationAPMPreFlight",
    "CalibrationPX4Airspeed",
    "CalibrationPX4Pressure",
    "CalibrationAPMAccelSimple"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMAVLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       3,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    5,   45,
      13,   13, 0x0,    8,   55,
      22,   22, 0x0,   26,   71,
      49,   49, 0x0,    3,  123,
      53,   53, 0x0,   14,  129,

 // enum data: key, value
       8, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_UNKNOWN),
       9, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_ALL),
      10, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_PROPULSION),
      11, uint(QGCMAVLink::MAV_BATTERY_FUNCTION_AVIONICS),
      12, uint(QGCMAVLink::MAV_BATTERY_TYPE_PAYLOAD),
      14, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_UNDEFINED),
      15, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_OK),
      16, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_LOW),
      17, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_CRITICAL),
      18, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_EMERGENCY),
      19, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_FAILED),
      20, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_UNHEALTHY),
      21, uint(QGCMAVLink::MAV_BATTERY_CHARGE_STATE_CHARGING),
      23, uint(QGCMAVLink::SysStatusSensor3dGyro),
      24, uint(QGCMAVLink::SysStatusSensor3dAccel),
      25, uint(QGCMAVLink::SysStatusSensor3dMag),
      26, uint(QGCMAVLink::SysStatusSensorAbsolutePressure),
      27, uint(QGCMAVLink::SysStatusSensorDifferentialPressure),
      28, uint(QGCMAVLink::SysStatusSensorGPS),
      29, uint(QGCMAVLink::SysStatusSensorOpticalFlow),
      30, uint(QGCMAVLink::SysStatusSensorVisionPosition),
      31, uint(QGCMAVLink::SysStatusSensorLaserPosition),
      32, uint(QGCMAVLink::SysStatusSensorExternalGroundTruth),
      33, uint(QGCMAVLink::SysStatusSensorAngularRateControl),
      34, uint(QGCMAVLink::SysStatusSensorAttitudeStabilization),
      35, uint(QGCMAVLink::SysStatusSensorYawPosition),
      36, uint(QGCMAVLink::SysStatusSensorZAltitudeControl),
      37, uint(QGCMAVLink::SysStatusSensorXYPositionControl),
      38, uint(QGCMAVLink::SysStatusSensorMotorOutputs),
      39, uint(QGCMAVLink::SysStatusSensorRCReceiver),
      40, uint(QGCMAVLink::SysStatusSensor3dGyro2),
      41, uint(QGCMAVLink::SysStatusSensor3dAccel2),
      42, uint(QGCMAVLink::SysStatusSensor3dMag2),
      43, uint(QGCMAVLink::SysStatusSensorGeoFence),
      44, uint(QGCMAVLink::SysStatusSensorAHRS),
      45, uint(QGCMAVLink::SysStatusSensorTerrain),
      46, uint(QGCMAVLink::SysStatusSensorReverseMotor),
      47, uint(QGCMAVLink::SysStatusSensorLogging),
      48, uint(QGCMAVLink::SysStatusSensorBattery),
      50, uint(QGCMAVLink::Gripper_release),
      51, uint(QGCMAVLink::Gripper_grab),
      52, uint(QGCMAVLink::Invalid_option),
      54, uint(QGCMAVLink::CalibrationNone),
      55, uint(QGCMAVLink::CalibrationRadio),
      56, uint(QGCMAVLink::CalibrationGyro),
      57, uint(QGCMAVLink::CalibrationMag),
      58, uint(QGCMAVLink::CalibrationAccel),
      59, uint(QGCMAVLink::CalibrationLevel),
      60, uint(QGCMAVLink::CalibrationEsc),
      61, uint(QGCMAVLink::CalibrationCopyTrims),
      62, uint(QGCMAVLink::CalibrationAPMCompassMot),
      63, uint(QGCMAVLink::CalibrationAPMPressureAirspeed),
      64, uint(QGCMAVLink::CalibrationAPMPreFlight),
      65, uint(QGCMAVLink::CalibrationPX4Airspeed),
      66, uint(QGCMAVLink::CalibrationPX4Pressure),
      67, uint(QGCMAVLink::CalibrationAPMAccelSimple),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMAVLink::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMAVLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // enum 'MAV_BATTERY_FUNCTION'
        QGCMAVLink::MAV_BATTERY_FUNCTION,
        // enum 'MAV_BATTERY_CHARGE_STATE'
        QGCMAVLink::MAV_BATTERY_CHARGE_STATE,
        // enum 'MavlinkSysStatus'
        QGCMAVLink::MavlinkSysStatus,
        // enum 'GRIPPER_OPTIONS'
        QGCMAVLink::GRIPPER_OPTIONS,
        // enum 'CalibrationType'
        QGCMAVLink::CalibrationType,
        // Q_OBJECT / Q_GADGET
        QGCMAVLink
    >,
    nullptr
} };

void QGCMAVLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGCMAVLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMAVLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
