/****************************************************************************
** Meta object code from reading C++ file 'QGroundControlQmlGlobal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGroundControlQmlGlobal.h"
#include "ADSBVehicleManager.h"
#include "FactGroup.h"
#include "LinkManager.h"
#include "MAVLinkLogManager.h"
#include "MissionCommandTree.h"
#include "MultiVehicleManager.h"
#include "QGCCorePlugin.h"
#include "QGCMapEngineManager.h"
#include "QGCPalette.h"
#include "PositionManager.h"
#include "SettingsManager.h"
#include "VideoManager.h"
#include "AirLinkManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGroundControlQmlGlobal.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS = QtMocHelpers::stringData(
    "QGroundControlQmlGlobal",
    "isMultiplexingEnabledChanged",
    "",
    "enabled",
    "isVersionCheckEnabledChanged",
    "mavlinkSystemIDChanged",
    "id",
    "flightMapPositionChanged",
    "QGeoCoordinate",
    "flightMapPosition",
    "flightMapZoomChanged",
    "flightMapZoom",
    "skipSetupPageChanged",
    "saveGlobalSetting",
    "key",
    "value",
    "loadGlobalSetting",
    "defaultValue",
    "saveBoolGlobalSetting",
    "loadBoolGlobalSetting",
    "deleteAllSettingsNextBoot",
    "clearDeleteAllSettingsNextBoot",
    "startPX4MockLink",
    "sendStatusText",
    "startGenericMockLink",
    "startAPMArduCopterMockLink",
    "startAPMArduPlaneMockLink",
    "startAPMArduSubMockLink",
    "startAPMArduRoverMockLink",
    "stopOneMockLink",
    "loggingCategories",
    "setCategoryLoggingOn",
    "category",
    "enable",
    "categoryLoggingOn",
    "updateLoggingFilterRules",
    "linesIntersect",
    "xLine1",
    "yLine1",
    "xLine2",
    "yLine2",
    "altitudeModeExtraUnits",
    "AltMode",
    "altMode",
    "altitudeModeShortDescription",
    "appName",
    "linkManager",
    "LinkManager*",
    "multiVehicleManager",
    "MultiVehicleManager*",
    "mapEngineManager",
    "QGCMapEngineManager*",
    "qgcPositionManger",
    "QGCPositionManager*",
    "videoManager",
    "VideoManager*",
    "mavlinkLogManager",
    "MAVLinkLogManager*",
    "settingsManager",
    "SettingsManager*",
    "adsbVehicleManager",
    "ADSBVehicleManager*",
    "corePlugin",
    "QGCCorePlugin*",
    "missionCommandTree",
    "MissionCommandTree*",
    "gpsRtk",
    "FactGroup*",
    "airlinkManager",
    "AirLinkManager*",
    "airlinkSupported",
    "globalPalette",
    "QGCPalette*",
    "unitsConversion",
    "QmlUnitsConversion*",
    "singleFirmwareSupport",
    "singleVehicleSupport",
    "px4ProFirmwareSupported",
    "apmFirmwareSupported",
    "flightMapInitialZoom",
    "parameterFileExtension",
    "missionFileExtension",
    "telemetryFileExtension",
    "qgcVersion",
    "skipSetupPage",
    "zOrderTopMost",
    "zOrderWidgets",
    "zOrderMapItems",
    "zOrderVehicles",
    "zOrderWaypointIndicators",
    "zOrderTrajectoryLines",
    "zOrderWaypointLines",
    "isVersionCheckEnabled",
    "mavlinkSystemID",
    "hasAPMSupport",
    "hasMAVLinkInspector",
    "elevationProviderName",
    "elevationProviderNotice",
    "utmspSupported",
    "AltitudeModeMixed",
    "AltitudeModeRelative",
    "AltitudeModeAbsolute",
    "AltitudeModeCalcAboveTerrain",
    "AltitudeModeTerrainFrame",
    "AltitudeModeNone"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS_t {
    uint offsetsAndSizes[210];
    char stringdata0[24];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[29];
    char stringdata5[23];
    char stringdata6[3];
    char stringdata7[25];
    char stringdata8[15];
    char stringdata9[18];
    char stringdata10[21];
    char stringdata11[14];
    char stringdata12[21];
    char stringdata13[18];
    char stringdata14[4];
    char stringdata15[6];
    char stringdata16[18];
    char stringdata17[13];
    char stringdata18[22];
    char stringdata19[22];
    char stringdata20[26];
    char stringdata21[31];
    char stringdata22[17];
    char stringdata23[15];
    char stringdata24[21];
    char stringdata25[27];
    char stringdata26[26];
    char stringdata27[24];
    char stringdata28[26];
    char stringdata29[16];
    char stringdata30[18];
    char stringdata31[21];
    char stringdata32[9];
    char stringdata33[7];
    char stringdata34[18];
    char stringdata35[25];
    char stringdata36[15];
    char stringdata37[7];
    char stringdata38[7];
    char stringdata39[7];
    char stringdata40[7];
    char stringdata41[23];
    char stringdata42[8];
    char stringdata43[8];
    char stringdata44[29];
    char stringdata45[8];
    char stringdata46[12];
    char stringdata47[13];
    char stringdata48[20];
    char stringdata49[21];
    char stringdata50[17];
    char stringdata51[21];
    char stringdata52[18];
    char stringdata53[20];
    char stringdata54[13];
    char stringdata55[14];
    char stringdata56[18];
    char stringdata57[19];
    char stringdata58[16];
    char stringdata59[17];
    char stringdata60[19];
    char stringdata61[20];
    char stringdata62[11];
    char stringdata63[15];
    char stringdata64[19];
    char stringdata65[20];
    char stringdata66[7];
    char stringdata67[11];
    char stringdata68[15];
    char stringdata69[16];
    char stringdata70[17];
    char stringdata71[14];
    char stringdata72[12];
    char stringdata73[16];
    char stringdata74[20];
    char stringdata75[22];
    char stringdata76[21];
    char stringdata77[24];
    char stringdata78[21];
    char stringdata79[21];
    char stringdata80[23];
    char stringdata81[21];
    char stringdata82[23];
    char stringdata83[11];
    char stringdata84[14];
    char stringdata85[14];
    char stringdata86[14];
    char stringdata87[15];
    char stringdata88[15];
    char stringdata89[25];
    char stringdata90[22];
    char stringdata91[20];
    char stringdata92[22];
    char stringdata93[16];
    char stringdata94[14];
    char stringdata95[20];
    char stringdata96[22];
    char stringdata97[24];
    char stringdata98[15];
    char stringdata99[18];
    char stringdata100[21];
    char stringdata101[21];
    char stringdata102[29];
    char stringdata103[25];
    char stringdata104[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS_t qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "QGroundControlQmlGlobal"
        QT_MOC_LITERAL(24, 28),  // "isMultiplexingEnabledChanged"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 7),  // "enabled"
        QT_MOC_LITERAL(62, 28),  // "isVersionCheckEnabledChanged"
        QT_MOC_LITERAL(91, 22),  // "mavlinkSystemIDChanged"
        QT_MOC_LITERAL(114, 2),  // "id"
        QT_MOC_LITERAL(117, 24),  // "flightMapPositionChanged"
        QT_MOC_LITERAL(142, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(157, 17),  // "flightMapPosition"
        QT_MOC_LITERAL(175, 20),  // "flightMapZoomChanged"
        QT_MOC_LITERAL(196, 13),  // "flightMapZoom"
        QT_MOC_LITERAL(210, 20),  // "skipSetupPageChanged"
        QT_MOC_LITERAL(231, 17),  // "saveGlobalSetting"
        QT_MOC_LITERAL(249, 3),  // "key"
        QT_MOC_LITERAL(253, 5),  // "value"
        QT_MOC_LITERAL(259, 17),  // "loadGlobalSetting"
        QT_MOC_LITERAL(277, 12),  // "defaultValue"
        QT_MOC_LITERAL(290, 21),  // "saveBoolGlobalSetting"
        QT_MOC_LITERAL(312, 21),  // "loadBoolGlobalSetting"
        QT_MOC_LITERAL(334, 25),  // "deleteAllSettingsNextBoot"
        QT_MOC_LITERAL(360, 30),  // "clearDeleteAllSettingsNextBoot"
        QT_MOC_LITERAL(391, 16),  // "startPX4MockLink"
        QT_MOC_LITERAL(408, 14),  // "sendStatusText"
        QT_MOC_LITERAL(423, 20),  // "startGenericMockLink"
        QT_MOC_LITERAL(444, 26),  // "startAPMArduCopterMockLink"
        QT_MOC_LITERAL(471, 25),  // "startAPMArduPlaneMockLink"
        QT_MOC_LITERAL(497, 23),  // "startAPMArduSubMockLink"
        QT_MOC_LITERAL(521, 25),  // "startAPMArduRoverMockLink"
        QT_MOC_LITERAL(547, 15),  // "stopOneMockLink"
        QT_MOC_LITERAL(563, 17),  // "loggingCategories"
        QT_MOC_LITERAL(581, 20),  // "setCategoryLoggingOn"
        QT_MOC_LITERAL(602, 8),  // "category"
        QT_MOC_LITERAL(611, 6),  // "enable"
        QT_MOC_LITERAL(618, 17),  // "categoryLoggingOn"
        QT_MOC_LITERAL(636, 24),  // "updateLoggingFilterRules"
        QT_MOC_LITERAL(661, 14),  // "linesIntersect"
        QT_MOC_LITERAL(676, 6),  // "xLine1"
        QT_MOC_LITERAL(683, 6),  // "yLine1"
        QT_MOC_LITERAL(690, 6),  // "xLine2"
        QT_MOC_LITERAL(697, 6),  // "yLine2"
        QT_MOC_LITERAL(704, 22),  // "altitudeModeExtraUnits"
        QT_MOC_LITERAL(727, 7),  // "AltMode"
        QT_MOC_LITERAL(735, 7),  // "altMode"
        QT_MOC_LITERAL(743, 28),  // "altitudeModeShortDescription"
        QT_MOC_LITERAL(772, 7),  // "appName"
        QT_MOC_LITERAL(780, 11),  // "linkManager"
        QT_MOC_LITERAL(792, 12),  // "LinkManager*"
        QT_MOC_LITERAL(805, 19),  // "multiVehicleManager"
        QT_MOC_LITERAL(825, 20),  // "MultiVehicleManager*"
        QT_MOC_LITERAL(846, 16),  // "mapEngineManager"
        QT_MOC_LITERAL(863, 20),  // "QGCMapEngineManager*"
        QT_MOC_LITERAL(884, 17),  // "qgcPositionManger"
        QT_MOC_LITERAL(902, 19),  // "QGCPositionManager*"
        QT_MOC_LITERAL(922, 12),  // "videoManager"
        QT_MOC_LITERAL(935, 13),  // "VideoManager*"
        QT_MOC_LITERAL(949, 17),  // "mavlinkLogManager"
        QT_MOC_LITERAL(967, 18),  // "MAVLinkLogManager*"
        QT_MOC_LITERAL(986, 15),  // "settingsManager"
        QT_MOC_LITERAL(1002, 16),  // "SettingsManager*"
        QT_MOC_LITERAL(1019, 18),  // "adsbVehicleManager"
        QT_MOC_LITERAL(1038, 19),  // "ADSBVehicleManager*"
        QT_MOC_LITERAL(1058, 10),  // "corePlugin"
        QT_MOC_LITERAL(1069, 14),  // "QGCCorePlugin*"
        QT_MOC_LITERAL(1084, 18),  // "missionCommandTree"
        QT_MOC_LITERAL(1103, 19),  // "MissionCommandTree*"
        QT_MOC_LITERAL(1123, 6),  // "gpsRtk"
        QT_MOC_LITERAL(1130, 10),  // "FactGroup*"
        QT_MOC_LITERAL(1141, 14),  // "airlinkManager"
        QT_MOC_LITERAL(1156, 15),  // "AirLinkManager*"
        QT_MOC_LITERAL(1172, 16),  // "airlinkSupported"
        QT_MOC_LITERAL(1189, 13),  // "globalPalette"
        QT_MOC_LITERAL(1203, 11),  // "QGCPalette*"
        QT_MOC_LITERAL(1215, 15),  // "unitsConversion"
        QT_MOC_LITERAL(1231, 19),  // "QmlUnitsConversion*"
        QT_MOC_LITERAL(1251, 21),  // "singleFirmwareSupport"
        QT_MOC_LITERAL(1273, 20),  // "singleVehicleSupport"
        QT_MOC_LITERAL(1294, 23),  // "px4ProFirmwareSupported"
        QT_MOC_LITERAL(1318, 20),  // "apmFirmwareSupported"
        QT_MOC_LITERAL(1339, 20),  // "flightMapInitialZoom"
        QT_MOC_LITERAL(1360, 22),  // "parameterFileExtension"
        QT_MOC_LITERAL(1383, 20),  // "missionFileExtension"
        QT_MOC_LITERAL(1404, 22),  // "telemetryFileExtension"
        QT_MOC_LITERAL(1427, 10),  // "qgcVersion"
        QT_MOC_LITERAL(1438, 13),  // "skipSetupPage"
        QT_MOC_LITERAL(1452, 13),  // "zOrderTopMost"
        QT_MOC_LITERAL(1466, 13),  // "zOrderWidgets"
        QT_MOC_LITERAL(1480, 14),  // "zOrderMapItems"
        QT_MOC_LITERAL(1495, 14),  // "zOrderVehicles"
        QT_MOC_LITERAL(1510, 24),  // "zOrderWaypointIndicators"
        QT_MOC_LITERAL(1535, 21),  // "zOrderTrajectoryLines"
        QT_MOC_LITERAL(1557, 19),  // "zOrderWaypointLines"
        QT_MOC_LITERAL(1577, 21),  // "isVersionCheckEnabled"
        QT_MOC_LITERAL(1599, 15),  // "mavlinkSystemID"
        QT_MOC_LITERAL(1615, 13),  // "hasAPMSupport"
        QT_MOC_LITERAL(1629, 19),  // "hasMAVLinkInspector"
        QT_MOC_LITERAL(1649, 21),  // "elevationProviderName"
        QT_MOC_LITERAL(1671, 23),  // "elevationProviderNotice"
        QT_MOC_LITERAL(1695, 14),  // "utmspSupported"
        QT_MOC_LITERAL(1710, 17),  // "AltitudeModeMixed"
        QT_MOC_LITERAL(1728, 20),  // "AltitudeModeRelative"
        QT_MOC_LITERAL(1749, 20),  // "AltitudeModeAbsolute"
        QT_MOC_LITERAL(1770, 28),  // "AltitudeModeCalcAboveTerrain"
        QT_MOC_LITERAL(1799, 24),  // "AltitudeModeTerrainFrame"
        QT_MOC_LITERAL(1824, 16)   // "AltitudeModeNone"
    },
    "QGroundControlQmlGlobal",
    "isMultiplexingEnabledChanged",
    "",
    "enabled",
    "isVersionCheckEnabledChanged",
    "mavlinkSystemIDChanged",
    "id",
    "flightMapPositionChanged",
    "QGeoCoordinate",
    "flightMapPosition",
    "flightMapZoomChanged",
    "flightMapZoom",
    "skipSetupPageChanged",
    "saveGlobalSetting",
    "key",
    "value",
    "loadGlobalSetting",
    "defaultValue",
    "saveBoolGlobalSetting",
    "loadBoolGlobalSetting",
    "deleteAllSettingsNextBoot",
    "clearDeleteAllSettingsNextBoot",
    "startPX4MockLink",
    "sendStatusText",
    "startGenericMockLink",
    "startAPMArduCopterMockLink",
    "startAPMArduPlaneMockLink",
    "startAPMArduSubMockLink",
    "startAPMArduRoverMockLink",
    "stopOneMockLink",
    "loggingCategories",
    "setCategoryLoggingOn",
    "category",
    "enable",
    "categoryLoggingOn",
    "updateLoggingFilterRules",
    "linesIntersect",
    "xLine1",
    "yLine1",
    "xLine2",
    "yLine2",
    "altitudeModeExtraUnits",
    "AltMode",
    "altMode",
    "altitudeModeShortDescription",
    "appName",
    "linkManager",
    "LinkManager*",
    "multiVehicleManager",
    "MultiVehicleManager*",
    "mapEngineManager",
    "QGCMapEngineManager*",
    "qgcPositionManger",
    "QGCPositionManager*",
    "videoManager",
    "VideoManager*",
    "mavlinkLogManager",
    "MAVLinkLogManager*",
    "settingsManager",
    "SettingsManager*",
    "adsbVehicleManager",
    "ADSBVehicleManager*",
    "corePlugin",
    "QGCCorePlugin*",
    "missionCommandTree",
    "MissionCommandTree*",
    "gpsRtk",
    "FactGroup*",
    "airlinkManager",
    "AirLinkManager*",
    "airlinkSupported",
    "globalPalette",
    "QGCPalette*",
    "unitsConversion",
    "QmlUnitsConversion*",
    "singleFirmwareSupport",
    "singleVehicleSupport",
    "px4ProFirmwareSupported",
    "apmFirmwareSupported",
    "flightMapInitialZoom",
    "parameterFileExtension",
    "missionFileExtension",
    "telemetryFileExtension",
    "qgcVersion",
    "skipSetupPage",
    "zOrderTopMost",
    "zOrderWidgets",
    "zOrderMapItems",
    "zOrderVehicles",
    "zOrderWaypointIndicators",
    "zOrderTrajectoryLines",
    "zOrderWaypointLines",
    "isVersionCheckEnabled",
    "mavlinkSystemID",
    "hasAPMSupport",
    "hasMAVLinkInspector",
    "elevationProviderName",
    "elevationProviderNotice",
    "utmspSupported",
    "AltitudeModeMixed",
    "AltitudeModeRelative",
    "AltitudeModeAbsolute",
    "AltitudeModeCalcAboveTerrain",
    "AltitudeModeTerrainFrame",
    "AltitudeModeNone"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGroundControlQmlGlobalENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      42,  252, // properties
       1,  462, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x06,   44 /* Public */,
       4,    1,  173,    2, 0x06,   46 /* Public */,
       5,    1,  176,    2, 0x06,   48 /* Public */,
       7,    1,  179,    2, 0x06,   50 /* Public */,
      10,    1,  182,    2, 0x06,   52 /* Public */,
      12,    0,  185,    2, 0x06,   54 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      13,    2,  186,    2, 0x02,   55 /* Public */,
      16,    2,  191,    2, 0x02,   58 /* Public */,
      18,    2,  196,    2, 0x02,   61 /* Public */,
      19,    2,  201,    2, 0x02,   64 /* Public */,
      20,    0,  206,    2, 0x02,   67 /* Public */,
      21,    0,  207,    2, 0x02,   68 /* Public */,
      22,    1,  208,    2, 0x02,   69 /* Public */,
      24,    1,  211,    2, 0x02,   71 /* Public */,
      25,    1,  214,    2, 0x02,   73 /* Public */,
      26,    1,  217,    2, 0x02,   75 /* Public */,
      27,    1,  220,    2, 0x02,   77 /* Public */,
      28,    1,  223,    2, 0x02,   79 /* Public */,
      29,    0,  226,    2, 0x02,   81 /* Public */,
      30,    0,  227,    2, 0x102,   82 /* Public | MethodIsConst  */,
      31,    2,  228,    2, 0x02,   83 /* Public */,
      34,    1,  233,    2, 0x02,   86 /* Public */,
      35,    0,  236,    2, 0x02,   88 /* Public */,
      36,    4,  237,    2, 0x02,   89 /* Public */,
      41,    1,  246,    2, 0x02,   94 /* Public */,
      44,    1,  249,    2, 0x02,   96 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   14,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   32,   33,
    QMetaType::Bool, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF,   37,   38,   39,   40,
    QMetaType::QString, 0x80000000 | 42,   43,
    QMetaType::QString, 0x80000000 | 42,   43,

 // properties: name, type, flags
      45, QMetaType::QString, 0x00015401, uint(-1), 0,
      46, 0x80000000 | 47, 0x00015409, uint(-1), 0,
      48, 0x80000000 | 49, 0x00015409, uint(-1), 0,
      50, 0x80000000 | 51, 0x00015409, uint(-1), 0,
      52, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      54, 0x80000000 | 55, 0x00015409, uint(-1), 0,
      56, 0x80000000 | 57, 0x00015409, uint(-1), 0,
      58, 0x80000000 | 59, 0x00015409, uint(-1), 0,
      60, 0x80000000 | 61, 0x00015409, uint(-1), 0,
      62, 0x80000000 | 63, 0x00015409, uint(-1), 0,
      64, 0x80000000 | 65, 0x00015409, uint(-1), 0,
      66, 0x80000000 | 67, 0x00015409, uint(-1), 0,
      68, 0x80000000 | 69, 0x00015409, uint(-1), 0,
      70, QMetaType::Bool, 0x00015401, uint(-1), 0,
      71, 0x80000000 | 72, 0x00015409, uint(-1), 0,
      73, 0x80000000 | 74, 0x00015409, uint(-1), 0,
      75, QMetaType::Bool, 0x00015401, uint(-1), 0,
      76, QMetaType::Bool, 0x00015401, uint(-1), 0,
      77, QMetaType::Bool, 0x00015401, uint(-1), 0,
      78, QMetaType::Int, 0x00015401, uint(-1), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(3), 0,
      11, QMetaType::Double, 0x00015103, uint(4), 0,
      79, QMetaType::Double, 0x00015401, uint(-1), 0,
      80, QMetaType::QString, 0x00015401, uint(-1), 0,
      81, QMetaType::QString, 0x00015401, uint(-1), 0,
      82, QMetaType::QString, 0x00015401, uint(-1), 0,
      83, QMetaType::QString, 0x00015401, uint(-1), 0,
      84, QMetaType::Bool, 0x00015103, uint(5), 0,
      85, QMetaType::QReal, 0x00015401, uint(-1), 0,
      86, QMetaType::QReal, 0x00015401, uint(-1), 0,
      87, QMetaType::QReal, 0x00015401, uint(-1), 0,
      88, QMetaType::QReal, 0x00015401, uint(-1), 0,
      89, QMetaType::QReal, 0x00015401, uint(-1), 0,
      90, QMetaType::QReal, 0x00015401, uint(-1), 0,
      91, QMetaType::QReal, 0x00015401, uint(-1), 0,
      92, QMetaType::Bool, 0x00015103, uint(1), 0,
      93, QMetaType::Int, 0x00015103, uint(2), 0,
      94, QMetaType::Bool, 0x00015401, uint(-1), 0,
      95, QMetaType::Bool, 0x00015401, uint(-1), 0,
      96, QMetaType::QString, 0x00015401, uint(-1), 0,
      97, QMetaType::QString, 0x00015401, uint(-1), 0,
      98, QMetaType::Bool, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      42,   42, 0x0,    6,  467,

 // enum data: key, value
      99, uint(QGroundControlQmlGlobal::AltitudeModeMixed),
     100, uint(QGroundControlQmlGlobal::AltitudeModeRelative),
     101, uint(QGroundControlQmlGlobal::AltitudeModeAbsolute),
     102, uint(QGroundControlQmlGlobal::AltitudeModeCalcAboveTerrain),
     103, uint(QGroundControlQmlGlobal::AltitudeModeTerrainFrame),
     104, uint(QGroundControlQmlGlobal::AltitudeModeNone),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGroundControlQmlGlobal::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGroundControlQmlGlobalENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS_t,
        // property 'appName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'linkManager'
        QtPrivate::TypeAndForceComplete<LinkManager*, std::true_type>,
        // property 'multiVehicleManager'
        QtPrivate::TypeAndForceComplete<MultiVehicleManager*, std::true_type>,
        // property 'mapEngineManager'
        QtPrivate::TypeAndForceComplete<QGCMapEngineManager*, std::true_type>,
        // property 'qgcPositionManger'
        QtPrivate::TypeAndForceComplete<QGCPositionManager*, std::true_type>,
        // property 'videoManager'
        QtPrivate::TypeAndForceComplete<VideoManager*, std::true_type>,
        // property 'mavlinkLogManager'
        QtPrivate::TypeAndForceComplete<MAVLinkLogManager*, std::true_type>,
        // property 'settingsManager'
        QtPrivate::TypeAndForceComplete<SettingsManager*, std::true_type>,
        // property 'adsbVehicleManager'
        QtPrivate::TypeAndForceComplete<ADSBVehicleManager*, std::true_type>,
        // property 'corePlugin'
        QtPrivate::TypeAndForceComplete<QGCCorePlugin*, std::true_type>,
        // property 'missionCommandTree'
        QtPrivate::TypeAndForceComplete<MissionCommandTree*, std::true_type>,
        // property 'gpsRtk'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'airlinkManager'
        QtPrivate::TypeAndForceComplete<AirLinkManager*, std::true_type>,
        // property 'airlinkSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'globalPalette'
        QtPrivate::TypeAndForceComplete<QGCPalette*, std::true_type>,
        // property 'unitsConversion'
        QtPrivate::TypeAndForceComplete<QmlUnitsConversion*, std::true_type>,
        // property 'singleFirmwareSupport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'singleVehicleSupport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'px4ProFirmwareSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'apmFirmwareSupported'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'flightMapPosition'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'flightMapZoom'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'flightMapInitialZoom'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'parameterFileExtension'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'missionFileExtension'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'telemetryFileExtension'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'qgcVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'skipSetupPage'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'zOrderTopMost'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderWidgets'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderMapItems'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderVehicles'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderWaypointIndicators'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderTrajectoryLines'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zOrderWaypointLines'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'isVersionCheckEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'mavlinkSystemID'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hasAPMSupport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasMAVLinkInspector'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'elevationProviderName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'elevationProviderNotice'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'utmspSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'AltMode'
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal::AltMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal, std::true_type>,
        // method 'isMultiplexingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isVersionCheckEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mavlinkSystemIDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'flightMapPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'flightMapZoomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'skipSetupPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveGlobalSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadGlobalSetting'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveBoolGlobalSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadBoolGlobalSetting'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deleteAllSettingsNextBoot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearDeleteAllSettingsNextBoot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startPX4MockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startGenericMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startAPMArduCopterMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startAPMArduPlaneMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startAPMArduSubMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startAPMArduRoverMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stopOneMockLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loggingCategories'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'setCategoryLoggingOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'categoryLoggingOn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateLoggingFilterRules'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'linesIntersect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'altitudeModeExtraUnits'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<AltMode, std::false_type>,
        // method 'altitudeModeShortDescription'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<AltMode, std::false_type>
    >,
    nullptr
} };

void QGroundControlQmlGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isMultiplexingEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isVersionCheckEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->mavlinkSystemIDChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->flightMapPositionChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 4: _t->flightMapZoomChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->skipSetupPageChanged(); break;
        case 6: _t->saveGlobalSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: { QString _r = _t->loadGlobalSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->saveBoolGlobalSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: { bool _r = _t->loadBoolGlobalSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->deleteAllSettingsNextBoot(); break;
        case 11: _t->clearDeleteAllSettingsNextBoot(); break;
        case 12: _t->startPX4MockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->startGenericMockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->startAPMArduCopterMockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->startAPMArduPlaneMockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->startAPMArduSubMockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->startAPMArduRoverMockLink((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->stopOneMockLink(); break;
        case 19: { QStringList _r = _t->loggingCategories();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setCategoryLoggingOn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: { bool _r = _t->categoryLoggingOn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->updateLoggingFilterRules(); break;
        case 23: { bool _r = _t->linesIntersect((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->altitudeModeExtraUnits((*reinterpret_cast< std::add_pointer_t<AltMode>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->altitudeModeShortDescription((*reinterpret_cast< std::add_pointer_t<AltMode>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGroundControlQmlGlobal::*)(bool );
            if (_t _q_method = &QGroundControlQmlGlobal::isMultiplexingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(bool );
            if (_t _q_method = &QGroundControlQmlGlobal::isVersionCheckEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(int );
            if (_t _q_method = &QGroundControlQmlGlobal::mavlinkSystemIDChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(QGeoCoordinate );
            if (_t _q_method = &QGroundControlQmlGlobal::flightMapPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)(double );
            if (_t _q_method = &QGroundControlQmlGlobal::flightMapZoomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGroundControlQmlGlobal::*)();
            if (_t _q_method = &QGroundControlQmlGlobal::skipSetupPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlUnitsConversion* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 1: *reinterpret_cast< LinkManager**>(_v) = _t->linkManager(); break;
        case 2: *reinterpret_cast< MultiVehicleManager**>(_v) = _t->multiVehicleManager(); break;
        case 3: *reinterpret_cast< QGCMapEngineManager**>(_v) = _t->mapEngineManager(); break;
        case 4: *reinterpret_cast< QGCPositionManager**>(_v) = _t->qgcPositionManger(); break;
        case 5: *reinterpret_cast< VideoManager**>(_v) = _t->videoManager(); break;
        case 6: *reinterpret_cast< MAVLinkLogManager**>(_v) = _t->mavlinkLogManager(); break;
        case 7: *reinterpret_cast< SettingsManager**>(_v) = _t->settingsManager(); break;
        case 8: *reinterpret_cast< ADSBVehicleManager**>(_v) = _t->adsbVehicleManager(); break;
        case 9: *reinterpret_cast< QGCCorePlugin**>(_v) = _t->corePlugin(); break;
        case 10: *reinterpret_cast< MissionCommandTree**>(_v) = _t->missionCommandTree(); break;
        case 11: *reinterpret_cast< FactGroup**>(_v) = _t->gpsRtkFactGroup(); break;
        case 12: *reinterpret_cast< AirLinkManager**>(_v) = _t->airlinkManager(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->airlinkSupported(); break;
        case 14: *reinterpret_cast< QGCPalette**>(_v) = _t->_globalPalette; break;
        case 15: *reinterpret_cast< QmlUnitsConversion**>(_v) = _t->unitsConversion(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->singleFirmwareSupport(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->singleVehicleSupport(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->px4ProFirmwareSupported(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->apmFirmwareSupported(); break;
        case 20: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->flightMapPosition(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->flightMapZoom(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->_flightMapInitialZoom; break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->parameterFileExtension(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->missionFileExtension(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->telemetryFileExtension(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->qgcVersion(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->skipSetupPage(); break;
        case 28: *reinterpret_cast< qreal*>(_v) = _t->zOrderTopMost(); break;
        case 29: *reinterpret_cast< qreal*>(_v) = _t->zOrderWidgets(); break;
        case 30: *reinterpret_cast< qreal*>(_v) = _t->zOrderMapItems(); break;
        case 31: *reinterpret_cast< qreal*>(_v) = _t->zOrderVehicles(); break;
        case 32: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointIndicators(); break;
        case 33: *reinterpret_cast< qreal*>(_v) = _t->zOrderTrajectoryLines(); break;
        case 34: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointLines(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->isVersionCheckEnabled(); break;
        case 36: *reinterpret_cast< int*>(_v) = _t->mavlinkSystemID(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->hasAPMSupport(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->hasMAVLinkInspector(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->elevationProviderName(); break;
        case 40: *reinterpret_cast< QString*>(_v) = _t->elevationProviderNotice(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->utmspSupported(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 20: _t->setFlightMapPosition(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 21: _t->setFlightMapZoom(*reinterpret_cast< double*>(_v)); break;
        case 27: _t->setSkipSetupPage(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setIsVersionCheckEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setMavlinkSystemID(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGroundControlQmlGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGroundControlQmlGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGroundControlQmlGlobalENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGroundControlQmlGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void QGroundControlQmlGlobal::isMultiplexingEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGroundControlQmlGlobal::isVersionCheckEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGroundControlQmlGlobal::mavlinkSystemIDChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGroundControlQmlGlobal::flightMapPositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGroundControlQmlGlobal::flightMapZoomChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGroundControlQmlGlobal::skipSetupPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
