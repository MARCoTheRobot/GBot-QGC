/****************************************************************************
** Meta object code from reading C++ file 'VehicleSetpointFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleSetpointFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleSetpointFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleSetpointFactGroup",
    "roll",
    "Fact*",
    "pitch",
    "yaw",
    "rollRate",
    "pitchRate",
    "yawRate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[25];
    char stringdata1[5];
    char stringdata2[6];
    char stringdata3[6];
    char stringdata4[4];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "VehicleSetpointFactGroup"
        QT_MOC_LITERAL(25, 4),  // "roll"
        QT_MOC_LITERAL(30, 5),  // "Fact*"
        QT_MOC_LITERAL(36, 5),  // "pitch"
        QT_MOC_LITERAL(42, 3),  // "yaw"
        QT_MOC_LITERAL(46, 8),  // "rollRate"
        QT_MOC_LITERAL(55, 9),  // "pitchRate"
        QT_MOC_LITERAL(65, 7)   // "yawRate"
    },
    "VehicleSetpointFactGroup",
    "roll",
    "Fact*",
    "pitch",
    "yaw",
    "rollRate",
    "pitchRate",
    "yawRate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleSetpointFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleSetpointFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleSetpointFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS_t,
        // property 'roll'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'pitch'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'yaw'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'rollRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'pitchRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'yawRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleSetpointFactGroup, std::true_type>
    >,
    nullptr
} };

void VehicleSetpointFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleSetpointFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *VehicleSetpointFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleSetpointFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleSetpointFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleSetpointFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
