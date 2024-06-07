/****************************************************************************
** Meta object code from reading C++ file 'VehicleGPSFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleGPSFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleGPSFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleGPSFactGroup",
    "lat",
    "Fact*",
    "lon",
    "mgrs",
    "hdop",
    "vdop",
    "courseOverGround",
    "count",
    "lock"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[4];
    char stringdata2[6];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[17];
    char stringdata8[6];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "VehicleGPSFactGroup"
        QT_MOC_LITERAL(20, 3),  // "lat"
        QT_MOC_LITERAL(24, 5),  // "Fact*"
        QT_MOC_LITERAL(30, 3),  // "lon"
        QT_MOC_LITERAL(34, 4),  // "mgrs"
        QT_MOC_LITERAL(39, 4),  // "hdop"
        QT_MOC_LITERAL(44, 4),  // "vdop"
        QT_MOC_LITERAL(49, 16),  // "courseOverGround"
        QT_MOC_LITERAL(66, 5),  // "count"
        QT_MOC_LITERAL(72, 4)   // "lock"
    },
    "VehicleGPSFactGroup",
    "lat",
    "Fact*",
    "lon",
    "mgrs",
    "hdop",
    "vdop",
    "courseOverGround",
    "count",
    "lock"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleGPSFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
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
       8, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleGPSFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleGPSFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS_t,
        // property 'lat'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'lon'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'mgrs'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'hdop'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'vdop'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'courseOverGround'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'lock'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleGPSFactGroup, std::true_type>
    >,
    nullptr
} };

void VehicleGPSFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<VehicleGPSFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->lat(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->lon(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->mgrs(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->hdop(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->vdop(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->courseOverGround(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->count(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->lock(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *VehicleGPSFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleGPSFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleGPSFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleGPSFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
