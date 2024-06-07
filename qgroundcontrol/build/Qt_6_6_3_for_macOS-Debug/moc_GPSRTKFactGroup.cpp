/****************************************************************************
** Meta object code from reading C++ file 'GPSRTKFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/GPSRTKFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSRTKFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS = QtMocHelpers::stringData(
    "GPSRTKFactGroup",
    "connected",
    "Fact*",
    "currentDuration",
    "currentAccuracy",
    "currentLatitude",
    "currentLongitude",
    "currentAltitude",
    "valid",
    "active",
    "numSatellites"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[6];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[6];
    char stringdata9[7];
    char stringdata10[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS_t qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "GPSRTKFactGroup"
        QT_MOC_LITERAL(16, 9),  // "connected"
        QT_MOC_LITERAL(26, 5),  // "Fact*"
        QT_MOC_LITERAL(32, 15),  // "currentDuration"
        QT_MOC_LITERAL(48, 15),  // "currentAccuracy"
        QT_MOC_LITERAL(64, 15),  // "currentLatitude"
        QT_MOC_LITERAL(80, 16),  // "currentLongitude"
        QT_MOC_LITERAL(97, 15),  // "currentAltitude"
        QT_MOC_LITERAL(113, 5),  // "valid"
        QT_MOC_LITERAL(119, 6),  // "active"
        QT_MOC_LITERAL(126, 13)   // "numSatellites"
    },
    "GPSRTKFactGroup",
    "connected",
    "Fact*",
    "currentDuration",
    "currentAccuracy",
    "currentLatitude",
    "currentLongitude",
    "currentAltitude",
    "valid",
    "active",
    "numSatellites"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGPSRTKFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
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
      10, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GPSRTKFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGPSRTKFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS_t,
        // property 'connected'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'currentDuration'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'currentAccuracy'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'currentLatitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'currentLongitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'currentAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'valid'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'active'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'numSatellites'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GPSRTKFactGroup, std::true_type>
    >,
    nullptr
} };

void GPSRTKFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<GPSRTKFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->connected(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->currentDuration(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->currentAccuracy(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->currentLatitude(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->currentLongitude(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->currentAltitude(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->valid(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->active(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->numSatellites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *GPSRTKFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSRTKFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGPSRTKFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int GPSRTKFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
