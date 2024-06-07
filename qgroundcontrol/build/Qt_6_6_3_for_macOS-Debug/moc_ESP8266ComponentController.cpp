/****************************************************************************
** Meta object code from reading C++ file 'ESP8266ComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/Common/ESP8266ComponentController.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ESP8266ComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS = QtMocHelpers::stringData(
    "ESP8266ComponentController",
    "versionChanged",
    "",
    "wifiSSIDChanged",
    "wifiPasswordChanged",
    "wifiSSIDStaChanged",
    "wifiPasswordStaChanged",
    "baudIndexChanged",
    "busyChanged",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "_ssidChanged",
    "value",
    "_passwordChanged",
    "_baudChanged",
    "_versionChanged",
    "restoreDefaults",
    "reboot",
    "componentID",
    "version",
    "wifiIPAddress",
    "wifiSSID",
    "wifiPassword",
    "wifiSSIDSta",
    "wifiPasswordSta",
    "wifiChannels",
    "baudRates",
    "baudIndex",
    "busy",
    "vehicle",
    "Vehicle*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[27];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[20];
    char stringdata5[19];
    char stringdata6[23];
    char stringdata7[17];
    char stringdata8[12];
    char stringdata9[18];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[8];
    char stringdata13[7];
    char stringdata14[21];
    char stringdata15[13];
    char stringdata16[6];
    char stringdata17[17];
    char stringdata18[13];
    char stringdata19[16];
    char stringdata20[16];
    char stringdata21[7];
    char stringdata22[12];
    char stringdata23[8];
    char stringdata24[14];
    char stringdata25[9];
    char stringdata26[13];
    char stringdata27[12];
    char stringdata28[16];
    char stringdata29[13];
    char stringdata30[10];
    char stringdata31[10];
    char stringdata32[5];
    char stringdata33[8];
    char stringdata34[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS_t qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "ESP8266ComponentController"
        QT_MOC_LITERAL(27, 14),  // "versionChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 15),  // "wifiSSIDChanged"
        QT_MOC_LITERAL(59, 19),  // "wifiPasswordChanged"
        QT_MOC_LITERAL(79, 18),  // "wifiSSIDStaChanged"
        QT_MOC_LITERAL(98, 22),  // "wifiPasswordStaChanged"
        QT_MOC_LITERAL(121, 16),  // "baudIndexChanged"
        QT_MOC_LITERAL(138, 11),  // "busyChanged"
        QT_MOC_LITERAL(150, 17),  // "_mavCommandResult"
        QT_MOC_LITERAL(168, 9),  // "vehicleId"
        QT_MOC_LITERAL(178, 9),  // "component"
        QT_MOC_LITERAL(188, 7),  // "command"
        QT_MOC_LITERAL(196, 6),  // "result"
        QT_MOC_LITERAL(203, 20),  // "noReponseFromVehicle"
        QT_MOC_LITERAL(224, 12),  // "_ssidChanged"
        QT_MOC_LITERAL(237, 5),  // "value"
        QT_MOC_LITERAL(243, 16),  // "_passwordChanged"
        QT_MOC_LITERAL(260, 12),  // "_baudChanged"
        QT_MOC_LITERAL(273, 15),  // "_versionChanged"
        QT_MOC_LITERAL(289, 15),  // "restoreDefaults"
        QT_MOC_LITERAL(305, 6),  // "reboot"
        QT_MOC_LITERAL(312, 11),  // "componentID"
        QT_MOC_LITERAL(324, 7),  // "version"
        QT_MOC_LITERAL(332, 13),  // "wifiIPAddress"
        QT_MOC_LITERAL(346, 8),  // "wifiSSID"
        QT_MOC_LITERAL(355, 12),  // "wifiPassword"
        QT_MOC_LITERAL(368, 11),  // "wifiSSIDSta"
        QT_MOC_LITERAL(380, 15),  // "wifiPasswordSta"
        QT_MOC_LITERAL(396, 12),  // "wifiChannels"
        QT_MOC_LITERAL(409, 9),  // "baudRates"
        QT_MOC_LITERAL(419, 9),  // "baudIndex"
        QT_MOC_LITERAL(429, 4),  // "busy"
        QT_MOC_LITERAL(434, 7),  // "vehicle"
        QT_MOC_LITERAL(442, 8)   // "Vehicle*"
    },
    "ESP8266ComponentController",
    "versionChanged",
    "",
    "wifiSSIDChanged",
    "wifiPasswordChanged",
    "wifiSSIDStaChanged",
    "wifiPasswordStaChanged",
    "baudIndexChanged",
    "busyChanged",
    "_mavCommandResult",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle",
    "_ssidChanged",
    "value",
    "_passwordChanged",
    "_baudChanged",
    "_versionChanged",
    "restoreDefaults",
    "reboot",
    "componentID",
    "version",
    "wifiIPAddress",
    "wifiSSID",
    "wifiPassword",
    "wifiSSIDSta",
    "wifiPasswordSta",
    "wifiChannels",
    "baudRates",
    "baudIndex",
    "busy",
    "vehicle",
    "Vehicle*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSESP8266ComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      12,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,   13 /* Public */,
       3,    0,   99,    2, 0x06,   14 /* Public */,
       4,    0,  100,    2, 0x06,   15 /* Public */,
       5,    0,  101,    2, 0x06,   16 /* Public */,
       6,    0,  102,    2, 0x06,   17 /* Public */,
       7,    0,  103,    2, 0x06,   18 /* Public */,
       8,    0,  104,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    5,  105,    2, 0x08,   20 /* Private */,
      15,    1,  116,    2, 0x08,   26 /* Private */,
      17,    1,  119,    2, 0x08,   28 /* Private */,
      18,    1,  122,    2, 0x08,   30 /* Private */,
      19,    1,  125,    2, 0x08,   32 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  128,    2, 0x02,   34 /* Public */,
      21,    0,  129,    2, 0x02,   35 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Int, 0x00015401, uint(-1), 0,
      23, QMetaType::QString, 0x00015001, uint(0), 0,
      24, QMetaType::QString, 0x00015401, uint(-1), 0,
      25, QMetaType::QString, 0x00015103, uint(1), 0,
      26, QMetaType::QString, 0x00015103, uint(2), 0,
      27, QMetaType::QString, 0x00015103, uint(3), 0,
      28, QMetaType::QString, 0x00015103, uint(4), 0,
      29, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      30, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      31, QMetaType::Int, 0x00015103, uint(5), 0,
      32, QMetaType::Bool, 0x00015001, uint(6), 0,
      33, 0x80000000 | 34, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ESP8266ComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSESP8266ComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS_t,
        // property 'componentID'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'version'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiIPAddress'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiSSID'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiPassword'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiSSIDSta'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiPasswordSta'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wifiChannels'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'baudRates'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'baudIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'busy'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'vehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ESP8266ComponentController, std::true_type>,
        // method 'versionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiSSIDChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiPasswordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiSSIDStaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiPasswordStaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'baudIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'busyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_mavCommandResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_ssidChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_passwordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_baudChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_versionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'restoreDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reboot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ESP8266ComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ESP8266ComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->versionChanged(); break;
        case 1: _t->wifiSSIDChanged(); break;
        case 2: _t->wifiPasswordChanged(); break;
        case 3: _t->wifiSSIDStaChanged(); break;
        case 4: _t->wifiPasswordStaChanged(); break;
        case 5: _t->baudIndexChanged(); break;
        case 6: _t->busyChanged(); break;
        case 7: _t->_mavCommandResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 8: _t->_ssidChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 9: _t->_passwordChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 10: _t->_baudChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 11: _t->_versionChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 12: _t->restoreDefaults(); break;
        case 13: _t->reboot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::versionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::wifiSSIDChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::wifiPasswordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::wifiSSIDStaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::wifiPasswordStaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::baudIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ESP8266ComponentController::*)();
            if (_t _q_method = &ESP8266ComponentController::busyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ESP8266ComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->componentID(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->wifiIPAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->wifiSSID(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->wifiPassword(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->wifiSSIDSta(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->wifiPasswordSta(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->wifiChannels(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->baudRates(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->baudIndex(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->busy(); break;
        case 11: *reinterpret_cast< Vehicle**>(_v) = _t->vehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ESP8266ComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setWifiSSID(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setWifiPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setWifiSSIDSta(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setWifiPasswordSta(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setBaudIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ESP8266ComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ESP8266ComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSESP8266ComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int ESP8266ComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ESP8266ComponentController::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ESP8266ComponentController::wifiSSIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ESP8266ComponentController::wifiPasswordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ESP8266ComponentController::wifiSSIDStaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ESP8266ComponentController::wifiPasswordStaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ESP8266ComponentController::baudIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ESP8266ComponentController::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
