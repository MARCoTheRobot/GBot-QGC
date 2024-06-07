/****************************************************************************
** Meta object code from reading C++ file 'VehicleTemperatureFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleTemperatureFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleTemperatureFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleTemperatureFactGroup",
    "temperature1",
    "Fact*",
    "temperature2",
    "temperature3"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[28];
    char stringdata1[13];
    char stringdata2[6];
    char stringdata3[13];
    char stringdata4[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "VehicleTemperatureFactGroup"
        QT_MOC_LITERAL(28, 12),  // "temperature1"
        QT_MOC_LITERAL(41, 5),  // "Fact*"
        QT_MOC_LITERAL(47, 12),  // "temperature2"
        QT_MOC_LITERAL(60, 12)   // "temperature3"
    },
    "VehicleTemperatureFactGroup",
    "temperature1",
    "Fact*",
    "temperature2",
    "temperature3"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleTemperatureFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleTemperatureFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleTemperatureFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS_t,
        // property 'temperature1'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'temperature2'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'temperature3'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleTemperatureFactGroup, std::true_type>
    >,
    nullptr
} };

void VehicleTemperatureFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleTemperatureFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->temperature1(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->temperature2(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->temperature3(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *VehicleTemperatureFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleTemperatureFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleTemperatureFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleTemperatureFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
