/****************************************************************************
** Meta object code from reading C++ file 'SimpleMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SimpleMissionItem.h"
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
#include "SpeedSection.h"
#include "CameraSection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleMissionItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS = QtMocHelpers::stringData(
    "SimpleMissionItem",
    "commandChanged",
    "",
    "command",
    "friendlyEditAllowedChanged",
    "friendlyEditAllowed",
    "headingDegreesChanged",
    "heading",
    "rawEditChanged",
    "rawEdit",
    "cameraSectionChanged",
    "cameraSection",
    "speedSectionChanged",
    "altitudeModeChanged",
    "isLoiterItemChanged",
    "showLoiterRadiusChanged",
    "loiterRadiusChanged",
    "loiterRadius",
    "_setDirty",
    "_sectionDirtyChanged",
    "dirty",
    "_sendCommandChanged",
    "_sendCoordinateChanged",
    "_sendFriendlyEditAllowedChanged",
    "_altitudeChanged",
    "_altitudeModeChanged",
    "_terrainAltChanged",
    "_updateLastSequenceNumber",
    "_rebuildFacts",
    "_rebuildTextFieldFacts",
    "_possibleAdditionalTimeDelayChanged",
    "_setDefaultsForCommand",
    "_possibleVehicleYawChanged",
    "_signalIfVTOLTransitionCommand",
    "_possibleRadiusChanged",
    "setMapCenterHintForCommandChange",
    "QGeoCoordinate",
    "mapCenter",
    "category",
    "specifiesAltitude",
    "altitude",
    "Fact*",
    "altitudeMode",
    "QGroundControlQmlGlobal::AltMode",
    "amslAltAboveTerrain",
    "isLoiterItem",
    "showLoiterRadius",
    "speedSection",
    "comboboxFacts",
    "QmlObjectListModel*",
    "textFieldFacts",
    "nanFacts"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[27];
    char stringdata5[20];
    char stringdata6[22];
    char stringdata7[8];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[21];
    char stringdata11[14];
    char stringdata12[20];
    char stringdata13[20];
    char stringdata14[20];
    char stringdata15[24];
    char stringdata16[20];
    char stringdata17[13];
    char stringdata18[10];
    char stringdata19[21];
    char stringdata20[6];
    char stringdata21[20];
    char stringdata22[23];
    char stringdata23[32];
    char stringdata24[17];
    char stringdata25[21];
    char stringdata26[19];
    char stringdata27[26];
    char stringdata28[14];
    char stringdata29[23];
    char stringdata30[36];
    char stringdata31[23];
    char stringdata32[27];
    char stringdata33[31];
    char stringdata34[23];
    char stringdata35[33];
    char stringdata36[15];
    char stringdata37[10];
    char stringdata38[9];
    char stringdata39[18];
    char stringdata40[9];
    char stringdata41[6];
    char stringdata42[13];
    char stringdata43[33];
    char stringdata44[20];
    char stringdata45[13];
    char stringdata46[17];
    char stringdata47[13];
    char stringdata48[14];
    char stringdata49[20];
    char stringdata50[15];
    char stringdata51[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS_t qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "SimpleMissionItem"
        QT_MOC_LITERAL(18, 14),  // "commandChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 7),  // "command"
        QT_MOC_LITERAL(42, 26),  // "friendlyEditAllowedChanged"
        QT_MOC_LITERAL(69, 19),  // "friendlyEditAllowed"
        QT_MOC_LITERAL(89, 21),  // "headingDegreesChanged"
        QT_MOC_LITERAL(111, 7),  // "heading"
        QT_MOC_LITERAL(119, 14),  // "rawEditChanged"
        QT_MOC_LITERAL(134, 7),  // "rawEdit"
        QT_MOC_LITERAL(142, 20),  // "cameraSectionChanged"
        QT_MOC_LITERAL(163, 13),  // "cameraSection"
        QT_MOC_LITERAL(177, 19),  // "speedSectionChanged"
        QT_MOC_LITERAL(197, 19),  // "altitudeModeChanged"
        QT_MOC_LITERAL(217, 19),  // "isLoiterItemChanged"
        QT_MOC_LITERAL(237, 23),  // "showLoiterRadiusChanged"
        QT_MOC_LITERAL(261, 19),  // "loiterRadiusChanged"
        QT_MOC_LITERAL(281, 12),  // "loiterRadius"
        QT_MOC_LITERAL(294, 9),  // "_setDirty"
        QT_MOC_LITERAL(304, 20),  // "_sectionDirtyChanged"
        QT_MOC_LITERAL(325, 5),  // "dirty"
        QT_MOC_LITERAL(331, 19),  // "_sendCommandChanged"
        QT_MOC_LITERAL(351, 22),  // "_sendCoordinateChanged"
        QT_MOC_LITERAL(374, 31),  // "_sendFriendlyEditAllowedChanged"
        QT_MOC_LITERAL(406, 16),  // "_altitudeChanged"
        QT_MOC_LITERAL(423, 20),  // "_altitudeModeChanged"
        QT_MOC_LITERAL(444, 18),  // "_terrainAltChanged"
        QT_MOC_LITERAL(463, 25),  // "_updateLastSequenceNumber"
        QT_MOC_LITERAL(489, 13),  // "_rebuildFacts"
        QT_MOC_LITERAL(503, 22),  // "_rebuildTextFieldFacts"
        QT_MOC_LITERAL(526, 35),  // "_possibleAdditionalTimeDelayC..."
        QT_MOC_LITERAL(562, 22),  // "_setDefaultsForCommand"
        QT_MOC_LITERAL(585, 26),  // "_possibleVehicleYawChanged"
        QT_MOC_LITERAL(612, 30),  // "_signalIfVTOLTransitionCommand"
        QT_MOC_LITERAL(643, 22),  // "_possibleRadiusChanged"
        QT_MOC_LITERAL(666, 32),  // "setMapCenterHintForCommandChange"
        QT_MOC_LITERAL(699, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(714, 9),  // "mapCenter"
        QT_MOC_LITERAL(724, 8),  // "category"
        QT_MOC_LITERAL(733, 17),  // "specifiesAltitude"
        QT_MOC_LITERAL(751, 8),  // "altitude"
        QT_MOC_LITERAL(760, 5),  // "Fact*"
        QT_MOC_LITERAL(766, 12),  // "altitudeMode"
        QT_MOC_LITERAL(779, 32),  // "QGroundControlQmlGlobal::AltMode"
        QT_MOC_LITERAL(812, 19),  // "amslAltAboveTerrain"
        QT_MOC_LITERAL(832, 12),  // "isLoiterItem"
        QT_MOC_LITERAL(845, 16),  // "showLoiterRadius"
        QT_MOC_LITERAL(862, 12),  // "speedSection"
        QT_MOC_LITERAL(875, 13),  // "comboboxFacts"
        QT_MOC_LITERAL(889, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(909, 14),  // "textFieldFacts"
        QT_MOC_LITERAL(924, 8)   // "nanFacts"
    },
    "SimpleMissionItem",
    "commandChanged",
    "",
    "command",
    "friendlyEditAllowedChanged",
    "friendlyEditAllowed",
    "headingDegreesChanged",
    "heading",
    "rawEditChanged",
    "rawEdit",
    "cameraSectionChanged",
    "cameraSection",
    "speedSectionChanged",
    "altitudeModeChanged",
    "isLoiterItemChanged",
    "showLoiterRadiusChanged",
    "loiterRadiusChanged",
    "loiterRadius",
    "_setDirty",
    "_sectionDirtyChanged",
    "dirty",
    "_sendCommandChanged",
    "_sendCoordinateChanged",
    "_sendFriendlyEditAllowedChanged",
    "_altitudeChanged",
    "_altitudeModeChanged",
    "_terrainAltChanged",
    "_updateLastSequenceNumber",
    "_rebuildFacts",
    "_rebuildTextFieldFacts",
    "_possibleAdditionalTimeDelayChanged",
    "_setDefaultsForCommand",
    "_possibleVehicleYawChanged",
    "_signalIfVTOLTransitionCommand",
    "_possibleRadiusChanged",
    "setMapCenterHintForCommandChange",
    "QGeoCoordinate",
    "mapCenter",
    "category",
    "specifiesAltitude",
    "altitude",
    "Fact*",
    "altitudeMode",
    "QGroundControlQmlGlobal::AltMode",
    "amslAltAboveTerrain",
    "isLoiterItem",
    "showLoiterRadius",
    "speedSection",
    "comboboxFacts",
    "QmlObjectListModel*",
    "textFieldFacts",
    "nanFacts"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimpleMissionItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
      16,  221, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,   17 /* Public */,
       4,    1,  179,    2, 0x06,   19 /* Public */,
       6,    1,  182,    2, 0x06,   21 /* Public */,
       8,    1,  185,    2, 0x06,   23 /* Public */,
      10,    1,  188,    2, 0x06,   25 /* Public */,
      12,    1,  191,    2, 0x06,   27 /* Public */,
      13,    0,  194,    2, 0x06,   29 /* Public */,
      14,    0,  195,    2, 0x06,   30 /* Public */,
      15,    0,  196,    2, 0x06,   31 /* Public */,
      16,    1,  197,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  200,    2, 0x08,   34 /* Private */,
      19,    1,  201,    2, 0x08,   35 /* Private */,
      21,    0,  204,    2, 0x08,   37 /* Private */,
      22,    0,  205,    2, 0x08,   38 /* Private */,
      23,    0,  206,    2, 0x08,   39 /* Private */,
      24,    0,  207,    2, 0x08,   40 /* Private */,
      25,    0,  208,    2, 0x08,   41 /* Private */,
      26,    0,  209,    2, 0x08,   42 /* Private */,
      27,    0,  210,    2, 0x08,   43 /* Private */,
      28,    0,  211,    2, 0x08,   44 /* Private */,
      29,    0,  212,    2, 0x08,   45 /* Private */,
      30,    0,  213,    2, 0x08,   46 /* Private */,
      31,    0,  214,    2, 0x08,   47 /* Private */,
      32,    0,  215,    2, 0x08,   48 /* Private */,
      33,    0,  216,    2, 0x08,   49 /* Private */,
      34,    0,  217,    2, 0x08,   50 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      35,    1,  218,    2, 0x02,   51 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
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
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 36,   37,

 // properties: name, type, flags
      38, QMetaType::QString, 0x00015001, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,
      39, QMetaType::Bool, 0x00015001, uint(0), 0,
      40, 0x80000000 | 41, 0x00015409, uint(-1), 0,
      42, 0x80000000 | 43, 0x0001510b, uint(6), 0,
      44, 0x80000000 | 41, 0x00015409, uint(-1), 0,
       3, QMetaType::Int, 0x00015103, uint(0), 0,
      45, QMetaType::Bool, 0x00015001, uint(7), 0,
      46, QMetaType::Bool, 0x00015001, uint(8), 0,
      17, QMetaType::Double, 0x00015003, uint(9), 0,
      47, QMetaType::QObjectStar, 0x00015001, uint(5), 0,
      11, QMetaType::QObjectStar, 0x00015001, uint(4), 0,
      48, 0x80000000 | 49, 0x00015409, uint(-1), 0,
      50, 0x80000000 | 49, 0x00015409, uint(-1), 0,
      51, 0x80000000 | 49, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSSimpleMissionItemENDCLASS[] = {
    QMetaObject::SuperData::link<QGroundControlQmlGlobal::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject SimpleMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<VisualMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSimpleMissionItemENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSSimpleMissionItemENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS_t,
        // property 'category'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'friendlyEditAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'rawEdit'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'specifiesAltitude'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'altitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeMode'
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal::AltMode, std::true_type>,
        // property 'amslAltAboveTerrain'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'command'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isLoiterItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showLoiterRadius'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'loiterRadius'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'speedSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'cameraSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'comboboxFacts'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'textFieldFacts'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'nanFacts'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimpleMissionItem, std::true_type>,
        // method 'commandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'friendlyEditAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'headingDegreesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'rawEditChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cameraSectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'speedSectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'altitudeModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isLoiterItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showLoiterRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loiterRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sectionDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_sendCommandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendFriendlyEditAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_altitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_altitudeModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_terrainAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateLastSequenceNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rebuildFacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rebuildTextFieldFacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_possibleAdditionalTimeDelayChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDefaultsForCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_possibleVehicleYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_signalIfVTOLTransitionCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_possibleRadiusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMapCenterHintForCommandChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>
    >,
    nullptr
} };

void SimpleMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commandChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->friendlyEditAllowedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->headingDegreesChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->rawEditChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->cameraSectionChanged((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 5: _t->speedSectionChanged((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 6: _t->altitudeModeChanged(); break;
        case 7: _t->isLoiterItemChanged(); break;
        case 8: _t->showLoiterRadiusChanged(); break;
        case 9: _t->loiterRadiusChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 10: _t->_setDirty(); break;
        case 11: _t->_sectionDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->_sendCommandChanged(); break;
        case 13: _t->_sendCoordinateChanged(); break;
        case 14: _t->_sendFriendlyEditAllowedChanged(); break;
        case 15: _t->_altitudeChanged(); break;
        case 16: _t->_altitudeModeChanged(); break;
        case 17: _t->_terrainAltChanged(); break;
        case 18: _t->_updateLastSequenceNumber(); break;
        case 19: _t->_rebuildFacts(); break;
        case 20: _t->_rebuildTextFieldFacts(); break;
        case 21: _t->_possibleAdditionalTimeDelayChanged(); break;
        case 22: _t->_setDefaultsForCommand(); break;
        case 23: _t->_possibleVehicleYawChanged(); break;
        case 24: _t->_signalIfVTOLTransitionCommand(); break;
        case 25: _t->_possibleRadiusChanged(); break;
        case 26: _t->setMapCenterHintForCommandChange((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
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
            using _t = void (SimpleMissionItem::*)(int );
            if (_t _q_method = &SimpleMissionItem::commandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(bool );
            if (_t _q_method = &SimpleMissionItem::friendlyEditAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(double );
            if (_t _q_method = &SimpleMissionItem::headingDegreesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(bool );
            if (_t _q_method = &SimpleMissionItem::rawEditChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(QObject * );
            if (_t _q_method = &SimpleMissionItem::cameraSectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(QObject * );
            if (_t _q_method = &SimpleMissionItem::speedSectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)();
            if (_t _q_method = &SimpleMissionItem::altitudeModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)();
            if (_t _q_method = &SimpleMissionItem::isLoiterItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)();
            if (_t _q_method = &SimpleMissionItem::showLoiterRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SimpleMissionItem::*)(double );
            if (_t _q_method = &SimpleMissionItem::loiterRadiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 15:
        case 14:
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->friendlyEditAllowed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->rawEdit(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitude(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->altitude(); break;
        case 5: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->altitudeMode(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->amslAltAboveTerrain(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->command(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isLoiterItem(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showLoiterRadius(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->loiterRadius(); break;
        case 11: *reinterpret_cast< QObject**>(_v) = _t->speedSection(); break;
        case 12: *reinterpret_cast< QObject**>(_v) = _t->cameraSection(); break;
        case 13: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->comboboxFacts(); break;
        case 14: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->textFieldFacts(); break;
        case 15: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->nanFacts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SimpleMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setRawEdit(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAltitudeMode(*reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v)); break;
        case 7: _t->setCommand(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setRadius(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SimpleMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSimpleMissionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return VisualMissionItem::qt_metacast(_clname);
}

int SimpleMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisualMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SimpleMissionItem::commandChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimpleMissionItem::friendlyEditAllowedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimpleMissionItem::headingDegreesChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimpleMissionItem::rawEditChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SimpleMissionItem::cameraSectionChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SimpleMissionItem::speedSectionChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SimpleMissionItem::altitudeModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SimpleMissionItem::isLoiterItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SimpleMissionItem::showLoiterRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SimpleMissionItem::loiterRadiusChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
