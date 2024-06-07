/****************************************************************************
** Meta object code from reading C++ file 'PowerComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/PowerComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS = QtMocHelpers::stringData(
    "PowerComponentController",
    "oldFirmware",
    "",
    "newerFirmware",
    "incorrectFirmwareRevReporting",
    "connectBattery",
    "disconnectBattery",
    "batteryConnected",
    "calibrationFailed",
    "errorMessage",
    "calibrationSuccess",
    "warningMessages",
    "_handleVehicleTextMessage",
    "vehicleId",
    "compId",
    "severity",
    "text",
    "calibrateEsc",
    "startBusConfigureActuators",
    "stopBusConfigureActuators"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[25];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[30];
    char stringdata5[15];
    char stringdata6[18];
    char stringdata7[17];
    char stringdata8[18];
    char stringdata9[13];
    char stringdata10[19];
    char stringdata11[16];
    char stringdata12[26];
    char stringdata13[10];
    char stringdata14[7];
    char stringdata15[9];
    char stringdata16[5];
    char stringdata17[13];
    char stringdata18[27];
    char stringdata19[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS_t qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "PowerComponentController"
        QT_MOC_LITERAL(25, 11),  // "oldFirmware"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 13),  // "newerFirmware"
        QT_MOC_LITERAL(52, 29),  // "incorrectFirmwareRevReporting"
        QT_MOC_LITERAL(82, 14),  // "connectBattery"
        QT_MOC_LITERAL(97, 17),  // "disconnectBattery"
        QT_MOC_LITERAL(115, 16),  // "batteryConnected"
        QT_MOC_LITERAL(132, 17),  // "calibrationFailed"
        QT_MOC_LITERAL(150, 12),  // "errorMessage"
        QT_MOC_LITERAL(163, 18),  // "calibrationSuccess"
        QT_MOC_LITERAL(182, 15),  // "warningMessages"
        QT_MOC_LITERAL(198, 25),  // "_handleVehicleTextMessage"
        QT_MOC_LITERAL(224, 9),  // "vehicleId"
        QT_MOC_LITERAL(234, 6),  // "compId"
        QT_MOC_LITERAL(241, 8),  // "severity"
        QT_MOC_LITERAL(250, 4),  // "text"
        QT_MOC_LITERAL(255, 12),  // "calibrateEsc"
        QT_MOC_LITERAL(268, 26),  // "startBusConfigureActuators"
        QT_MOC_LITERAL(295, 25)   // "stopBusConfigureActuators"
    },
    "PowerComponentController",
    "oldFirmware",
    "",
    "newerFirmware",
    "incorrectFirmwareRevReporting",
    "connectBattery",
    "disconnectBattery",
    "batteryConnected",
    "calibrationFailed",
    "errorMessage",
    "calibrationSuccess",
    "warningMessages",
    "_handleVehicleTextMessage",
    "vehicleId",
    "compId",
    "severity",
    "text",
    "calibrateEsc",
    "startBusConfigureActuators",
    "stopBusConfigureActuators"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPowerComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    0,   87,    2, 0x06,    2 /* Public */,
       4,    0,   88,    2, 0x06,    3 /* Public */,
       5,    0,   89,    2, 0x06,    4 /* Public */,
       6,    0,   90,    2, 0x06,    5 /* Public */,
       7,    0,   91,    2, 0x06,    6 /* Public */,
       8,    1,   92,    2, 0x06,    7 /* Public */,
      10,    1,   95,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    4,   98,    2, 0x08,   11 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  107,    2, 0x02,   16 /* Public */,
      18,    0,  108,    2, 0x02,   17 /* Public */,
      19,    0,  109,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QStringList,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   13,   14,   15,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PowerComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPowerComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PowerComponentController, std::true_type>,
        // method 'oldFirmware'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newerFirmware'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incorrectFirmwareRevReporting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'batteryConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrationFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'calibrationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method '_handleVehicleTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'calibrateEsc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startBusConfigureActuators'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopBusConfigureActuators'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PowerComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->oldFirmware(); break;
        case 1: _t->newerFirmware(); break;
        case 2: _t->incorrectFirmwareRevReporting(); break;
        case 3: _t->connectBattery(); break;
        case 4: _t->disconnectBattery(); break;
        case 5: _t->batteryConnected(); break;
        case 6: _t->calibrationFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->calibrationSuccess((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->_handleVehicleTextMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 9: _t->calibrateEsc(); break;
        case 10: _t->startBusConfigureActuators(); break;
        case 11: _t->stopBusConfigureActuators(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::oldFirmware; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::newerFirmware; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::incorrectFirmwareRevReporting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::connectBattery; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::disconnectBattery; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)();
            if (_t _q_method = &PowerComponentController::batteryConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)(const QString & );
            if (_t _q_method = &PowerComponentController::calibrationFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PowerComponentController::*)(const QStringList & );
            if (_t _q_method = &PowerComponentController::calibrationSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *PowerComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPowerComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int PowerComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PowerComponentController::oldFirmware()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerComponentController::newerFirmware()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PowerComponentController::incorrectFirmwareRevReporting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PowerComponentController::connectBattery()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PowerComponentController::disconnectBattery()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PowerComponentController::batteryConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PowerComponentController::calibrationFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PowerComponentController::calibrationSuccess(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
