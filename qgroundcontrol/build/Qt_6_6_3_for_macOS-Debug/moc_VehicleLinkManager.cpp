/****************************************************************************
** Meta object code from reading C++ file 'VehicleLinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/VehicleLinkManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleLinkManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS = QtMocHelpers::stringData(
    "VehicleLinkManager",
    "primaryLinkChanged",
    "",
    "allLinksRemoved",
    "Vehicle*",
    "vehicle",
    "communicationLostChanged",
    "communicationLost",
    "communicationLostEnabledChanged",
    "communicationLostEnabled",
    "linkNamesChanged",
    "linkStatusesChanged",
    "autoDisconnectChanged",
    "autoDisconnect",
    "_commLostCheck",
    "primaryLinkIsPX4Flow",
    "primaryLinkName",
    "linkNames",
    "linkStatuses"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[25];
    char stringdata7[18];
    char stringdata8[32];
    char stringdata9[25];
    char stringdata10[17];
    char stringdata11[20];
    char stringdata12[22];
    char stringdata13[15];
    char stringdata14[15];
    char stringdata15[21];
    char stringdata16[16];
    char stringdata17[10];
    char stringdata18[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS_t qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "VehicleLinkManager"
        QT_MOC_LITERAL(19, 18),  // "primaryLinkChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 15),  // "allLinksRemoved"
        QT_MOC_LITERAL(55, 8),  // "Vehicle*"
        QT_MOC_LITERAL(64, 7),  // "vehicle"
        QT_MOC_LITERAL(72, 24),  // "communicationLostChanged"
        QT_MOC_LITERAL(97, 17),  // "communicationLost"
        QT_MOC_LITERAL(115, 31),  // "communicationLostEnabledChanged"
        QT_MOC_LITERAL(147, 24),  // "communicationLostEnabled"
        QT_MOC_LITERAL(172, 16),  // "linkNamesChanged"
        QT_MOC_LITERAL(189, 19),  // "linkStatusesChanged"
        QT_MOC_LITERAL(209, 21),  // "autoDisconnectChanged"
        QT_MOC_LITERAL(231, 14),  // "autoDisconnect"
        QT_MOC_LITERAL(246, 14),  // "_commLostCheck"
        QT_MOC_LITERAL(261, 20),  // "primaryLinkIsPX4Flow"
        QT_MOC_LITERAL(282, 15),  // "primaryLinkName"
        QT_MOC_LITERAL(298, 9),  // "linkNames"
        QT_MOC_LITERAL(308, 12)   // "linkStatuses"
    },
    "VehicleLinkManager",
    "primaryLinkChanged",
    "",
    "allLinksRemoved",
    "Vehicle*",
    "vehicle",
    "communicationLostChanged",
    "communicationLost",
    "communicationLostEnabledChanged",
    "communicationLostEnabled",
    "linkNamesChanged",
    "linkStatusesChanged",
    "autoDisconnectChanged",
    "autoDisconnect",
    "_commLostCheck",
    "primaryLinkIsPX4Flow",
    "primaryLinkName",
    "linkNames",
    "linkStatuses"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleLinkManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    8 /* Public */,
       3,    1,   63,    2, 0x06,    9 /* Public */,
       6,    1,   66,    2, 0x06,   11 /* Public */,
       8,    1,   69,    2, 0x06,   13 /* Public */,
      10,    0,   72,    2, 0x06,   15 /* Public */,
      11,    0,   73,    2, 0x06,   16 /* Public */,
      12,    1,   74,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,   77,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00015001, uint(0), 0,
      16, QMetaType::QString, 0x00015003, uint(0), 0,
      17, QMetaType::QStringList, 0x00015001, uint(4), 0,
      18, QMetaType::QStringList, 0x00015001, uint(5), 0,
       7, QMetaType::Bool, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,
      13, QMetaType::Bool, 0x00015003, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleLinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleLinkManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS_t,
        // property 'primaryLinkIsPX4Flow'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'primaryLinkName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'linkNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'linkStatuses'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'communicationLost'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'communicationLostEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoDisconnect'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleLinkManager, std::true_type>,
        // method 'primaryLinkChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allLinksRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'communicationLostChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'communicationLostEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'linkNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'linkStatusesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoDisconnectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_commLostCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VehicleLinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->primaryLinkChanged(); break;
        case 1: _t->allLinksRemoved((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 2: _t->communicationLostChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->communicationLostEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->linkNamesChanged(); break;
        case 5: _t->linkStatusesChanged(); break;
        case 6: _t->autoDisconnectChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->_commLostCheck(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleLinkManager::*)();
            if (_t _q_method = &VehicleLinkManager::primaryLinkChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(Vehicle * );
            if (_t _q_method = &VehicleLinkManager::allLinksRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (_t _q_method = &VehicleLinkManager::communicationLostChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (_t _q_method = &VehicleLinkManager::communicationLostEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)();
            if (_t _q_method = &VehicleLinkManager::linkNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)();
            if (_t _q_method = &VehicleLinkManager::linkStatusesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VehicleLinkManager::*)(bool );
            if (_t _q_method = &VehicleLinkManager::autoDisconnectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->primaryLinkIsPX4Flow(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->primaryLinkName(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->linkNames(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->linkStatuses(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->communicationLost(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->communicationLostEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->_autoDisconnect; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VehicleLinkManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPrimaryLinkByName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCommunicationLostEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->_autoDisconnect != *reinterpret_cast< bool*>(_v)) {
                _t->_autoDisconnect = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->autoDisconnectChanged(_t->_autoDisconnect);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VehicleLinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleLinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleLinkManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleLinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VehicleLinkManager::primaryLinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VehicleLinkManager::allLinksRemoved(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VehicleLinkManager::communicationLostChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VehicleLinkManager::communicationLostEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VehicleLinkManager::linkNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VehicleLinkManager::linkStatusesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VehicleLinkManager::autoDisconnectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
