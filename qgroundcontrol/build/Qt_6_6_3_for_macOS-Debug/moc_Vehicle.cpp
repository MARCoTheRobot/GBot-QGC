/****************************************************************************
** Meta object code from reading C++ file 'Vehicle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Vehicle.h"
#include "AutoPilotPlugin.h"
#include "TrajectoryPoints.h"
#include "ParameterManager.h"
#include "VehicleObjectAvoidance.h"
#include "Autotune.h"
#include "RemoteIDManager.h"
#include "QGCCameraManager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vehicle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleENDCLASS = QtMocHelpers::stringData(
    "Vehicle",
    "coordinateChanged",
    "",
    "QGeoCoordinate",
    "coordinate",
    "joystickEnabledChanged",
    "enabled",
    "mavlinkMessageReceived",
    "mavlink_message_t",
    "message",
    "homePositionChanged",
    "homePosition",
    "armedPositionChanged",
    "armedChanged",
    "armed",
    "flightModeChanged",
    "flightMode",
    "flyingChanged",
    "flying",
    "landingChanged",
    "landing",
    "guidedModeChanged",
    "guidedMode",
    "vtolInFwdFlightChanged",
    "vtolInFwdFlight",
    "prearmErrorChanged",
    "prearmError",
    "soloFirmwareChanged",
    "soloFirmware",
    "defaultCruiseSpeedChanged",
    "cruiseSpeed",
    "defaultHoverSpeedChanged",
    "hoverSpeed",
    "firmwareTypeChanged",
    "vehicleTypeChanged",
    "cameraManagerChanged",
    "hobbsMeterChanged",
    "capabilitiesKnownChanged",
    "capabilitiesKnown",
    "initialPlanRequestCompleteChanged",
    "initialPlanRequestComplete",
    "capabilityBitsChanged",
    "uint64_t",
    "capabilityBits",
    "toolIndicatorsChanged",
    "modeIndicatorsChanged",
    "textMessageReceived",
    "uasid",
    "componentid",
    "severity",
    "text",
    "description",
    "calibrationEventReceived",
    "QSharedPointer<events::parser::ParsedEvent>",
    "event",
    "checkListStateChanged",
    "messagesReceivedChanged",
    "messagesSentChanged",
    "messagesLostChanged",
    "messageTypeChanged",
    "newMessageCountChanged",
    "messageCountChanged",
    "formattedMessagesChanged",
    "newFormattedMessage",
    "formattedMessage",
    "longitudeChanged",
    "currentConfigChanged",
    "flowImageIndexChanged",
    "rcRSSIChanged",
    "rcRSSI",
    "telemetryRRSSIChanged",
    "value",
    "telemetryLRSSIChanged",
    "telemetryRXErrorsChanged",
    "telemetryFixedChanged",
    "telemetryTXBufferChanged",
    "telemetryLNoiseChanged",
    "telemetryRNoiseChanged",
    "autoDisarmChanged",
    "flightModesChanged",
    "sensorsPresentBitsChanged",
    "sensorsPresentBits",
    "sensorsEnabledBitsChanged",
    "sensorsEnabledBits",
    "sensorsHealthBitsChanged",
    "sensorsHealthBits",
    "sensorsUnhealthyBitsChanged",
    "sensorsUnhealthyBits",
    "orbitActiveChanged",
    "orbitActive",
    "readyToFlyAvailableChanged",
    "readyToFlyAvailable",
    "readyToFlyChanged",
    "readyToFy",
    "allSensorsHealthyChanged",
    "allSensorsHealthy",
    "requiresGpsFixChanged",
    "haveMRSpeedLimChanged",
    "haveFWSpeedLimChanged",
    "firmwareVersionChanged",
    "firmwareCustomVersionChanged",
    "gitHashChanged",
    "hash",
    "vehicleUIDChanged",
    "loadProgressChanged",
    "rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "remoteControlRSSIChanged",
    "uint8_t",
    "rssi",
    "mavlinkRawImu",
    "mavlinkScaledImu1",
    "mavlinkScaledImu2",
    "mavlinkScaledImu3",
    "mavlinkLogData",
    "Vehicle*",
    "vehicle",
    "target_system",
    "target_component",
    "uint16_t",
    "sequence",
    "first_message",
    "data",
    "acked",
    "mavCommandResult",
    "vehicleId",
    "targetComponent",
    "command",
    "ackResult",
    "failureCode",
    "mavlinkSerialControl",
    "device",
    "flags",
    "timeout",
    "uint32_t",
    "baudrate",
    "requestProtocolVersion",
    "version",
    "mavlinkStatusChanged",
    "gimbalRollChanged",
    "gimbalPitchChanged",
    "gimbalYawChanged",
    "gimbalDataChanged",
    "isROIEnabledChanged",
    "initialConnectComplete",
    "sensorsParametersResetAck",
    "success",
    "logEntry",
    "time_utc",
    "size",
    "id",
    "num_logs",
    "last_log_num",
    "logData",
    "ofs",
    "count",
    "const uint8_t*",
    "mavlinkMsgIntervalsChanged",
    "compid",
    "msgId",
    "int32_t",
    "rate",
    "setVtolInFwdFlight",
    "_offlineFirmwareTypeSettingChanged",
    "varFirmwareType",
    "_offlineVehicleTypeSettingChanged",
    "varVehicleType",
    "_mavlinkMessageReceived",
    "LinkInterface*",
    "link",
    "_sendMessageMultipleNext",
    "_parametersReady",
    "parametersReady",
    "_remoteControlRSSIChanged",
    "_handleFlightModeChanged",
    "_announceArmedChanged",
    "_offlineCruiseSpeedSettingChanged",
    "_offlineHoverSpeedSettingChanged",
    "_handleTextMessage",
    "newCount",
    "_handletextMessageReceived",
    "UASMessage*",
    "_imageProtocolImageReady",
    "_prearmErrorTimeout",
    "_firstMissionLoadComplete",
    "_firstGeoFenceLoadComplete",
    "_firstRallyPointLoadComplete",
    "_sendMavCommandResponseTimeoutCheck",
    "_clearCameraTriggerPoints",
    "_updateDistanceHeadingToHome",
    "_updateMissionItemIndex",
    "_updateHeadingToNextWP",
    "_updateDistanceToGCS",
    "_updateHomepoint",
    "_updateHobbsMeter",
    "_vehicleParamLoaded",
    "ready",
    "_sendQGCTimeToVehicle",
    "_mavlinkMessageStatus",
    "uasId",
    "totalSent",
    "totalReceived",
    "totalLoss",
    "lossPercent",
    "_orbitTelemetryTimeout",
    "_updateFlightTime",
    "_gotProgressUpdate",
    "progressValue",
    "_doSetHomeTerrainReceived",
    "QList<double>",
    "heights",
    "_updateAltAboveTerrain",
    "_altitudeAboveTerrainReceived",
    "sucess",
    "resetCounters",
    "resetAllMessages",
    "resetErrorLevelMessages",
    "virtualTabletJoystickValue",
    "roll",
    "pitch",
    "yaw",
    "thrust",
    "guidedModeRTL",
    "smartRTL",
    "guidedModeLand",
    "guidedModeTakeoff",
    "altitudeRelative",
    "minimumTakeoffAltitude",
    "maximumHorizontalSpeedMultirotor",
    "maximumEquivalentAirspeed",
    "minimumEquivalentAirspeed",
    "guidedModeGotoLocation",
    "gotoCoord",
    "guidedModeChangeAltitude",
    "altitudeChange",
    "pauseVehicle",
    "guidedModeChangeGroundSpeedMetersSecond",
    "groundspeed",
    "guidedModeChangeEquivalentAirspeedMetersSecond",
    "airspeed",
    "guidedModeOrbit",
    "centerCoord",
    "radius",
    "amslAltitude",
    "guidedModeROI",
    "stopGuidedModeROI",
    "emergencyStop",
    "abortLanding",
    "climbOutAltitude",
    "landingGearDeploy",
    "landingGearRetract",
    "startMission",
    "setCurrentMissionSequence",
    "seq",
    "rebootVehicle",
    "clearMessages",
    "sendPlan",
    "planFile",
    "setEstimatorOrigin",
    "versionCompare",
    "QString&",
    "compare",
    "major",
    "minor",
    "patch",
    "motorTest",
    "motor",
    "percent",
    "timeoutSecs",
    "showError",
    "setPIDTuningTelemetryMode",
    "PIDTuningTelemetryMode",
    "mode",
    "gimbalControlValue",
    "gimbalPitchStep",
    "direction",
    "gimbalYawStep",
    "centerGimbal",
    "forceArm",
    "sendParamMapRC",
    "paramName",
    "scale",
    "centerValue",
    "tuningID",
    "minValue",
    "maxValue",
    "clearAllParamMapRC",
    "closeVehicle",
    "triggerSimpleCamera",
    "flashBootloader",
    "doSetHome",
    "coord",
    "saveJoystickSettings",
    "vehicleClassInternalName",
    "sendGripperAction",
    "QGCMAVLink::GRIPPER_OPTIONS",
    "gripperOption",
    "sendCommand",
    "compId",
    "param1",
    "param2",
    "param3",
    "param4",
    "param5",
    "param6",
    "param7",
    "autopilot",
    "AutoPilotPlugin*",
    "armedPosition",
    "autoDisarm",
    "flightModeSetAvailable",
    "flightModes",
    "trajectoryPoints",
    "TrajectoryPoints*",
    "cameraTriggerPoints",
    "QmlObjectListModel*",
    "latitude",
    "longitude",
    "messageTypeNone",
    "messageTypeNormal",
    "messageTypeWarning",
    "messageTypeError",
    "newMessageCount",
    "messageCount",
    "formattedMessages",
    "joystickEnabled",
    "flowImageIndex",
    "px4Firmware",
    "apmFirmware",
    "genericFirmware",
    "messagesReceived",
    "messagesSent",
    "messagesLost",
    "airship",
    "fixedWing",
    "multiRotor",
    "vtol",
    "rover",
    "sub",
    "supportsThrottleModeCenterZero",
    "supportsNegativeThrust",
    "supportsJSButton",
    "supportsRadio",
    "supportsMotorInterference",
    "motorCount",
    "coaxialMotors",
    "xConfigMotors",
    "isOfflineEditingVehicle",
    "brandImageIndoor",
    "brandImageOutdoor",
    "missionFlightMode",
    "pauseFlightMode",
    "rtlFlightMode",
    "smartRTLFlightMode",
    "supportsSmartRTL",
    "landFlightMode",
    "takeControlFlightMode",
    "followFlightMode",
    "firmwareTypeString",
    "vehicleTypeString",
    "vehicleImageOpaque",
    "vehicleImageOutline",
    "telemetryRRSSI",
    "telemetryLRSSI",
    "telemetryRXErrors",
    "telemetryFixed",
    "telemetryTXBuffer",
    "telemetryLNoise",
    "telemetryRNoise",
    "mainStatusIndicatorContentItem",
    "toolIndicators",
    "modeIndicators",
    "staticCameraList",
    "cameraManager",
    "QGCCameraManager*",
    "hobbsMeter",
    "supportsTerrainFrame",
    "mavlinkSentCount",
    "mavlinkReceivedCount",
    "mavlinkLossCount",
    "mavlinkLossPercent",
    "gimbalRoll",
    "gimbalPitch",
    "gimbalYaw",
    "gimbalData",
    "hasGripper",
    "isROIEnabled",
    "checkListState",
    "CheckList",
    "readyToFly",
    "sysStatusSensorInfo",
    "requiresGpsFix",
    "loadProgress",
    "orbitMapCircle",
    "QGCMapCircle*",
    "guidedModeSupported",
    "pauseVehicleSupported",
    "orbitModeSupported",
    "roiModeSupported",
    "takeoffVehicleSupported",
    "gotoFlightMode",
    "haveMRSpeedLimits",
    "haveFWSpeedLimits",
    "parameterManager",
    "ParameterManager*",
    "vehicleLinkManager",
    "VehicleLinkManager*",
    "objectAvoidance",
    "VehicleObjectAvoidance*",
    "autotune",
    "Autotune*",
    "remoteIDManager",
    "RemoteIDManager*",
    "Fact*",
    "heading",
    "rollRate",
    "pitchRate",
    "yawRate",
    "groundSpeed",
    "airSpeed",
    "airSpeedSetpoint",
    "climbRate",
    "altitudeAMSL",
    "altitudeAboveTerr",
    "altitudeTuning",
    "altitudeTuningSetpoint",
    "xTrackError",
    "rangeFinderDist",
    "flightDistance",
    "distanceToHome",
    "timeToHome",
    "missionItemIndex",
    "headingToNextWP",
    "distanceToNextWP",
    "headingToHome",
    "distanceToGCS",
    "hobbs",
    "throttlePct",
    "imuTemp",
    "gps",
    "FactGroup*",
    "gps2",
    "wind",
    "vibration",
    "temperature",
    "clock",
    "setpoint",
    "escStatus",
    "estimatorStatus",
    "terrain",
    "distanceSensors",
    "localPosition",
    "localPositionSetpoint",
    "hygrometer",
    "generator",
    "efi",
    "batteries",
    "actuators",
    "Actuators*",
    "healthAndArmingCheckReport",
    "HealthAndArmingCheckReport*",
    "firmwareMajorVersion",
    "firmwareMinorVersion",
    "firmwarePatchVersion",
    "firmwareVersionType",
    "firmwareVersionTypeString",
    "firmwareCustomMajorVersion",
    "firmwareCustomMinorVersion",
    "firmwareCustomPatchVersion",
    "gitHash",
    "vehicleUID",
    "vehicleUIDStr",
    "CheckListNotSetup",
    "CheckListPassed",
    "CheckListFailed",
    "ModeDisabled",
    "ModeRateAndAttitude",
    "ModeVelocityAndPosition",
    "ModeAltitudeAndAirspeed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleENDCLASS_t {
    uint offsetsAndSizes[962];
    char stringdata0[8];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[11];
    char stringdata5[23];
    char stringdata6[8];
    char stringdata7[23];
    char stringdata8[18];
    char stringdata9[8];
    char stringdata10[20];
    char stringdata11[13];
    char stringdata12[21];
    char stringdata13[13];
    char stringdata14[6];
    char stringdata15[18];
    char stringdata16[11];
    char stringdata17[14];
    char stringdata18[7];
    char stringdata19[15];
    char stringdata20[8];
    char stringdata21[18];
    char stringdata22[11];
    char stringdata23[23];
    char stringdata24[16];
    char stringdata25[19];
    char stringdata26[12];
    char stringdata27[20];
    char stringdata28[13];
    char stringdata29[26];
    char stringdata30[12];
    char stringdata31[25];
    char stringdata32[11];
    char stringdata33[20];
    char stringdata34[19];
    char stringdata35[21];
    char stringdata36[18];
    char stringdata37[25];
    char stringdata38[18];
    char stringdata39[34];
    char stringdata40[27];
    char stringdata41[22];
    char stringdata42[9];
    char stringdata43[15];
    char stringdata44[22];
    char stringdata45[22];
    char stringdata46[20];
    char stringdata47[6];
    char stringdata48[12];
    char stringdata49[9];
    char stringdata50[5];
    char stringdata51[12];
    char stringdata52[25];
    char stringdata53[44];
    char stringdata54[6];
    char stringdata55[22];
    char stringdata56[24];
    char stringdata57[20];
    char stringdata58[20];
    char stringdata59[19];
    char stringdata60[23];
    char stringdata61[20];
    char stringdata62[25];
    char stringdata63[20];
    char stringdata64[17];
    char stringdata65[17];
    char stringdata66[21];
    char stringdata67[22];
    char stringdata68[14];
    char stringdata69[7];
    char stringdata70[22];
    char stringdata71[6];
    char stringdata72[22];
    char stringdata73[25];
    char stringdata74[22];
    char stringdata75[25];
    char stringdata76[23];
    char stringdata77[23];
    char stringdata78[18];
    char stringdata79[19];
    char stringdata80[26];
    char stringdata81[19];
    char stringdata82[26];
    char stringdata83[19];
    char stringdata84[25];
    char stringdata85[18];
    char stringdata86[28];
    char stringdata87[21];
    char stringdata88[19];
    char stringdata89[12];
    char stringdata90[27];
    char stringdata91[20];
    char stringdata92[18];
    char stringdata93[10];
    char stringdata94[25];
    char stringdata95[18];
    char stringdata96[22];
    char stringdata97[22];
    char stringdata98[22];
    char stringdata99[23];
    char stringdata100[29];
    char stringdata101[15];
    char stringdata102[5];
    char stringdata103[18];
    char stringdata104[20];
    char stringdata105[18];
    char stringdata106[13];
    char stringdata107[31];
    char stringdata108[10];
    char stringdata109[25];
    char stringdata110[8];
    char stringdata111[5];
    char stringdata112[14];
    char stringdata113[18];
    char stringdata114[18];
    char stringdata115[18];
    char stringdata116[15];
    char stringdata117[9];
    char stringdata118[8];
    char stringdata119[14];
    char stringdata120[17];
    char stringdata121[9];
    char stringdata122[9];
    char stringdata123[14];
    char stringdata124[5];
    char stringdata125[6];
    char stringdata126[17];
    char stringdata127[10];
    char stringdata128[16];
    char stringdata129[8];
    char stringdata130[10];
    char stringdata131[12];
    char stringdata132[21];
    char stringdata133[7];
    char stringdata134[6];
    char stringdata135[8];
    char stringdata136[9];
    char stringdata137[9];
    char stringdata138[23];
    char stringdata139[8];
    char stringdata140[21];
    char stringdata141[18];
    char stringdata142[19];
    char stringdata143[17];
    char stringdata144[18];
    char stringdata145[20];
    char stringdata146[23];
    char stringdata147[26];
    char stringdata148[8];
    char stringdata149[9];
    char stringdata150[9];
    char stringdata151[5];
    char stringdata152[3];
    char stringdata153[9];
    char stringdata154[13];
    char stringdata155[8];
    char stringdata156[4];
    char stringdata157[6];
    char stringdata158[15];
    char stringdata159[27];
    char stringdata160[7];
    char stringdata161[6];
    char stringdata162[8];
    char stringdata163[5];
    char stringdata164[19];
    char stringdata165[35];
    char stringdata166[16];
    char stringdata167[34];
    char stringdata168[15];
    char stringdata169[24];
    char stringdata170[15];
    char stringdata171[5];
    char stringdata172[25];
    char stringdata173[17];
    char stringdata174[16];
    char stringdata175[26];
    char stringdata176[25];
    char stringdata177[22];
    char stringdata178[34];
    char stringdata179[33];
    char stringdata180[19];
    char stringdata181[9];
    char stringdata182[27];
    char stringdata183[12];
    char stringdata184[25];
    char stringdata185[20];
    char stringdata186[26];
    char stringdata187[27];
    char stringdata188[29];
    char stringdata189[36];
    char stringdata190[26];
    char stringdata191[29];
    char stringdata192[24];
    char stringdata193[23];
    char stringdata194[21];
    char stringdata195[17];
    char stringdata196[18];
    char stringdata197[20];
    char stringdata198[6];
    char stringdata199[22];
    char stringdata200[22];
    char stringdata201[6];
    char stringdata202[10];
    char stringdata203[14];
    char stringdata204[10];
    char stringdata205[12];
    char stringdata206[23];
    char stringdata207[18];
    char stringdata208[19];
    char stringdata209[14];
    char stringdata210[26];
    char stringdata211[14];
    char stringdata212[8];
    char stringdata213[23];
    char stringdata214[30];
    char stringdata215[7];
    char stringdata216[14];
    char stringdata217[17];
    char stringdata218[24];
    char stringdata219[27];
    char stringdata220[5];
    char stringdata221[6];
    char stringdata222[4];
    char stringdata223[7];
    char stringdata224[14];
    char stringdata225[9];
    char stringdata226[15];
    char stringdata227[18];
    char stringdata228[17];
    char stringdata229[23];
    char stringdata230[33];
    char stringdata231[26];
    char stringdata232[26];
    char stringdata233[23];
    char stringdata234[10];
    char stringdata235[25];
    char stringdata236[15];
    char stringdata237[13];
    char stringdata238[40];
    char stringdata239[12];
    char stringdata240[47];
    char stringdata241[9];
    char stringdata242[16];
    char stringdata243[12];
    char stringdata244[7];
    char stringdata245[13];
    char stringdata246[14];
    char stringdata247[18];
    char stringdata248[14];
    char stringdata249[13];
    char stringdata250[17];
    char stringdata251[18];
    char stringdata252[19];
    char stringdata253[13];
    char stringdata254[26];
    char stringdata255[4];
    char stringdata256[14];
    char stringdata257[14];
    char stringdata258[9];
    char stringdata259[9];
    char stringdata260[19];
    char stringdata261[15];
    char stringdata262[9];
    char stringdata263[8];
    char stringdata264[6];
    char stringdata265[6];
    char stringdata266[6];
    char stringdata267[10];
    char stringdata268[6];
    char stringdata269[8];
    char stringdata270[12];
    char stringdata271[10];
    char stringdata272[26];
    char stringdata273[23];
    char stringdata274[5];
    char stringdata275[19];
    char stringdata276[16];
    char stringdata277[10];
    char stringdata278[14];
    char stringdata279[13];
    char stringdata280[9];
    char stringdata281[15];
    char stringdata282[10];
    char stringdata283[6];
    char stringdata284[12];
    char stringdata285[9];
    char stringdata286[9];
    char stringdata287[9];
    char stringdata288[19];
    char stringdata289[13];
    char stringdata290[20];
    char stringdata291[16];
    char stringdata292[10];
    char stringdata293[6];
    char stringdata294[21];
    char stringdata295[25];
    char stringdata296[18];
    char stringdata297[28];
    char stringdata298[14];
    char stringdata299[12];
    char stringdata300[7];
    char stringdata301[7];
    char stringdata302[7];
    char stringdata303[7];
    char stringdata304[7];
    char stringdata305[7];
    char stringdata306[7];
    char stringdata307[7];
    char stringdata308[10];
    char stringdata309[17];
    char stringdata310[14];
    char stringdata311[11];
    char stringdata312[23];
    char stringdata313[12];
    char stringdata314[17];
    char stringdata315[18];
    char stringdata316[20];
    char stringdata317[20];
    char stringdata318[9];
    char stringdata319[10];
    char stringdata320[16];
    char stringdata321[18];
    char stringdata322[19];
    char stringdata323[17];
    char stringdata324[16];
    char stringdata325[13];
    char stringdata326[18];
    char stringdata327[16];
    char stringdata328[15];
    char stringdata329[12];
    char stringdata330[12];
    char stringdata331[16];
    char stringdata332[17];
    char stringdata333[13];
    char stringdata334[13];
    char stringdata335[8];
    char stringdata336[10];
    char stringdata337[11];
    char stringdata338[5];
    char stringdata339[6];
    char stringdata340[4];
    char stringdata341[31];
    char stringdata342[23];
    char stringdata343[17];
    char stringdata344[14];
    char stringdata345[26];
    char stringdata346[11];
    char stringdata347[14];
    char stringdata348[14];
    char stringdata349[24];
    char stringdata350[17];
    char stringdata351[18];
    char stringdata352[18];
    char stringdata353[16];
    char stringdata354[14];
    char stringdata355[19];
    char stringdata356[17];
    char stringdata357[15];
    char stringdata358[22];
    char stringdata359[17];
    char stringdata360[19];
    char stringdata361[18];
    char stringdata362[19];
    char stringdata363[20];
    char stringdata364[15];
    char stringdata365[15];
    char stringdata366[18];
    char stringdata367[15];
    char stringdata368[18];
    char stringdata369[16];
    char stringdata370[16];
    char stringdata371[31];
    char stringdata372[15];
    char stringdata373[15];
    char stringdata374[17];
    char stringdata375[14];
    char stringdata376[18];
    char stringdata377[11];
    char stringdata378[21];
    char stringdata379[17];
    char stringdata380[21];
    char stringdata381[17];
    char stringdata382[19];
    char stringdata383[11];
    char stringdata384[12];
    char stringdata385[10];
    char stringdata386[11];
    char stringdata387[11];
    char stringdata388[13];
    char stringdata389[15];
    char stringdata390[10];
    char stringdata391[11];
    char stringdata392[20];
    char stringdata393[15];
    char stringdata394[13];
    char stringdata395[15];
    char stringdata396[14];
    char stringdata397[20];
    char stringdata398[22];
    char stringdata399[19];
    char stringdata400[17];
    char stringdata401[24];
    char stringdata402[15];
    char stringdata403[18];
    char stringdata404[18];
    char stringdata405[17];
    char stringdata406[18];
    char stringdata407[19];
    char stringdata408[20];
    char stringdata409[16];
    char stringdata410[24];
    char stringdata411[9];
    char stringdata412[10];
    char stringdata413[16];
    char stringdata414[17];
    char stringdata415[6];
    char stringdata416[8];
    char stringdata417[9];
    char stringdata418[10];
    char stringdata419[8];
    char stringdata420[12];
    char stringdata421[9];
    char stringdata422[17];
    char stringdata423[10];
    char stringdata424[13];
    char stringdata425[18];
    char stringdata426[15];
    char stringdata427[23];
    char stringdata428[12];
    char stringdata429[16];
    char stringdata430[15];
    char stringdata431[15];
    char stringdata432[11];
    char stringdata433[17];
    char stringdata434[16];
    char stringdata435[17];
    char stringdata436[14];
    char stringdata437[14];
    char stringdata438[6];
    char stringdata439[12];
    char stringdata440[8];
    char stringdata441[4];
    char stringdata442[11];
    char stringdata443[5];
    char stringdata444[5];
    char stringdata445[10];
    char stringdata446[12];
    char stringdata447[6];
    char stringdata448[9];
    char stringdata449[10];
    char stringdata450[16];
    char stringdata451[8];
    char stringdata452[16];
    char stringdata453[14];
    char stringdata454[22];
    char stringdata455[11];
    char stringdata456[10];
    char stringdata457[4];
    char stringdata458[10];
    char stringdata459[10];
    char stringdata460[11];
    char stringdata461[27];
    char stringdata462[28];
    char stringdata463[21];
    char stringdata464[21];
    char stringdata465[21];
    char stringdata466[20];
    char stringdata467[26];
    char stringdata468[27];
    char stringdata469[27];
    char stringdata470[27];
    char stringdata471[8];
    char stringdata472[11];
    char stringdata473[14];
    char stringdata474[18];
    char stringdata475[16];
    char stringdata476[16];
    char stringdata477[13];
    char stringdata478[20];
    char stringdata479[24];
    char stringdata480[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleENDCLASS_t qt_meta_stringdata_CLASSVehicleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Vehicle"
        QT_MOC_LITERAL(8, 17),  // "coordinateChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(42, 10),  // "coordinate"
        QT_MOC_LITERAL(53, 22),  // "joystickEnabledChanged"
        QT_MOC_LITERAL(76, 7),  // "enabled"
        QT_MOC_LITERAL(84, 22),  // "mavlinkMessageReceived"
        QT_MOC_LITERAL(107, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(125, 7),  // "message"
        QT_MOC_LITERAL(133, 19),  // "homePositionChanged"
        QT_MOC_LITERAL(153, 12),  // "homePosition"
        QT_MOC_LITERAL(166, 20),  // "armedPositionChanged"
        QT_MOC_LITERAL(187, 12),  // "armedChanged"
        QT_MOC_LITERAL(200, 5),  // "armed"
        QT_MOC_LITERAL(206, 17),  // "flightModeChanged"
        QT_MOC_LITERAL(224, 10),  // "flightMode"
        QT_MOC_LITERAL(235, 13),  // "flyingChanged"
        QT_MOC_LITERAL(249, 6),  // "flying"
        QT_MOC_LITERAL(256, 14),  // "landingChanged"
        QT_MOC_LITERAL(271, 7),  // "landing"
        QT_MOC_LITERAL(279, 17),  // "guidedModeChanged"
        QT_MOC_LITERAL(297, 10),  // "guidedMode"
        QT_MOC_LITERAL(308, 22),  // "vtolInFwdFlightChanged"
        QT_MOC_LITERAL(331, 15),  // "vtolInFwdFlight"
        QT_MOC_LITERAL(347, 18),  // "prearmErrorChanged"
        QT_MOC_LITERAL(366, 11),  // "prearmError"
        QT_MOC_LITERAL(378, 19),  // "soloFirmwareChanged"
        QT_MOC_LITERAL(398, 12),  // "soloFirmware"
        QT_MOC_LITERAL(411, 25),  // "defaultCruiseSpeedChanged"
        QT_MOC_LITERAL(437, 11),  // "cruiseSpeed"
        QT_MOC_LITERAL(449, 24),  // "defaultHoverSpeedChanged"
        QT_MOC_LITERAL(474, 10),  // "hoverSpeed"
        QT_MOC_LITERAL(485, 19),  // "firmwareTypeChanged"
        QT_MOC_LITERAL(505, 18),  // "vehicleTypeChanged"
        QT_MOC_LITERAL(524, 20),  // "cameraManagerChanged"
        QT_MOC_LITERAL(545, 17),  // "hobbsMeterChanged"
        QT_MOC_LITERAL(563, 24),  // "capabilitiesKnownChanged"
        QT_MOC_LITERAL(588, 17),  // "capabilitiesKnown"
        QT_MOC_LITERAL(606, 33),  // "initialPlanRequestCompleteCha..."
        QT_MOC_LITERAL(640, 26),  // "initialPlanRequestComplete"
        QT_MOC_LITERAL(667, 21),  // "capabilityBitsChanged"
        QT_MOC_LITERAL(689, 8),  // "uint64_t"
        QT_MOC_LITERAL(698, 14),  // "capabilityBits"
        QT_MOC_LITERAL(713, 21),  // "toolIndicatorsChanged"
        QT_MOC_LITERAL(735, 21),  // "modeIndicatorsChanged"
        QT_MOC_LITERAL(757, 19),  // "textMessageReceived"
        QT_MOC_LITERAL(777, 5),  // "uasid"
        QT_MOC_LITERAL(783, 11),  // "componentid"
        QT_MOC_LITERAL(795, 8),  // "severity"
        QT_MOC_LITERAL(804, 4),  // "text"
        QT_MOC_LITERAL(809, 11),  // "description"
        QT_MOC_LITERAL(821, 24),  // "calibrationEventReceived"
        QT_MOC_LITERAL(846, 43),  // "QSharedPointer<events::parser..."
        QT_MOC_LITERAL(890, 5),  // "event"
        QT_MOC_LITERAL(896, 21),  // "checkListStateChanged"
        QT_MOC_LITERAL(918, 23),  // "messagesReceivedChanged"
        QT_MOC_LITERAL(942, 19),  // "messagesSentChanged"
        QT_MOC_LITERAL(962, 19),  // "messagesLostChanged"
        QT_MOC_LITERAL(982, 18),  // "messageTypeChanged"
        QT_MOC_LITERAL(1001, 22),  // "newMessageCountChanged"
        QT_MOC_LITERAL(1024, 19),  // "messageCountChanged"
        QT_MOC_LITERAL(1044, 24),  // "formattedMessagesChanged"
        QT_MOC_LITERAL(1069, 19),  // "newFormattedMessage"
        QT_MOC_LITERAL(1089, 16),  // "formattedMessage"
        QT_MOC_LITERAL(1106, 16),  // "longitudeChanged"
        QT_MOC_LITERAL(1123, 20),  // "currentConfigChanged"
        QT_MOC_LITERAL(1144, 21),  // "flowImageIndexChanged"
        QT_MOC_LITERAL(1166, 13),  // "rcRSSIChanged"
        QT_MOC_LITERAL(1180, 6),  // "rcRSSI"
        QT_MOC_LITERAL(1187, 21),  // "telemetryRRSSIChanged"
        QT_MOC_LITERAL(1209, 5),  // "value"
        QT_MOC_LITERAL(1215, 21),  // "telemetryLRSSIChanged"
        QT_MOC_LITERAL(1237, 24),  // "telemetryRXErrorsChanged"
        QT_MOC_LITERAL(1262, 21),  // "telemetryFixedChanged"
        QT_MOC_LITERAL(1284, 24),  // "telemetryTXBufferChanged"
        QT_MOC_LITERAL(1309, 22),  // "telemetryLNoiseChanged"
        QT_MOC_LITERAL(1332, 22),  // "telemetryRNoiseChanged"
        QT_MOC_LITERAL(1355, 17),  // "autoDisarmChanged"
        QT_MOC_LITERAL(1373, 18),  // "flightModesChanged"
        QT_MOC_LITERAL(1392, 25),  // "sensorsPresentBitsChanged"
        QT_MOC_LITERAL(1418, 18),  // "sensorsPresentBits"
        QT_MOC_LITERAL(1437, 25),  // "sensorsEnabledBitsChanged"
        QT_MOC_LITERAL(1463, 18),  // "sensorsEnabledBits"
        QT_MOC_LITERAL(1482, 24),  // "sensorsHealthBitsChanged"
        QT_MOC_LITERAL(1507, 17),  // "sensorsHealthBits"
        QT_MOC_LITERAL(1525, 27),  // "sensorsUnhealthyBitsChanged"
        QT_MOC_LITERAL(1553, 20),  // "sensorsUnhealthyBits"
        QT_MOC_LITERAL(1574, 18),  // "orbitActiveChanged"
        QT_MOC_LITERAL(1593, 11),  // "orbitActive"
        QT_MOC_LITERAL(1605, 26),  // "readyToFlyAvailableChanged"
        QT_MOC_LITERAL(1632, 19),  // "readyToFlyAvailable"
        QT_MOC_LITERAL(1652, 17),  // "readyToFlyChanged"
        QT_MOC_LITERAL(1670, 9),  // "readyToFy"
        QT_MOC_LITERAL(1680, 24),  // "allSensorsHealthyChanged"
        QT_MOC_LITERAL(1705, 17),  // "allSensorsHealthy"
        QT_MOC_LITERAL(1723, 21),  // "requiresGpsFixChanged"
        QT_MOC_LITERAL(1745, 21),  // "haveMRSpeedLimChanged"
        QT_MOC_LITERAL(1767, 21),  // "haveFWSpeedLimChanged"
        QT_MOC_LITERAL(1789, 22),  // "firmwareVersionChanged"
        QT_MOC_LITERAL(1812, 28),  // "firmwareCustomVersionChanged"
        QT_MOC_LITERAL(1841, 14),  // "gitHashChanged"
        QT_MOC_LITERAL(1856, 4),  // "hash"
        QT_MOC_LITERAL(1861, 17),  // "vehicleUIDChanged"
        QT_MOC_LITERAL(1879, 19),  // "loadProgressChanged"
        QT_MOC_LITERAL(1899, 17),  // "rcChannelsChanged"
        QT_MOC_LITERAL(1917, 12),  // "channelCount"
        QT_MOC_LITERAL(1930, 30),  // "int[QGCMAVLink::maxRcChannels]"
        QT_MOC_LITERAL(1961, 9),  // "pwmValues"
        QT_MOC_LITERAL(1971, 24),  // "remoteControlRSSIChanged"
        QT_MOC_LITERAL(1996, 7),  // "uint8_t"
        QT_MOC_LITERAL(2004, 4),  // "rssi"
        QT_MOC_LITERAL(2009, 13),  // "mavlinkRawImu"
        QT_MOC_LITERAL(2023, 17),  // "mavlinkScaledImu1"
        QT_MOC_LITERAL(2041, 17),  // "mavlinkScaledImu2"
        QT_MOC_LITERAL(2059, 17),  // "mavlinkScaledImu3"
        QT_MOC_LITERAL(2077, 14),  // "mavlinkLogData"
        QT_MOC_LITERAL(2092, 8),  // "Vehicle*"
        QT_MOC_LITERAL(2101, 7),  // "vehicle"
        QT_MOC_LITERAL(2109, 13),  // "target_system"
        QT_MOC_LITERAL(2123, 16),  // "target_component"
        QT_MOC_LITERAL(2140, 8),  // "uint16_t"
        QT_MOC_LITERAL(2149, 8),  // "sequence"
        QT_MOC_LITERAL(2158, 13),  // "first_message"
        QT_MOC_LITERAL(2172, 4),  // "data"
        QT_MOC_LITERAL(2177, 5),  // "acked"
        QT_MOC_LITERAL(2183, 16),  // "mavCommandResult"
        QT_MOC_LITERAL(2200, 9),  // "vehicleId"
        QT_MOC_LITERAL(2210, 15),  // "targetComponent"
        QT_MOC_LITERAL(2226, 7),  // "command"
        QT_MOC_LITERAL(2234, 9),  // "ackResult"
        QT_MOC_LITERAL(2244, 11),  // "failureCode"
        QT_MOC_LITERAL(2256, 20),  // "mavlinkSerialControl"
        QT_MOC_LITERAL(2277, 6),  // "device"
        QT_MOC_LITERAL(2284, 5),  // "flags"
        QT_MOC_LITERAL(2290, 7),  // "timeout"
        QT_MOC_LITERAL(2298, 8),  // "uint32_t"
        QT_MOC_LITERAL(2307, 8),  // "baudrate"
        QT_MOC_LITERAL(2316, 22),  // "requestProtocolVersion"
        QT_MOC_LITERAL(2339, 7),  // "version"
        QT_MOC_LITERAL(2347, 20),  // "mavlinkStatusChanged"
        QT_MOC_LITERAL(2368, 17),  // "gimbalRollChanged"
        QT_MOC_LITERAL(2386, 18),  // "gimbalPitchChanged"
        QT_MOC_LITERAL(2405, 16),  // "gimbalYawChanged"
        QT_MOC_LITERAL(2422, 17),  // "gimbalDataChanged"
        QT_MOC_LITERAL(2440, 19),  // "isROIEnabledChanged"
        QT_MOC_LITERAL(2460, 22),  // "initialConnectComplete"
        QT_MOC_LITERAL(2483, 25),  // "sensorsParametersResetAck"
        QT_MOC_LITERAL(2509, 7),  // "success"
        QT_MOC_LITERAL(2517, 8),  // "logEntry"
        QT_MOC_LITERAL(2526, 8),  // "time_utc"
        QT_MOC_LITERAL(2535, 4),  // "size"
        QT_MOC_LITERAL(2540, 2),  // "id"
        QT_MOC_LITERAL(2543, 8),  // "num_logs"
        QT_MOC_LITERAL(2552, 12),  // "last_log_num"
        QT_MOC_LITERAL(2565, 7),  // "logData"
        QT_MOC_LITERAL(2573, 3),  // "ofs"
        QT_MOC_LITERAL(2577, 5),  // "count"
        QT_MOC_LITERAL(2583, 14),  // "const uint8_t*"
        QT_MOC_LITERAL(2598, 26),  // "mavlinkMsgIntervalsChanged"
        QT_MOC_LITERAL(2625, 6),  // "compid"
        QT_MOC_LITERAL(2632, 5),  // "msgId"
        QT_MOC_LITERAL(2638, 7),  // "int32_t"
        QT_MOC_LITERAL(2646, 4),  // "rate"
        QT_MOC_LITERAL(2651, 18),  // "setVtolInFwdFlight"
        QT_MOC_LITERAL(2670, 34),  // "_offlineFirmwareTypeSettingCh..."
        QT_MOC_LITERAL(2705, 15),  // "varFirmwareType"
        QT_MOC_LITERAL(2721, 33),  // "_offlineVehicleTypeSettingCha..."
        QT_MOC_LITERAL(2755, 14),  // "varVehicleType"
        QT_MOC_LITERAL(2770, 23),  // "_mavlinkMessageReceived"
        QT_MOC_LITERAL(2794, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(2809, 4),  // "link"
        QT_MOC_LITERAL(2814, 24),  // "_sendMessageMultipleNext"
        QT_MOC_LITERAL(2839, 16),  // "_parametersReady"
        QT_MOC_LITERAL(2856, 15),  // "parametersReady"
        QT_MOC_LITERAL(2872, 25),  // "_remoteControlRSSIChanged"
        QT_MOC_LITERAL(2898, 24),  // "_handleFlightModeChanged"
        QT_MOC_LITERAL(2923, 21),  // "_announceArmedChanged"
        QT_MOC_LITERAL(2945, 33),  // "_offlineCruiseSpeedSettingCha..."
        QT_MOC_LITERAL(2979, 32),  // "_offlineHoverSpeedSettingChanged"
        QT_MOC_LITERAL(3012, 18),  // "_handleTextMessage"
        QT_MOC_LITERAL(3031, 8),  // "newCount"
        QT_MOC_LITERAL(3040, 26),  // "_handletextMessageReceived"
        QT_MOC_LITERAL(3067, 11),  // "UASMessage*"
        QT_MOC_LITERAL(3079, 24),  // "_imageProtocolImageReady"
        QT_MOC_LITERAL(3104, 19),  // "_prearmErrorTimeout"
        QT_MOC_LITERAL(3124, 25),  // "_firstMissionLoadComplete"
        QT_MOC_LITERAL(3150, 26),  // "_firstGeoFenceLoadComplete"
        QT_MOC_LITERAL(3177, 28),  // "_firstRallyPointLoadComplete"
        QT_MOC_LITERAL(3206, 35),  // "_sendMavCommandResponseTimeou..."
        QT_MOC_LITERAL(3242, 25),  // "_clearCameraTriggerPoints"
        QT_MOC_LITERAL(3268, 28),  // "_updateDistanceHeadingToHome"
        QT_MOC_LITERAL(3297, 23),  // "_updateMissionItemIndex"
        QT_MOC_LITERAL(3321, 22),  // "_updateHeadingToNextWP"
        QT_MOC_LITERAL(3344, 20),  // "_updateDistanceToGCS"
        QT_MOC_LITERAL(3365, 16),  // "_updateHomepoint"
        QT_MOC_LITERAL(3382, 17),  // "_updateHobbsMeter"
        QT_MOC_LITERAL(3400, 19),  // "_vehicleParamLoaded"
        QT_MOC_LITERAL(3420, 5),  // "ready"
        QT_MOC_LITERAL(3426, 21),  // "_sendQGCTimeToVehicle"
        QT_MOC_LITERAL(3448, 21),  // "_mavlinkMessageStatus"
        QT_MOC_LITERAL(3470, 5),  // "uasId"
        QT_MOC_LITERAL(3476, 9),  // "totalSent"
        QT_MOC_LITERAL(3486, 13),  // "totalReceived"
        QT_MOC_LITERAL(3500, 9),  // "totalLoss"
        QT_MOC_LITERAL(3510, 11),  // "lossPercent"
        QT_MOC_LITERAL(3522, 22),  // "_orbitTelemetryTimeout"
        QT_MOC_LITERAL(3545, 17),  // "_updateFlightTime"
        QT_MOC_LITERAL(3563, 18),  // "_gotProgressUpdate"
        QT_MOC_LITERAL(3582, 13),  // "progressValue"
        QT_MOC_LITERAL(3596, 25),  // "_doSetHomeTerrainReceived"
        QT_MOC_LITERAL(3622, 13),  // "QList<double>"
        QT_MOC_LITERAL(3636, 7),  // "heights"
        QT_MOC_LITERAL(3644, 22),  // "_updateAltAboveTerrain"
        QT_MOC_LITERAL(3667, 29),  // "_altitudeAboveTerrainReceived"
        QT_MOC_LITERAL(3697, 6),  // "sucess"
        QT_MOC_LITERAL(3704, 13),  // "resetCounters"
        QT_MOC_LITERAL(3718, 16),  // "resetAllMessages"
        QT_MOC_LITERAL(3735, 23),  // "resetErrorLevelMessages"
        QT_MOC_LITERAL(3759, 26),  // "virtualTabletJoystickValue"
        QT_MOC_LITERAL(3786, 4),  // "roll"
        QT_MOC_LITERAL(3791, 5),  // "pitch"
        QT_MOC_LITERAL(3797, 3),  // "yaw"
        QT_MOC_LITERAL(3801, 6),  // "thrust"
        QT_MOC_LITERAL(3808, 13),  // "guidedModeRTL"
        QT_MOC_LITERAL(3822, 8),  // "smartRTL"
        QT_MOC_LITERAL(3831, 14),  // "guidedModeLand"
        QT_MOC_LITERAL(3846, 17),  // "guidedModeTakeoff"
        QT_MOC_LITERAL(3864, 16),  // "altitudeRelative"
        QT_MOC_LITERAL(3881, 22),  // "minimumTakeoffAltitude"
        QT_MOC_LITERAL(3904, 32),  // "maximumHorizontalSpeedMultirotor"
        QT_MOC_LITERAL(3937, 25),  // "maximumEquivalentAirspeed"
        QT_MOC_LITERAL(3963, 25),  // "minimumEquivalentAirspeed"
        QT_MOC_LITERAL(3989, 22),  // "guidedModeGotoLocation"
        QT_MOC_LITERAL(4012, 9),  // "gotoCoord"
        QT_MOC_LITERAL(4022, 24),  // "guidedModeChangeAltitude"
        QT_MOC_LITERAL(4047, 14),  // "altitudeChange"
        QT_MOC_LITERAL(4062, 12),  // "pauseVehicle"
        QT_MOC_LITERAL(4075, 39),  // "guidedModeChangeGroundSpeedMe..."
        QT_MOC_LITERAL(4115, 11),  // "groundspeed"
        QT_MOC_LITERAL(4127, 46),  // "guidedModeChangeEquivalentAir..."
        QT_MOC_LITERAL(4174, 8),  // "airspeed"
        QT_MOC_LITERAL(4183, 15),  // "guidedModeOrbit"
        QT_MOC_LITERAL(4199, 11),  // "centerCoord"
        QT_MOC_LITERAL(4211, 6),  // "radius"
        QT_MOC_LITERAL(4218, 12),  // "amslAltitude"
        QT_MOC_LITERAL(4231, 13),  // "guidedModeROI"
        QT_MOC_LITERAL(4245, 17),  // "stopGuidedModeROI"
        QT_MOC_LITERAL(4263, 13),  // "emergencyStop"
        QT_MOC_LITERAL(4277, 12),  // "abortLanding"
        QT_MOC_LITERAL(4290, 16),  // "climbOutAltitude"
        QT_MOC_LITERAL(4307, 17),  // "landingGearDeploy"
        QT_MOC_LITERAL(4325, 18),  // "landingGearRetract"
        QT_MOC_LITERAL(4344, 12),  // "startMission"
        QT_MOC_LITERAL(4357, 25),  // "setCurrentMissionSequence"
        QT_MOC_LITERAL(4383, 3),  // "seq"
        QT_MOC_LITERAL(4387, 13),  // "rebootVehicle"
        QT_MOC_LITERAL(4401, 13),  // "clearMessages"
        QT_MOC_LITERAL(4415, 8),  // "sendPlan"
        QT_MOC_LITERAL(4424, 8),  // "planFile"
        QT_MOC_LITERAL(4433, 18),  // "setEstimatorOrigin"
        QT_MOC_LITERAL(4452, 14),  // "versionCompare"
        QT_MOC_LITERAL(4467, 8),  // "QString&"
        QT_MOC_LITERAL(4476, 7),  // "compare"
        QT_MOC_LITERAL(4484, 5),  // "major"
        QT_MOC_LITERAL(4490, 5),  // "minor"
        QT_MOC_LITERAL(4496, 5),  // "patch"
        QT_MOC_LITERAL(4502, 9),  // "motorTest"
        QT_MOC_LITERAL(4512, 5),  // "motor"
        QT_MOC_LITERAL(4518, 7),  // "percent"
        QT_MOC_LITERAL(4526, 11),  // "timeoutSecs"
        QT_MOC_LITERAL(4538, 9),  // "showError"
        QT_MOC_LITERAL(4548, 25),  // "setPIDTuningTelemetryMode"
        QT_MOC_LITERAL(4574, 22),  // "PIDTuningTelemetryMode"
        QT_MOC_LITERAL(4597, 4),  // "mode"
        QT_MOC_LITERAL(4602, 18),  // "gimbalControlValue"
        QT_MOC_LITERAL(4621, 15),  // "gimbalPitchStep"
        QT_MOC_LITERAL(4637, 9),  // "direction"
        QT_MOC_LITERAL(4647, 13),  // "gimbalYawStep"
        QT_MOC_LITERAL(4661, 12),  // "centerGimbal"
        QT_MOC_LITERAL(4674, 8),  // "forceArm"
        QT_MOC_LITERAL(4683, 14),  // "sendParamMapRC"
        QT_MOC_LITERAL(4698, 9),  // "paramName"
        QT_MOC_LITERAL(4708, 5),  // "scale"
        QT_MOC_LITERAL(4714, 11),  // "centerValue"
        QT_MOC_LITERAL(4726, 8),  // "tuningID"
        QT_MOC_LITERAL(4735, 8),  // "minValue"
        QT_MOC_LITERAL(4744, 8),  // "maxValue"
        QT_MOC_LITERAL(4753, 18),  // "clearAllParamMapRC"
        QT_MOC_LITERAL(4772, 12),  // "closeVehicle"
        QT_MOC_LITERAL(4785, 19),  // "triggerSimpleCamera"
        QT_MOC_LITERAL(4805, 15),  // "flashBootloader"
        QT_MOC_LITERAL(4821, 9),  // "doSetHome"
        QT_MOC_LITERAL(4831, 5),  // "coord"
        QT_MOC_LITERAL(4837, 20),  // "saveJoystickSettings"
        QT_MOC_LITERAL(4858, 24),  // "vehicleClassInternalName"
        QT_MOC_LITERAL(4883, 17),  // "sendGripperAction"
        QT_MOC_LITERAL(4901, 27),  // "QGCMAVLink::GRIPPER_OPTIONS"
        QT_MOC_LITERAL(4929, 13),  // "gripperOption"
        QT_MOC_LITERAL(4943, 11),  // "sendCommand"
        QT_MOC_LITERAL(4955, 6),  // "compId"
        QT_MOC_LITERAL(4962, 6),  // "param1"
        QT_MOC_LITERAL(4969, 6),  // "param2"
        QT_MOC_LITERAL(4976, 6),  // "param3"
        QT_MOC_LITERAL(4983, 6),  // "param4"
        QT_MOC_LITERAL(4990, 6),  // "param5"
        QT_MOC_LITERAL(4997, 6),  // "param6"
        QT_MOC_LITERAL(5004, 6),  // "param7"
        QT_MOC_LITERAL(5011, 9),  // "autopilot"
        QT_MOC_LITERAL(5021, 16),  // "AutoPilotPlugin*"
        QT_MOC_LITERAL(5038, 13),  // "armedPosition"
        QT_MOC_LITERAL(5052, 10),  // "autoDisarm"
        QT_MOC_LITERAL(5063, 22),  // "flightModeSetAvailable"
        QT_MOC_LITERAL(5086, 11),  // "flightModes"
        QT_MOC_LITERAL(5098, 16),  // "trajectoryPoints"
        QT_MOC_LITERAL(5115, 17),  // "TrajectoryPoints*"
        QT_MOC_LITERAL(5133, 19),  // "cameraTriggerPoints"
        QT_MOC_LITERAL(5153, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(5173, 8),  // "latitude"
        QT_MOC_LITERAL(5182, 9),  // "longitude"
        QT_MOC_LITERAL(5192, 15),  // "messageTypeNone"
        QT_MOC_LITERAL(5208, 17),  // "messageTypeNormal"
        QT_MOC_LITERAL(5226, 18),  // "messageTypeWarning"
        QT_MOC_LITERAL(5245, 16),  // "messageTypeError"
        QT_MOC_LITERAL(5262, 15),  // "newMessageCount"
        QT_MOC_LITERAL(5278, 12),  // "messageCount"
        QT_MOC_LITERAL(5291, 17),  // "formattedMessages"
        QT_MOC_LITERAL(5309, 15),  // "joystickEnabled"
        QT_MOC_LITERAL(5325, 14),  // "flowImageIndex"
        QT_MOC_LITERAL(5340, 11),  // "px4Firmware"
        QT_MOC_LITERAL(5352, 11),  // "apmFirmware"
        QT_MOC_LITERAL(5364, 15),  // "genericFirmware"
        QT_MOC_LITERAL(5380, 16),  // "messagesReceived"
        QT_MOC_LITERAL(5397, 12),  // "messagesSent"
        QT_MOC_LITERAL(5410, 12),  // "messagesLost"
        QT_MOC_LITERAL(5423, 7),  // "airship"
        QT_MOC_LITERAL(5431, 9),  // "fixedWing"
        QT_MOC_LITERAL(5441, 10),  // "multiRotor"
        QT_MOC_LITERAL(5452, 4),  // "vtol"
        QT_MOC_LITERAL(5457, 5),  // "rover"
        QT_MOC_LITERAL(5463, 3),  // "sub"
        QT_MOC_LITERAL(5467, 30),  // "supportsThrottleModeCenterZero"
        QT_MOC_LITERAL(5498, 22),  // "supportsNegativeThrust"
        QT_MOC_LITERAL(5521, 16),  // "supportsJSButton"
        QT_MOC_LITERAL(5538, 13),  // "supportsRadio"
        QT_MOC_LITERAL(5552, 25),  // "supportsMotorInterference"
        QT_MOC_LITERAL(5578, 10),  // "motorCount"
        QT_MOC_LITERAL(5589, 13),  // "coaxialMotors"
        QT_MOC_LITERAL(5603, 13),  // "xConfigMotors"
        QT_MOC_LITERAL(5617, 23),  // "isOfflineEditingVehicle"
        QT_MOC_LITERAL(5641, 16),  // "brandImageIndoor"
        QT_MOC_LITERAL(5658, 17),  // "brandImageOutdoor"
        QT_MOC_LITERAL(5676, 17),  // "missionFlightMode"
        QT_MOC_LITERAL(5694, 15),  // "pauseFlightMode"
        QT_MOC_LITERAL(5710, 13),  // "rtlFlightMode"
        QT_MOC_LITERAL(5724, 18),  // "smartRTLFlightMode"
        QT_MOC_LITERAL(5743, 16),  // "supportsSmartRTL"
        QT_MOC_LITERAL(5760, 14),  // "landFlightMode"
        QT_MOC_LITERAL(5775, 21),  // "takeControlFlightMode"
        QT_MOC_LITERAL(5797, 16),  // "followFlightMode"
        QT_MOC_LITERAL(5814, 18),  // "firmwareTypeString"
        QT_MOC_LITERAL(5833, 17),  // "vehicleTypeString"
        QT_MOC_LITERAL(5851, 18),  // "vehicleImageOpaque"
        QT_MOC_LITERAL(5870, 19),  // "vehicleImageOutline"
        QT_MOC_LITERAL(5890, 14),  // "telemetryRRSSI"
        QT_MOC_LITERAL(5905, 14),  // "telemetryLRSSI"
        QT_MOC_LITERAL(5920, 17),  // "telemetryRXErrors"
        QT_MOC_LITERAL(5938, 14),  // "telemetryFixed"
        QT_MOC_LITERAL(5953, 17),  // "telemetryTXBuffer"
        QT_MOC_LITERAL(5971, 15),  // "telemetryLNoise"
        QT_MOC_LITERAL(5987, 15),  // "telemetryRNoise"
        QT_MOC_LITERAL(6003, 30),  // "mainStatusIndicatorContentItem"
        QT_MOC_LITERAL(6034, 14),  // "toolIndicators"
        QT_MOC_LITERAL(6049, 14),  // "modeIndicators"
        QT_MOC_LITERAL(6064, 16),  // "staticCameraList"
        QT_MOC_LITERAL(6081, 13),  // "cameraManager"
        QT_MOC_LITERAL(6095, 17),  // "QGCCameraManager*"
        QT_MOC_LITERAL(6113, 10),  // "hobbsMeter"
        QT_MOC_LITERAL(6124, 20),  // "supportsTerrainFrame"
        QT_MOC_LITERAL(6145, 16),  // "mavlinkSentCount"
        QT_MOC_LITERAL(6162, 20),  // "mavlinkReceivedCount"
        QT_MOC_LITERAL(6183, 16),  // "mavlinkLossCount"
        QT_MOC_LITERAL(6200, 18),  // "mavlinkLossPercent"
        QT_MOC_LITERAL(6219, 10),  // "gimbalRoll"
        QT_MOC_LITERAL(6230, 11),  // "gimbalPitch"
        QT_MOC_LITERAL(6242, 9),  // "gimbalYaw"
        QT_MOC_LITERAL(6252, 10),  // "gimbalData"
        QT_MOC_LITERAL(6263, 10),  // "hasGripper"
        QT_MOC_LITERAL(6274, 12),  // "isROIEnabled"
        QT_MOC_LITERAL(6287, 14),  // "checkListState"
        QT_MOC_LITERAL(6302, 9),  // "CheckList"
        QT_MOC_LITERAL(6312, 10),  // "readyToFly"
        QT_MOC_LITERAL(6323, 19),  // "sysStatusSensorInfo"
        QT_MOC_LITERAL(6343, 14),  // "requiresGpsFix"
        QT_MOC_LITERAL(6358, 12),  // "loadProgress"
        QT_MOC_LITERAL(6371, 14),  // "orbitMapCircle"
        QT_MOC_LITERAL(6386, 13),  // "QGCMapCircle*"
        QT_MOC_LITERAL(6400, 19),  // "guidedModeSupported"
        QT_MOC_LITERAL(6420, 21),  // "pauseVehicleSupported"
        QT_MOC_LITERAL(6442, 18),  // "orbitModeSupported"
        QT_MOC_LITERAL(6461, 16),  // "roiModeSupported"
        QT_MOC_LITERAL(6478, 23),  // "takeoffVehicleSupported"
        QT_MOC_LITERAL(6502, 14),  // "gotoFlightMode"
        QT_MOC_LITERAL(6517, 17),  // "haveMRSpeedLimits"
        QT_MOC_LITERAL(6535, 17),  // "haveFWSpeedLimits"
        QT_MOC_LITERAL(6553, 16),  // "parameterManager"
        QT_MOC_LITERAL(6570, 17),  // "ParameterManager*"
        QT_MOC_LITERAL(6588, 18),  // "vehicleLinkManager"
        QT_MOC_LITERAL(6607, 19),  // "VehicleLinkManager*"
        QT_MOC_LITERAL(6627, 15),  // "objectAvoidance"
        QT_MOC_LITERAL(6643, 23),  // "VehicleObjectAvoidance*"
        QT_MOC_LITERAL(6667, 8),  // "autotune"
        QT_MOC_LITERAL(6676, 9),  // "Autotune*"
        QT_MOC_LITERAL(6686, 15),  // "remoteIDManager"
        QT_MOC_LITERAL(6702, 16),  // "RemoteIDManager*"
        QT_MOC_LITERAL(6719, 5),  // "Fact*"
        QT_MOC_LITERAL(6725, 7),  // "heading"
        QT_MOC_LITERAL(6733, 8),  // "rollRate"
        QT_MOC_LITERAL(6742, 9),  // "pitchRate"
        QT_MOC_LITERAL(6752, 7),  // "yawRate"
        QT_MOC_LITERAL(6760, 11),  // "groundSpeed"
        QT_MOC_LITERAL(6772, 8),  // "airSpeed"
        QT_MOC_LITERAL(6781, 16),  // "airSpeedSetpoint"
        QT_MOC_LITERAL(6798, 9),  // "climbRate"
        QT_MOC_LITERAL(6808, 12),  // "altitudeAMSL"
        QT_MOC_LITERAL(6821, 17),  // "altitudeAboveTerr"
        QT_MOC_LITERAL(6839, 14),  // "altitudeTuning"
        QT_MOC_LITERAL(6854, 22),  // "altitudeTuningSetpoint"
        QT_MOC_LITERAL(6877, 11),  // "xTrackError"
        QT_MOC_LITERAL(6889, 15),  // "rangeFinderDist"
        QT_MOC_LITERAL(6905, 14),  // "flightDistance"
        QT_MOC_LITERAL(6920, 14),  // "distanceToHome"
        QT_MOC_LITERAL(6935, 10),  // "timeToHome"
        QT_MOC_LITERAL(6946, 16),  // "missionItemIndex"
        QT_MOC_LITERAL(6963, 15),  // "headingToNextWP"
        QT_MOC_LITERAL(6979, 16),  // "distanceToNextWP"
        QT_MOC_LITERAL(6996, 13),  // "headingToHome"
        QT_MOC_LITERAL(7010, 13),  // "distanceToGCS"
        QT_MOC_LITERAL(7024, 5),  // "hobbs"
        QT_MOC_LITERAL(7030, 11),  // "throttlePct"
        QT_MOC_LITERAL(7042, 7),  // "imuTemp"
        QT_MOC_LITERAL(7050, 3),  // "gps"
        QT_MOC_LITERAL(7054, 10),  // "FactGroup*"
        QT_MOC_LITERAL(7065, 4),  // "gps2"
        QT_MOC_LITERAL(7070, 4),  // "wind"
        QT_MOC_LITERAL(7075, 9),  // "vibration"
        QT_MOC_LITERAL(7085, 11),  // "temperature"
        QT_MOC_LITERAL(7097, 5),  // "clock"
        QT_MOC_LITERAL(7103, 8),  // "setpoint"
        QT_MOC_LITERAL(7112, 9),  // "escStatus"
        QT_MOC_LITERAL(7122, 15),  // "estimatorStatus"
        QT_MOC_LITERAL(7138, 7),  // "terrain"
        QT_MOC_LITERAL(7146, 15),  // "distanceSensors"
        QT_MOC_LITERAL(7162, 13),  // "localPosition"
        QT_MOC_LITERAL(7176, 21),  // "localPositionSetpoint"
        QT_MOC_LITERAL(7198, 10),  // "hygrometer"
        QT_MOC_LITERAL(7209, 9),  // "generator"
        QT_MOC_LITERAL(7219, 3),  // "efi"
        QT_MOC_LITERAL(7223, 9),  // "batteries"
        QT_MOC_LITERAL(7233, 9),  // "actuators"
        QT_MOC_LITERAL(7243, 10),  // "Actuators*"
        QT_MOC_LITERAL(7254, 26),  // "healthAndArmingCheckReport"
        QT_MOC_LITERAL(7281, 27),  // "HealthAndArmingCheckReport*"
        QT_MOC_LITERAL(7309, 20),  // "firmwareMajorVersion"
        QT_MOC_LITERAL(7330, 20),  // "firmwareMinorVersion"
        QT_MOC_LITERAL(7351, 20),  // "firmwarePatchVersion"
        QT_MOC_LITERAL(7372, 19),  // "firmwareVersionType"
        QT_MOC_LITERAL(7392, 25),  // "firmwareVersionTypeString"
        QT_MOC_LITERAL(7418, 26),  // "firmwareCustomMajorVersion"
        QT_MOC_LITERAL(7445, 26),  // "firmwareCustomMinorVersion"
        QT_MOC_LITERAL(7472, 26),  // "firmwareCustomPatchVersion"
        QT_MOC_LITERAL(7499, 7),  // "gitHash"
        QT_MOC_LITERAL(7507, 10),  // "vehicleUID"
        QT_MOC_LITERAL(7518, 13),  // "vehicleUIDStr"
        QT_MOC_LITERAL(7532, 17),  // "CheckListNotSetup"
        QT_MOC_LITERAL(7550, 15),  // "CheckListPassed"
        QT_MOC_LITERAL(7566, 15),  // "CheckListFailed"
        QT_MOC_LITERAL(7582, 12),  // "ModeDisabled"
        QT_MOC_LITERAL(7595, 19),  // "ModeRateAndAttitude"
        QT_MOC_LITERAL(7615, 23),  // "ModeVelocityAndPosition"
        QT_MOC_LITERAL(7639, 23)   // "ModeAltitudeAndAirspeed"
    },
    "Vehicle",
    "coordinateChanged",
    "",
    "QGeoCoordinate",
    "coordinate",
    "joystickEnabledChanged",
    "enabled",
    "mavlinkMessageReceived",
    "mavlink_message_t",
    "message",
    "homePositionChanged",
    "homePosition",
    "armedPositionChanged",
    "armedChanged",
    "armed",
    "flightModeChanged",
    "flightMode",
    "flyingChanged",
    "flying",
    "landingChanged",
    "landing",
    "guidedModeChanged",
    "guidedMode",
    "vtolInFwdFlightChanged",
    "vtolInFwdFlight",
    "prearmErrorChanged",
    "prearmError",
    "soloFirmwareChanged",
    "soloFirmware",
    "defaultCruiseSpeedChanged",
    "cruiseSpeed",
    "defaultHoverSpeedChanged",
    "hoverSpeed",
    "firmwareTypeChanged",
    "vehicleTypeChanged",
    "cameraManagerChanged",
    "hobbsMeterChanged",
    "capabilitiesKnownChanged",
    "capabilitiesKnown",
    "initialPlanRequestCompleteChanged",
    "initialPlanRequestComplete",
    "capabilityBitsChanged",
    "uint64_t",
    "capabilityBits",
    "toolIndicatorsChanged",
    "modeIndicatorsChanged",
    "textMessageReceived",
    "uasid",
    "componentid",
    "severity",
    "text",
    "description",
    "calibrationEventReceived",
    "QSharedPointer<events::parser::ParsedEvent>",
    "event",
    "checkListStateChanged",
    "messagesReceivedChanged",
    "messagesSentChanged",
    "messagesLostChanged",
    "messageTypeChanged",
    "newMessageCountChanged",
    "messageCountChanged",
    "formattedMessagesChanged",
    "newFormattedMessage",
    "formattedMessage",
    "longitudeChanged",
    "currentConfigChanged",
    "flowImageIndexChanged",
    "rcRSSIChanged",
    "rcRSSI",
    "telemetryRRSSIChanged",
    "value",
    "telemetryLRSSIChanged",
    "telemetryRXErrorsChanged",
    "telemetryFixedChanged",
    "telemetryTXBufferChanged",
    "telemetryLNoiseChanged",
    "telemetryRNoiseChanged",
    "autoDisarmChanged",
    "flightModesChanged",
    "sensorsPresentBitsChanged",
    "sensorsPresentBits",
    "sensorsEnabledBitsChanged",
    "sensorsEnabledBits",
    "sensorsHealthBitsChanged",
    "sensorsHealthBits",
    "sensorsUnhealthyBitsChanged",
    "sensorsUnhealthyBits",
    "orbitActiveChanged",
    "orbitActive",
    "readyToFlyAvailableChanged",
    "readyToFlyAvailable",
    "readyToFlyChanged",
    "readyToFy",
    "allSensorsHealthyChanged",
    "allSensorsHealthy",
    "requiresGpsFixChanged",
    "haveMRSpeedLimChanged",
    "haveFWSpeedLimChanged",
    "firmwareVersionChanged",
    "firmwareCustomVersionChanged",
    "gitHashChanged",
    "hash",
    "vehicleUIDChanged",
    "loadProgressChanged",
    "rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "remoteControlRSSIChanged",
    "uint8_t",
    "rssi",
    "mavlinkRawImu",
    "mavlinkScaledImu1",
    "mavlinkScaledImu2",
    "mavlinkScaledImu3",
    "mavlinkLogData",
    "Vehicle*",
    "vehicle",
    "target_system",
    "target_component",
    "uint16_t",
    "sequence",
    "first_message",
    "data",
    "acked",
    "mavCommandResult",
    "vehicleId",
    "targetComponent",
    "command",
    "ackResult",
    "failureCode",
    "mavlinkSerialControl",
    "device",
    "flags",
    "timeout",
    "uint32_t",
    "baudrate",
    "requestProtocolVersion",
    "version",
    "mavlinkStatusChanged",
    "gimbalRollChanged",
    "gimbalPitchChanged",
    "gimbalYawChanged",
    "gimbalDataChanged",
    "isROIEnabledChanged",
    "initialConnectComplete",
    "sensorsParametersResetAck",
    "success",
    "logEntry",
    "time_utc",
    "size",
    "id",
    "num_logs",
    "last_log_num",
    "logData",
    "ofs",
    "count",
    "const uint8_t*",
    "mavlinkMsgIntervalsChanged",
    "compid",
    "msgId",
    "int32_t",
    "rate",
    "setVtolInFwdFlight",
    "_offlineFirmwareTypeSettingChanged",
    "varFirmwareType",
    "_offlineVehicleTypeSettingChanged",
    "varVehicleType",
    "_mavlinkMessageReceived",
    "LinkInterface*",
    "link",
    "_sendMessageMultipleNext",
    "_parametersReady",
    "parametersReady",
    "_remoteControlRSSIChanged",
    "_handleFlightModeChanged",
    "_announceArmedChanged",
    "_offlineCruiseSpeedSettingChanged",
    "_offlineHoverSpeedSettingChanged",
    "_handleTextMessage",
    "newCount",
    "_handletextMessageReceived",
    "UASMessage*",
    "_imageProtocolImageReady",
    "_prearmErrorTimeout",
    "_firstMissionLoadComplete",
    "_firstGeoFenceLoadComplete",
    "_firstRallyPointLoadComplete",
    "_sendMavCommandResponseTimeoutCheck",
    "_clearCameraTriggerPoints",
    "_updateDistanceHeadingToHome",
    "_updateMissionItemIndex",
    "_updateHeadingToNextWP",
    "_updateDistanceToGCS",
    "_updateHomepoint",
    "_updateHobbsMeter",
    "_vehicleParamLoaded",
    "ready",
    "_sendQGCTimeToVehicle",
    "_mavlinkMessageStatus",
    "uasId",
    "totalSent",
    "totalReceived",
    "totalLoss",
    "lossPercent",
    "_orbitTelemetryTimeout",
    "_updateFlightTime",
    "_gotProgressUpdate",
    "progressValue",
    "_doSetHomeTerrainReceived",
    "QList<double>",
    "heights",
    "_updateAltAboveTerrain",
    "_altitudeAboveTerrainReceived",
    "sucess",
    "resetCounters",
    "resetAllMessages",
    "resetErrorLevelMessages",
    "virtualTabletJoystickValue",
    "roll",
    "pitch",
    "yaw",
    "thrust",
    "guidedModeRTL",
    "smartRTL",
    "guidedModeLand",
    "guidedModeTakeoff",
    "altitudeRelative",
    "minimumTakeoffAltitude",
    "maximumHorizontalSpeedMultirotor",
    "maximumEquivalentAirspeed",
    "minimumEquivalentAirspeed",
    "guidedModeGotoLocation",
    "gotoCoord",
    "guidedModeChangeAltitude",
    "altitudeChange",
    "pauseVehicle",
    "guidedModeChangeGroundSpeedMetersSecond",
    "groundspeed",
    "guidedModeChangeEquivalentAirspeedMetersSecond",
    "airspeed",
    "guidedModeOrbit",
    "centerCoord",
    "radius",
    "amslAltitude",
    "guidedModeROI",
    "stopGuidedModeROI",
    "emergencyStop",
    "abortLanding",
    "climbOutAltitude",
    "landingGearDeploy",
    "landingGearRetract",
    "startMission",
    "setCurrentMissionSequence",
    "seq",
    "rebootVehicle",
    "clearMessages",
    "sendPlan",
    "planFile",
    "setEstimatorOrigin",
    "versionCompare",
    "QString&",
    "compare",
    "major",
    "minor",
    "patch",
    "motorTest",
    "motor",
    "percent",
    "timeoutSecs",
    "showError",
    "setPIDTuningTelemetryMode",
    "PIDTuningTelemetryMode",
    "mode",
    "gimbalControlValue",
    "gimbalPitchStep",
    "direction",
    "gimbalYawStep",
    "centerGimbal",
    "forceArm",
    "sendParamMapRC",
    "paramName",
    "scale",
    "centerValue",
    "tuningID",
    "minValue",
    "maxValue",
    "clearAllParamMapRC",
    "closeVehicle",
    "triggerSimpleCamera",
    "flashBootloader",
    "doSetHome",
    "coord",
    "saveJoystickSettings",
    "vehicleClassInternalName",
    "sendGripperAction",
    "QGCMAVLink::GRIPPER_OPTIONS",
    "gripperOption",
    "sendCommand",
    "compId",
    "param1",
    "param2",
    "param3",
    "param4",
    "param5",
    "param6",
    "param7",
    "autopilot",
    "AutoPilotPlugin*",
    "armedPosition",
    "autoDisarm",
    "flightModeSetAvailable",
    "flightModes",
    "trajectoryPoints",
    "TrajectoryPoints*",
    "cameraTriggerPoints",
    "QmlObjectListModel*",
    "latitude",
    "longitude",
    "messageTypeNone",
    "messageTypeNormal",
    "messageTypeWarning",
    "messageTypeError",
    "newMessageCount",
    "messageCount",
    "formattedMessages",
    "joystickEnabled",
    "flowImageIndex",
    "px4Firmware",
    "apmFirmware",
    "genericFirmware",
    "messagesReceived",
    "messagesSent",
    "messagesLost",
    "airship",
    "fixedWing",
    "multiRotor",
    "vtol",
    "rover",
    "sub",
    "supportsThrottleModeCenterZero",
    "supportsNegativeThrust",
    "supportsJSButton",
    "supportsRadio",
    "supportsMotorInterference",
    "motorCount",
    "coaxialMotors",
    "xConfigMotors",
    "isOfflineEditingVehicle",
    "brandImageIndoor",
    "brandImageOutdoor",
    "missionFlightMode",
    "pauseFlightMode",
    "rtlFlightMode",
    "smartRTLFlightMode",
    "supportsSmartRTL",
    "landFlightMode",
    "takeControlFlightMode",
    "followFlightMode",
    "firmwareTypeString",
    "vehicleTypeString",
    "vehicleImageOpaque",
    "vehicleImageOutline",
    "telemetryRRSSI",
    "telemetryLRSSI",
    "telemetryRXErrors",
    "telemetryFixed",
    "telemetryTXBuffer",
    "telemetryLNoise",
    "telemetryRNoise",
    "mainStatusIndicatorContentItem",
    "toolIndicators",
    "modeIndicators",
    "staticCameraList",
    "cameraManager",
    "QGCCameraManager*",
    "hobbsMeter",
    "supportsTerrainFrame",
    "mavlinkSentCount",
    "mavlinkReceivedCount",
    "mavlinkLossCount",
    "mavlinkLossPercent",
    "gimbalRoll",
    "gimbalPitch",
    "gimbalYaw",
    "gimbalData",
    "hasGripper",
    "isROIEnabled",
    "checkListState",
    "CheckList",
    "readyToFly",
    "sysStatusSensorInfo",
    "requiresGpsFix",
    "loadProgress",
    "orbitMapCircle",
    "QGCMapCircle*",
    "guidedModeSupported",
    "pauseVehicleSupported",
    "orbitModeSupported",
    "roiModeSupported",
    "takeoffVehicleSupported",
    "gotoFlightMode",
    "haveMRSpeedLimits",
    "haveFWSpeedLimits",
    "parameterManager",
    "ParameterManager*",
    "vehicleLinkManager",
    "VehicleLinkManager*",
    "objectAvoidance",
    "VehicleObjectAvoidance*",
    "autotune",
    "Autotune*",
    "remoteIDManager",
    "RemoteIDManager*",
    "Fact*",
    "heading",
    "rollRate",
    "pitchRate",
    "yawRate",
    "groundSpeed",
    "airSpeed",
    "airSpeedSetpoint",
    "climbRate",
    "altitudeAMSL",
    "altitudeAboveTerr",
    "altitudeTuning",
    "altitudeTuningSetpoint",
    "xTrackError",
    "rangeFinderDist",
    "flightDistance",
    "distanceToHome",
    "timeToHome",
    "missionItemIndex",
    "headingToNextWP",
    "distanceToNextWP",
    "headingToHome",
    "distanceToGCS",
    "hobbs",
    "throttlePct",
    "imuTemp",
    "gps",
    "FactGroup*",
    "gps2",
    "wind",
    "vibration",
    "temperature",
    "clock",
    "setpoint",
    "escStatus",
    "estimatorStatus",
    "terrain",
    "distanceSensors",
    "localPosition",
    "localPositionSetpoint",
    "hygrometer",
    "generator",
    "efi",
    "batteries",
    "actuators",
    "Actuators*",
    "healthAndArmingCheckReport",
    "HealthAndArmingCheckReport*",
    "firmwareMajorVersion",
    "firmwareMinorVersion",
    "firmwarePatchVersion",
    "firmwareVersionType",
    "firmwareVersionTypeString",
    "firmwareCustomMajorVersion",
    "firmwareCustomMinorVersion",
    "firmwareCustomPatchVersion",
    "gitHash",
    "vehicleUID",
    "vehicleUIDStr",
    "CheckListNotSetup",
    "CheckListPassed",
    "CheckListFailed",
    "ModeDisabled",
    "ModeRateAndAttitude",
    "ModeVelocityAndPosition",
    "ModeAltitudeAndAirspeed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     175,   14, // methods
     175, 1637, // properties
       2, 2512, // enums/sets
       0,    0, // constructors
       0,       // flags
      85,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1, 1064,    2, 0x06,  178 /* Public */,
       5,    1, 1067,    2, 0x06,  180 /* Public */,
       7,    1, 1070,    2, 0x06,  182 /* Public */,
      10,    1, 1073,    2, 0x06,  184 /* Public */,
      12,    0, 1076,    2, 0x06,  186 /* Public */,
      13,    1, 1077,    2, 0x06,  187 /* Public */,
      15,    1, 1080,    2, 0x06,  189 /* Public */,
      17,    1, 1083,    2, 0x06,  191 /* Public */,
      19,    1, 1086,    2, 0x06,  193 /* Public */,
      21,    1, 1089,    2, 0x06,  195 /* Public */,
      23,    1, 1092,    2, 0x06,  197 /* Public */,
      25,    1, 1095,    2, 0x06,  199 /* Public */,
      27,    1, 1098,    2, 0x06,  201 /* Public */,
      29,    1, 1101,    2, 0x06,  203 /* Public */,
      31,    1, 1104,    2, 0x06,  205 /* Public */,
      33,    0, 1107,    2, 0x06,  207 /* Public */,
      34,    0, 1108,    2, 0x06,  208 /* Public */,
      35,    0, 1109,    2, 0x06,  209 /* Public */,
      36,    0, 1110,    2, 0x06,  210 /* Public */,
      37,    1, 1111,    2, 0x06,  211 /* Public */,
      39,    1, 1114,    2, 0x06,  213 /* Public */,
      41,    1, 1117,    2, 0x06,  215 /* Public */,
      44,    0, 1120,    2, 0x06,  217 /* Public */,
      45,    0, 1121,    2, 0x06,  218 /* Public */,
      46,    5, 1122,    2, 0x06,  219 /* Public */,
      52,    4, 1133,    2, 0x06,  225 /* Public */,
      55,    0, 1142,    2, 0x06,  230 /* Public */,
      56,    0, 1143,    2, 0x06,  231 /* Public */,
      57,    0, 1144,    2, 0x06,  232 /* Public */,
      58,    0, 1145,    2, 0x06,  233 /* Public */,
      59,    0, 1146,    2, 0x06,  234 /* Public */,
      60,    0, 1147,    2, 0x06,  235 /* Public */,
      61,    0, 1148,    2, 0x06,  236 /* Public */,
      62,    0, 1149,    2, 0x06,  237 /* Public */,
      63,    1, 1150,    2, 0x06,  238 /* Public */,
      65,    0, 1153,    2, 0x06,  240 /* Public */,
      66,    0, 1154,    2, 0x06,  241 /* Public */,
      67,    0, 1155,    2, 0x06,  242 /* Public */,
      68,    1, 1156,    2, 0x06,  243 /* Public */,
      70,    1, 1159,    2, 0x06,  245 /* Public */,
      72,    1, 1162,    2, 0x06,  247 /* Public */,
      73,    1, 1165,    2, 0x06,  249 /* Public */,
      74,    1, 1168,    2, 0x06,  251 /* Public */,
      75,    1, 1171,    2, 0x06,  253 /* Public */,
      76,    1, 1174,    2, 0x06,  255 /* Public */,
      77,    1, 1177,    2, 0x06,  257 /* Public */,
      78,    0, 1180,    2, 0x06,  259 /* Public */,
      79,    0, 1181,    2, 0x06,  260 /* Public */,
      80,    1, 1182,    2, 0x06,  261 /* Public */,
      82,    1, 1185,    2, 0x06,  263 /* Public */,
      84,    1, 1188,    2, 0x06,  265 /* Public */,
      86,    1, 1191,    2, 0x06,  267 /* Public */,
      88,    1, 1194,    2, 0x06,  269 /* Public */,
      90,    1, 1197,    2, 0x06,  271 /* Public */,
      92,    1, 1200,    2, 0x06,  273 /* Public */,
      94,    1, 1203,    2, 0x06,  275 /* Public */,
      96,    0, 1206,    2, 0x06,  277 /* Public */,
      97,    0, 1207,    2, 0x06,  278 /* Public */,
      98,    0, 1208,    2, 0x06,  279 /* Public */,
      99,    0, 1209,    2, 0x06,  280 /* Public */,
     100,    0, 1210,    2, 0x06,  281 /* Public */,
     101,    1, 1211,    2, 0x06,  282 /* Public */,
     103,    0, 1214,    2, 0x06,  284 /* Public */,
     104,    1, 1215,    2, 0x06,  285 /* Public */,
     105,    2, 1218,    2, 0x06,  287 /* Public */,
     109,    1, 1223,    2, 0x06,  290 /* Public */,
     112,    1, 1226,    2, 0x06,  292 /* Public */,
     113,    1, 1229,    2, 0x06,  294 /* Public */,
     114,    1, 1232,    2, 0x06,  296 /* Public */,
     115,    1, 1235,    2, 0x06,  298 /* Public */,
     116,    7, 1238,    2, 0x06,  300 /* Public */,
     126,    5, 1253,    2, 0x06,  308 /* Public */,
     132,    5, 1264,    2, 0x06,  314 /* Public */,
     138,    1, 1275,    2, 0x06,  320 /* Public */,
     140,    0, 1278,    2, 0x06,  322 /* Public */,
     141,    0, 1279,    2, 0x06,  323 /* Public */,
     142,    0, 1280,    2, 0x06,  324 /* Public */,
     143,    0, 1281,    2, 0x06,  325 /* Public */,
     144,    0, 1282,    2, 0x06,  326 /* Public */,
     145,    0, 1283,    2, 0x06,  327 /* Public */,
     146,    0, 1284,    2, 0x06,  328 /* Public */,
     147,    1, 1285,    2, 0x06,  329 /* Public */,
     149,    5, 1288,    2, 0x06,  331 /* Public */,
     155,    4, 1299,    2, 0x06,  337 /* Public */,
     159,    3, 1308,    2, 0x06,  342 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
     164,    1, 1315,    2, 0x0a,  346 /* Public */,
     165,    1, 1318,    2, 0x0a,  348 /* Public */,
     167,    1, 1321,    2, 0x0a,  350 /* Public */,
     169,    2, 1324,    2, 0x08,  352 /* Private */,
     172,    0, 1329,    2, 0x08,  355 /* Private */,
     173,    1, 1330,    2, 0x08,  356 /* Private */,
     175,    1, 1333,    2, 0x08,  358 /* Private */,
     176,    1, 1336,    2, 0x08,  360 /* Private */,
     177,    1, 1339,    2, 0x08,  362 /* Private */,
     178,    1, 1342,    2, 0x08,  364 /* Private */,
     179,    1, 1345,    2, 0x08,  366 /* Private */,
     180,    1, 1348,    2, 0x08,  368 /* Private */,
     182,    1, 1351,    2, 0x08,  370 /* Private */,
     184,    0, 1354,    2, 0x08,  372 /* Private */,
     185,    0, 1355,    2, 0x08,  373 /* Private */,
     186,    0, 1356,    2, 0x08,  374 /* Private */,
     187,    0, 1357,    2, 0x08,  375 /* Private */,
     188,    0, 1358,    2, 0x08,  376 /* Private */,
     189,    0, 1359,    2, 0x08,  377 /* Private */,
     190,    0, 1360,    2, 0x08,  378 /* Private */,
     191,    0, 1361,    2, 0x08,  379 /* Private */,
     192,    0, 1362,    2, 0x08,  380 /* Private */,
     193,    0, 1363,    2, 0x08,  381 /* Private */,
     194,    0, 1364,    2, 0x08,  382 /* Private */,
     195,    0, 1365,    2, 0x08,  383 /* Private */,
     196,    0, 1366,    2, 0x08,  384 /* Private */,
     197,    1, 1367,    2, 0x08,  385 /* Private */,
     199,    0, 1370,    2, 0x08,  387 /* Private */,
     200,    5, 1371,    2, 0x08,  388 /* Private */,
     206,    0, 1382,    2, 0x08,  394 /* Private */,
     207,    0, 1383,    2, 0x08,  395 /* Private */,
     208,    1, 1384,    2, 0x08,  396 /* Private */,
     210,    2, 1387,    2, 0x08,  398 /* Private */,
     213,    0, 1392,    2, 0x08,  401 /* Private */,
     214,    2, 1393,    2, 0x08,  402 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
     216,    0, 1398,    2, 0x02,  405 /* Public */,
     217,    0, 1399,    2, 0x02,  406 /* Public */,
     218,    0, 1400,    2, 0x02,  407 /* Public */,
     219,    4, 1401,    2, 0x02,  408 /* Public */,
     224,    1, 1410,    2, 0x02,  413 /* Public */,
     226,    0, 1413,    2, 0x02,  415 /* Public */,
     227,    1, 1414,    2, 0x02,  416 /* Public */,
     229,    0, 1417,    2, 0x02,  418 /* Public */,
     230,    0, 1418,    2, 0x02,  419 /* Public */,
     231,    0, 1419,    2, 0x02,  420 /* Public */,
     232,    0, 1420,    2, 0x02,  421 /* Public */,
     233,    1, 1421,    2, 0x02,  422 /* Public */,
     235,    2, 1424,    2, 0x02,  424 /* Public */,
     238,    1, 1429,    2, 0x02,  427 /* Public */,
     240,    1, 1432,    2, 0x02,  429 /* Public */,
     242,    3, 1435,    2, 0x02,  431 /* Public */,
     246,    1, 1442,    2, 0x02,  435 /* Public */,
     247,    0, 1445,    2, 0x02,  437 /* Public */,
     237,    0, 1446,    2, 0x02,  438 /* Public */,
     248,    0, 1447,    2, 0x02,  439 /* Public */,
     249,    1, 1448,    2, 0x02,  440 /* Public */,
     251,    0, 1451,    2, 0x02,  442 /* Public */,
     252,    0, 1452,    2, 0x02,  443 /* Public */,
     253,    0, 1453,    2, 0x02,  444 /* Public */,
     254,    1, 1454,    2, 0x02,  445 /* Public */,
     256,    0, 1457,    2, 0x02,  447 /* Public */,
     257,    0, 1458,    2, 0x02,  448 /* Public */,
     258,    1, 1459,    2, 0x02,  449 /* Public */,
     260,    1, 1462,    2, 0x02,  451 /* Public */,
     261,    1, 1465,    2, 0x102,  453 /* Public | MethodIsConst  */,
     261,    3, 1468,    2, 0x102,  455 /* Public | MethodIsConst  */,
     267,    4, 1475,    2, 0x02,  459 /* Public */,
     272,    1, 1484,    2, 0x02,  464 /* Public */,
     275,    2, 1487,    2, 0x02,  466 /* Public */,
     276,    1, 1492,    2, 0x02,  469 /* Public */,
     278,    1, 1495,    2, 0x02,  471 /* Public */,
     279,    0, 1498,    2, 0x02,  473 /* Public */,
     280,    0, 1499,    2, 0x02,  474 /* Public */,
     281,    6, 1500,    2, 0x02,  475 /* Public */,
     288,    0, 1513,    2, 0x02,  482 /* Public */,
     289,    0, 1514,    2, 0x02,  483 /* Public */,
     290,    0, 1515,    2, 0x02,  484 /* Public */,
     291,    0, 1516,    2, 0x02,  485 /* Public */,
     292,    1, 1517,    2, 0x02,  486 /* Public */,
     294,    0, 1520,    2, 0x02,  488 /* Public */,
     295,    0, 1521,    2, 0x102,  489 /* Public | MethodIsConst  */,
     296,    1, 1522,    2, 0x02,  490 /* Public */,
     299,   10, 1525,    2, 0x02,  492 /* Public */,
     299,    9, 1546,    2, 0x22,  503 /* Public | MethodCloned */,
     299,    8, 1565,    2, 0x22,  513 /* Public | MethodCloned */,
     299,    7, 1582,    2, 0x22,  522 /* Public | MethodCloned */,
     299,    6, 1597,    2, 0x22,  530 /* Public | MethodCloned */,
     299,    5, 1610,    2, 0x22,  537 /* Public | MethodCloned */,
     299,    4, 1621,    2, 0x22,  543 /* Public | MethodCloned */,
     299,    3, 1630,    2, 0x22,  548 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   47,   48,   49,   50,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 53,   47,   48,   49,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::UInt,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Bool,   89,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  102,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   71,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 107,  106,  108,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 117, 0x80000000 | 110, 0x80000000 | 110, 0x80000000 | 121, 0x80000000 | 110, QMetaType::QByteArray, QMetaType::Bool,  118,  119,  120,  122,  123,  124,  125,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  127,  128,  129,  130,  131,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 110, 0x80000000 | 121, 0x80000000 | 136, QMetaType::QByteArray,  133,  134,  135,  137,  124,
    QMetaType::Void, QMetaType::UInt,  139,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, 0x80000000 | 136, 0x80000000 | 136, 0x80000000 | 121, 0x80000000 | 121, 0x80000000 | 121,  150,  151,  152,  153,  154,
    QMetaType::Void, 0x80000000 | 136, 0x80000000 | 121, 0x80000000 | 110, 0x80000000 | 158,  156,  152,  157,  124,
    QMetaType::Void, 0x80000000 | 110, 0x80000000 | 121, 0x80000000 | 162,  160,  161,  163,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QVariant,  166,
    QMetaType::Void, QMetaType::QVariant,  168,
    QMetaType::Void, 0x80000000 | 170, 0x80000000 | 8,  171,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  174,
    QMetaType::Void, 0x80000000 | 110,  111,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::QVariant,   71,
    QMetaType::Void, QMetaType::Int,  181,
    QMetaType::Void, 0x80000000 | 183,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  198,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 42, 0x80000000 | 42, 0x80000000 | 42, QMetaType::Float,  201,  202,  203,  204,  205,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,  209,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 211,  148,  212,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 211,  215,  212,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  220,  221,  222,  223,
    QMetaType::Void, QMetaType::Bool,  225,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  228,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 3,  234,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,  236,  237,
    QMetaType::Void, QMetaType::Double,  239,
    QMetaType::Void, QMetaType::Double,  241,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,  243,  244,  245,
    QMetaType::Void, 0x80000000 | 3,  243,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  250,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  255,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  259,
    QMetaType::Void, 0x80000000 | 3,  243,
    QMetaType::Int, 0x80000000 | 262,  263,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  264,  265,  266,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  268,  269,  270,  271,
    QMetaType::Void, 0x80000000 | 273,  274,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,  221,  222,
    QMetaType::Void, QMetaType::Int,  277,
    QMetaType::Void, QMetaType::Int,  277,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double,  282,  283,  284,  285,  286,  287,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  293,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 297,  298,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,  303,  304,  305,  306,  307,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,  303,  304,  305,  306,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,  303,  304,  305,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,  303,  304,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,  303,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double,  300,  129,  271,  301,  302,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double,  300,  129,  271,  301,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  300,  129,  271,

 // properties: name, type, flags
     152, QMetaType::Int, 0x00015401, uint(-1), 0,
     308, 0x80000000 | 309, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 3, 0x00015009, uint(0), 0,
      11, 0x80000000 | 3, 0x00015009, uint(3), 0,
     310, 0x80000000 | 3, 0x00015009, uint(4), 0,
      14, QMetaType::Bool, 0x00015003, uint(5), 0,
     311, QMetaType::Bool, 0x00015001, uint(46), 0,
     312, QMetaType::Bool, 0x00015401, uint(-1), 0,
     313, QMetaType::QStringList, 0x00015001, uint(47), 0,
      16, QMetaType::QString, 0x00015103, uint(6), 0,
     314, 0x80000000 | 315, 0x00015409, uint(-1), 0,
     316, 0x80000000 | 317, 0x00015409, uint(-1), 0,
     318, QMetaType::Float, 0x00015001, uint(0), 0,
     319, QMetaType::Float, 0x00015001, uint(0), 0,
     320, QMetaType::Bool, 0x00015001, uint(30), 0,
     321, QMetaType::Bool, 0x00015001, uint(30), 0,
     322, QMetaType::Bool, 0x00015001, uint(30), 0,
     323, QMetaType::Bool, 0x00015001, uint(30), 0,
     324, QMetaType::Int, 0x00015001, uint(31), 0,
     325, QMetaType::Int, 0x00015001, uint(32), 0,
     326, QMetaType::QString, 0x00015001, uint(33), 0,
     327, QMetaType::Bool, 0x00015103, uint(1), 0,
     328, QMetaType::Int, 0x00015001, uint(37), 0,
      69, QMetaType::Int, 0x00015001, uint(38), 0,
     329, QMetaType::Bool, 0x00015001, uint(15), 0,
     330, QMetaType::Bool, 0x00015001, uint(15), 0,
      28, QMetaType::Bool, 0x00015103, uint(12), 0,
     331, QMetaType::Bool, 0x00015401, uint(-1), 0,
     332, QMetaType::UInt, 0x00015001, uint(27), 0,
     333, QMetaType::UInt, 0x00015001, uint(28), 0,
     334, QMetaType::UInt, 0x00015001, uint(29), 0,
     335, QMetaType::Bool, 0x00015001, uint(16), 0,
     336, QMetaType::Bool, 0x00015001, uint(16), 0,
     337, QMetaType::Bool, 0x00015001, uint(16), 0,
     338, QMetaType::Bool, 0x00015001, uint(16), 0,
     339, QMetaType::Bool, 0x00015001, uint(16), 0,
     340, QMetaType::Bool, 0x00015001, uint(16), 0,
     341, QMetaType::Bool, 0x00015401, uint(-1), 0,
     342, QMetaType::Bool, 0x00015401, uint(-1), 0,
     343, QMetaType::Bool, 0x00015401, uint(-1), 0,
     344, QMetaType::Bool, 0x00015401, uint(-1), 0,
     345, QMetaType::Bool, 0x00015401, uint(-1), 0,
      26, QMetaType::QString, 0x00015103, uint(11), 0,
     346, QMetaType::Int, 0x00015401, uint(-1), 0,
     347, QMetaType::Bool, 0x00015401, uint(-1), 0,
     348, QMetaType::Bool, 0x00015401, uint(-1), 0,
     349, QMetaType::Bool, 0x00015401, uint(-1), 0,
     350, QMetaType::QString, 0x00015001, uint(15), 0,
     351, QMetaType::QString, 0x00015001, uint(15), 0,
      81, QMetaType::Int, 0x00015001, uint(48), 0,
      83, QMetaType::Int, 0x00015001, uint(49), 0,
      85, QMetaType::Int, 0x00015001, uint(50), 0,
      87, QMetaType::Int, 0x00015001, uint(51), 0,
     352, QMetaType::QString, 0x00015401, uint(-1), 0,
     353, QMetaType::QString, 0x00015401, uint(-1), 0,
     354, QMetaType::QString, 0x00015401, uint(-1), 0,
     355, QMetaType::QString, 0x00015401, uint(-1), 0,
     356, QMetaType::Bool, 0x00015401, uint(-1), 0,
     357, QMetaType::QString, 0x00015401, uint(-1), 0,
     358, QMetaType::QString, 0x00015401, uint(-1), 0,
     359, QMetaType::QString, 0x00015401, uint(-1), 0,
     360, QMetaType::QString, 0x00015001, uint(15), 0,
     361, QMetaType::QString, 0x00015001, uint(16), 0,
     362, QMetaType::QString, 0x00015401, uint(-1), 0,
     363, QMetaType::QString, 0x00015401, uint(-1), 0,
     364, QMetaType::Int, 0x00015001, uint(39), 0,
     365, QMetaType::Int, 0x00015001, uint(40), 0,
     366, QMetaType::UInt, 0x00015001, uint(41), 0,
     367, QMetaType::UInt, 0x00015001, uint(42), 0,
     368, QMetaType::UInt, 0x00015001, uint(43), 0,
     369, QMetaType::Int, 0x00015001, uint(44), 0,
     370, QMetaType::Int, 0x00015001, uint(45), 0,
     371, QMetaType::QVariant, 0x00015401, uint(-1), 0,
     372, QMetaType::QVariantList, 0x00015001, uint(22), 0,
     373, QMetaType::QVariantList, 0x00015001, uint(23), 0,
      40, QMetaType::Bool, 0x00015001, uint(20), 0,
     374, QMetaType::QVariantList, 0x00015401, uint(-1), 0,
     375, 0x80000000 | 376, 0x00015009, uint(17), 0,
     377, QMetaType::QString, 0x00015001, uint(18), 0,
      24, QMetaType::Bool, 0x00015103, uint(10), 0,
     378, QMetaType::Bool, 0x00015001, uint(15), 0,
     379, QMetaType::ULongLong, 0x00015001, uint(74), 0,
     380, QMetaType::ULongLong, 0x00015001, uint(74), 0,
     381, QMetaType::ULongLong, 0x00015001, uint(74), 0,
     382, QMetaType::Float, 0x00015001, uint(74), 0,
     383, QMetaType::QReal, 0x00015001, uint(75), 0,
     384, QMetaType::QReal, 0x00015001, uint(76), 0,
     385, QMetaType::QReal, 0x00015001, uint(77), 0,
     386, QMetaType::Bool, 0x00015001, uint(78), 0,
     387, QMetaType::Bool, 0x00015401, uint(-1), 0,
     388, QMetaType::Bool, 0x00015001, uint(79), 0,
     389, 0x80000000 | 390, 0x0001510b, uint(26), 0,
      91, QMetaType::Bool, 0x00015001, uint(53), 0,
     391, QMetaType::Bool, 0x00015001, uint(54), 0,
     392, QMetaType::QObjectStar, 0x00015401, uint(-1), 0,
      95, QMetaType::Bool, 0x00015001, uint(55), 0,
     393, QMetaType::Bool, 0x00015001, uint(56), 0,
     394, QMetaType::Double, 0x00015001, uint(63), 0,
     146, QMetaType::Bool, 0x00015001, uint(80), 0,
      89, QMetaType::Bool, 0x00015001, uint(52), 0,
     395, 0x80000000 | 396, 0x00015409, uint(-1), 0,
      18, QMetaType::Bool, 0x00015001, uint(7), 0,
      20, QMetaType::Bool, 0x00015001, uint(8), 0,
      22, QMetaType::Bool, 0x00015103, uint(9), 0,
     397, QMetaType::Bool, 0x00015401, uint(-1), 0,
     398, QMetaType::Bool, 0x00015401, uint(-1), 0,
     399, QMetaType::Bool, 0x00015401, uint(-1), 0,
     400, QMetaType::Bool, 0x00015401, uint(-1), 0,
     401, QMetaType::Bool, 0x00015401, uint(-1), 0,
     402, QMetaType::QString, 0x00015401, uint(-1), 0,
     403, QMetaType::Bool, 0x00015001, uint(57), 0,
     404, QMetaType::Bool, 0x00015001, uint(58), 0,
     405, 0x80000000 | 406, 0x00015409, uint(-1), 0,
     407, 0x80000000 | 408, 0x00015409, uint(-1), 0,
     409, 0x80000000 | 410, 0x00015409, uint(-1), 0,
     411, 0x80000000 | 412, 0x00015409, uint(-1), 0,
     413, 0x80000000 | 414, 0x00015409, uint(-1), 0,
     220, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     221, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     416, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     417, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     418, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     419, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     420, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     421, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     422, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     423, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     228, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     424, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     425, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     426, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     427, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     428, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     429, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     430, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     431, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     432, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     433, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     434, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     435, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     436, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     437, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     438, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     439, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     440, 0x80000000 | 415, 0x00015409, uint(-1), 0,
     441, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     443, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     444, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     445, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     446, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     447, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     448, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     449, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     450, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     451, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     452, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     453, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     454, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     455, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     456, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     457, 0x80000000 | 442, 0x00015409, uint(-1), 0,
     458, 0x80000000 | 317, 0x00015409, uint(-1), 0,
     459, 0x80000000 | 460, 0x00015409, uint(-1), 0,
     461, 0x80000000 | 462, 0x00015409, uint(-1), 0,
     463, QMetaType::Int, 0x00015001, uint(59), 0,
     464, QMetaType::Int, 0x00015001, uint(59), 0,
     465, QMetaType::Int, 0x00015001, uint(59), 0,
     466, QMetaType::Int, 0x00015001, uint(59), 0,
     467, QMetaType::QString, 0x00015001, uint(59), 0,
     468, QMetaType::Int, 0x00015001, uint(60), 0,
     469, QMetaType::Int, 0x00015001, uint(60), 0,
     470, QMetaType::Int, 0x00015001, uint(60), 0,
     471, QMetaType::QString, 0x00015001, uint(61), 0,
     472, QMetaType::ULongLong, 0x00015001, uint(62), 0,
     473, QMetaType::QString, 0x00015001, uint(62), 0,

 // enums: name, alias, flags, count, data
     390,  390, 0x0,    3, 2522,
     273,  273, 0x0,    4, 2528,

 // enum data: key, value
     474, uint(Vehicle::CheckListNotSetup),
     475, uint(Vehicle::CheckListPassed),
     476, uint(Vehicle::CheckListFailed),
     477, uint(Vehicle::ModeDisabled),
     478, uint(Vehicle::ModeRateAndAttitude),
     479, uint(Vehicle::ModeVelocityAndPosition),
     480, uint(Vehicle::ModeAltitudeAndAirspeed),

       0        // eod
};

Q_CONSTINIT const QMetaObject Vehicle::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autopilot'
        QtPrivate::TypeAndForceComplete<AutoPilotPlugin*, std::true_type>,
        // property 'coordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'homePosition'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'armedPosition'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'armed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoDisarm'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flightModeSetAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flightModes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'flightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'trajectoryPoints'
        QtPrivate::TypeAndForceComplete<TrajectoryPoints*, std::true_type>,
        // property 'cameraTriggerPoints'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'latitude'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'longitude'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'messageTypeNone'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'messageTypeNormal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'messageTypeWarning'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'messageTypeError'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'newMessageCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'messageCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'formattedMessages'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'joystickEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flowImageIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rcRSSI'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'px4Firmware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'apmFirmware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'soloFirmware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'genericFirmware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'messagesReceived'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'messagesSent'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'messagesLost'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'airship'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fixedWing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'multiRotor'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'vtol'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'rover'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sub'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsThrottleModeCenterZero'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsNegativeThrust'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsJSButton'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsRadio'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsMotorInterference'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'prearmError'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'motorCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'coaxialMotors'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'xConfigMotors'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isOfflineEditingVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'brandImageIndoor'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'brandImageOutdoor'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sensorsPresentBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sensorsEnabledBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sensorsHealthBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sensorsUnhealthyBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'missionFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'pauseFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rtlFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'smartRTLFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'supportsSmartRTL'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'landFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'takeControlFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'followFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'firmwareTypeString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vehicleTypeString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vehicleImageOpaque'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vehicleImageOutline'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'telemetryRRSSI'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'telemetryLRSSI'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'telemetryRXErrors'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'telemetryFixed'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'telemetryTXBuffer'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'telemetryLNoise'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'telemetryRNoise'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mainStatusIndicatorContentItem'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'toolIndicators'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'modeIndicators'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'initialPlanRequestComplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'staticCameraList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'cameraManager'
        QtPrivate::TypeAndForceComplete<QGCCameraManager*, std::true_type>,
        // property 'hobbsMeter'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vtolInFwdFlight'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'supportsTerrainFrame'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'mavlinkSentCount'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'mavlinkReceivedCount'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'mavlinkLossCount'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'mavlinkLossPercent'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'gimbalRoll'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'gimbalPitch'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'gimbalYaw'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'gimbalData'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasGripper'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isROIEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checkListState'
        QtPrivate::TypeAndForceComplete<CheckList, std::true_type>,
        // property 'readyToFlyAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'readyToFly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sysStatusSensorInfo'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'allSensorsHealthy'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'requiresGpsFix'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'loadProgress'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'initialConnectComplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orbitActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orbitMapCircle'
        QtPrivate::TypeAndForceComplete<QGCMapCircle*, std::true_type>,
        // property 'flying'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'landing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedModeSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pauseVehicleSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orbitModeSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'roiModeSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'takeoffVehicleSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gotoFlightMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'haveMRSpeedLimits'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'haveFWSpeedLimits'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'parameterManager'
        QtPrivate::TypeAndForceComplete<ParameterManager*, std::true_type>,
        // property 'vehicleLinkManager'
        QtPrivate::TypeAndForceComplete<VehicleLinkManager*, std::true_type>,
        // property 'objectAvoidance'
        QtPrivate::TypeAndForceComplete<VehicleObjectAvoidance*, std::true_type>,
        // property 'autotune'
        QtPrivate::TypeAndForceComplete<Autotune*, std::true_type>,
        // property 'remoteIDManager'
        QtPrivate::TypeAndForceComplete<RemoteIDManager*, std::true_type>,
        // property 'roll'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'pitch'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'heading'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'rollRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'pitchRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'yawRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'groundSpeed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'airSpeed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'airSpeedSetpoint'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'climbRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeRelative'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeAMSL'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeAboveTerr'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeTuning'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeTuningSetpoint'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'xTrackError'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'rangeFinderDist'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'flightDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distanceToHome'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'timeToHome'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'missionItemIndex'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'headingToNextWP'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distanceToNextWP'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'headingToHome'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distanceToGCS'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'hobbs'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'throttlePct'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'imuTemp'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'gps'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'gps2'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'wind'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'vibration'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'temperature'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'clock'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'setpoint'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'escStatus'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'estimatorStatus'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'terrain'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'distanceSensors'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'localPosition'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'localPositionSetpoint'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'hygrometer'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'generator'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'efi'
        QtPrivate::TypeAndForceComplete<FactGroup*, std::true_type>,
        // property 'batteries'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'actuators'
        QtPrivate::TypeAndForceComplete<Actuators*, std::true_type>,
        // property 'healthAndArmingCheckReport'
        QtPrivate::TypeAndForceComplete<HealthAndArmingCheckReport*, std::true_type>,
        // property 'firmwareMajorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwareMinorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwarePatchVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwareVersionType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwareVersionTypeString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'firmwareCustomMajorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwareCustomMinorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'firmwareCustomPatchVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'gitHash'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vehicleUID'
        QtPrivate::TypeAndForceComplete<quint64, std::true_type>,
        // property 'vehicleUIDStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'CheckList'
        QtPrivate::TypeAndForceComplete<Vehicle::CheckList, std::true_type>,
        // enum 'PIDTuningTelemetryMode'
        QtPrivate::TypeAndForceComplete<Vehicle::PIDTuningTelemetryMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Vehicle, std::true_type>,
        // method 'coordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'joystickEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mavlinkMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_message_t &, std::false_type>,
        // method 'homePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'armedPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'armedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'flightModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'flyingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'landingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'guidedModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'vtolInFwdFlightChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'prearmErrorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'soloFirmwareChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'defaultCruiseSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'defaultHoverSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'firmwareTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vehicleTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraManagerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hobbsMeterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'capabilitiesKnownChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'initialPlanRequestCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'capabilityBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        // method 'toolIndicatorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeIndicatorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'calibrationEventReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSharedPointer<events::parser::ParsedEvent>, std::false_type>,
        // method 'checkListStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messagesReceivedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messagesSentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messagesLostChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newMessageCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formattedMessagesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newFormattedMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'longitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentConfigChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flowImageIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rcRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'telemetryRRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'telemetryLRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'telemetryRXErrorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'telemetryFixedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'telemetryTXBufferChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'telemetryLNoiseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'telemetryRNoiseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'autoDisarmChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flightModesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sensorsPresentBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sensorsEnabledBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sensorsHealthBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sensorsUnhealthyBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'orbitActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'readyToFlyAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'readyToFlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'allSensorsHealthyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requiresGpsFixChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'haveMRSpeedLimChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'haveFWSpeedLimChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'firmwareVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'firmwareCustomVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gitHashChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'vehicleUIDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rcChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'remoteControlRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'mavlinkRawImu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method 'mavlinkScaledImu1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method 'mavlinkScaledImu2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method 'mavlinkScaledImu3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method 'mavlinkLogData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mavCommandResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mavlinkSerialControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'requestProtocolVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'mavlinkStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalRollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalPitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gimbalDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isROIEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initialConnectComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sensorsParametersResetAck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'logEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'logData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint8_t *, std::false_type>,
        // method 'mavlinkMsgIntervalsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<int32_t, std::false_type>,
        // method 'setVtolInFwdFlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_offlineFirmwareTypeSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_offlineVehicleTypeSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_mavlinkMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<mavlink_message_t, std::false_type>,
        // method '_sendMessageMultipleNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_parametersReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_remoteControlRSSIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method '_handleFlightModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_announceArmedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_offlineCruiseSpeedSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_offlineHoverSpeedSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_handleTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_handletextMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UASMessage *, std::false_type>,
        // method '_imageProtocolImageReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_prearmErrorTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_firstMissionLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_firstGeoFenceLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_firstRallyPointLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendMavCommandResponseTimeoutCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_clearCameraTriggerPoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateDistanceHeadingToHome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateMissionItemIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateHeadingToNextWP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateDistanceToGCS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateHomepoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateHobbsMeter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleParamLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_sendQGCTimeToVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_mavlinkMessageStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method '_orbitTelemetryTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFlightTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_gotProgressUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method '_doSetHomeTerrainReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>,
        // method '_updateAltAboveTerrain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_altitudeAboveTerrainReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>,
        // method 'resetCounters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetAllMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetErrorLevelMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'virtualTabletJoystickValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'guidedModeRTL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'guidedModeLand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'guidedModeTakeoff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'minimumTakeoffAltitude'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'maximumHorizontalSpeedMultirotor'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'maximumEquivalentAirspeed'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'minimumEquivalentAirspeed'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'guidedModeGotoLocation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'guidedModeChangeAltitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'guidedModeChangeGroundSpeedMetersSecond'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'guidedModeChangeEquivalentAirspeedMetersSecond'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'guidedModeOrbit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'guidedModeROI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'stopGuidedModeROI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pauseVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emergencyStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortLanding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'landingGearDeploy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'landingGearRetract'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startMission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentMissionSequence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rebootVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendPlan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setEstimatorOrigin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'versionCompare'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'versionCompare'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'motorTest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPIDTuningTelemetryMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PIDTuningTelemetryMode, std::false_type>,
        // method 'gimbalControlValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'gimbalPitchStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gimbalYawStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'centerGimbal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forceArm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendParamMapRC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'clearAllParamMapRC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerSimpleCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashBootloader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doSetHome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'saveJoystickSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vehicleClassInternalName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendGripperAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCMAVLink::GRIPPER_OPTIONS, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'sendCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Vehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vehicle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->joystickEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->mavlinkMessageReceived((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 3: _t->homePositionChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 4: _t->armedPositionChanged(); break;
        case 5: _t->armedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->flightModeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->flyingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->landingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->guidedModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->vtolInFwdFlightChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->prearmErrorChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->soloFirmwareChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->defaultCruiseSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->defaultHoverSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->firmwareTypeChanged(); break;
        case 16: _t->vehicleTypeChanged(); break;
        case 17: _t->cameraManagerChanged(); break;
        case 18: _t->hobbsMeterChanged(); break;
        case 19: _t->capabilitiesKnownChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->initialPlanRequestCompleteChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->capabilityBitsChanged((*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[1]))); break;
        case 22: _t->toolIndicatorsChanged(); break;
        case 23: _t->modeIndicatorsChanged(); break;
        case 24: _t->textMessageReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 25: _t->calibrationEventReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QSharedPointer<events::parser::ParsedEvent>>>(_a[4]))); break;
        case 26: _t->checkListStateChanged(); break;
        case 27: _t->messagesReceivedChanged(); break;
        case 28: _t->messagesSentChanged(); break;
        case 29: _t->messagesLostChanged(); break;
        case 30: _t->messageTypeChanged(); break;
        case 31: _t->newMessageCountChanged(); break;
        case 32: _t->messageCountChanged(); break;
        case 33: _t->formattedMessagesChanged(); break;
        case 34: _t->newFormattedMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->longitudeChanged(); break;
        case 36: _t->currentConfigChanged(); break;
        case 37: _t->flowImageIndexChanged(); break;
        case 38: _t->rcRSSIChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->telemetryRRSSIChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->telemetryLRSSIChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->telemetryRXErrorsChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 42: _t->telemetryFixedChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 43: _t->telemetryTXBufferChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 44: _t->telemetryLNoiseChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->telemetryRNoiseChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 46: _t->autoDisarmChanged(); break;
        case 47: _t->flightModesChanged(); break;
        case 48: _t->sensorsPresentBitsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 49: _t->sensorsEnabledBitsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->sensorsHealthBitsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->sensorsUnhealthyBitsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 52: _t->orbitActiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->readyToFlyAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->readyToFlyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->allSensorsHealthyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->requiresGpsFixChanged(); break;
        case 57: _t->haveMRSpeedLimChanged(); break;
        case 58: _t->haveFWSpeedLimChanged(); break;
        case 59: _t->firmwareVersionChanged(); break;
        case 60: _t->firmwareCustomVersionChanged(); break;
        case 61: _t->gitHashChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 62: _t->vehicleUIDChanged(); break;
        case 63: _t->loadProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 64: _t->rcChannelsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int[QGCMAVLink::maxRcChannels]>>(_a[2]))); break;
        case 65: _t->remoteControlRSSIChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 66: _t->mavlinkRawImu((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 67: _t->mavlinkScaledImu1((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 68: _t->mavlinkScaledImu2((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 69: _t->mavlinkScaledImu3((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        case 70: _t->mavlinkLogData((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 71: _t->mavCommandResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 72: _t->mavlinkSerialControl((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[5]))); break;
        case 73: _t->requestProtocolVersion((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 74: _t->mavlinkStatusChanged(); break;
        case 75: _t->gimbalRollChanged(); break;
        case 76: _t->gimbalPitchChanged(); break;
        case 77: _t->gimbalYawChanged(); break;
        case 78: _t->gimbalDataChanged(); break;
        case 79: _t->isROIEnabledChanged(); break;
        case 80: _t->initialConnectComplete(); break;
        case 81: _t->sensorsParametersResetAck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 82: _t->logEntry((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[5]))); break;
        case 83: _t->logData((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<const uint8_t*>>(_a[4]))); break;
        case 84: _t->mavlinkMsgIntervalsChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int32_t>>(_a[3]))); break;
        case 85: _t->setVtolInFwdFlight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 86: _t->_offlineFirmwareTypeSettingChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 87: _t->_offlineVehicleTypeSettingChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 88: _t->_mavlinkMessageReceived((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[2]))); break;
        case 89: _t->_sendMessageMultipleNext(); break;
        case 90: _t->_parametersReady((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 91: _t->_remoteControlRSSIChanged((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 92: _t->_handleFlightModeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 93: _t->_announceArmedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 94: _t->_offlineCruiseSpeedSettingChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 95: _t->_offlineHoverSpeedSettingChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 96: _t->_handleTextMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 97: _t->_handletextMessageReceived((*reinterpret_cast< std::add_pointer_t<UASMessage*>>(_a[1]))); break;
        case 98: _t->_imageProtocolImageReady(); break;
        case 99: _t->_prearmErrorTimeout(); break;
        case 100: _t->_firstMissionLoadComplete(); break;
        case 101: _t->_firstGeoFenceLoadComplete(); break;
        case 102: _t->_firstRallyPointLoadComplete(); break;
        case 103: _t->_sendMavCommandResponseTimeoutCheck(); break;
        case 104: _t->_clearCameraTriggerPoints(); break;
        case 105: _t->_updateDistanceHeadingToHome(); break;
        case 106: _t->_updateMissionItemIndex(); break;
        case 107: _t->_updateHeadingToNextWP(); break;
        case 108: _t->_updateDistanceToGCS(); break;
        case 109: _t->_updateHomepoint(); break;
        case 110: _t->_updateHobbsMeter(); break;
        case 111: _t->_vehicleParamLoaded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 112: _t->_sendQGCTimeToVehicle(); break;
        case 113: _t->_mavlinkMessageStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5]))); break;
        case 114: _t->_orbitTelemetryTimeout(); break;
        case 115: _t->_updateFlightTime(); break;
        case 116: _t->_gotProgressUpdate((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 117: _t->_doSetHomeTerrainReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        case 118: _t->_updateAltAboveTerrain(); break;
        case 119: _t->_altitudeAboveTerrainReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        case 120: _t->resetCounters(); break;
        case 121: _t->resetAllMessages(); break;
        case 122: _t->resetErrorLevelMessages(); break;
        case 123: _t->virtualTabletJoystickValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 124: _t->guidedModeRTL((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 125: _t->guidedModeLand(); break;
        case 126: _t->guidedModeTakeoff((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 127: { double _r = _t->minimumTakeoffAltitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 128: { double _r = _t->maximumHorizontalSpeedMultirotor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 129: { double _r = _t->maximumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 130: { double _r = _t->minimumEquivalentAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 131: _t->guidedModeGotoLocation((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 132: _t->guidedModeChangeAltitude((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 133: _t->guidedModeChangeGroundSpeedMetersSecond((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 134: _t->guidedModeChangeEquivalentAirspeedMetersSecond((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 135: _t->guidedModeOrbit((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 136: _t->guidedModeROI((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 137: _t->stopGuidedModeROI(); break;
        case 138: _t->pauseVehicle(); break;
        case 139: _t->emergencyStop(); break;
        case 140: _t->abortLanding((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 141: _t->landingGearDeploy(); break;
        case 142: _t->landingGearRetract(); break;
        case 143: _t->startMission(); break;
        case 144: _t->setCurrentMissionSequence((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 145: _t->rebootVehicle(); break;
        case 146: _t->clearMessages(); break;
        case 147: _t->sendPlan((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 148: _t->setEstimatorOrigin((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 149: { int _r = _t->versionCompare((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 150: { int _r = _t->versionCompare((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 151: _t->motorTest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 152: _t->setPIDTuningTelemetryMode((*reinterpret_cast< std::add_pointer_t<PIDTuningTelemetryMode>>(_a[1]))); break;
        case 153: _t->gimbalControlValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 154: _t->gimbalPitchStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 155: _t->gimbalYawStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 156: _t->centerGimbal(); break;
        case 157: _t->forceArm(); break;
        case 158: _t->sendParamMapRC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        case 159: _t->clearAllParamMapRC(); break;
        case 160: _t->closeVehicle(); break;
        case 161: _t->triggerSimpleCamera(); break;
        case 162: _t->flashBootloader(); break;
        case 163: _t->doSetHome((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 164: _t->saveJoystickSettings(); break;
        case 165: { QString _r = _t->vehicleClassInternalName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 166: _t->sendGripperAction((*reinterpret_cast< std::add_pointer_t<QGCMAVLink::GRIPPER_OPTIONS>>(_a[1]))); break;
        case 167: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[10]))); break;
        case 168: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[9]))); break;
        case 169: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[8]))); break;
        case 170: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7]))); break;
        case 171: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        case 172: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5]))); break;
        case 173: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 174: _t->sendCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Vehicle* >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkInterface* >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 119:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 131:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 136:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 148:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 163:
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
            using _t = void (Vehicle::*)(QGeoCoordinate );
            if (_t _q_method = &Vehicle::coordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::joystickEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const mavlink_message_t & );
            if (_t _q_method = &Vehicle::mavlinkMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QGeoCoordinate & );
            if (_t _q_method = &Vehicle::homePositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::armedPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::armedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (_t _q_method = &Vehicle::flightModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::flyingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::landingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::guidedModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::vtolInFwdFlightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(const QString & );
            if (_t _q_method = &Vehicle::prearmErrorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::soloFirmwareChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (_t _q_method = &Vehicle::defaultCruiseSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(double );
            if (_t _q_method = &Vehicle::defaultHoverSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::firmwareTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::vehicleTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::cameraManagerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::hobbsMeterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::capabilitiesKnownChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::initialPlanRequestCompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint64_t );
            if (_t _q_method = &Vehicle::capabilityBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::toolIndicatorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::modeIndicatorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QString , QString );
            if (_t _q_method = &Vehicle::textMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , QSharedPointer<events::parser::ParsedEvent> );
            if (_t _q_method = &Vehicle::calibrationEventReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::checkListStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::messagesReceivedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::messagesSentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::messagesLostChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::messageTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::newMessageCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::messageCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::formattedMessagesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (_t _q_method = &Vehicle::newFormattedMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::longitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::currentConfigChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::flowImageIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::rcRSSIChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::telemetryRRSSIChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::telemetryLRSSIChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (_t _q_method = &Vehicle::telemetryRXErrorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (_t _q_method = &Vehicle::telemetryFixedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned int );
            if (_t _q_method = &Vehicle::telemetryTXBufferChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::telemetryLNoiseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::telemetryRNoiseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::autoDisarmChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::flightModesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::sensorsPresentBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::sensorsEnabledBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::sensorsHealthBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int );
            if (_t _q_method = &Vehicle::sensorsUnhealthyBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::orbitActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::readyToFlyAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::readyToFlyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::allSensorsHealthyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::requiresGpsFixChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::haveMRSpeedLimChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::haveFWSpeedLimChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::firmwareVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::firmwareCustomVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(QString );
            if (_t _q_method = &Vehicle::gitHashChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::vehicleUIDChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(float );
            if (_t _q_method = &Vehicle::loadProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int [QGCMAVLink::maxRcChannels]);
            if (_t _q_method = &Vehicle::rcChannelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t );
            if (_t _q_method = &Vehicle::remoteControlRSSIChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (_t _q_method = &Vehicle::mavlinkRawImu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (_t _q_method = &Vehicle::mavlinkScaledImu1; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (_t _q_method = &Vehicle::mavlinkScaledImu2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(mavlink_message_t );
            if (_t _q_method = &Vehicle::mavlinkScaledImu3; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(Vehicle * , uint8_t , uint8_t , uint16_t , uint8_t , QByteArray , bool );
            if (_t _q_method = &Vehicle::mavlinkLogData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(int , int , int , int , int );
            if (_t _q_method = &Vehicle::mavCommandResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t , uint8_t , uint16_t , uint32_t , QByteArray );
            if (_t _q_method = &Vehicle::mavlinkSerialControl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(unsigned  );
            if (_t _q_method = &Vehicle::requestProtocolVersion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::mavlinkStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::gimbalRollChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::gimbalPitchChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::gimbalYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::gimbalDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::isROIEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)();
            if (_t _q_method = &Vehicle::initialConnectComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(bool );
            if (_t _q_method = &Vehicle::sensorsParametersResetAck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint32_t , uint32_t , uint16_t , uint16_t , uint16_t );
            if (_t _q_method = &Vehicle::logEntry; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint32_t , uint16_t , uint8_t , const uint8_t * );
            if (_t _q_method = &Vehicle::logData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (Vehicle::*)(uint8_t , uint16_t , int32_t );
            if (_t _q_method = &Vehicle::mavlinkMsgIntervalsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 84;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 144:
        case 143:
        case 142:
        case 141:
        case 140:
        case 139:
        case 138:
        case 137:
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
        case 124:
        case 123:
        case 122:
        case 121:
        case 120:
        case 119:
        case 118:
        case 117:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 160:
        case 159:
        case 158:
        case 157:
        case 156:
        case 155:
        case 154:
        case 153:
        case 152:
        case 151:
        case 150:
        case 149:
        case 148:
        case 147:
        case 146:
        case 145:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 163:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HealthAndArmingCheckReport* >(); break;
        case 100:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapCircle* >(); break;
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 161:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 113:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VehicleLinkManager* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< AutoPilotPlugin**>(_v) = _t->_autopilotPlugin; break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homePosition(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->armedPosition(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->armed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoDisarm(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->flightModeSetAvailable(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->flightModes(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->flightMode(); break;
        case 10: *reinterpret_cast< TrajectoryPoints**>(_v) = _t->_trajectoryPoints; break;
        case 11: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameraTriggerPoints(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->latitude(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->longitude(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->messageTypeNone(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->messageTypeNormal(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->messageTypeWarning(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->messageTypeError(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->newMessageCount(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->messageCount(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->formattedMessages(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->joystickEnabled(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->flowImageIndex(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->rcRSSI(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->px4Firmware(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->apmFirmware(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->soloFirmware(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->genericFirmware(); break;
        case 28: *reinterpret_cast< uint*>(_v) = _t->messagesReceived(); break;
        case 29: *reinterpret_cast< uint*>(_v) = _t->messagesSent(); break;
        case 30: *reinterpret_cast< uint*>(_v) = _t->messagesLost(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->airship(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->fixedWing(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->multiRotor(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->vtol(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->rover(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->sub(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->supportsThrottleModeCenterZero(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->supportsNegativeThrust(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->supportsJSButton(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->supportsRadio(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->supportsMotorInterference(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->prearmError(); break;
        case 43: *reinterpret_cast< int*>(_v) = _t->motorCount(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->coaxialMotors(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->xConfigMotors(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isOfflineEditingVehicle(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->brandImageIndoor(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->brandImageOutdoor(); break;
        case 49: *reinterpret_cast< int*>(_v) = _t->sensorsPresentBits(); break;
        case 50: *reinterpret_cast< int*>(_v) = _t->sensorsEnabledBits(); break;
        case 51: *reinterpret_cast< int*>(_v) = _t->sensorsHealthBits(); break;
        case 52: *reinterpret_cast< int*>(_v) = _t->sensorsUnhealthyBits(); break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->missionFlightMode(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->pauseFlightMode(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->rtlFlightMode(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->smartRTLFlightMode(); break;
        case 57: *reinterpret_cast< bool*>(_v) = _t->supportsSmartRTL(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->landFlightMode(); break;
        case 59: *reinterpret_cast< QString*>(_v) = _t->takeControlFlightMode(); break;
        case 60: *reinterpret_cast< QString*>(_v) = _t->followFlightMode(); break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->firmwareTypeString(); break;
        case 62: *reinterpret_cast< QString*>(_v) = _t->vehicleTypeString(); break;
        case 63: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOpaque(); break;
        case 64: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOutline(); break;
        case 65: *reinterpret_cast< int*>(_v) = _t->telemetryRRSSI(); break;
        case 66: *reinterpret_cast< int*>(_v) = _t->telemetryLRSSI(); break;
        case 67: *reinterpret_cast< uint*>(_v) = _t->telemetryRXErrors(); break;
        case 68: *reinterpret_cast< uint*>(_v) = _t->telemetryFixed(); break;
        case 69: *reinterpret_cast< uint*>(_v) = _t->telemetryTXBuffer(); break;
        case 70: *reinterpret_cast< int*>(_v) = _t->telemetryLNoise(); break;
        case 71: *reinterpret_cast< int*>(_v) = _t->telemetryRNoise(); break;
        case 72: *reinterpret_cast< QVariant*>(_v) = _t->mainStatusIndicatorContentItem(); break;
        case 73: *reinterpret_cast< QVariantList*>(_v) = _t->toolIndicators(); break;
        case 74: *reinterpret_cast< QVariantList*>(_v) = _t->modeIndicators(); break;
        case 75: *reinterpret_cast< bool*>(_v) = _t->initialPlanRequestComplete(); break;
        case 76: *reinterpret_cast< QVariantList*>(_v) = _t->staticCameraList(); break;
        case 77: *reinterpret_cast< QGCCameraManager**>(_v) = _t->cameraManager(); break;
        case 78: *reinterpret_cast< QString*>(_v) = _t->hobbsMeter(); break;
        case 79: *reinterpret_cast< bool*>(_v) = _t->vtolInFwdFlight(); break;
        case 80: *reinterpret_cast< bool*>(_v) = _t->supportsTerrainFrame(); break;
        case 81: *reinterpret_cast< quint64*>(_v) = _t->mavlinkSentCount(); break;
        case 82: *reinterpret_cast< quint64*>(_v) = _t->mavlinkReceivedCount(); break;
        case 83: *reinterpret_cast< quint64*>(_v) = _t->mavlinkLossCount(); break;
        case 84: *reinterpret_cast< float*>(_v) = _t->mavlinkLossPercent(); break;
        case 85: *reinterpret_cast< qreal*>(_v) = _t->gimbalRoll(); break;
        case 86: *reinterpret_cast< qreal*>(_v) = _t->gimbalPitch(); break;
        case 87: *reinterpret_cast< qreal*>(_v) = _t->gimbalYaw(); break;
        case 88: *reinterpret_cast< bool*>(_v) = _t->gimbalData(); break;
        case 89: *reinterpret_cast< bool*>(_v) = _t->hasGripper(); break;
        case 90: *reinterpret_cast< bool*>(_v) = _t->isROIEnabled(); break;
        case 91: *reinterpret_cast< CheckList*>(_v) = _t->checkListState(); break;
        case 92: *reinterpret_cast< bool*>(_v) = _t->readyToFlyAvailable(); break;
        case 93: *reinterpret_cast< bool*>(_v) = _t->readyToFly(); break;
        case 94: *reinterpret_cast< QObject**>(_v) = _t->sysStatusSensorInfo(); break;
        case 95: *reinterpret_cast< bool*>(_v) = _t->allSensorsHealthy(); break;
        case 96: *reinterpret_cast< bool*>(_v) = _t->requiresGpsFix(); break;
        case 97: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        case 98: *reinterpret_cast< bool*>(_v) = _t->isInitialConnectComplete(); break;
        case 99: *reinterpret_cast< bool*>(_v) = _t->orbitActive(); break;
        case 100: *reinterpret_cast< QGCMapCircle**>(_v) = _t->orbitMapCircle(); break;
        case 101: *reinterpret_cast< bool*>(_v) = _t->flying(); break;
        case 102: *reinterpret_cast< bool*>(_v) = _t->landing(); break;
        case 103: *reinterpret_cast< bool*>(_v) = _t->guidedMode(); break;
        case 104: *reinterpret_cast< bool*>(_v) = _t->guidedModeSupported(); break;
        case 105: *reinterpret_cast< bool*>(_v) = _t->pauseVehicleSupported(); break;
        case 106: *reinterpret_cast< bool*>(_v) = _t->orbitModeSupported(); break;
        case 107: *reinterpret_cast< bool*>(_v) = _t->roiModeSupported(); break;
        case 108: *reinterpret_cast< bool*>(_v) = _t->takeoffVehicleSupported(); break;
        case 109: *reinterpret_cast< QString*>(_v) = _t->gotoFlightMode(); break;
        case 110: *reinterpret_cast< bool*>(_v) = _t->haveMRSpeedLimits(); break;
        case 111: *reinterpret_cast< bool*>(_v) = _t->haveFWSpeedLimits(); break;
        case 112: *reinterpret_cast< ParameterManager**>(_v) = _t->parameterManager(); break;
        case 113: *reinterpret_cast< VehicleLinkManager**>(_v) = _t->vehicleLinkManager(); break;
        case 114: *reinterpret_cast< VehicleObjectAvoidance**>(_v) = _t->objectAvoidance(); break;
        case 115: *reinterpret_cast< Autotune**>(_v) = _t->autotune(); break;
        case 116: *reinterpret_cast< RemoteIDManager**>(_v) = _t->remoteIDManager(); break;
        case 117: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 118: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 119: *reinterpret_cast< Fact**>(_v) = _t->heading(); break;
        case 120: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 121: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 122: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        case 123: *reinterpret_cast< Fact**>(_v) = _t->groundSpeed(); break;
        case 124: *reinterpret_cast< Fact**>(_v) = _t->airSpeed(); break;
        case 125: *reinterpret_cast< Fact**>(_v) = _t->airSpeedSetpoint(); break;
        case 126: *reinterpret_cast< Fact**>(_v) = _t->climbRate(); break;
        case 127: *reinterpret_cast< Fact**>(_v) = _t->altitudeRelative(); break;
        case 128: *reinterpret_cast< Fact**>(_v) = _t->altitudeAMSL(); break;
        case 129: *reinterpret_cast< Fact**>(_v) = _t->altitudeAboveTerr(); break;
        case 130: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuning(); break;
        case 131: *reinterpret_cast< Fact**>(_v) = _t->altitudeTuningSetpoint(); break;
        case 132: *reinterpret_cast< Fact**>(_v) = _t->xTrackError(); break;
        case 133: *reinterpret_cast< Fact**>(_v) = _t->rangeFinderDist(); break;
        case 134: *reinterpret_cast< Fact**>(_v) = _t->flightDistance(); break;
        case 135: *reinterpret_cast< Fact**>(_v) = _t->distanceToHome(); break;
        case 136: *reinterpret_cast< Fact**>(_v) = _t->timeToHome(); break;
        case 137: *reinterpret_cast< Fact**>(_v) = _t->missionItemIndex(); break;
        case 138: *reinterpret_cast< Fact**>(_v) = _t->headingToNextWP(); break;
        case 139: *reinterpret_cast< Fact**>(_v) = _t->distanceToNextWP(); break;
        case 140: *reinterpret_cast< Fact**>(_v) = _t->headingToHome(); break;
        case 141: *reinterpret_cast< Fact**>(_v) = _t->distanceToGCS(); break;
        case 142: *reinterpret_cast< Fact**>(_v) = _t->hobbs(); break;
        case 143: *reinterpret_cast< Fact**>(_v) = _t->throttlePct(); break;
        case 144: *reinterpret_cast< Fact**>(_v) = _t->imuTemp(); break;
        case 145: *reinterpret_cast< FactGroup**>(_v) = _t->gpsFactGroup(); break;
        case 146: *reinterpret_cast< FactGroup**>(_v) = _t->gps2FactGroup(); break;
        case 147: *reinterpret_cast< FactGroup**>(_v) = _t->windFactGroup(); break;
        case 148: *reinterpret_cast< FactGroup**>(_v) = _t->vibrationFactGroup(); break;
        case 149: *reinterpret_cast< FactGroup**>(_v) = _t->temperatureFactGroup(); break;
        case 150: *reinterpret_cast< FactGroup**>(_v) = _t->clockFactGroup(); break;
        case 151: *reinterpret_cast< FactGroup**>(_v) = _t->setpointFactGroup(); break;
        case 152: *reinterpret_cast< FactGroup**>(_v) = _t->escStatusFactGroup(); break;
        case 153: *reinterpret_cast< FactGroup**>(_v) = _t->estimatorStatusFactGroup(); break;
        case 154: *reinterpret_cast< FactGroup**>(_v) = _t->terrainFactGroup(); break;
        case 155: *reinterpret_cast< FactGroup**>(_v) = _t->distanceSensorFactGroup(); break;
        case 156: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionFactGroup(); break;
        case 157: *reinterpret_cast< FactGroup**>(_v) = _t->localPositionSetpointFactGroup(); break;
        case 158: *reinterpret_cast< FactGroup**>(_v) = _t->hygrometerFactGroup(); break;
        case 159: *reinterpret_cast< FactGroup**>(_v) = _t->generatorFactGroup(); break;
        case 160: *reinterpret_cast< FactGroup**>(_v) = _t->efiFactGroup(); break;
        case 161: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->batteries(); break;
        case 162: *reinterpret_cast< Actuators**>(_v) = _t->actuators(); break;
        case 163: *reinterpret_cast< HealthAndArmingCheckReport**>(_v) = _t->healthAndArmingCheckReport(); break;
        case 164: *reinterpret_cast< int*>(_v) = _t->firmwareMajorVersion(); break;
        case 165: *reinterpret_cast< int*>(_v) = _t->firmwareMinorVersion(); break;
        case 166: *reinterpret_cast< int*>(_v) = _t->firmwarePatchVersion(); break;
        case 167: *reinterpret_cast< int*>(_v) = _t->firmwareVersionType(); break;
        case 168: *reinterpret_cast< QString*>(_v) = _t->firmwareVersionTypeString(); break;
        case 169: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMajorVersion(); break;
        case 170: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMinorVersion(); break;
        case 171: *reinterpret_cast< int*>(_v) = _t->firmwareCustomPatchVersion(); break;
        case 172: *reinterpret_cast< QString*>(_v) = _t->gitHash(); break;
        case 173: *reinterpret_cast< quint64*>(_v) = _t->vehicleUID(); break;
        case 174: *reinterpret_cast< QString*>(_v) = _t->vehicleUIDStr(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Vehicle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setArmedShowError(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setFlightMode(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setJoystickEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setSoloFirmware(*reinterpret_cast< bool*>(_v)); break;
        case 42: _t->setPrearmError(*reinterpret_cast< QString*>(_v)); break;
        case 79: _t->setVtolInFwdFlight(*reinterpret_cast< bool*>(_v)); break;
        case 91: _t->setCheckListState(*reinterpret_cast< CheckList*>(_v)); break;
        case 103: _t->setGuidedMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Vehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int Vehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 175)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 175;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 175)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 175;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 175;
    }
    return _id;
}

// SIGNAL 0
void Vehicle::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vehicle::joystickEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Vehicle::mavlinkMessageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Vehicle::homePositionChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Vehicle::armedPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Vehicle::armedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Vehicle::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Vehicle::flyingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Vehicle::landingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Vehicle::guidedModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Vehicle::vtolInFwdFlightChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Vehicle::prearmErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Vehicle::soloFirmwareChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Vehicle::defaultCruiseSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Vehicle::defaultHoverSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Vehicle::firmwareTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Vehicle::vehicleTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Vehicle::cameraManagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Vehicle::hobbsMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Vehicle::capabilitiesKnownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Vehicle::initialPlanRequestCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Vehicle::capabilityBitsChanged(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Vehicle::toolIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Vehicle::modeIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Vehicle::textMessageReceived(int _t1, int _t2, int _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Vehicle::calibrationEventReceived(int _t1, int _t2, int _t3, QSharedPointer<events::parser::ParsedEvent> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Vehicle::checkListStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Vehicle::messagesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Vehicle::messagesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Vehicle::messagesLostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Vehicle::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Vehicle::newMessageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Vehicle::messageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Vehicle::formattedMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Vehicle::newFormattedMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Vehicle::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Vehicle::currentConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Vehicle::flowImageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Vehicle::rcRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Vehicle::telemetryRRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Vehicle::telemetryLRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Vehicle::telemetryRXErrorsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Vehicle::telemetryFixedChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Vehicle::telemetryTXBufferChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Vehicle::telemetryLNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Vehicle::telemetryRNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Vehicle::autoDisarmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void Vehicle::flightModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void Vehicle::sensorsPresentBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Vehicle::sensorsEnabledBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Vehicle::sensorsHealthBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Vehicle::sensorsUnhealthyBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Vehicle::orbitActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Vehicle::readyToFlyAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Vehicle::readyToFlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Vehicle::allSensorsHealthyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Vehicle::requiresGpsFixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 56, nullptr);
}

// SIGNAL 57
void Vehicle::haveMRSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void Vehicle::haveFWSpeedLimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void Vehicle::firmwareVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void Vehicle::firmwareCustomVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 60, nullptr);
}

// SIGNAL 61
void Vehicle::gitHashChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Vehicle::vehicleUIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 62, nullptr);
}

// SIGNAL 63
void Vehicle::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Vehicle::rcChannelsChanged(int _t1, int _t2[QGCMAVLink::maxRcChannels])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Vehicle::remoteControlRSSIChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Vehicle::mavlinkRawImu(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Vehicle::mavlinkScaledImu1(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Vehicle::mavlinkScaledImu2(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Vehicle::mavlinkScaledImu3(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Vehicle::mavlinkLogData(Vehicle * _t1, uint8_t _t2, uint8_t _t3, uint16_t _t4, uint8_t _t5, QByteArray _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Vehicle::mavCommandResult(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Vehicle::mavlinkSerialControl(uint8_t _t1, uint8_t _t2, uint16_t _t3, uint32_t _t4, QByteArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Vehicle::requestProtocolVersion(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Vehicle::mavlinkStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 74, nullptr);
}

// SIGNAL 75
void Vehicle::gimbalRollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 75, nullptr);
}

// SIGNAL 76
void Vehicle::gimbalPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 76, nullptr);
}

// SIGNAL 77
void Vehicle::gimbalYawChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 77, nullptr);
}

// SIGNAL 78
void Vehicle::gimbalDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 78, nullptr);
}

// SIGNAL 79
void Vehicle::isROIEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 79, nullptr);
}

// SIGNAL 80
void Vehicle::initialConnectComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 80, nullptr);
}

// SIGNAL 81
void Vehicle::sensorsParametersResetAck(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void Vehicle::logEntry(uint32_t _t1, uint32_t _t2, uint16_t _t3, uint16_t _t4, uint16_t _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void Vehicle::logData(uint32_t _t1, uint16_t _t2, uint8_t _t3, const uint8_t * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void Vehicle::mavlinkMsgIntervalsChanged(uint8_t _t1, uint16_t _t2, int32_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}
QT_WARNING_POP
