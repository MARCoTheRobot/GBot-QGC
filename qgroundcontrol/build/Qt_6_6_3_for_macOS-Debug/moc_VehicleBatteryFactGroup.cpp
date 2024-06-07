/****************************************************************************
** Meta object code from reading C++ file 'VehicleBatteryFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleBatteryFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleBatteryFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleBatteryFactGroup",
    "_timeRemainingChanged",
    "",
    "value",
    "id",
    "Fact*",
    "function",
    "type",
    "temperature",
    "voltage",
    "current",
    "mahConsumed",
    "percentRemaining",
    "timeRemaining",
    "timeRemainingStr",
    "chargeState",
    "instantPower"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[24];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[3];
    char stringdata5[6];
    char stringdata6[9];
    char stringdata7[5];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[12];
    char stringdata12[17];
    char stringdata13[14];
    char stringdata14[17];
    char stringdata15[12];
    char stringdata16[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "VehicleBatteryFactGroup"
        QT_MOC_LITERAL(24, 21),  // "_timeRemainingChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5),  // "value"
        QT_MOC_LITERAL(53, 2),  // "id"
        QT_MOC_LITERAL(56, 5),  // "Fact*"
        QT_MOC_LITERAL(62, 8),  // "function"
        QT_MOC_LITERAL(71, 4),  // "type"
        QT_MOC_LITERAL(76, 11),  // "temperature"
        QT_MOC_LITERAL(88, 7),  // "voltage"
        QT_MOC_LITERAL(96, 7),  // "current"
        QT_MOC_LITERAL(104, 11),  // "mahConsumed"
        QT_MOC_LITERAL(116, 16),  // "percentRemaining"
        QT_MOC_LITERAL(133, 13),  // "timeRemaining"
        QT_MOC_LITERAL(147, 16),  // "timeRemainingStr"
        QT_MOC_LITERAL(164, 11),  // "chargeState"
        QT_MOC_LITERAL(176, 12)   // "instantPower"
    },
    "VehicleBatteryFactGroup",
    "_timeRemainingChanged",
    "",
    "value",
    "id",
    "Fact*",
    "function",
    "type",
    "temperature",
    "voltage",
    "current",
    "mahConsumed",
    "percentRemaining",
    "timeRemaining",
    "timeRemainingStr",
    "chargeState",
    "instantPower"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleBatteryFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      12,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      16, 0x80000000 | 5, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleBatteryFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleBatteryFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'function'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'temperature'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'voltage'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'current'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'mahConsumed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'percentRemaining'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'timeRemaining'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'timeRemainingStr'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'chargeState'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'instantPower'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleBatteryFactGroup, std::true_type>,
        // method '_timeRemainingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void VehicleBatteryFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleBatteryFactGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_timeRemainingChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleBatteryFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->function(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->temperature(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->voltage(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->current(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->mahConsumed(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->percentRemaining(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->timeRemaining(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->timeRemainingStr(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->chargeState(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->instantPower(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VehicleBatteryFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleBatteryFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleBatteryFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleBatteryFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
