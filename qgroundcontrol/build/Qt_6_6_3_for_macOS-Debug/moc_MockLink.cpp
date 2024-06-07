/****************************************************************************
** Meta object code from reading C++ file 'MockLink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Comms/MockLink/MockLink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MockLink.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMockConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMockConfigurationENDCLASS = QtMocHelpers::stringData(
    "MockConfiguration",
    "firmwareChanged",
    "",
    "vehicleChanged",
    "sendStatusChanged",
    "incrementVehicleIdChanged",
    "firmware",
    "vehicle",
    "sendStatus",
    "incrementVehicleId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMockConfigurationENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[18];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[26];
    char stringdata6[9];
    char stringdata7[8];
    char stringdata8[11];
    char stringdata9[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMockConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMockConfigurationENDCLASS_t qt_meta_stringdata_CLASSMockConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "MockConfiguration"
        QT_MOC_LITERAL(18, 15),  // "firmwareChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "vehicleChanged"
        QT_MOC_LITERAL(50, 17),  // "sendStatusChanged"
        QT_MOC_LITERAL(68, 25),  // "incrementVehicleIdChanged"
        QT_MOC_LITERAL(94, 8),  // "firmware"
        QT_MOC_LITERAL(103, 7),  // "vehicle"
        QT_MOC_LITERAL(111, 10),  // "sendStatus"
        QT_MOC_LITERAL(122, 18)   // "incrementVehicleId"
    },
    "MockConfiguration",
    "firmwareChanged",
    "",
    "vehicleChanged",
    "sendStatusChanged",
    "incrementVehicleIdChanged",
    "firmware",
    "vehicle",
    "sendStatus",
    "incrementVehicleId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMockConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,
       3,    0,   39,    2, 0x06,    6 /* Public */,
       4,    0,   40,    2, 0x06,    7 /* Public */,
       5,    0,   41,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00015103, uint(0), 0,
       7, QMetaType::Int, 0x00015103, uint(1), 0,
       8, QMetaType::Bool, 0x00015003, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MockConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkConfiguration::staticMetaObject>(),
    qt_meta_stringdata_CLASSMockConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMockConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMockConfigurationENDCLASS_t,
        // property 'firmware'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'vehicle'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sendStatus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'incrementVehicleId'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MockConfiguration, std::true_type>,
        // method 'firmwareChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incrementVehicleIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MockConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MockConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firmwareChanged(); break;
        case 1: _t->vehicleChanged(); break;
        case 2: _t->sendStatusChanged(); break;
        case 3: _t->incrementVehicleIdChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MockConfiguration::*)();
            if (_t _q_method = &MockConfiguration::firmwareChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MockConfiguration::*)();
            if (_t _q_method = &MockConfiguration::vehicleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MockConfiguration::*)();
            if (_t _q_method = &MockConfiguration::sendStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MockConfiguration::*)();
            if (_t _q_method = &MockConfiguration::incrementVehicleIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MockConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->firmware(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->vehicle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->sendStatusText(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->incrementVehicleId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MockConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFirmware(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setVehicle(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSendStatusText(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIncrementVehicleId(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *MockConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMockConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int MockConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MockConfiguration::firmwareChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MockConfiguration::vehicleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MockConfiguration::sendStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MockConfiguration::incrementVehicleIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMockLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMockLinkENDCLASS = QtMocHelpers::stringData(
    "MockLink",
    "writeBytesQueuedSignal",
    "",
    "bytes",
    "highLatencyTransmissionEnabledChanged",
    "highLatencyTransmissionEnabled",
    "_writeBytes",
    "_writeBytesQueued",
    "_run1HzTasks",
    "_run10HzTasks",
    "_run500HzTasks",
    "_sendStatusTextMessages",
    "setCommLost",
    "commLost",
    "simulateConnectionRemoved"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMockLinkENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[9];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[38];
    char stringdata5[31];
    char stringdata6[12];
    char stringdata7[18];
    char stringdata8[13];
    char stringdata9[14];
    char stringdata10[15];
    char stringdata11[24];
    char stringdata12[12];
    char stringdata13[9];
    char stringdata14[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMockLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMockLinkENDCLASS_t qt_meta_stringdata_CLASSMockLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "MockLink"
        QT_MOC_LITERAL(9, 22),  // "writeBytesQueuedSignal"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 5),  // "bytes"
        QT_MOC_LITERAL(39, 37),  // "highLatencyTransmissionEnable..."
        QT_MOC_LITERAL(77, 30),  // "highLatencyTransmissionEnabled"
        QT_MOC_LITERAL(108, 11),  // "_writeBytes"
        QT_MOC_LITERAL(120, 17),  // "_writeBytesQueued"
        QT_MOC_LITERAL(138, 12),  // "_run1HzTasks"
        QT_MOC_LITERAL(151, 13),  // "_run10HzTasks"
        QT_MOC_LITERAL(165, 14),  // "_run500HzTasks"
        QT_MOC_LITERAL(180, 23),  // "_sendStatusTextMessages"
        QT_MOC_LITERAL(204, 11),  // "setCommLost"
        QT_MOC_LITERAL(216, 8),  // "commLost"
        QT_MOC_LITERAL(225, 25)   // "simulateConnectionRemoved"
    },
    "MockLink",
    "writeBytesQueuedSignal",
    "",
    "bytes",
    "highLatencyTransmissionEnabledChanged",
    "highLatencyTransmissionEnabled",
    "_writeBytes",
    "_writeBytesQueued",
    "_run1HzTasks",
    "_run10HzTasks",
    "_run500HzTasks",
    "_sendStatusTextMessages",
    "setCommLost",
    "commLost",
    "simulateConnectionRemoved"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMockLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   80,    2, 0x08,    5 /* Private */,
       7,    1,   83,    2, 0x08,    7 /* Private */,
       8,    0,   86,    2, 0x08,    9 /* Private */,
       9,    0,   87,    2, 0x08,   10 /* Private */,
      10,    0,   88,    2, 0x08,   11 /* Private */,
      11,    0,   89,    2, 0x08,   12 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   90,    2, 0x02,   13 /* Public */,
      14,    0,   93,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MockLink::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSMockLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMockLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMockLinkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MockLink, std::true_type>,
        // method 'writeBytesQueuedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>,
        // method 'highLatencyTransmissionEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_writeBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>,
        // method '_writeBytesQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray, std::false_type>,
        // method '_run1HzTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_run10HzTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_run500HzTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendStatusTextMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCommLost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'simulateConnectionRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MockLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MockLink *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeBytesQueuedSignal((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->highLatencyTransmissionEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->_writeBytes((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->_writeBytesQueued((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->_run1HzTasks(); break;
        case 5: _t->_run10HzTasks(); break;
        case 6: _t->_run500HzTasks(); break;
        case 7: _t->_sendStatusTextMessages(); break;
        case 8: _t->setCommLost((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->simulateConnectionRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MockLink::*)(const QByteArray );
            if (_t _q_method = &MockLink::writeBytesQueuedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MockLink::*)(bool );
            if (_t _q_method = &MockLink::highLatencyTransmissionEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MockLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMockLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int MockLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MockLink::writeBytesQueuedSignal(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MockLink::highLatencyTransmissionEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
