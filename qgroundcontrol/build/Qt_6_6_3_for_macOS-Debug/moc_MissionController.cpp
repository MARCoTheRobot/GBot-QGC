/****************************************************************************
** Meta object code from reading C++ file 'MissionController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionController.h"
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
#include "FlightPathSegment.h"
#include "VisualMissionItem.h"
#include "TakeoffMissionItem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionControllerENDCLASS = QtMocHelpers::stringData(
    "MissionController",
    "visualItemsChanged",
    "",
    "waypointPathChanged",
    "splitSegmentChanged",
    "newItemsFromVehicle",
    "missionDistanceChanged",
    "missionDistance",
    "missionTimeChanged",
    "missionHoverDistanceChanged",
    "missionHoverDistance",
    "missionHoverTimeChanged",
    "missionCruiseDistanceChanged",
    "missionCruiseDistance",
    "missionCruiseTimeChanged",
    "missionMaxTelemetryChanged",
    "missionMaxTelemetry",
    "complexMissionItemNamesChanged",
    "resumeMissionIndexChanged",
    "resumeMissionReady",
    "resumeMissionUploadFail",
    "batteryChangePointChanged",
    "batteryChangePoint",
    "batteriesRequiredChanged",
    "batteriesRequired",
    "plannedHomePositionChanged",
    "QGeoCoordinate",
    "plannedHomePosition",
    "progressPctChanged",
    "progressPct",
    "currentMissionIndexChanged",
    "currentMissionIndex",
    "currentPlanViewSeqNumChanged",
    "currentPlanViewVIIndexChanged",
    "currentPlanViewItemChanged",
    "takeoffMissionItemChanged",
    "missionBoundingCubeChanged",
    "missionItemCountChanged",
    "missionItemCount",
    "onlyInsertTakeoffValidChanged",
    "isInsertTakeoffValidChanged",
    "isInsertLandValidChanged",
    "isROIActiveChanged",
    "isROIBeginCurrentItemChanged",
    "flyThroughCommandsAllowedChanged",
    "previousCoordinateChanged",
    "minAMSLAltitudeChanged",
    "minAMSLAltitude",
    "maxAMSLAltitudeChanged",
    "maxAMSLAltitude",
    "recalcTerrainProfile",
    "_recalcMissionFlightStatusSignal",
    "_recalcFlightPathSegmentsSignal",
    "globalAltitudeModeChanged",
    "_newMissionItemsAvailableFromVehicle",
    "removeAllRequested",
    "_itemCommandChanged",
    "_inProgressChanged",
    "inProgress",
    "_currentMissionIndexChanged",
    "sequenceNumber",
    "_recalcFlightPathSegments",
    "_recalcMissionFlightStatus",
    "_updateContainsItems",
    "_progressPctChanged",
    "_visualItemsDirtyChanged",
    "dirty",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_updateTimeout",
    "_complexBoundingBoxChanged",
    "_recalcAll",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "_takeoffItemNotRequiredChanged",
    "removeVisualItem",
    "viIndex",
    "insertSimpleMissionItem",
    "VisualMissionItem*",
    "coordinate",
    "visualItemIndex",
    "makeCurrentItem",
    "insertTakeoffItem",
    "insertLandItem",
    "insertROIMissionItem",
    "insertCancelROIMissionItem",
    "insertComplexMissionItem",
    "itemName",
    "mapCenterCoordinate",
    "insertComplexMissionItemFromKMLOrSHP",
    "file",
    "resumeMission",
    "resumeIndex",
    "applyDefaultMissionAltitude",
    "setCurrentPlanViewSeqNum",
    "force",
    "sendToVehiclePreCheck",
    "SendToVehiclePreCheckState",
    "visualItems",
    "QmlObjectListModel*",
    "simpleFlightPathSegments",
    "waypointPath",
    "directionArrows",
    "incompleteComplexItemLines",
    "complexMissionItemNames",
    "previousCoordinate",
    "splitSegment",
    "FlightPathSegment*",
    "resumeMissionIndex",
    "currentPlanViewSeqNum",
    "currentPlanViewVIIndex",
    "currentPlanViewItem",
    "takeoffMissionItem",
    "TakeoffMissionItem*",
    "missionTime",
    "missionHoverTime",
    "missionCruiseTime",
    "travelBoundingCube",
    "QGCGeoBoundingCube*",
    "surveyComplexItemName",
    "corridorScanComplexItemName",
    "structureScanComplexItemName",
    "onlyInsertTakeoffValid",
    "isInsertTakeoffValid",
    "isInsertLandValid",
    "isROIActive",
    "isROIBeginCurrentItem",
    "flyThroughCommandsAllowed",
    "globalAltitudeMode",
    "QGroundControlQmlGlobal::AltMode",
    "globalAltitudeModeDefault",
    "SendToVehiclePreCheckStateOk",
    "SendToVehiclePreCheckStateNoActiveVehicle",
    "SendToVehiclePreCheckStateFirwmareVehicleMismatch",
    "SendToVehiclePreCheckStateActiveMission"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionControllerENDCLASS_t {
    uint offsetsAndSizes[274];
    char stringdata0[18];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[23];
    char stringdata7[16];
    char stringdata8[19];
    char stringdata9[28];
    char stringdata10[21];
    char stringdata11[24];
    char stringdata12[29];
    char stringdata13[22];
    char stringdata14[25];
    char stringdata15[27];
    char stringdata16[20];
    char stringdata17[31];
    char stringdata18[26];
    char stringdata19[19];
    char stringdata20[24];
    char stringdata21[26];
    char stringdata22[19];
    char stringdata23[25];
    char stringdata24[18];
    char stringdata25[27];
    char stringdata26[15];
    char stringdata27[20];
    char stringdata28[19];
    char stringdata29[12];
    char stringdata30[27];
    char stringdata31[20];
    char stringdata32[29];
    char stringdata33[30];
    char stringdata34[27];
    char stringdata35[26];
    char stringdata36[27];
    char stringdata37[24];
    char stringdata38[17];
    char stringdata39[30];
    char stringdata40[28];
    char stringdata41[25];
    char stringdata42[19];
    char stringdata43[29];
    char stringdata44[33];
    char stringdata45[26];
    char stringdata46[23];
    char stringdata47[16];
    char stringdata48[23];
    char stringdata49[16];
    char stringdata50[21];
    char stringdata51[33];
    char stringdata52[32];
    char stringdata53[26];
    char stringdata54[37];
    char stringdata55[19];
    char stringdata56[20];
    char stringdata57[19];
    char stringdata58[11];
    char stringdata59[28];
    char stringdata60[15];
    char stringdata61[26];
    char stringdata62[27];
    char stringdata63[21];
    char stringdata64[20];
    char stringdata65[25];
    char stringdata66[6];
    char stringdata67[21];
    char stringdata68[6];
    char stringdata69[26];
    char stringdata70[15];
    char stringdata71[27];
    char stringdata72[11];
    char stringdata73[23];
    char stringdata74[9];
    char stringdata75[15];
    char stringdata76[31];
    char stringdata77[17];
    char stringdata78[8];
    char stringdata79[24];
    char stringdata80[19];
    char stringdata81[11];
    char stringdata82[16];
    char stringdata83[16];
    char stringdata84[18];
    char stringdata85[15];
    char stringdata86[21];
    char stringdata87[27];
    char stringdata88[25];
    char stringdata89[9];
    char stringdata90[20];
    char stringdata91[37];
    char stringdata92[5];
    char stringdata93[14];
    char stringdata94[12];
    char stringdata95[28];
    char stringdata96[25];
    char stringdata97[6];
    char stringdata98[22];
    char stringdata99[27];
    char stringdata100[12];
    char stringdata101[20];
    char stringdata102[25];
    char stringdata103[13];
    char stringdata104[16];
    char stringdata105[27];
    char stringdata106[24];
    char stringdata107[19];
    char stringdata108[13];
    char stringdata109[19];
    char stringdata110[19];
    char stringdata111[22];
    char stringdata112[23];
    char stringdata113[20];
    char stringdata114[19];
    char stringdata115[20];
    char stringdata116[12];
    char stringdata117[17];
    char stringdata118[18];
    char stringdata119[19];
    char stringdata120[20];
    char stringdata121[22];
    char stringdata122[28];
    char stringdata123[29];
    char stringdata124[23];
    char stringdata125[21];
    char stringdata126[18];
    char stringdata127[12];
    char stringdata128[22];
    char stringdata129[26];
    char stringdata130[19];
    char stringdata131[33];
    char stringdata132[26];
    char stringdata133[29];
    char stringdata134[42];
    char stringdata135[50];
    char stringdata136[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionControllerENDCLASS_t qt_meta_stringdata_CLASSMissionControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "MissionController"
        QT_MOC_LITERAL(18, 18),  // "visualItemsChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 19),  // "waypointPathChanged"
        QT_MOC_LITERAL(58, 19),  // "splitSegmentChanged"
        QT_MOC_LITERAL(78, 19),  // "newItemsFromVehicle"
        QT_MOC_LITERAL(98, 22),  // "missionDistanceChanged"
        QT_MOC_LITERAL(121, 15),  // "missionDistance"
        QT_MOC_LITERAL(137, 18),  // "missionTimeChanged"
        QT_MOC_LITERAL(156, 27),  // "missionHoverDistanceChanged"
        QT_MOC_LITERAL(184, 20),  // "missionHoverDistance"
        QT_MOC_LITERAL(205, 23),  // "missionHoverTimeChanged"
        QT_MOC_LITERAL(229, 28),  // "missionCruiseDistanceChanged"
        QT_MOC_LITERAL(258, 21),  // "missionCruiseDistance"
        QT_MOC_LITERAL(280, 24),  // "missionCruiseTimeChanged"
        QT_MOC_LITERAL(305, 26),  // "missionMaxTelemetryChanged"
        QT_MOC_LITERAL(332, 19),  // "missionMaxTelemetry"
        QT_MOC_LITERAL(352, 30),  // "complexMissionItemNamesChanged"
        QT_MOC_LITERAL(383, 25),  // "resumeMissionIndexChanged"
        QT_MOC_LITERAL(409, 18),  // "resumeMissionReady"
        QT_MOC_LITERAL(428, 23),  // "resumeMissionUploadFail"
        QT_MOC_LITERAL(452, 25),  // "batteryChangePointChanged"
        QT_MOC_LITERAL(478, 18),  // "batteryChangePoint"
        QT_MOC_LITERAL(497, 24),  // "batteriesRequiredChanged"
        QT_MOC_LITERAL(522, 17),  // "batteriesRequired"
        QT_MOC_LITERAL(540, 26),  // "plannedHomePositionChanged"
        QT_MOC_LITERAL(567, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(582, 19),  // "plannedHomePosition"
        QT_MOC_LITERAL(602, 18),  // "progressPctChanged"
        QT_MOC_LITERAL(621, 11),  // "progressPct"
        QT_MOC_LITERAL(633, 26),  // "currentMissionIndexChanged"
        QT_MOC_LITERAL(660, 19),  // "currentMissionIndex"
        QT_MOC_LITERAL(680, 28),  // "currentPlanViewSeqNumChanged"
        QT_MOC_LITERAL(709, 29),  // "currentPlanViewVIIndexChanged"
        QT_MOC_LITERAL(739, 26),  // "currentPlanViewItemChanged"
        QT_MOC_LITERAL(766, 25),  // "takeoffMissionItemChanged"
        QT_MOC_LITERAL(792, 26),  // "missionBoundingCubeChanged"
        QT_MOC_LITERAL(819, 23),  // "missionItemCountChanged"
        QT_MOC_LITERAL(843, 16),  // "missionItemCount"
        QT_MOC_LITERAL(860, 29),  // "onlyInsertTakeoffValidChanged"
        QT_MOC_LITERAL(890, 27),  // "isInsertTakeoffValidChanged"
        QT_MOC_LITERAL(918, 24),  // "isInsertLandValidChanged"
        QT_MOC_LITERAL(943, 18),  // "isROIActiveChanged"
        QT_MOC_LITERAL(962, 28),  // "isROIBeginCurrentItemChanged"
        QT_MOC_LITERAL(991, 32),  // "flyThroughCommandsAllowedChanged"
        QT_MOC_LITERAL(1024, 25),  // "previousCoordinateChanged"
        QT_MOC_LITERAL(1050, 22),  // "minAMSLAltitudeChanged"
        QT_MOC_LITERAL(1073, 15),  // "minAMSLAltitude"
        QT_MOC_LITERAL(1089, 22),  // "maxAMSLAltitudeChanged"
        QT_MOC_LITERAL(1112, 15),  // "maxAMSLAltitude"
        QT_MOC_LITERAL(1128, 20),  // "recalcTerrainProfile"
        QT_MOC_LITERAL(1149, 32),  // "_recalcMissionFlightStatusSignal"
        QT_MOC_LITERAL(1182, 31),  // "_recalcFlightPathSegmentsSignal"
        QT_MOC_LITERAL(1214, 25),  // "globalAltitudeModeChanged"
        QT_MOC_LITERAL(1240, 36),  // "_newMissionItemsAvailableFrom..."
        QT_MOC_LITERAL(1277, 18),  // "removeAllRequested"
        QT_MOC_LITERAL(1296, 19),  // "_itemCommandChanged"
        QT_MOC_LITERAL(1316, 18),  // "_inProgressChanged"
        QT_MOC_LITERAL(1335, 10),  // "inProgress"
        QT_MOC_LITERAL(1346, 27),  // "_currentMissionIndexChanged"
        QT_MOC_LITERAL(1374, 14),  // "sequenceNumber"
        QT_MOC_LITERAL(1389, 25),  // "_recalcFlightPathSegments"
        QT_MOC_LITERAL(1415, 26),  // "_recalcMissionFlightStatus"
        QT_MOC_LITERAL(1442, 20),  // "_updateContainsItems"
        QT_MOC_LITERAL(1463, 19),  // "_progressPctChanged"
        QT_MOC_LITERAL(1483, 24),  // "_visualItemsDirtyChanged"
        QT_MOC_LITERAL(1508, 5),  // "dirty"
        QT_MOC_LITERAL(1514, 20),  // "_managerSendComplete"
        QT_MOC_LITERAL(1535, 5),  // "error"
        QT_MOC_LITERAL(1541, 25),  // "_managerRemoveAllComplete"
        QT_MOC_LITERAL(1567, 14),  // "_updateTimeout"
        QT_MOC_LITERAL(1582, 26),  // "_complexBoundingBoxChanged"
        QT_MOC_LITERAL(1609, 10),  // "_recalcAll"
        QT_MOC_LITERAL(1620, 22),  // "_managerVehicleChanged"
        QT_MOC_LITERAL(1643, 8),  // "Vehicle*"
        QT_MOC_LITERAL(1652, 14),  // "managerVehicle"
        QT_MOC_LITERAL(1667, 30),  // "_takeoffItemNotRequiredChanged"
        QT_MOC_LITERAL(1698, 16),  // "removeVisualItem"
        QT_MOC_LITERAL(1715, 7),  // "viIndex"
        QT_MOC_LITERAL(1723, 23),  // "insertSimpleMissionItem"
        QT_MOC_LITERAL(1747, 18),  // "VisualMissionItem*"
        QT_MOC_LITERAL(1766, 10),  // "coordinate"
        QT_MOC_LITERAL(1777, 15),  // "visualItemIndex"
        QT_MOC_LITERAL(1793, 15),  // "makeCurrentItem"
        QT_MOC_LITERAL(1809, 17),  // "insertTakeoffItem"
        QT_MOC_LITERAL(1827, 14),  // "insertLandItem"
        QT_MOC_LITERAL(1842, 20),  // "insertROIMissionItem"
        QT_MOC_LITERAL(1863, 26),  // "insertCancelROIMissionItem"
        QT_MOC_LITERAL(1890, 24),  // "insertComplexMissionItem"
        QT_MOC_LITERAL(1915, 8),  // "itemName"
        QT_MOC_LITERAL(1924, 19),  // "mapCenterCoordinate"
        QT_MOC_LITERAL(1944, 36),  // "insertComplexMissionItemFromK..."
        QT_MOC_LITERAL(1981, 4),  // "file"
        QT_MOC_LITERAL(1986, 13),  // "resumeMission"
        QT_MOC_LITERAL(2000, 11),  // "resumeIndex"
        QT_MOC_LITERAL(2012, 27),  // "applyDefaultMissionAltitude"
        QT_MOC_LITERAL(2040, 24),  // "setCurrentPlanViewSeqNum"
        QT_MOC_LITERAL(2065, 5),  // "force"
        QT_MOC_LITERAL(2071, 21),  // "sendToVehiclePreCheck"
        QT_MOC_LITERAL(2093, 26),  // "SendToVehiclePreCheckState"
        QT_MOC_LITERAL(2120, 11),  // "visualItems"
        QT_MOC_LITERAL(2132, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(2152, 24),  // "simpleFlightPathSegments"
        QT_MOC_LITERAL(2177, 12),  // "waypointPath"
        QT_MOC_LITERAL(2190, 15),  // "directionArrows"
        QT_MOC_LITERAL(2206, 26),  // "incompleteComplexItemLines"
        QT_MOC_LITERAL(2233, 23),  // "complexMissionItemNames"
        QT_MOC_LITERAL(2257, 18),  // "previousCoordinate"
        QT_MOC_LITERAL(2276, 12),  // "splitSegment"
        QT_MOC_LITERAL(2289, 18),  // "FlightPathSegment*"
        QT_MOC_LITERAL(2308, 18),  // "resumeMissionIndex"
        QT_MOC_LITERAL(2327, 21),  // "currentPlanViewSeqNum"
        QT_MOC_LITERAL(2349, 22),  // "currentPlanViewVIIndex"
        QT_MOC_LITERAL(2372, 19),  // "currentPlanViewItem"
        QT_MOC_LITERAL(2392, 18),  // "takeoffMissionItem"
        QT_MOC_LITERAL(2411, 19),  // "TakeoffMissionItem*"
        QT_MOC_LITERAL(2431, 11),  // "missionTime"
        QT_MOC_LITERAL(2443, 16),  // "missionHoverTime"
        QT_MOC_LITERAL(2460, 17),  // "missionCruiseTime"
        QT_MOC_LITERAL(2478, 18),  // "travelBoundingCube"
        QT_MOC_LITERAL(2497, 19),  // "QGCGeoBoundingCube*"
        QT_MOC_LITERAL(2517, 21),  // "surveyComplexItemName"
        QT_MOC_LITERAL(2539, 27),  // "corridorScanComplexItemName"
        QT_MOC_LITERAL(2567, 28),  // "structureScanComplexItemName"
        QT_MOC_LITERAL(2596, 22),  // "onlyInsertTakeoffValid"
        QT_MOC_LITERAL(2619, 20),  // "isInsertTakeoffValid"
        QT_MOC_LITERAL(2640, 17),  // "isInsertLandValid"
        QT_MOC_LITERAL(2658, 11),  // "isROIActive"
        QT_MOC_LITERAL(2670, 21),  // "isROIBeginCurrentItem"
        QT_MOC_LITERAL(2692, 25),  // "flyThroughCommandsAllowed"
        QT_MOC_LITERAL(2718, 18),  // "globalAltitudeMode"
        QT_MOC_LITERAL(2737, 32),  // "QGroundControlQmlGlobal::AltMode"
        QT_MOC_LITERAL(2770, 25),  // "globalAltitudeModeDefault"
        QT_MOC_LITERAL(2796, 28),  // "SendToVehiclePreCheckStateOk"
        QT_MOC_LITERAL(2825, 41),  // "SendToVehiclePreCheckStateNoA..."
        QT_MOC_LITERAL(2867, 49),  // "SendToVehiclePreCheckStateFir..."
        QT_MOC_LITERAL(2917, 39)   // "SendToVehiclePreCheckStateAct..."
    },
    "MissionController",
    "visualItemsChanged",
    "",
    "waypointPathChanged",
    "splitSegmentChanged",
    "newItemsFromVehicle",
    "missionDistanceChanged",
    "missionDistance",
    "missionTimeChanged",
    "missionHoverDistanceChanged",
    "missionHoverDistance",
    "missionHoverTimeChanged",
    "missionCruiseDistanceChanged",
    "missionCruiseDistance",
    "missionCruiseTimeChanged",
    "missionMaxTelemetryChanged",
    "missionMaxTelemetry",
    "complexMissionItemNamesChanged",
    "resumeMissionIndexChanged",
    "resumeMissionReady",
    "resumeMissionUploadFail",
    "batteryChangePointChanged",
    "batteryChangePoint",
    "batteriesRequiredChanged",
    "batteriesRequired",
    "plannedHomePositionChanged",
    "QGeoCoordinate",
    "plannedHomePosition",
    "progressPctChanged",
    "progressPct",
    "currentMissionIndexChanged",
    "currentMissionIndex",
    "currentPlanViewSeqNumChanged",
    "currentPlanViewVIIndexChanged",
    "currentPlanViewItemChanged",
    "takeoffMissionItemChanged",
    "missionBoundingCubeChanged",
    "missionItemCountChanged",
    "missionItemCount",
    "onlyInsertTakeoffValidChanged",
    "isInsertTakeoffValidChanged",
    "isInsertLandValidChanged",
    "isROIActiveChanged",
    "isROIBeginCurrentItemChanged",
    "flyThroughCommandsAllowedChanged",
    "previousCoordinateChanged",
    "minAMSLAltitudeChanged",
    "minAMSLAltitude",
    "maxAMSLAltitudeChanged",
    "maxAMSLAltitude",
    "recalcTerrainProfile",
    "_recalcMissionFlightStatusSignal",
    "_recalcFlightPathSegmentsSignal",
    "globalAltitudeModeChanged",
    "_newMissionItemsAvailableFromVehicle",
    "removeAllRequested",
    "_itemCommandChanged",
    "_inProgressChanged",
    "inProgress",
    "_currentMissionIndexChanged",
    "sequenceNumber",
    "_recalcFlightPathSegments",
    "_recalcMissionFlightStatus",
    "_updateContainsItems",
    "_progressPctChanged",
    "_visualItemsDirtyChanged",
    "dirty",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_updateTimeout",
    "_complexBoundingBoxChanged",
    "_recalcAll",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "_takeoffItemNotRequiredChanged",
    "removeVisualItem",
    "viIndex",
    "insertSimpleMissionItem",
    "VisualMissionItem*",
    "coordinate",
    "visualItemIndex",
    "makeCurrentItem",
    "insertTakeoffItem",
    "insertLandItem",
    "insertROIMissionItem",
    "insertCancelROIMissionItem",
    "insertComplexMissionItem",
    "itemName",
    "mapCenterCoordinate",
    "insertComplexMissionItemFromKMLOrSHP",
    "file",
    "resumeMission",
    "resumeIndex",
    "applyDefaultMissionAltitude",
    "setCurrentPlanViewSeqNum",
    "force",
    "sendToVehiclePreCheck",
    "SendToVehiclePreCheckState",
    "visualItems",
    "QmlObjectListModel*",
    "simpleFlightPathSegments",
    "waypointPath",
    "directionArrows",
    "incompleteComplexItemLines",
    "complexMissionItemNames",
    "previousCoordinate",
    "splitSegment",
    "FlightPathSegment*",
    "resumeMissionIndex",
    "currentPlanViewSeqNum",
    "currentPlanViewVIIndex",
    "currentPlanViewItem",
    "takeoffMissionItem",
    "TakeoffMissionItem*",
    "missionTime",
    "missionHoverTime",
    "missionCruiseTime",
    "travelBoundingCube",
    "QGCGeoBoundingCube*",
    "surveyComplexItemName",
    "corridorScanComplexItemName",
    "structureScanComplexItemName",
    "onlyInsertTakeoffValid",
    "isInsertTakeoffValid",
    "isInsertLandValid",
    "isROIActive",
    "isROIBeginCurrentItem",
    "flyThroughCommandsAllowed",
    "globalAltitudeMode",
    "QGroundControlQmlGlobal::AltMode",
    "globalAltitudeModeDefault",
    "SendToVehiclePreCheckStateOk",
    "SendToVehiclePreCheckStateNoActiveVehicle",
    "SendToVehiclePreCheckStateFirwmareVehicleMismatch",
    "SendToVehiclePreCheckStateActiveMission"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
      40,  654, // properties
       1,  854, // enums/sets
       0,    0, // constructors
       0,       // flags
      39,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  458,    2, 0x06,   42 /* Public */,
       3,    0,  459,    2, 0x06,   43 /* Public */,
       4,    0,  460,    2, 0x06,   44 /* Public */,
       5,    0,  461,    2, 0x06,   45 /* Public */,
       6,    1,  462,    2, 0x06,   46 /* Public */,
       8,    0,  465,    2, 0x06,   48 /* Public */,
       9,    1,  466,    2, 0x06,   49 /* Public */,
      11,    0,  469,    2, 0x06,   51 /* Public */,
      12,    1,  470,    2, 0x06,   52 /* Public */,
      14,    0,  473,    2, 0x06,   54 /* Public */,
      15,    1,  474,    2, 0x06,   55 /* Public */,
      17,    0,  477,    2, 0x06,   57 /* Public */,
      18,    0,  478,    2, 0x06,   58 /* Public */,
      19,    0,  479,    2, 0x06,   59 /* Public */,
      20,    0,  480,    2, 0x06,   60 /* Public */,
      21,    1,  481,    2, 0x06,   61 /* Public */,
      23,    1,  484,    2, 0x06,   63 /* Public */,
      25,    1,  487,    2, 0x06,   65 /* Public */,
      28,    1,  490,    2, 0x06,   67 /* Public */,
      30,    1,  493,    2, 0x06,   69 /* Public */,
      32,    0,  496,    2, 0x06,   71 /* Public */,
      33,    0,  497,    2, 0x06,   72 /* Public */,
      34,    0,  498,    2, 0x06,   73 /* Public */,
      35,    0,  499,    2, 0x06,   74 /* Public */,
      36,    0,  500,    2, 0x06,   75 /* Public */,
      37,    1,  501,    2, 0x06,   76 /* Public */,
      39,    0,  504,    2, 0x06,   78 /* Public */,
      40,    0,  505,    2, 0x06,   79 /* Public */,
      41,    0,  506,    2, 0x06,   80 /* Public */,
      42,    0,  507,    2, 0x06,   81 /* Public */,
      43,    0,  508,    2, 0x06,   82 /* Public */,
      44,    0,  509,    2, 0x06,   83 /* Public */,
      45,    0,  510,    2, 0x06,   84 /* Public */,
      46,    1,  511,    2, 0x06,   85 /* Public */,
      48,    1,  514,    2, 0x06,   87 /* Public */,
      50,    0,  517,    2, 0x06,   89 /* Public */,
      51,    0,  518,    2, 0x06,   90 /* Public */,
      52,    0,  519,    2, 0x06,   91 /* Public */,
      53,    0,  520,    2, 0x06,   92 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      54,    1,  521,    2, 0x08,   93 /* Private */,
      56,    0,  524,    2, 0x08,   95 /* Private */,
      57,    1,  525,    2, 0x08,   96 /* Private */,
      59,    1,  528,    2, 0x08,   98 /* Private */,
      61,    0,  531,    2, 0x08,  100 /* Private */,
      62,    0,  532,    2, 0x08,  101 /* Private */,
      63,    0,  533,    2, 0x08,  102 /* Private */,
      64,    1,  534,    2, 0x08,  103 /* Private */,
      65,    1,  537,    2, 0x08,  105 /* Private */,
      67,    1,  540,    2, 0x08,  107 /* Private */,
      69,    1,  543,    2, 0x08,  109 /* Private */,
      70,    0,  546,    2, 0x08,  111 /* Private */,
      71,    0,  547,    2, 0x08,  112 /* Private */,
      72,    0,  548,    2, 0x08,  113 /* Private */,
      73,    1,  549,    2, 0x08,  114 /* Private */,
      76,    0,  552,    2, 0x08,  116 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      77,    1,  553,    2, 0x02,  117 /* Public */,
      79,    3,  556,    2, 0x02,  119 /* Public */,
      79,    2,  563,    2, 0x22,  123 /* Public | MethodCloned */,
      84,    3,  568,    2, 0x02,  126 /* Public */,
      84,    2,  575,    2, 0x22,  130 /* Public | MethodCloned */,
      85,    3,  580,    2, 0x02,  133 /* Public */,
      85,    2,  587,    2, 0x22,  137 /* Public | MethodCloned */,
      86,    3,  592,    2, 0x02,  140 /* Public */,
      86,    2,  599,    2, 0x22,  144 /* Public | MethodCloned */,
      87,    2,  604,    2, 0x02,  147 /* Public */,
      87,    1,  609,    2, 0x22,  150 /* Public | MethodCloned */,
      88,    4,  612,    2, 0x02,  152 /* Public */,
      88,    3,  621,    2, 0x22,  157 /* Public | MethodCloned */,
      91,    4,  628,    2, 0x02,  161 /* Public */,
      91,    3,  637,    2, 0x22,  166 /* Public | MethodCloned */,
      93,    1,  644,    2, 0x02,  170 /* Public */,
      95,    0,  647,    2, 0x02,  172 /* Public */,
      96,    2,  648,    2, 0x02,  173 /* Public */,
      98,    0,  653,    2, 0x02,  176 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Double,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   78,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   81,   82,   83,
    0x80000000 | 80, 0x80000000 | 26, QMetaType::Int,   81,   82,
    0x80000000 | 80, QMetaType::Int, QMetaType::Bool,   82,   83,
    0x80000000 | 80, QMetaType::Int,   82,
    0x80000000 | 80, QMetaType::QString, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   89,   90,   82,   83,
    0x80000000 | 80, QMetaType::QString, 0x80000000 | 26, QMetaType::Int,   89,   90,   82,
    0x80000000 | 80, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   89,   92,   82,   83,
    0x80000000 | 80, QMetaType::QString, QMetaType::QString, QMetaType::Int,   89,   92,   82,
    QMetaType::Void, QMetaType::Int,   94,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   60,   97,
    0x80000000 | 99,

 // properties: name, type, flags
     100, 0x80000000 | 101, 0x00015009, uint(0), 0,
     102, 0x80000000 | 101, 0x00015409, uint(-1), 0,
     103, QMetaType::QVariantList, 0x00015001, uint(1), 0,
     104, 0x80000000 | 101, 0x00015409, uint(-1), 0,
     105, 0x80000000 | 101, 0x00015409, uint(-1), 0,
     106, QMetaType::QStringList, 0x00015001, uint(11), 0,
      27, 0x80000000 | 26, 0x00015009, uint(17), 0,
     107, 0x80000000 | 26, 0x0001500b, uint(32), 0,
     108, 0x80000000 | 109, 0x0001500b, uint(2), 0,
      29, QMetaType::Double, 0x00015001, uint(18), 0,
      38, QMetaType::Int, 0x00015001, uint(25), 0,
      31, QMetaType::Int, 0x00015001, uint(19), 0,
     110, QMetaType::Int, 0x00015001, uint(12), 0,
     111, QMetaType::Int, 0x00015001, uint(20), 0,
     112, QMetaType::Int, 0x00015001, uint(21), 0,
     113, 0x80000000 | 80, 0x00015009, uint(22), 0,
     114, 0x80000000 | 115, 0x00015009, uint(23), 0,
       7, QMetaType::Double, 0x00015001, uint(4), 0,
     116, QMetaType::Double, 0x00015001, uint(5), 0,
      10, QMetaType::Double, 0x00015001, uint(6), 0,
      13, QMetaType::Double, 0x00015001, uint(8), 0,
     117, QMetaType::Double, 0x00015001, uint(7), 0,
     118, QMetaType::Double, 0x00015001, uint(9), 0,
      16, QMetaType::Double, 0x00015001, uint(10), 0,
      22, QMetaType::Int, 0x00015001, uint(15), 0,
      24, QMetaType::Int, 0x00015001, uint(16), 0,
     119, 0x80000000 | 120, 0x00015009, uint(24), 0,
     121, QMetaType::QString, 0x00015401, uint(-1), 0,
     122, QMetaType::QString, 0x00015401, uint(-1), 0,
     123, QMetaType::QString, 0x00015401, uint(-1), 0,
     124, QMetaType::Bool, 0x00015003, uint(26), 0,
     125, QMetaType::Bool, 0x00015003, uint(27), 0,
     126, QMetaType::Bool, 0x00015003, uint(28), 0,
     127, QMetaType::Bool, 0x00015003, uint(29), 0,
     128, QMetaType::Bool, 0x00015003, uint(30), 0,
     129, QMetaType::Bool, 0x00015003, uint(31), 0,
      47, QMetaType::Double, 0x00015003, uint(33), 0,
      49, QMetaType::Double, 0x00015003, uint(34), 0,
     130, 0x80000000 | 131, 0x0001510b, uint(38), 0,
     132, 0x80000000 | 131, 0x00015009, uint(38), 0,

 // enums: name, alias, flags, count, data
      99,   99, 0x0,    4,  859,

 // enum data: key, value
     133, uint(MissionController::SendToVehiclePreCheckStateOk),
     134, uint(MissionController::SendToVehiclePreCheckStateNoActiveVehicle),
     135, uint(MissionController::SendToVehiclePreCheckStateFirwmareVehicleMismatch),
     136, uint(MissionController::SendToVehiclePreCheckStateActiveMission),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSMissionControllerENDCLASS[] = {
    QMetaObject::SuperData::link<QGroundControlQmlGlobal::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject MissionController::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanElementController::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionControllerENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSMissionControllerENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionControllerENDCLASS_t,
        // property 'visualItems'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'simpleFlightPathSegments'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'waypointPath'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'directionArrows'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'incompleteComplexItemLines'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'complexMissionItemNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'plannedHomePosition'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'previousCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'splitSegment'
        QtPrivate::TypeAndForceComplete<FlightPathSegment*, std::true_type>,
        // property 'progressPct'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionItemCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentMissionIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'resumeMissionIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentPlanViewSeqNum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentPlanViewVIIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentPlanViewItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem*, std::true_type>,
        // property 'takeoffMissionItem'
        QtPrivate::TypeAndForceComplete<TakeoffMissionItem*, std::true_type>,
        // property 'missionDistance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionTime'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionHoverDistance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionCruiseDistance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionHoverTime'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionCruiseTime'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionMaxTelemetry'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'batteryChangePoint'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'batteriesRequired'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'travelBoundingCube'
        QtPrivate::TypeAndForceComplete<QGCGeoBoundingCube*, std::true_type>,
        // property 'surveyComplexItemName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'corridorScanComplexItemName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'structureScanComplexItemName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'onlyInsertTakeoffValid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isInsertTakeoffValid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isInsertLandValid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isROIActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isROIBeginCurrentItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flyThroughCommandsAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minAMSLAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maxAMSLAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'globalAltitudeMode'
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal::AltMode, std::true_type>,
        // property 'globalAltitudeModeDefault'
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal::AltMode, std::true_type>,
        // enum 'SendToVehiclePreCheckState'
        QtPrivate::TypeAndForceComplete<MissionController::SendToVehiclePreCheckState, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionController, std::true_type>,
        // method 'visualItemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'waypointPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'splitSegmentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newItemsFromVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'missionTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionHoverDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'missionHoverTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionCruiseDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'missionCruiseTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionMaxTelemetryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'complexMissionItemNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeMissionIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeMissionReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeMissionUploadFail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'batteryChangePointChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'batteriesRequiredChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'plannedHomePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'progressPctChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'currentMissionIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'currentPlanViewSeqNumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPlanViewVIIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPlanViewItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'takeoffMissionItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionBoundingCubeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'missionItemCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onlyInsertTakeoffValidChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isInsertTakeoffValidChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isInsertLandValidChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isROIActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isROIBeginCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flyThroughCommandsAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'previousCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minAMSLAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'maxAMSLAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'recalcTerrainProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcMissionFlightStatusSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcFlightPathSegmentsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'globalAltitudeModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_newMissionItemsAvailableFromVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_itemCommandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_inProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_currentMissionIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_recalcFlightPathSegments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcMissionFlightStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateContainsItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_progressPctChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_visualItemsDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_managerSendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_managerRemoveAllComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_complexBoundingBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_takeoffItemNotRequiredChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeVisualItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertSimpleMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertSimpleMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertTakeoffItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertTakeoffItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertLandItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertLandItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertROIMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertROIMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertCancelROIMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertCancelROIMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertComplexMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertComplexMissionItem'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertComplexMissionItemFromKMLOrSHP'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertComplexMissionItemFromKMLOrSHP'
        QtPrivate::TypeAndForceComplete<VisualMissionItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resumeMission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'applyDefaultMissionAltitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentPlanViewSeqNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendToVehiclePreCheck'
        QtPrivate::TypeAndForceComplete<SendToVehiclePreCheckState, std::false_type>
    >,
    nullptr
} };

void MissionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visualItemsChanged(); break;
        case 1: _t->waypointPathChanged(); break;
        case 2: _t->splitSegmentChanged(); break;
        case 3: _t->newItemsFromVehicle(); break;
        case 4: _t->missionDistanceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->missionTimeChanged(); break;
        case 6: _t->missionHoverDistanceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->missionHoverTimeChanged(); break;
        case 8: _t->missionCruiseDistanceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->missionCruiseTimeChanged(); break;
        case 10: _t->missionMaxTelemetryChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->complexMissionItemNamesChanged(); break;
        case 12: _t->resumeMissionIndexChanged(); break;
        case 13: _t->resumeMissionReady(); break;
        case 14: _t->resumeMissionUploadFail(); break;
        case 15: _t->batteryChangePointChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->batteriesRequiredChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->plannedHomePositionChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 18: _t->progressPctChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->currentMissionIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->currentPlanViewSeqNumChanged(); break;
        case 21: _t->currentPlanViewVIIndexChanged(); break;
        case 22: _t->currentPlanViewItemChanged(); break;
        case 23: _t->takeoffMissionItemChanged(); break;
        case 24: _t->missionBoundingCubeChanged(); break;
        case 25: _t->missionItemCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->onlyInsertTakeoffValidChanged(); break;
        case 27: _t->isInsertTakeoffValidChanged(); break;
        case 28: _t->isInsertLandValidChanged(); break;
        case 29: _t->isROIActiveChanged(); break;
        case 30: _t->isROIBeginCurrentItemChanged(); break;
        case 31: _t->flyThroughCommandsAllowedChanged(); break;
        case 32: _t->previousCoordinateChanged(); break;
        case 33: _t->minAMSLAltitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 34: _t->maxAMSLAltitudeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 35: _t->recalcTerrainProfile(); break;
        case 36: _t->_recalcMissionFlightStatusSignal(); break;
        case 37: _t->_recalcFlightPathSegmentsSignal(); break;
        case 38: _t->globalAltitudeModeChanged(); break;
        case 39: _t->_newMissionItemsAvailableFromVehicle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->_itemCommandChanged(); break;
        case 41: _t->_inProgressChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->_currentMissionIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->_recalcFlightPathSegments(); break;
        case 44: _t->_recalcMissionFlightStatus(); break;
        case 45: _t->_updateContainsItems(); break;
        case 46: _t->_progressPctChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 47: _t->_visualItemsDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->_managerSendComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->_managerRemoveAllComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->_updateTimeout(); break;
        case 51: _t->_complexBoundingBoxChanged(); break;
        case 52: _t->_recalcAll(); break;
        case 53: _t->_managerVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 54: _t->_takeoffItemNotRequiredChanged(); break;
        case 55: _t->removeVisualItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 56: { VisualMissionItem* _r = _t->insertSimpleMissionItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 57: { VisualMissionItem* _r = _t->insertSimpleMissionItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 58: { VisualMissionItem* _r = _t->insertTakeoffItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 59: { VisualMissionItem* _r = _t->insertTakeoffItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 60: { VisualMissionItem* _r = _t->insertLandItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 61: { VisualMissionItem* _r = _t->insertLandItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 62: { VisualMissionItem* _r = _t->insertROIMissionItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 63: { VisualMissionItem* _r = _t->insertROIMissionItem((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 64: { VisualMissionItem* _r = _t->insertCancelROIMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 65: { VisualMissionItem* _r = _t->insertCancelROIMissionItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 66: { VisualMissionItem* _r = _t->insertComplexMissionItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 67: { VisualMissionItem* _r = _t->insertComplexMissionItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 68: { VisualMissionItem* _r = _t->insertComplexMissionItemFromKMLOrSHP((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 69: { VisualMissionItem* _r = _t->insertComplexMissionItemFromKMLOrSHP((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< VisualMissionItem**>(_a[0]) = std::move(_r); }  break;
        case 70: _t->resumeMission((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 71: _t->applyDefaultMissionAltitude(); break;
        case 72: _t->setCurrentPlanViewSeqNum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 73: { SendToVehiclePreCheckState _r = _t->sendToVehiclePreCheck();
            if (_a[0]) *reinterpret_cast< SendToVehiclePreCheckState*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::visualItemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::waypointPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::splitSegmentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::newItemsFromVehicle; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::missionDistanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::missionTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::missionHoverDistanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::missionHoverTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::missionCruiseDistanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::missionCruiseTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::missionMaxTelemetryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::complexMissionItemNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::resumeMissionIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::resumeMissionReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::resumeMissionUploadFail; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (_t _q_method = &MissionController::batteryChangePointChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (_t _q_method = &MissionController::batteriesRequiredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(QGeoCoordinate );
            if (_t _q_method = &MissionController::plannedHomePositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::progressPctChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (_t _q_method = &MissionController::currentMissionIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::currentPlanViewSeqNumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::currentPlanViewVIIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::currentPlanViewItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::takeoffMissionItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::missionBoundingCubeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(int );
            if (_t _q_method = &MissionController::missionItemCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::onlyInsertTakeoffValidChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::isInsertTakeoffValidChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::isInsertLandValidChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::isROIActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::isROIBeginCurrentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::flyThroughCommandsAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::previousCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::minAMSLAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MissionController::*)(double );
            if (_t _q_method = &MissionController::maxAMSLAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::recalcTerrainProfile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::_recalcMissionFlightStatusSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::_recalcFlightPathSegmentsSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MissionController::*)();
            if (_t _q_method = &MissionController::globalAltitudeModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCGeoBoundingCube* >(); break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 4:
        case 3:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->visualItems(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->simpleFlightPathSegments(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->waypointPath(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->directionArrows(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->incompleteComplexItemLines(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->complexMissionItemNames(); break;
        case 6: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->plannedHomePosition(); break;
        case 7: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_previousCoordinate; break;
        case 8: *reinterpret_cast< FlightPathSegment**>(_v) = _t->_splitSegment; break;
        case 9: *reinterpret_cast< double*>(_v) = _t->progressPct(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->missionItemCount(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->currentMissionIndex(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->resumeMissionIndex(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->currentPlanViewSeqNum(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->currentPlanViewVIIndex(); break;
        case 15: *reinterpret_cast< VisualMissionItem**>(_v) = _t->currentPlanViewItem(); break;
        case 16: *reinterpret_cast< TakeoffMissionItem**>(_v) = _t->takeoffMissionItem(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->missionDistance(); break;
        case 18: *reinterpret_cast< double*>(_v) = _t->missionTime(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->missionHoverDistance(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->missionCruiseDistance(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->missionHoverTime(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->missionCruiseTime(); break;
        case 23: *reinterpret_cast< double*>(_v) = _t->missionMaxTelemetry(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->batteryChangePoint(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->batteriesRequired(); break;
        case 26: *reinterpret_cast< QGCGeoBoundingCube**>(_v) = _t->travelBoundingCube(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->surveyComplexItemName(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->corridorScanComplexItemName(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->structureScanComplexItemName(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_onlyInsertTakeoffValid; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_isInsertTakeoffValid; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_isInsertLandValid; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->_isROIActive; break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->_isROIBeginCurrentItem; break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->_flyThroughCommandsAllowed; break;
        case 36: *reinterpret_cast< double*>(_v) = _t->_minAMSLAltitude; break;
        case 37: *reinterpret_cast< double*>(_v) = _t->_maxAMSLAltitude; break;
        case 38: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->globalAltitudeMode(); break;
        case 39: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->globalAltitudeModeDefault(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MissionController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7:
            if (_t->_previousCoordinate != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_previousCoordinate = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->previousCoordinateChanged();
            }
            break;
        case 8:
            if (_t->_splitSegment != *reinterpret_cast< FlightPathSegment**>(_v)) {
                _t->_splitSegment = *reinterpret_cast< FlightPathSegment**>(_v);
                Q_EMIT _t->splitSegmentChanged();
            }
            break;
        case 30:
            if (_t->_onlyInsertTakeoffValid != *reinterpret_cast< bool*>(_v)) {
                _t->_onlyInsertTakeoffValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->onlyInsertTakeoffValidChanged();
            }
            break;
        case 31:
            if (_t->_isInsertTakeoffValid != *reinterpret_cast< bool*>(_v)) {
                _t->_isInsertTakeoffValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isInsertTakeoffValidChanged();
            }
            break;
        case 32:
            if (_t->_isInsertLandValid != *reinterpret_cast< bool*>(_v)) {
                _t->_isInsertLandValid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isInsertLandValidChanged();
            }
            break;
        case 33:
            if (_t->_isROIActive != *reinterpret_cast< bool*>(_v)) {
                _t->_isROIActive = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isROIActiveChanged();
            }
            break;
        case 34:
            if (_t->_isROIBeginCurrentItem != *reinterpret_cast< bool*>(_v)) {
                _t->_isROIBeginCurrentItem = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isROIBeginCurrentItemChanged();
            }
            break;
        case 35:
            if (_t->_flyThroughCommandsAllowed != *reinterpret_cast< bool*>(_v)) {
                _t->_flyThroughCommandsAllowed = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->flyThroughCommandsAllowedChanged();
            }
            break;
        case 36:
            if (_t->_minAMSLAltitude != *reinterpret_cast< double*>(_v)) {
                _t->_minAMSLAltitude = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->minAMSLAltitudeChanged(_t->_minAMSLAltitude);
            }
            break;
        case 37:
            if (_t->_maxAMSLAltitude != *reinterpret_cast< double*>(_v)) {
                _t->_maxAMSLAltitude = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->maxAMSLAltitudeChanged(_t->_maxAMSLAltitude);
            }
            break;
        case 38: _t->setGlobalAltitudeMode(*reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MissionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int MissionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void MissionController::visualItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MissionController::waypointPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MissionController::splitSegmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MissionController::newItemsFromVehicle()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MissionController::missionDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MissionController::missionTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MissionController::missionHoverDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MissionController::missionHoverTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MissionController::missionCruiseDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MissionController::missionCruiseTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MissionController::missionMaxTelemetryChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MissionController::complexMissionItemNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MissionController::resumeMissionIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MissionController::resumeMissionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MissionController::resumeMissionUploadFail()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MissionController::batteryChangePointChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MissionController::batteriesRequiredChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MissionController::plannedHomePositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MissionController::progressPctChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MissionController::currentMissionIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MissionController::currentPlanViewSeqNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MissionController::currentPlanViewVIIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MissionController::currentPlanViewItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MissionController::takeoffMissionItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MissionController::missionBoundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MissionController::missionItemCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MissionController::onlyInsertTakeoffValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MissionController::isInsertTakeoffValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MissionController::isInsertLandValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void MissionController::isROIActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void MissionController::isROIBeginCurrentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void MissionController::flyThroughCommandsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void MissionController::previousCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void MissionController::minAMSLAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MissionController::maxAMSLAltitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MissionController::recalcTerrainProfile()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void MissionController::_recalcMissionFlightStatusSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void MissionController::_recalcFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void MissionController::globalAltitudeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}
QT_WARNING_POP
