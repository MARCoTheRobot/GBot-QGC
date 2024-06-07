/****************************************************************************
** Meta object code from reading C++ file 'FixedWingLandingComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/FixedWingLandingComplexItem.h"
#include "ADSBVehicleManager.h"
#include "FactGroup.h"
#include "LinkManager.h"
#include "MAVLinkLogManager.h"
#include "MissionCommandTree.h"
#include "MultiVehicleManager.h"
#include "QGCCorePlugin.h"
#include "QGCMapEngineManager.h"
#include "QGCPalette.h"
#include "PositionManager.h"
#include "SettingsManager.h"
#include "VideoManager.h"
#include "AirLinkManager.h"
#include <QtNetwork/QSslError>
#include "MissionItem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FixedWingLandingComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS = QtMocHelpers::stringData(
    "FixedWingLandingComplexItem",
    "_updateFlightPathSegmentsDontCallDirectly",
    "",
    "_glideSlopeChanged",
    "moveLandingPosition",
    "QGeoCoordinate",
    "coordinate",
    "valueSetIsDistance",
    "Fact*",
    "glideSlope"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[28];
    char stringdata1[42];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[20];
    char stringdata5[15];
    char stringdata6[11];
    char stringdata7[19];
    char stringdata8[6];
    char stringdata9[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS_t qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "FixedWingLandingComplexItem"
        QT_MOC_LITERAL(28, 41),  // "_updateFlightPathSegmentsDont..."
        QT_MOC_LITERAL(70, 0),  // ""
        QT_MOC_LITERAL(71, 18),  // "_glideSlopeChanged"
        QT_MOC_LITERAL(90, 19),  // "moveLandingPosition"
        QT_MOC_LITERAL(110, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(125, 10),  // "coordinate"
        QT_MOC_LITERAL(136, 18),  // "valueSetIsDistance"
        QT_MOC_LITERAL(155, 5),  // "Fact*"
        QT_MOC_LITERAL(161, 10)   // "glideSlope"
    },
    "FixedWingLandingComplexItem",
    "_updateFlightPathSegmentsDontCallDirectly",
    "",
    "_glideSlopeChanged",
    "moveLandingPosition",
    "QGeoCoordinate",
    "coordinate",
    "valueSetIsDistance",
    "Fact*",
    "glideSlope"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFixedWingLandingComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    3 /* Private */,
       3,    0,   33,    2, 0x08,    4 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   34,    2, 0x02,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 8, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FixedWingLandingComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LandingComplexItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFixedWingLandingComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS_t,
        // property 'valueSetIsDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'glideSlope'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FixedWingLandingComplexItem, std::true_type>,
        // method '_updateFlightPathSegmentsDontCallDirectly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_glideSlopeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveLandingPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>
    >,
    nullptr
} };

void FixedWingLandingComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FixedWingLandingComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 1: _t->_glideSlopeChanged(); break;
        case 2: _t->moveLandingPosition((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FixedWingLandingComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->valueSetIsDistance(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->glideSlope(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FixedWingLandingComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedWingLandingComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFixedWingLandingComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LandingComplexItem::qt_metacast(_clname);
}

int FixedWingLandingComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LandingComplexItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
