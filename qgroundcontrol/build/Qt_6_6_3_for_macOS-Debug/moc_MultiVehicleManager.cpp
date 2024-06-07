/****************************************************************************
** Meta object code from reading C++ file 'MultiVehicleManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/MultiVehicleManager.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiVehicleManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS = QtMocHelpers::stringData(
    "MultiVehicleManager",
    "vehicleAdded",
    "",
    "Vehicle*",
    "vehicle",
    "vehicleRemoved",
    "activeVehicleAvailableChanged",
    "activeVehicleAvailable",
    "parameterReadyVehicleAvailableChanged",
    "parameterReadyVehicleAvailable",
    "activeVehicleChanged",
    "activeVehicle",
    "gcsHeartBeatEnabledChanged",
    "gcsHeartBeatEnabled",
    "lastKnownLocationChanged",
    "_deleteVehiclePhase2Signal",
    "_deleteVehiclePhase1",
    "_deleteVehiclePhase2",
    "_setActiveVehiclePhase2",
    "_vehicleParametersReadyChanged",
    "parametersReady",
    "_sendGCSHeartbeat",
    "_vehicleHeartbeatInfo",
    "LinkInterface*",
    "link",
    "vehicleId",
    "componentId",
    "vehicleFirmwareType",
    "vehicleType",
    "_requestProtocolVersion",
    "version",
    "_coordinateChanged",
    "QGeoCoordinate",
    "coordinate",
    "saveSetting",
    "key",
    "value",
    "loadSetting",
    "defaultValue",
    "getVehicleById",
    "vehicles",
    "QmlObjectListModel*",
    "offlineEditingVehicle",
    "lastKnownLocation"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS_t {
    uint offsetsAndSizes[88];
    char stringdata0[20];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[8];
    char stringdata5[15];
    char stringdata6[30];
    char stringdata7[23];
    char stringdata8[38];
    char stringdata9[31];
    char stringdata10[21];
    char stringdata11[14];
    char stringdata12[27];
    char stringdata13[20];
    char stringdata14[25];
    char stringdata15[27];
    char stringdata16[21];
    char stringdata17[21];
    char stringdata18[24];
    char stringdata19[31];
    char stringdata20[16];
    char stringdata21[18];
    char stringdata22[22];
    char stringdata23[15];
    char stringdata24[5];
    char stringdata25[10];
    char stringdata26[12];
    char stringdata27[20];
    char stringdata28[12];
    char stringdata29[24];
    char stringdata30[8];
    char stringdata31[19];
    char stringdata32[15];
    char stringdata33[11];
    char stringdata34[12];
    char stringdata35[4];
    char stringdata36[6];
    char stringdata37[12];
    char stringdata38[13];
    char stringdata39[15];
    char stringdata40[9];
    char stringdata41[20];
    char stringdata42[22];
    char stringdata43[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS_t qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "MultiVehicleManager"
        QT_MOC_LITERAL(20, 12),  // "vehicleAdded"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 8),  // "Vehicle*"
        QT_MOC_LITERAL(43, 7),  // "vehicle"
        QT_MOC_LITERAL(51, 14),  // "vehicleRemoved"
        QT_MOC_LITERAL(66, 29),  // "activeVehicleAvailableChanged"
        QT_MOC_LITERAL(96, 22),  // "activeVehicleAvailable"
        QT_MOC_LITERAL(119, 37),  // "parameterReadyVehicleAvailabl..."
        QT_MOC_LITERAL(157, 30),  // "parameterReadyVehicleAvailable"
        QT_MOC_LITERAL(188, 20),  // "activeVehicleChanged"
        QT_MOC_LITERAL(209, 13),  // "activeVehicle"
        QT_MOC_LITERAL(223, 26),  // "gcsHeartBeatEnabledChanged"
        QT_MOC_LITERAL(250, 19),  // "gcsHeartBeatEnabled"
        QT_MOC_LITERAL(270, 24),  // "lastKnownLocationChanged"
        QT_MOC_LITERAL(295, 26),  // "_deleteVehiclePhase2Signal"
        QT_MOC_LITERAL(322, 20),  // "_deleteVehiclePhase1"
        QT_MOC_LITERAL(343, 20),  // "_deleteVehiclePhase2"
        QT_MOC_LITERAL(364, 23),  // "_setActiveVehiclePhase2"
        QT_MOC_LITERAL(388, 30),  // "_vehicleParametersReadyChanged"
        QT_MOC_LITERAL(419, 15),  // "parametersReady"
        QT_MOC_LITERAL(435, 17),  // "_sendGCSHeartbeat"
        QT_MOC_LITERAL(453, 21),  // "_vehicleHeartbeatInfo"
        QT_MOC_LITERAL(475, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(490, 4),  // "link"
        QT_MOC_LITERAL(495, 9),  // "vehicleId"
        QT_MOC_LITERAL(505, 11),  // "componentId"
        QT_MOC_LITERAL(517, 19),  // "vehicleFirmwareType"
        QT_MOC_LITERAL(537, 11),  // "vehicleType"
        QT_MOC_LITERAL(549, 23),  // "_requestProtocolVersion"
        QT_MOC_LITERAL(573, 7),  // "version"
        QT_MOC_LITERAL(581, 18),  // "_coordinateChanged"
        QT_MOC_LITERAL(600, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(615, 10),  // "coordinate"
        QT_MOC_LITERAL(626, 11),  // "saveSetting"
        QT_MOC_LITERAL(638, 3),  // "key"
        QT_MOC_LITERAL(642, 5),  // "value"
        QT_MOC_LITERAL(648, 11),  // "loadSetting"
        QT_MOC_LITERAL(660, 12),  // "defaultValue"
        QT_MOC_LITERAL(673, 14),  // "getVehicleById"
        QT_MOC_LITERAL(688, 8),  // "vehicles"
        QT_MOC_LITERAL(697, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(717, 21),  // "offlineEditingVehicle"
        QT_MOC_LITERAL(739, 17)   // "lastKnownLocation"
    },
    "MultiVehicleManager",
    "vehicleAdded",
    "",
    "Vehicle*",
    "vehicle",
    "vehicleRemoved",
    "activeVehicleAvailableChanged",
    "activeVehicleAvailable",
    "parameterReadyVehicleAvailableChanged",
    "parameterReadyVehicleAvailable",
    "activeVehicleChanged",
    "activeVehicle",
    "gcsHeartBeatEnabledChanged",
    "gcsHeartBeatEnabled",
    "lastKnownLocationChanged",
    "_deleteVehiclePhase2Signal",
    "_deleteVehiclePhase1",
    "_deleteVehiclePhase2",
    "_setActiveVehiclePhase2",
    "_vehicleParametersReadyChanged",
    "parametersReady",
    "_sendGCSHeartbeat",
    "_vehicleHeartbeatInfo",
    "LinkInterface*",
    "link",
    "vehicleId",
    "componentId",
    "vehicleFirmwareType",
    "vehicleType",
    "_requestProtocolVersion",
    "version",
    "_coordinateChanged",
    "QGeoCoordinate",
    "coordinate",
    "saveSetting",
    "key",
    "value",
    "loadSetting",
    "defaultValue",
    "getVehicleById",
    "vehicles",
    "QmlObjectListModel*",
    "offlineEditingVehicle",
    "lastKnownLocation"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMultiVehicleManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       7,  187, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    8 /* Public */,
       5,    1,  131,    2, 0x06,   10 /* Public */,
       6,    1,  134,    2, 0x06,   12 /* Public */,
       8,    1,  137,    2, 0x06,   14 /* Public */,
      10,    1,  140,    2, 0x06,   16 /* Public */,
      12,    1,  143,    2, 0x06,   18 /* Public */,
      14,    0,  146,    2, 0x06,   20 /* Public */,
      15,    0,  147,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  148,    2, 0x08,   22 /* Private */,
      17,    0,  151,    2, 0x08,   24 /* Private */,
      18,    0,  152,    2, 0x08,   25 /* Private */,
      19,    1,  153,    2, 0x08,   26 /* Private */,
      21,    0,  156,    2, 0x08,   28 /* Private */,
      22,    5,  157,    2, 0x08,   29 /* Private */,
      29,    1,  168,    2, 0x08,   35 /* Private */,
      31,    1,  171,    2, 0x08,   37 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      34,    2,  174,    2, 0x02,   39 /* Public */,
      37,    2,  179,    2, 0x02,   42 /* Public */,
      39,    1,  184,    2, 0x02,   45 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, 0x80000000 | 32,   33,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   35,   36,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   35,   38,
    0x80000000 | 3, QMetaType::Int,   25,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015001, uint(3), 0,
      11, 0x80000000 | 3, 0x0001510b, uint(4), 0,
      40, 0x80000000 | 41, 0x00015409, uint(-1), 0,
      13, QMetaType::Bool, 0x00015003, uint(5), 0,
      42, 0x80000000 | 3, 0x00015409, uint(-1), 0,
      43, 0x80000000 | 32, 0x00015009, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MultiVehicleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMultiVehicleManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS_t,
        // property 'activeVehicleAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'parameterReadyVehicleAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'activeVehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // property 'vehicles'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'gcsHeartBeatEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'offlineEditingVehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // property 'lastKnownLocation'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MultiVehicleManager, std::true_type>,
        // method 'vehicleAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'vehicleRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'activeVehicleAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'parameterReadyVehicleAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'activeVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'gcsHeartBeatEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'lastKnownLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_deleteVehiclePhase2Signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_deleteVehiclePhase1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_deleteVehiclePhase2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setActiveVehiclePhase2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleParametersReadyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_sendGCSHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleHeartbeatInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkInterface *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_requestProtocolVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method '_coordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'saveSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadSetting'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getVehicleById'
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MultiVehicleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiVehicleManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->vehicleAdded((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 1: _t->vehicleRemoved((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 2: _t->activeVehicleAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->parameterReadyVehicleAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->activeVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 5: _t->gcsHeartBeatEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->lastKnownLocationChanged(); break;
        case 7: _t->_deleteVehiclePhase2Signal(); break;
        case 8: _t->_deleteVehiclePhase1((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 9: _t->_deleteVehiclePhase2(); break;
        case 10: _t->_setActiveVehiclePhase2(); break;
        case 11: _t->_vehicleParametersReadyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->_sendGCSHeartbeat(); break;
        case 13: _t->_vehicleHeartbeatInfo((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 14: _t->_requestProtocolVersion((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 15: _t->_coordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 16: _t->saveSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: { QString _r = _t->loadSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { Vehicle* _r = _t->getVehicleById((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Vehicle**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
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
            using _t = void (MultiVehicleManager::*)(Vehicle * );
            if (_t _q_method = &MultiVehicleManager::vehicleAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)(Vehicle * );
            if (_t _q_method = &MultiVehicleManager::vehicleRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)(bool );
            if (_t _q_method = &MultiVehicleManager::activeVehicleAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)(bool );
            if (_t _q_method = &MultiVehicleManager::parameterReadyVehicleAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)(Vehicle * );
            if (_t _q_method = &MultiVehicleManager::activeVehicleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)(bool );
            if (_t _q_method = &MultiVehicleManager::gcsHeartBeatEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)();
            if (_t _q_method = &MultiVehicleManager::lastKnownLocationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MultiVehicleManager::*)();
            if (_t _q_method = &MultiVehicleManager::_deleteVehiclePhase2Signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MultiVehicleManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->activeVehicleAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->parameterReadyVehicleAvailable(); break;
        case 2: *reinterpret_cast< Vehicle**>(_v) = _t->activeVehicle(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->vehicles(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->gcsHeartbeatEnabled(); break;
        case 5: *reinterpret_cast< Vehicle**>(_v) = _t->offlineEditingVehicle(); break;
        case 6: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->lastKnownLocation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MultiVehicleManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveVehicle(*reinterpret_cast< Vehicle**>(_v)); break;
        case 4: _t->setGcsHeartbeatEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MultiVehicleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiVehicleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMultiVehicleManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MultiVehicleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MultiVehicleManager::vehicleAdded(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiVehicleManager::vehicleRemoved(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiVehicleManager::activeVehicleAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MultiVehicleManager::parameterReadyVehicleAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MultiVehicleManager::activeVehicleChanged(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MultiVehicleManager::gcsHeartBeatEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiVehicleManager::lastKnownLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MultiVehicleManager::_deleteVehiclePhase2Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
