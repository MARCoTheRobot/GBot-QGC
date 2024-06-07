/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Comms/LinkManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLinkManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLinkManagerENDCLASS = QtMocHelpers::stringData(
    "LinkManager",
    "mavlinkSupportForwardingEnabledChanged",
    "",
    "isBluetoothAvailableChanged",
    "commPortStringsChanged",
    "commPortsChanged",
    "_linkDisconnected",
    "createConfiguration",
    "LinkConfiguration*",
    "type",
    "name",
    "startConfigurationEditing",
    "config",
    "cancelConfigurationEditing",
    "endConfigurationEditing",
    "editedConfig",
    "endCreateConfiguration",
    "removeConfiguration",
    "createMavlinkForwardingSupportLink",
    "shutdown",
    "startLogReplay",
    "LogReplayLink*",
    "logFile",
    "createConnectedLink",
    "isBluetoothAvailable",
    "linkConfigurations",
    "QmlObjectListModel*",
    "linkTypeStrings",
    "mavlinkSupportForwardingEnabled",
    "serialBaudRates",
    "serialPortStrings",
    "serialPorts"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLinkManagerENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[12];
    char stringdata1[39];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[23];
    char stringdata5[17];
    char stringdata6[18];
    char stringdata7[20];
    char stringdata8[19];
    char stringdata9[5];
    char stringdata10[5];
    char stringdata11[26];
    char stringdata12[7];
    char stringdata13[27];
    char stringdata14[24];
    char stringdata15[13];
    char stringdata16[23];
    char stringdata17[20];
    char stringdata18[35];
    char stringdata19[9];
    char stringdata20[15];
    char stringdata21[15];
    char stringdata22[8];
    char stringdata23[20];
    char stringdata24[21];
    char stringdata25[19];
    char stringdata26[20];
    char stringdata27[16];
    char stringdata28[32];
    char stringdata29[16];
    char stringdata30[18];
    char stringdata31[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLinkManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLinkManagerENDCLASS_t qt_meta_stringdata_CLASSLinkManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "LinkManager"
        QT_MOC_LITERAL(12, 38),  // "mavlinkSupportForwardingEnabl..."
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 27),  // "isBluetoothAvailableChanged"
        QT_MOC_LITERAL(80, 22),  // "commPortStringsChanged"
        QT_MOC_LITERAL(103, 16),  // "commPortsChanged"
        QT_MOC_LITERAL(120, 17),  // "_linkDisconnected"
        QT_MOC_LITERAL(138, 19),  // "createConfiguration"
        QT_MOC_LITERAL(158, 18),  // "LinkConfiguration*"
        QT_MOC_LITERAL(177, 4),  // "type"
        QT_MOC_LITERAL(182, 4),  // "name"
        QT_MOC_LITERAL(187, 25),  // "startConfigurationEditing"
        QT_MOC_LITERAL(213, 6),  // "config"
        QT_MOC_LITERAL(220, 26),  // "cancelConfigurationEditing"
        QT_MOC_LITERAL(247, 23),  // "endConfigurationEditing"
        QT_MOC_LITERAL(271, 12),  // "editedConfig"
        QT_MOC_LITERAL(284, 22),  // "endCreateConfiguration"
        QT_MOC_LITERAL(307, 19),  // "removeConfiguration"
        QT_MOC_LITERAL(327, 34),  // "createMavlinkForwardingSuppor..."
        QT_MOC_LITERAL(362, 8),  // "shutdown"
        QT_MOC_LITERAL(371, 14),  // "startLogReplay"
        QT_MOC_LITERAL(386, 14),  // "LogReplayLink*"
        QT_MOC_LITERAL(401, 7),  // "logFile"
        QT_MOC_LITERAL(409, 19),  // "createConnectedLink"
        QT_MOC_LITERAL(429, 20),  // "isBluetoothAvailable"
        QT_MOC_LITERAL(450, 18),  // "linkConfigurations"
        QT_MOC_LITERAL(469, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(489, 15),  // "linkTypeStrings"
        QT_MOC_LITERAL(505, 31),  // "mavlinkSupportForwardingEnabled"
        QT_MOC_LITERAL(537, 15),  // "serialBaudRates"
        QT_MOC_LITERAL(553, 17),  // "serialPortStrings"
        QT_MOC_LITERAL(571, 11)   // "serialPorts"
    },
    "LinkManager",
    "mavlinkSupportForwardingEnabledChanged",
    "",
    "isBluetoothAvailableChanged",
    "commPortStringsChanged",
    "commPortsChanged",
    "_linkDisconnected",
    "createConfiguration",
    "LinkConfiguration*",
    "type",
    "name",
    "startConfigurationEditing",
    "config",
    "cancelConfigurationEditing",
    "endConfigurationEditing",
    "editedConfig",
    "endCreateConfiguration",
    "removeConfiguration",
    "createMavlinkForwardingSupportLink",
    "shutdown",
    "startLogReplay",
    "LogReplayLink*",
    "logFile",
    "createConnectedLink",
    "isBluetoothAvailable",
    "linkConfigurations",
    "QmlObjectListModel*",
    "linkTypeStrings",
    "mavlinkSupportForwardingEnabled",
    "serialBaudRates",
    "serialPortStrings",
    "serialPorts"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLinkManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       7,  139, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    8 /* Public */,
       3,    0,  105,    2, 0x06,    9 /* Public */,
       4,    0,  106,    2, 0x06,   10 /* Public */,
       5,    0,  107,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  108,    2, 0x08,   12 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,  109,    2, 0x02,   13 /* Public */,
      11,    1,  114,    2, 0x02,   16 /* Public */,
      13,    1,  117,    2, 0x02,   18 /* Public */,
      14,    2,  120,    2, 0x02,   20 /* Public */,
      16,    1,  125,    2, 0x02,   23 /* Public */,
      17,    1,  128,    2, 0x02,   25 /* Public */,
      18,    0,  131,    2, 0x02,   27 /* Public */,
      19,    0,  132,    2, 0x02,   28 /* Public */,
      20,    1,  133,    2, 0x02,   29 /* Public */,
      23,    1,  136,    2, 0x02,   31 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 8, QMetaType::Int, QMetaType::QString,    9,   10,
    0x80000000 | 8, 0x80000000 | 8,   12,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 8,   12,   15,
    QMetaType::Bool, 0x80000000 | 8,   12,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 21, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 8,   12,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00015001, uint(1), 0,
      25, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      27, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      28, QMetaType::Bool, 0x00015001, uint(0), 0,
      29, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      30, QMetaType::QStringList, 0x00015001, uint(2), 0,
      31, QMetaType::QStringList, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSLinkManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLinkManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLinkManagerENDCLASS_t,
        // property 'isBluetoothAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'linkConfigurations'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'linkTypeStrings'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'mavlinkSupportForwardingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'serialBaudRates'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'serialPortStrings'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'serialPorts'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkManager, std::true_type>,
        // method 'mavlinkSupportForwardingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isBluetoothAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commPortStringsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commPortsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_linkDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createConfiguration'
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startConfigurationEditing'
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'cancelConfigurationEditing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'endConfigurationEditing'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'endCreateConfiguration'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'removeConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'createMavlinkForwardingSupportLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startLogReplay'
        QtPrivate::TypeAndForceComplete<LogReplayLink *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createConnectedLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>
    >,
    nullptr
} };

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mavlinkSupportForwardingEnabledChanged(); break;
        case 1: _t->isBluetoothAvailableChanged(); break;
        case 2: _t->commPortStringsChanged(); break;
        case 3: _t->commPortsChanged(); break;
        case 4: _t->_linkDisconnected(); break;
        case 5: { LinkConfiguration* _r = _t->createConfiguration((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 6: { LinkConfiguration* _r = _t->startConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->cancelConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1]))); break;
        case 8: { bool _r = _t->endConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->endCreateConfiguration((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->removeConfiguration((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1]))); break;
        case 11: _t->createMavlinkForwardingSupportLink(); break;
        case 12: _t->shutdown(); break;
        case 13: { LogReplayLink* _r = _t->startLogReplay((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< LogReplayLink**>(_a[0]) = std::move(_r); }  break;
        case 14: _t->createConnectedLink((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkManager::*)();
            if (_t _q_method = &LinkManager::mavlinkSupportForwardingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)();
            if (_t _q_method = &LinkManager::isBluetoothAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)();
            if (_t _q_method = &LinkManager::commPortStringsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)();
            if (_t _q_method = &LinkManager::commPortsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBluetoothAvailable(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_qmlLinkConfigurations(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->linkTypeStrings(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mavlinkSupportForwardingEnabled(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->serialBaudRates(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->serialPortStrings(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->serialPorts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLinkManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LinkManager::mavlinkSupportForwardingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LinkManager::isBluetoothAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LinkManager::commPortStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LinkManager::commPortsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
