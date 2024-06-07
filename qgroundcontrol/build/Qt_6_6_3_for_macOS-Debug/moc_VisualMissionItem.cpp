/****************************************************************************
** Meta object code from reading C++ file 'VisualMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/VisualMissionItem.h"
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
#include "PlanMasterController.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualMissionItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVisualMissionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVisualMissionItemENDCLASS = QtMocHelpers::stringData(
    "VisualMissionItem",
    "altDifferenceChanged",
    "",
    "altDifference",
    "altPercentChanged",
    "altPercent",
    "terrainPercentChanged",
    "terrainPercent",
    "terrainCollisionChanged",
    "terrainCollision",
    "azimuthChanged",
    "azimuth",
    "commandDescriptionChanged",
    "commandNameChanged",
    "abbreviationChanged",
    "coordinateChanged",
    "QGeoCoordinate",
    "coordinate",
    "exitCoordinateChanged",
    "exitCoordinate",
    "dirtyChanged",
    "dirty",
    "distanceChanged",
    "distance",
    "distanceFromStartChanged",
    "distanceFromStart",
    "isCurrentItemChanged",
    "isCurrentItem",
    "hasCurrentChildItemChanged",
    "hasCurrentChildItem",
    "sequenceNumberChanged",
    "sequenceNumber",
    "isSimpleItemChanged",
    "isSimpleItem",
    "isTakeoffItemChanged",
    "isTakeoffItem",
    "isLandCommandChanged",
    "specifiesCoordinateChanged",
    "isStandaloneCoordinateChanged",
    "specifiesAltitudeOnlyChanged",
    "specifiedFlightSpeedChanged",
    "specifiedGimbalYawChanged",
    "specifiedGimbalPitchChanged",
    "specifiedVehicleYawChanged",
    "lastSequenceNumberChanged",
    "missionGimbalYawChanged",
    "missionGimbalYaw",
    "missionVehicleYawChanged",
    "missionVehicleYaw",
    "terrainAltitudeChanged",
    "terrainAltitude",
    "additionalTimeDelayChanged",
    "boundingCubeChanged",
    "readyForSaveStateChanged",
    "wizardModeChanged",
    "wizardMode",
    "parentItemChanged",
    "VisualMissionItem*",
    "parentItem",
    "amslEntryAltChanged",
    "alt",
    "amslExitAltChanged",
    "previousVTOLModeChanged",
    "currentVTOLModeChanged",
    "exitCoordinateSameAsEntryChanged",
    "exitCoordinateSameAsEntry",
    "_amslEntryAltChanged",
    "_amslExitAltChanged",
    "_updateTerrainAltitude",
    "_reallyUpdateTerrainAltitude",
    "_terrainDataReceived",
    "success",
    "QList<double>",
    "heights",
    "homePosition",
    "amslEntryAlt",
    "amslExitAlt",
    "commandDescription",
    "commandName",
    "abbreviation",
    "lastSequenceNumber",
    "specifiesCoordinate",
    "isStandaloneCoordinate",
    "specifiesAltitudeOnly",
    "isLandCommand",
    "isSurveyItem",
    "editorQml",
    "mapVisualQML",
    "specifiedFlightSpeed",
    "specifiedGimbalYaw",
    "specifiedGimbalPitch",
    "specifiedVehicleYaw",
    "flyView",
    "previousVTOLMode",
    "masterController",
    "PlanMasterController*",
    "readyForSaveState",
    "ReadyForSaveState",
    "childItems",
    "QmlObjectListModel*",
    "boundingCube",
    "QGCGeoBoundingCube*",
    "ReadyForSave",
    "NotReadyForSaveTerrain",
    "NotReadyForSaveData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVisualMissionItemENDCLASS_t {
    uint offsetsAndSizes[210];
    char stringdata0[18];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[18];
    char stringdata5[11];
    char stringdata6[22];
    char stringdata7[15];
    char stringdata8[24];
    char stringdata9[17];
    char stringdata10[15];
    char stringdata11[8];
    char stringdata12[26];
    char stringdata13[19];
    char stringdata14[20];
    char stringdata15[18];
    char stringdata16[15];
    char stringdata17[11];
    char stringdata18[22];
    char stringdata19[15];
    char stringdata20[13];
    char stringdata21[6];
    char stringdata22[16];
    char stringdata23[9];
    char stringdata24[25];
    char stringdata25[18];
    char stringdata26[21];
    char stringdata27[14];
    char stringdata28[27];
    char stringdata29[20];
    char stringdata30[22];
    char stringdata31[15];
    char stringdata32[20];
    char stringdata33[13];
    char stringdata34[21];
    char stringdata35[14];
    char stringdata36[21];
    char stringdata37[27];
    char stringdata38[30];
    char stringdata39[29];
    char stringdata40[28];
    char stringdata41[26];
    char stringdata42[28];
    char stringdata43[27];
    char stringdata44[26];
    char stringdata45[24];
    char stringdata46[17];
    char stringdata47[25];
    char stringdata48[18];
    char stringdata49[23];
    char stringdata50[16];
    char stringdata51[27];
    char stringdata52[20];
    char stringdata53[25];
    char stringdata54[18];
    char stringdata55[11];
    char stringdata56[18];
    char stringdata57[19];
    char stringdata58[11];
    char stringdata59[20];
    char stringdata60[4];
    char stringdata61[19];
    char stringdata62[24];
    char stringdata63[23];
    char stringdata64[33];
    char stringdata65[26];
    char stringdata66[21];
    char stringdata67[20];
    char stringdata68[23];
    char stringdata69[29];
    char stringdata70[21];
    char stringdata71[8];
    char stringdata72[14];
    char stringdata73[8];
    char stringdata74[13];
    char stringdata75[13];
    char stringdata76[12];
    char stringdata77[19];
    char stringdata78[12];
    char stringdata79[13];
    char stringdata80[19];
    char stringdata81[20];
    char stringdata82[23];
    char stringdata83[22];
    char stringdata84[14];
    char stringdata85[13];
    char stringdata86[10];
    char stringdata87[13];
    char stringdata88[21];
    char stringdata89[19];
    char stringdata90[21];
    char stringdata91[20];
    char stringdata92[8];
    char stringdata93[17];
    char stringdata94[17];
    char stringdata95[22];
    char stringdata96[18];
    char stringdata97[18];
    char stringdata98[11];
    char stringdata99[20];
    char stringdata100[13];
    char stringdata101[20];
    char stringdata102[13];
    char stringdata103[23];
    char stringdata104[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVisualMissionItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVisualMissionItemENDCLASS_t qt_meta_stringdata_CLASSVisualMissionItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "VisualMissionItem"
        QT_MOC_LITERAL(18, 20),  // "altDifferenceChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 13),  // "altDifference"
        QT_MOC_LITERAL(54, 17),  // "altPercentChanged"
        QT_MOC_LITERAL(72, 10),  // "altPercent"
        QT_MOC_LITERAL(83, 21),  // "terrainPercentChanged"
        QT_MOC_LITERAL(105, 14),  // "terrainPercent"
        QT_MOC_LITERAL(120, 23),  // "terrainCollisionChanged"
        QT_MOC_LITERAL(144, 16),  // "terrainCollision"
        QT_MOC_LITERAL(161, 14),  // "azimuthChanged"
        QT_MOC_LITERAL(176, 7),  // "azimuth"
        QT_MOC_LITERAL(184, 25),  // "commandDescriptionChanged"
        QT_MOC_LITERAL(210, 18),  // "commandNameChanged"
        QT_MOC_LITERAL(229, 19),  // "abbreviationChanged"
        QT_MOC_LITERAL(249, 17),  // "coordinateChanged"
        QT_MOC_LITERAL(267, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(282, 10),  // "coordinate"
        QT_MOC_LITERAL(293, 21),  // "exitCoordinateChanged"
        QT_MOC_LITERAL(315, 14),  // "exitCoordinate"
        QT_MOC_LITERAL(330, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(343, 5),  // "dirty"
        QT_MOC_LITERAL(349, 15),  // "distanceChanged"
        QT_MOC_LITERAL(365, 8),  // "distance"
        QT_MOC_LITERAL(374, 24),  // "distanceFromStartChanged"
        QT_MOC_LITERAL(399, 17),  // "distanceFromStart"
        QT_MOC_LITERAL(417, 20),  // "isCurrentItemChanged"
        QT_MOC_LITERAL(438, 13),  // "isCurrentItem"
        QT_MOC_LITERAL(452, 26),  // "hasCurrentChildItemChanged"
        QT_MOC_LITERAL(479, 19),  // "hasCurrentChildItem"
        QT_MOC_LITERAL(499, 21),  // "sequenceNumberChanged"
        QT_MOC_LITERAL(521, 14),  // "sequenceNumber"
        QT_MOC_LITERAL(536, 19),  // "isSimpleItemChanged"
        QT_MOC_LITERAL(556, 12),  // "isSimpleItem"
        QT_MOC_LITERAL(569, 20),  // "isTakeoffItemChanged"
        QT_MOC_LITERAL(590, 13),  // "isTakeoffItem"
        QT_MOC_LITERAL(604, 20),  // "isLandCommandChanged"
        QT_MOC_LITERAL(625, 26),  // "specifiesCoordinateChanged"
        QT_MOC_LITERAL(652, 29),  // "isStandaloneCoordinateChanged"
        QT_MOC_LITERAL(682, 28),  // "specifiesAltitudeOnlyChanged"
        QT_MOC_LITERAL(711, 27),  // "specifiedFlightSpeedChanged"
        QT_MOC_LITERAL(739, 25),  // "specifiedGimbalYawChanged"
        QT_MOC_LITERAL(765, 27),  // "specifiedGimbalPitchChanged"
        QT_MOC_LITERAL(793, 26),  // "specifiedVehicleYawChanged"
        QT_MOC_LITERAL(820, 25),  // "lastSequenceNumberChanged"
        QT_MOC_LITERAL(846, 23),  // "missionGimbalYawChanged"
        QT_MOC_LITERAL(870, 16),  // "missionGimbalYaw"
        QT_MOC_LITERAL(887, 24),  // "missionVehicleYawChanged"
        QT_MOC_LITERAL(912, 17),  // "missionVehicleYaw"
        QT_MOC_LITERAL(930, 22),  // "terrainAltitudeChanged"
        QT_MOC_LITERAL(953, 15),  // "terrainAltitude"
        QT_MOC_LITERAL(969, 26),  // "additionalTimeDelayChanged"
        QT_MOC_LITERAL(996, 19),  // "boundingCubeChanged"
        QT_MOC_LITERAL(1016, 24),  // "readyForSaveStateChanged"
        QT_MOC_LITERAL(1041, 17),  // "wizardModeChanged"
        QT_MOC_LITERAL(1059, 10),  // "wizardMode"
        QT_MOC_LITERAL(1070, 17),  // "parentItemChanged"
        QT_MOC_LITERAL(1088, 18),  // "VisualMissionItem*"
        QT_MOC_LITERAL(1107, 10),  // "parentItem"
        QT_MOC_LITERAL(1118, 19),  // "amslEntryAltChanged"
        QT_MOC_LITERAL(1138, 3),  // "alt"
        QT_MOC_LITERAL(1142, 18),  // "amslExitAltChanged"
        QT_MOC_LITERAL(1161, 23),  // "previousVTOLModeChanged"
        QT_MOC_LITERAL(1185, 22),  // "currentVTOLModeChanged"
        QT_MOC_LITERAL(1208, 32),  // "exitCoordinateSameAsEntryChanged"
        QT_MOC_LITERAL(1241, 25),  // "exitCoordinateSameAsEntry"
        QT_MOC_LITERAL(1267, 20),  // "_amslEntryAltChanged"
        QT_MOC_LITERAL(1288, 19),  // "_amslExitAltChanged"
        QT_MOC_LITERAL(1308, 22),  // "_updateTerrainAltitude"
        QT_MOC_LITERAL(1331, 28),  // "_reallyUpdateTerrainAltitude"
        QT_MOC_LITERAL(1360, 20),  // "_terrainDataReceived"
        QT_MOC_LITERAL(1381, 7),  // "success"
        QT_MOC_LITERAL(1389, 13),  // "QList<double>"
        QT_MOC_LITERAL(1403, 7),  // "heights"
        QT_MOC_LITERAL(1411, 12),  // "homePosition"
        QT_MOC_LITERAL(1424, 12),  // "amslEntryAlt"
        QT_MOC_LITERAL(1437, 11),  // "amslExitAlt"
        QT_MOC_LITERAL(1449, 18),  // "commandDescription"
        QT_MOC_LITERAL(1468, 11),  // "commandName"
        QT_MOC_LITERAL(1480, 12),  // "abbreviation"
        QT_MOC_LITERAL(1493, 18),  // "lastSequenceNumber"
        QT_MOC_LITERAL(1512, 19),  // "specifiesCoordinate"
        QT_MOC_LITERAL(1532, 22),  // "isStandaloneCoordinate"
        QT_MOC_LITERAL(1555, 21),  // "specifiesAltitudeOnly"
        QT_MOC_LITERAL(1577, 13),  // "isLandCommand"
        QT_MOC_LITERAL(1591, 12),  // "isSurveyItem"
        QT_MOC_LITERAL(1604, 9),  // "editorQml"
        QT_MOC_LITERAL(1614, 12),  // "mapVisualQML"
        QT_MOC_LITERAL(1627, 20),  // "specifiedFlightSpeed"
        QT_MOC_LITERAL(1648, 18),  // "specifiedGimbalYaw"
        QT_MOC_LITERAL(1667, 20),  // "specifiedGimbalPitch"
        QT_MOC_LITERAL(1688, 19),  // "specifiedVehicleYaw"
        QT_MOC_LITERAL(1708, 7),  // "flyView"
        QT_MOC_LITERAL(1716, 16),  // "previousVTOLMode"
        QT_MOC_LITERAL(1733, 16),  // "masterController"
        QT_MOC_LITERAL(1750, 21),  // "PlanMasterController*"
        QT_MOC_LITERAL(1772, 17),  // "readyForSaveState"
        QT_MOC_LITERAL(1790, 17),  // "ReadyForSaveState"
        QT_MOC_LITERAL(1808, 10),  // "childItems"
        QT_MOC_LITERAL(1819, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(1839, 12),  // "boundingCube"
        QT_MOC_LITERAL(1852, 19),  // "QGCGeoBoundingCube*"
        QT_MOC_LITERAL(1872, 12),  // "ReadyForSave"
        QT_MOC_LITERAL(1885, 22),  // "NotReadyForSaveTerrain"
        QT_MOC_LITERAL(1908, 19)   // "NotReadyForSaveData"
    },
    "VisualMissionItem",
    "altDifferenceChanged",
    "",
    "altDifference",
    "altPercentChanged",
    "altPercent",
    "terrainPercentChanged",
    "terrainPercent",
    "terrainCollisionChanged",
    "terrainCollision",
    "azimuthChanged",
    "azimuth",
    "commandDescriptionChanged",
    "commandNameChanged",
    "abbreviationChanged",
    "coordinateChanged",
    "QGeoCoordinate",
    "coordinate",
    "exitCoordinateChanged",
    "exitCoordinate",
    "dirtyChanged",
    "dirty",
    "distanceChanged",
    "distance",
    "distanceFromStartChanged",
    "distanceFromStart",
    "isCurrentItemChanged",
    "isCurrentItem",
    "hasCurrentChildItemChanged",
    "hasCurrentChildItem",
    "sequenceNumberChanged",
    "sequenceNumber",
    "isSimpleItemChanged",
    "isSimpleItem",
    "isTakeoffItemChanged",
    "isTakeoffItem",
    "isLandCommandChanged",
    "specifiesCoordinateChanged",
    "isStandaloneCoordinateChanged",
    "specifiesAltitudeOnlyChanged",
    "specifiedFlightSpeedChanged",
    "specifiedGimbalYawChanged",
    "specifiedGimbalPitchChanged",
    "specifiedVehicleYawChanged",
    "lastSequenceNumberChanged",
    "missionGimbalYawChanged",
    "missionGimbalYaw",
    "missionVehicleYawChanged",
    "missionVehicleYaw",
    "terrainAltitudeChanged",
    "terrainAltitude",
    "additionalTimeDelayChanged",
    "boundingCubeChanged",
    "readyForSaveStateChanged",
    "wizardModeChanged",
    "wizardMode",
    "parentItemChanged",
    "VisualMissionItem*",
    "parentItem",
    "amslEntryAltChanged",
    "alt",
    "amslExitAltChanged",
    "previousVTOLModeChanged",
    "currentVTOLModeChanged",
    "exitCoordinateSameAsEntryChanged",
    "exitCoordinateSameAsEntry",
    "_amslEntryAltChanged",
    "_amslExitAltChanged",
    "_updateTerrainAltitude",
    "_reallyUpdateTerrainAltitude",
    "_terrainDataReceived",
    "success",
    "QList<double>",
    "heights",
    "homePosition",
    "amslEntryAlt",
    "amslExitAlt",
    "commandDescription",
    "commandName",
    "abbreviation",
    "lastSequenceNumber",
    "specifiesCoordinate",
    "isStandaloneCoordinate",
    "specifiesAltitudeOnly",
    "isLandCommand",
    "isSurveyItem",
    "editorQml",
    "mapVisualQML",
    "specifiedFlightSpeed",
    "specifiedGimbalYaw",
    "specifiedGimbalPitch",
    "specifiedVehicleYaw",
    "flyView",
    "previousVTOLMode",
    "masterController",
    "PlanMasterController*",
    "readyForSaveState",
    "ReadyForSaveState",
    "childItems",
    "QmlObjectListModel*",
    "boundingCube",
    "QGCGeoBoundingCube*",
    "ReadyForSave",
    "NotReadyForSaveTerrain",
    "NotReadyForSaveData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVisualMissionItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
      45,  381, // properties
       1,  606, // enums/sets
       0,    0, // constructors
       0,       // flags
      40,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  284,    2, 0x06,   47 /* Public */,
       4,    1,  287,    2, 0x06,   49 /* Public */,
       6,    1,  290,    2, 0x06,   51 /* Public */,
       8,    1,  293,    2, 0x06,   53 /* Public */,
      10,    1,  296,    2, 0x06,   55 /* Public */,
      12,    0,  299,    2, 0x06,   57 /* Public */,
      13,    0,  300,    2, 0x06,   58 /* Public */,
      14,    0,  301,    2, 0x06,   59 /* Public */,
      15,    1,  302,    2, 0x06,   60 /* Public */,
      18,    1,  305,    2, 0x06,   62 /* Public */,
      20,    1,  308,    2, 0x06,   64 /* Public */,
      22,    1,  311,    2, 0x06,   66 /* Public */,
      24,    1,  314,    2, 0x06,   68 /* Public */,
      26,    1,  317,    2, 0x06,   70 /* Public */,
      28,    1,  320,    2, 0x06,   72 /* Public */,
      30,    1,  323,    2, 0x06,   74 /* Public */,
      32,    1,  326,    2, 0x06,   76 /* Public */,
      34,    1,  329,    2, 0x06,   78 /* Public */,
      36,    0,  332,    2, 0x06,   80 /* Public */,
      37,    0,  333,    2, 0x06,   81 /* Public */,
      38,    0,  334,    2, 0x06,   82 /* Public */,
      39,    0,  335,    2, 0x06,   83 /* Public */,
      40,    0,  336,    2, 0x06,   84 /* Public */,
      41,    0,  337,    2, 0x06,   85 /* Public */,
      42,    0,  338,    2, 0x06,   86 /* Public */,
      43,    0,  339,    2, 0x06,   87 /* Public */,
      44,    1,  340,    2, 0x06,   88 /* Public */,
      45,    1,  343,    2, 0x06,   90 /* Public */,
      47,    1,  346,    2, 0x06,   92 /* Public */,
      49,    1,  349,    2, 0x06,   94 /* Public */,
      51,    0,  352,    2, 0x06,   96 /* Public */,
      52,    0,  353,    2, 0x06,   97 /* Public */,
      53,    0,  354,    2, 0x06,   98 /* Public */,
      54,    1,  355,    2, 0x06,   99 /* Public */,
      56,    1,  358,    2, 0x06,  101 /* Public */,
      59,    1,  361,    2, 0x06,  103 /* Public */,
      61,    1,  364,    2, 0x06,  105 /* Public */,
      62,    0,  367,    2, 0x06,  107 /* Public */,
      63,    0,  368,    2, 0x06,  108 /* Public */,
      64,    1,  369,    2, 0x06,  109 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      66,    0,  372,    2, 0x09,  111 /* Protected */,
      67,    0,  373,    2, 0x09,  112 /* Protected */,
      68,    0,  374,    2, 0x08,  113 /* Private */,
      69,    0,  375,    2, 0x08,  114 /* Private */,
      70,    2,  376,    2, 0x08,  115 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Double,   46,
    QMetaType::Void, QMetaType::Double,   48,
    QMetaType::Void, QMetaType::Double,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   65,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 72,   71,   73,

 // properties: name, type, flags
      74, QMetaType::Bool, 0x00015401, uint(-1), 0,
      17, 0x80000000 | 16, 0x0001510b, uint(8), 0,
      75, QMetaType::Double, 0x00015001, uint(35), 0,
      50, QMetaType::Double, 0x00015001, uint(29), 0,
      19, 0x80000000 | 16, 0x00015009, uint(9), 0,
      76, QMetaType::Double, 0x00015001, uint(36), 0,
      65, QMetaType::Bool, 0x00015001, uint(39), 0,
      77, QMetaType::QString, 0x00015001, uint(5), 0,
      78, QMetaType::QString, 0x00015001, uint(6), 0,
      79, QMetaType::QString, 0x00015001, uint(7), 0,
      21, QMetaType::Bool, 0x00015103, uint(10), 0,
      27, QMetaType::Bool, 0x00015103, uint(13), 0,
      29, QMetaType::Bool, 0x00015103, uint(14), 0,
      31, QMetaType::Int, 0x00015103, uint(15), 0,
      80, QMetaType::Int, 0x00015001, uint(26), 0,
      81, QMetaType::Bool, 0x00015001, uint(19), 0,
      82, QMetaType::Bool, 0x00015001, uint(20), 0,
      83, QMetaType::Bool, 0x00015001, uint(21), 0,
      33, QMetaType::Bool, 0x00015001, uint(16), 0,
      35, QMetaType::Bool, 0x00015001, uint(17), 0,
      84, QMetaType::Bool, 0x00015001, uint(18), 0,
      85, QMetaType::Bool, 0x00015001, uint(-1), 0,
      86, QMetaType::QString, 0x00015401, uint(-1), 0,
      87, QMetaType::QString, 0x00015401, uint(-1), 0,
      88, QMetaType::Double, 0x00015001, uint(22), 0,
      89, QMetaType::Double, 0x00015001, uint(23), 0,
      90, QMetaType::Double, 0x00015001, uint(24), 0,
      91, QMetaType::Double, 0x00015001, uint(25), 0,
      46, QMetaType::Double, 0x00015001, uint(27), 0,
      48, QMetaType::Double, 0x00015001, uint(28), 0,
      92, QMetaType::Bool, 0x00015401, uint(-1), 0,
      55, QMetaType::Bool, 0x00015103, uint(33), 0,
      93, QMetaType::Int, 0x00015003, uint(37), 0,
      94, 0x80000000 | 95, 0x00015409, uint(-1), 0,
      96, 0x80000000 | 97, 0x00015009, uint(32), 0,
      58, 0x80000000 | 57, 0x0001510b, uint(34), 0,
      98, 0x80000000 | 99, 0x00015409, uint(-1), 0,
     100, 0x80000000 | 101, 0x00015009, uint(31), 0,
       3, QMetaType::Double, 0x00015103, uint(0), 0,
       5, QMetaType::Double, 0x00015103, uint(1), 0,
       7, QMetaType::Double, 0x00015103, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,
      11, QMetaType::Double, 0x00015103, uint(4), 0,
      23, QMetaType::Double, 0x00015103, uint(11), 0,
      25, QMetaType::Double, 0x00015103, uint(12), 0,

 // enums: name, alias, flags, count, data
      97,   97, 0x0,    3,  611,

 // enum data: key, value
     102, uint(VisualMissionItem::ReadyForSave),
     103, uint(VisualMissionItem::NotReadyForSaveTerrain),
     104, uint(VisualMissionItem::NotReadyForSaveData),

       0        // eod
};

Q_CONSTINIT const QMetaObject VisualMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVisualMissionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVisualMissionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVisualMissionItemENDCLASS_t,
        // property 'homePosition'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'coordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'amslEntryAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'terrainAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'exitCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'amslExitAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'exitCoordinateSameAsEntry'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'commandDescription'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'commandName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'abbreviation'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isCurrentItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasCurrentChildItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sequenceNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'lastSequenceNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'specifiesCoordinate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isStandaloneCoordinate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'specifiesAltitudeOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSimpleItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isTakeoffItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isLandCommand'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSurveyItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'editorQml'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mapVisualQML'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'specifiedFlightSpeed'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'specifiedGimbalYaw'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'specifiedGimbalPitch'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'specifiedVehicleYaw'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionGimbalYaw'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionVehicleYaw'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'flyView'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wizardMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'previousVTOLMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'masterController'
        QtPrivate::TypeAndForceComplete<PlanMasterController*, std::true_type>,
        // property 'readyForSaveState'
        QtPrivate::TypeAndForceComplete<ReadyForSaveState, std::true_type>,
        // property 'parentItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem*, std::true_type>,
        // property 'childItems'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'boundingCube'
        QtPrivate::TypeAndForceComplete<QGCGeoBoundingCube*, std::true_type>,
        // property 'altDifference'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'altPercent'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'terrainPercent'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'terrainCollision'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'azimuth'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'distance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'distanceFromStart'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // enum 'ReadyForSaveState'
        QtPrivate::TypeAndForceComplete<VisualMissionItem::ReadyForSaveState, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VisualMissionItem, std::true_type>,
        // method 'altDifferenceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'altPercentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'terrainPercentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'terrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'azimuthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'commandDescriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commandNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abbreviationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'exitCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'distanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'distanceFromStartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'isCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hasCurrentChildItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sequenceNumberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isSimpleItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isTakeoffItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isLandCommandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiesCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isStandaloneCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiesAltitudeOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiedFlightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiedGimbalYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiedGimbalPitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specifiedVehicleYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lastSequenceNumberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'missionGimbalYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'missionVehicleYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'terrainAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'additionalTimeDelayChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boundingCubeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyForSaveStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wizardModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'parentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        // method 'amslEntryAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'amslExitAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'previousVTOLModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentVTOLModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitCoordinateSameAsEntryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_amslEntryAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_amslExitAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateTerrainAltitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_reallyUpdateTerrainAltitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>
    >,
    nullptr
} };

void VisualMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->altDifferenceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->altPercentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->terrainPercentChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->terrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->azimuthChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->commandDescriptionChanged(); break;
        case 6: _t->commandNameChanged(); break;
        case 7: _t->abbreviationChanged(); break;
        case 8: _t->coordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 9: _t->exitCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 10: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->distanceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->distanceFromStartChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->isCurrentItemChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->hasCurrentChildItemChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->sequenceNumberChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->isSimpleItemChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->isTakeoffItemChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->isLandCommandChanged(); break;
        case 19: _t->specifiesCoordinateChanged(); break;
        case 20: _t->isStandaloneCoordinateChanged(); break;
        case 21: _t->specifiesAltitudeOnlyChanged(); break;
        case 22: _t->specifiedFlightSpeedChanged(); break;
        case 23: _t->specifiedGimbalYawChanged(); break;
        case 24: _t->specifiedGimbalPitchChanged(); break;
        case 25: _t->specifiedVehicleYawChanged(); break;
        case 26: _t->lastSequenceNumberChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->missionGimbalYawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 28: _t->missionVehicleYawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->terrainAltitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->additionalTimeDelayChanged(); break;
        case 31: _t->boundingCubeChanged(); break;
        case 32: _t->readyForSaveStateChanged(); break;
        case 33: _t->wizardModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->parentItemChanged((*reinterpret_cast< std::add_pointer_t<VisualMissionItem*>>(_a[1]))); break;
        case 35: _t->amslEntryAltChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 36: _t->amslExitAltChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 37: _t->previousVTOLModeChanged(); break;
        case 38: _t->currentVTOLModeChanged(); break;
        case 39: _t->exitCoordinateSameAsEntryChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->_amslEntryAltChanged(); break;
        case 41: _t->_amslExitAltChanged(); break;
        case 42: _t->_updateTerrainAltitude(); break;
        case 43: _t->_reallyUpdateTerrainAltitude(); break;
        case 44: _t->_terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VisualMissionItem* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::altDifferenceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::altPercentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::terrainPercentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::terrainCollisionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::azimuthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::commandDescriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::commandNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::abbreviationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (_t _q_method = &VisualMissionItem::coordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(const QGeoCoordinate & );
            if (_t _q_method = &VisualMissionItem::exitCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::distanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::distanceFromStartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::isCurrentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::hasCurrentChildItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (_t _q_method = &VisualMissionItem::sequenceNumberChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::isSimpleItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::isTakeoffItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::isLandCommandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiesCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::isStandaloneCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiesAltitudeOnlyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiedFlightSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiedGimbalYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiedGimbalPitchChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::specifiedVehicleYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(int );
            if (_t _q_method = &VisualMissionItem::lastSequenceNumberChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::missionGimbalYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::missionVehicleYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::terrainAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::additionalTimeDelayChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::boundingCubeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::readyForSaveStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::wizardModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(VisualMissionItem * );
            if (_t _q_method = &VisualMissionItem::parentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::amslEntryAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(double );
            if (_t _q_method = &VisualMissionItem::amslExitAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::previousVTOLModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)();
            if (_t _q_method = &VisualMissionItem::currentVTOLModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (VisualMissionItem::*)(bool );
            if (_t _q_method = &VisualMissionItem::exitCoordinateSameAsEntryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 37:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 4:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 36:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 35:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VisualMissionItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->homePosition(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->amslEntryAlt(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->terrainAltitude(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->exitCoordinate(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->amslExitAlt(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->exitCoordinateSameAsEntry(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->commandDescription(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->commandName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->abbreviation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isCurrentItem(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasCurrentChildItem(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->sequenceNumber(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->lastSequenceNumber(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->specifiesCoordinate(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isStandaloneCoordinate(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitudeOnly(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isSimpleItem(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->isTakeoffItem(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isLandCommand(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isSurveyItem(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->_editorQml; break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->mapVisualQML(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->specifiedFlightSpeed(); break;
        case 25: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalYaw(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->specifiedGimbalPitch(); break;
        case 27: *reinterpret_cast< double*>(_v) = _t->specifiedVehicleYaw(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->missionGimbalYaw(); break;
        case 29: *reinterpret_cast< double*>(_v) = _t->missionVehicleYaw(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->flyView(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->wizardMode(); break;
        case 32: *reinterpret_cast< int*>(_v) = _t->_previousVTOLMode; break;
        case 33: *reinterpret_cast< PlanMasterController**>(_v) = _t->masterController(); break;
        case 34: *reinterpret_cast< ReadyForSaveState*>(_v) = _t->readyForSaveState(); break;
        case 35: *reinterpret_cast< VisualMissionItem**>(_v) = _t->parentItem(); break;
        case 36: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->childItems(); break;
        case 37: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->boundingCube(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->altDifference(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->altPercent(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->terrainPercent(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->terrainCollision(); break;
        case 42: *reinterpret_cast< double*>(_v) = _t->azimuth(); break;
        case 43: *reinterpret_cast< double*>(_v) = _t->distance(); break;
        case 44: *reinterpret_cast< double*>(_v) = _t->distanceFromStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VisualMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 10: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsCurrentItem(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setHasCurrentChildItem(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setSequenceNumber(*reinterpret_cast< int*>(_v)); break;
        case 31: _t->setWizardMode(*reinterpret_cast< bool*>(_v)); break;
        case 32:
            if (_t->_previousVTOLMode != *reinterpret_cast< int*>(_v)) {
                _t->_previousVTOLMode = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->previousVTOLModeChanged();
            }
            break;
        case 35: _t->setParentItem(*reinterpret_cast< VisualMissionItem**>(_v)); break;
        case 38: _t->setAltDifference(*reinterpret_cast< double*>(_v)); break;
        case 39: _t->setAltPercent(*reinterpret_cast< double*>(_v)); break;
        case 40: _t->setTerrainPercent(*reinterpret_cast< double*>(_v)); break;
        case 41: _t->setTerrainCollision(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setAzimuth(*reinterpret_cast< double*>(_v)); break;
        case 43: _t->setDistance(*reinterpret_cast< double*>(_v)); break;
        case 44: _t->setDistanceFromStart(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VisualMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVisualMissionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VisualMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void VisualMissionItem::altDifferenceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VisualMissionItem::altPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VisualMissionItem::terrainPercentChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VisualMissionItem::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VisualMissionItem::azimuthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VisualMissionItem::commandDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VisualMissionItem::commandNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void VisualMissionItem::abbreviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void VisualMissionItem::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VisualMissionItem::exitCoordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VisualMissionItem::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VisualMissionItem::distanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VisualMissionItem::distanceFromStartChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VisualMissionItem::isCurrentItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VisualMissionItem::hasCurrentChildItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VisualMissionItem::sequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void VisualMissionItem::isSimpleItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void VisualMissionItem::isTakeoffItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void VisualMissionItem::isLandCommandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void VisualMissionItem::specifiesCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void VisualMissionItem::isStandaloneCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void VisualMissionItem::specifiesAltitudeOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void VisualMissionItem::specifiedFlightSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void VisualMissionItem::specifiedGimbalYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void VisualMissionItem::specifiedGimbalPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void VisualMissionItem::specifiedVehicleYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void VisualMissionItem::lastSequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void VisualMissionItem::missionGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void VisualMissionItem::missionVehicleYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void VisualMissionItem::terrainAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void VisualMissionItem::additionalTimeDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void VisualMissionItem::boundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void VisualMissionItem::readyForSaveStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void VisualMissionItem::wizardModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void VisualMissionItem::parentItemChanged(VisualMissionItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void VisualMissionItem::amslEntryAltChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void VisualMissionItem::amslExitAltChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void VisualMissionItem::previousVTOLModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void VisualMissionItem::currentVTOLModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void VisualMissionItem::exitCoordinateSameAsEntryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}
QT_WARNING_POP
