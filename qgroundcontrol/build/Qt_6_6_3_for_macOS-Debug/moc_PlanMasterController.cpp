/****************************************************************************
** Meta object code from reading C++ file 'PlanMasterController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/PlanMasterController.h"
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
#include "QmlObjectListModel.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanMasterController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS = QtMocHelpers::stringData(
    "PlanMasterController",
    "containsItemsChanged",
    "",
    "containsItems",
    "syncInProgressChanged",
    "dirtyChanged",
    "dirty",
    "offlineChanged",
    "offlineEditing",
    "currentPlanFileChanged",
    "planCreatorsChanged",
    "QmlObjectListModel*",
    "planCreators",
    "managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "promptForPlanUsageOnVehicleChange",
    "_activeVehicleChanged",
    "activeVehicle",
    "_loadMissionComplete",
    "_loadGeoFenceComplete",
    "_loadRallyPointsComplete",
    "_sendMissionComplete",
    "_sendGeoFenceComplete",
    "_sendRallyPointsComplete",
    "_updatePlanCreatorsList",
    "start",
    "startStaticActiveVehicle",
    "vehicle",
    "deleteWhenSendCompleted",
    "readyForSaveState",
    "showPlanFromManagerVehicle",
    "loadFromVehicle",
    "sendToVehicle",
    "loadFromFile",
    "filename",
    "saveToCurrent",
    "saveToFile",
    "saveToKml",
    "removeAll",
    "removeAllFromVehicle",
    "flyView",
    "controllerVehicle",
    "missionController",
    "MissionController*",
    "geoFenceController",
    "GeoFenceController*",
    "rallyPointController",
    "RallyPointController*",
    "offline",
    "syncInProgress",
    "fileExtension",
    "kmlFileExtension",
    "currentPlanFile",
    "loadNameFilters",
    "saveNameFilters"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS_t {
    uint offsetsAndSizes[112];
    char stringdata0[21];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[22];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[23];
    char stringdata10[20];
    char stringdata11[20];
    char stringdata12[13];
    char stringdata13[22];
    char stringdata14[9];
    char stringdata15[15];
    char stringdata16[34];
    char stringdata17[22];
    char stringdata18[14];
    char stringdata19[21];
    char stringdata20[22];
    char stringdata21[25];
    char stringdata22[21];
    char stringdata23[22];
    char stringdata24[25];
    char stringdata25[24];
    char stringdata26[6];
    char stringdata27[25];
    char stringdata28[8];
    char stringdata29[24];
    char stringdata30[18];
    char stringdata31[27];
    char stringdata32[16];
    char stringdata33[14];
    char stringdata34[13];
    char stringdata35[9];
    char stringdata36[14];
    char stringdata37[11];
    char stringdata38[10];
    char stringdata39[10];
    char stringdata40[21];
    char stringdata41[8];
    char stringdata42[18];
    char stringdata43[18];
    char stringdata44[19];
    char stringdata45[19];
    char stringdata46[20];
    char stringdata47[21];
    char stringdata48[22];
    char stringdata49[8];
    char stringdata50[15];
    char stringdata51[14];
    char stringdata52[17];
    char stringdata53[16];
    char stringdata54[16];
    char stringdata55[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS_t qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "PlanMasterController"
        QT_MOC_LITERAL(21, 20),  // "containsItemsChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 13),  // "containsItems"
        QT_MOC_LITERAL(57, 21),  // "syncInProgressChanged"
        QT_MOC_LITERAL(79, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(92, 5),  // "dirty"
        QT_MOC_LITERAL(98, 14),  // "offlineChanged"
        QT_MOC_LITERAL(113, 14),  // "offlineEditing"
        QT_MOC_LITERAL(128, 22),  // "currentPlanFileChanged"
        QT_MOC_LITERAL(151, 19),  // "planCreatorsChanged"
        QT_MOC_LITERAL(171, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(191, 12),  // "planCreators"
        QT_MOC_LITERAL(204, 21),  // "managerVehicleChanged"
        QT_MOC_LITERAL(226, 8),  // "Vehicle*"
        QT_MOC_LITERAL(235, 14),  // "managerVehicle"
        QT_MOC_LITERAL(250, 33),  // "promptForPlanUsageOnVehicleCh..."
        QT_MOC_LITERAL(284, 21),  // "_activeVehicleChanged"
        QT_MOC_LITERAL(306, 13),  // "activeVehicle"
        QT_MOC_LITERAL(320, 20),  // "_loadMissionComplete"
        QT_MOC_LITERAL(341, 21),  // "_loadGeoFenceComplete"
        QT_MOC_LITERAL(363, 24),  // "_loadRallyPointsComplete"
        QT_MOC_LITERAL(388, 20),  // "_sendMissionComplete"
        QT_MOC_LITERAL(409, 21),  // "_sendGeoFenceComplete"
        QT_MOC_LITERAL(431, 24),  // "_sendRallyPointsComplete"
        QT_MOC_LITERAL(456, 23),  // "_updatePlanCreatorsList"
        QT_MOC_LITERAL(480, 5),  // "start"
        QT_MOC_LITERAL(486, 24),  // "startStaticActiveVehicle"
        QT_MOC_LITERAL(511, 7),  // "vehicle"
        QT_MOC_LITERAL(519, 23),  // "deleteWhenSendCompleted"
        QT_MOC_LITERAL(543, 17),  // "readyForSaveState"
        QT_MOC_LITERAL(561, 26),  // "showPlanFromManagerVehicle"
        QT_MOC_LITERAL(588, 15),  // "loadFromVehicle"
        QT_MOC_LITERAL(604, 13),  // "sendToVehicle"
        QT_MOC_LITERAL(618, 12),  // "loadFromFile"
        QT_MOC_LITERAL(631, 8),  // "filename"
        QT_MOC_LITERAL(640, 13),  // "saveToCurrent"
        QT_MOC_LITERAL(654, 10),  // "saveToFile"
        QT_MOC_LITERAL(665, 9),  // "saveToKml"
        QT_MOC_LITERAL(675, 9),  // "removeAll"
        QT_MOC_LITERAL(685, 20),  // "removeAllFromVehicle"
        QT_MOC_LITERAL(706, 7),  // "flyView"
        QT_MOC_LITERAL(714, 17),  // "controllerVehicle"
        QT_MOC_LITERAL(732, 17),  // "missionController"
        QT_MOC_LITERAL(750, 18),  // "MissionController*"
        QT_MOC_LITERAL(769, 18),  // "geoFenceController"
        QT_MOC_LITERAL(788, 19),  // "GeoFenceController*"
        QT_MOC_LITERAL(808, 20),  // "rallyPointController"
        QT_MOC_LITERAL(829, 21),  // "RallyPointController*"
        QT_MOC_LITERAL(851, 7),  // "offline"
        QT_MOC_LITERAL(859, 14),  // "syncInProgress"
        QT_MOC_LITERAL(874, 13),  // "fileExtension"
        QT_MOC_LITERAL(888, 16),  // "kmlFileExtension"
        QT_MOC_LITERAL(905, 15),  // "currentPlanFile"
        QT_MOC_LITERAL(921, 15),  // "loadNameFilters"
        QT_MOC_LITERAL(937, 15)   // "saveNameFilters"
    },
    "PlanMasterController",
    "containsItemsChanged",
    "",
    "containsItems",
    "syncInProgressChanged",
    "dirtyChanged",
    "dirty",
    "offlineChanged",
    "offlineEditing",
    "currentPlanFileChanged",
    "planCreatorsChanged",
    "QmlObjectListModel*",
    "planCreators",
    "managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "promptForPlanUsageOnVehicleChange",
    "_activeVehicleChanged",
    "activeVehicle",
    "_loadMissionComplete",
    "_loadGeoFenceComplete",
    "_loadRallyPointsComplete",
    "_sendMissionComplete",
    "_sendGeoFenceComplete",
    "_sendRallyPointsComplete",
    "_updatePlanCreatorsList",
    "start",
    "startStaticActiveVehicle",
    "vehicle",
    "deleteWhenSendCompleted",
    "readyForSaveState",
    "showPlanFromManagerVehicle",
    "loadFromVehicle",
    "sendToVehicle",
    "loadFromFile",
    "filename",
    "saveToCurrent",
    "saveToFile",
    "saveToKml",
    "removeAll",
    "removeAllFromVehicle",
    "flyView",
    "controllerVehicle",
    "missionController",
    "MissionController*",
    "geoFenceController",
    "GeoFenceController*",
    "rallyPointController",
    "RallyPointController*",
    "offline",
    "syncInProgress",
    "fileExtension",
    "kmlFileExtension",
    "currentPlanFile",
    "loadNameFilters",
    "saveNameFilters"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlanMasterControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      16,  241, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  188,    2, 0x06,   17 /* Public */,
       4,    0,  191,    2, 0x06,   19 /* Public */,
       5,    1,  192,    2, 0x06,   20 /* Public */,
       7,    1,  195,    2, 0x06,   22 /* Public */,
       9,    0,  198,    2, 0x06,   24 /* Public */,
      10,    1,  199,    2, 0x06,   25 /* Public */,
      13,    1,  202,    2, 0x06,   27 /* Public */,
      16,    0,  205,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  206,    2, 0x08,   30 /* Private */,
      19,    0,  209,    2, 0x08,   32 /* Private */,
      20,    0,  210,    2, 0x08,   33 /* Private */,
      21,    0,  211,    2, 0x08,   34 /* Private */,
      22,    0,  212,    2, 0x08,   35 /* Private */,
      23,    0,  213,    2, 0x08,   36 /* Private */,
      24,    0,  214,    2, 0x08,   37 /* Private */,
      25,    0,  215,    2, 0x08,   38 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      26,    0,  216,    2, 0x02,   39 /* Public */,
      27,    2,  217,    2, 0x02,   40 /* Public */,
      27,    1,  222,    2, 0x22,   43 /* Public | MethodCloned */,
      30,    0,  225,    2, 0x102,   45 /* Public | MethodIsConst  */,
      31,    0,  226,    2, 0x02,   46 /* Public */,
      32,    0,  227,    2, 0x02,   47 /* Public */,
      33,    0,  228,    2, 0x02,   48 /* Public */,
      34,    1,  229,    2, 0x02,   49 /* Public */,
      36,    0,  232,    2, 0x02,   51 /* Public */,
      37,    1,  233,    2, 0x02,   52 /* Public */,
      38,    1,  236,    2, 0x02,   54 /* Public */,
      39,    0,  239,    2, 0x02,   56 /* Public */,
      40,    0,  240,    2, 0x02,   57 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   28,   29,
    QMetaType::Void, 0x80000000 | 14,   28,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      41, QMetaType::Bool, 0x00015003, uint(-1), 0,
      42, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 14, 0x00015009, uint(6), 0,
      43, 0x80000000 | 44, 0x00015409, uint(-1), 0,
      45, 0x80000000 | 46, 0x00015409, uint(-1), 0,
      47, 0x80000000 | 48, 0x00015409, uint(-1), 0,
      49, QMetaType::Bool, 0x00015001, uint(3), 0,
       3, QMetaType::Bool, 0x00015001, uint(0), 0,
      50, QMetaType::Bool, 0x00015001, uint(1), 0,
       6, QMetaType::Bool, 0x00015103, uint(2), 0,
      51, QMetaType::QString, 0x00015401, uint(-1), 0,
      52, QMetaType::QString, 0x00015401, uint(-1), 0,
      53, QMetaType::QString, 0x00015001, uint(4), 0,
      54, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      55, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      12, 0x80000000 | 11, 0x0001500b, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlanMasterController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlanMasterControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS_t,
        // property 'flyView'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'controllerVehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // property 'managerVehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // property 'missionController'
        QtPrivate::TypeAndForceComplete<MissionController*, std::true_type>,
        // property 'geoFenceController'
        QtPrivate::TypeAndForceComplete<GeoFenceController*, std::true_type>,
        // property 'rallyPointController'
        QtPrivate::TypeAndForceComplete<RallyPointController*, std::true_type>,
        // property 'offline'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'containsItems'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'syncInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileExtension'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'kmlFileExtension'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentPlanFile'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'loadNameFilters'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'saveNameFilters'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'planCreators'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlanMasterController, std::true_type>,
        // method 'containsItemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'syncInProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'offlineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'currentPlanFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'planCreatorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QmlObjectListModel *, std::false_type>,
        // method 'managerVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'promptForPlanUsageOnVehicleChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_activeVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_loadMissionComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_loadGeoFenceComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_loadRallyPointsComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendMissionComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendGeoFenceComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendRallyPointsComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updatePlanCreatorsList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startStaticActiveVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startStaticActiveVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'readyForSaveState'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showPlanFromManagerVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadFromVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendToVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveToCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveToKml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeAllFromVehicle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlanMasterController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->containsItemsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->syncInProgressChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->offlineChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->currentPlanFileChanged(); break;
        case 5: _t->planCreatorsChanged((*reinterpret_cast< std::add_pointer_t<QmlObjectListModel*>>(_a[1]))); break;
        case 6: _t->managerVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 7: _t->promptForPlanUsageOnVehicleChange(); break;
        case 8: _t->_activeVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 9: _t->_loadMissionComplete(); break;
        case 10: _t->_loadGeoFenceComplete(); break;
        case 11: _t->_loadRallyPointsComplete(); break;
        case 12: _t->_sendMissionComplete(); break;
        case 13: _t->_sendGeoFenceComplete(); break;
        case 14: _t->_sendRallyPointsComplete(); break;
        case 15: _t->_updatePlanCreatorsList(); break;
        case 16: _t->start(); break;
        case 17: _t->startStaticActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 18: _t->startStaticActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 19: { int _r = _t->readyForSaveState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->showPlanFromManagerVehicle(); break;
        case 21: _t->loadFromVehicle(); break;
        case 22: _t->sendToVehicle(); break;
        case 23: _t->loadFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->saveToCurrent(); break;
        case 25: _t->saveToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->saveToKml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->removeAll(); break;
        case 28: _t->removeAllFromVehicle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QmlObjectListModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlanMasterController::*)(bool );
            if (_t _q_method = &PlanMasterController::containsItemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (_t _q_method = &PlanMasterController::syncInProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(bool );
            if (_t _q_method = &PlanMasterController::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(bool );
            if (_t _q_method = &PlanMasterController::offlineChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (_t _q_method = &PlanMasterController::currentPlanFileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(QmlObjectListModel * );
            if (_t _q_method = &PlanMasterController::planCreatorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)(Vehicle * );
            if (_t _q_method = &PlanMasterController::managerVehicleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlanMasterController::*)();
            if (_t _q_method = &PlanMasterController::promptForPlanUsageOnVehicleChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GeoFenceController* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MissionController* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RallyPointController* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_flyView; break;
        case 1: *reinterpret_cast< Vehicle**>(_v) = _t->controllerVehicle(); break;
        case 2: *reinterpret_cast< Vehicle**>(_v) = _t->managerVehicle(); break;
        case 3: *reinterpret_cast< MissionController**>(_v) = _t->missionController(); break;
        case 4: *reinterpret_cast< GeoFenceController**>(_v) = _t->geoFenceController(); break;
        case 5: *reinterpret_cast< RallyPointController**>(_v) = _t->rallyPointController(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->offline(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->containsItems(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->syncInProgress(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->fileExtension(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->kmlFileExtension(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->currentPlanFile(); break;
        case 13: *reinterpret_cast< QStringList*>(_v) = _t->loadNameFilters(); break;
        case 14: *reinterpret_cast< QStringList*>(_v) = _t->saveNameFilters(); break;
        case 15: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_planCreators; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlanMasterController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_flyView != *reinterpret_cast< bool*>(_v)) {
                _t->_flyView = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 9: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 15:
            if (_t->_planCreators != *reinterpret_cast< QmlObjectListModel**>(_v)) {
                _t->_planCreators = *reinterpret_cast< QmlObjectListModel**>(_v);
                Q_EMIT _t->planCreatorsChanged(_t->_planCreators);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PlanMasterController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanMasterController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlanMasterControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlanMasterController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PlanMasterController::containsItemsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanMasterController::syncInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlanMasterController::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlanMasterController::offlineChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlanMasterController::currentPlanFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlanMasterController::planCreatorsChanged(QmlObjectListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlanMasterController::managerVehicleChanged(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlanMasterController::promptForPlanUsageOnVehicleChange()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
