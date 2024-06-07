/****************************************************************************
** Meta object code from reading C++ file 'TakeoffMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/TakeoffMissionItem.h"
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
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TakeoffMissionItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS = QtMocHelpers::stringData(
    "TakeoffMissionItem",
    "launchCoordinateChanged",
    "",
    "QGeoCoordinate",
    "launchCoordinate",
    "launchTakeoffAtSameLocationChanged",
    "launchTakeoffAtSameLocation"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[17];
    char stringdata5[35];
    char stringdata6[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS_t qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "TakeoffMissionItem"
        QT_MOC_LITERAL(19, 23),  // "launchCoordinateChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(59, 16),  // "launchCoordinate"
        QT_MOC_LITERAL(76, 34),  // "launchTakeoffAtSameLocationCh..."
        QT_MOC_LITERAL(111, 27)   // "launchTakeoffAtSameLocation"
    },
    "TakeoffMissionItem",
    "launchCoordinateChanged",
    "",
    "QGeoCoordinate",
    "launchCoordinate",
    "launchTakeoffAtSameLocationChanged",
    "launchTakeoffAtSameLocation"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTakeoffMissionItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    3 /* Public */,
       5,    1,   29,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,
       6, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TakeoffMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTakeoffMissionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS_t,
        // property 'launchCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'launchTakeoffAtSameLocation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TakeoffMissionItem, std::true_type>,
        // method 'launchCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'launchTakeoffAtSameLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void TakeoffMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TakeoffMissionItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->launchCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->launchTakeoffAtSameLocationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TakeoffMissionItem::*)(const QGeoCoordinate & );
            if (_t _q_method = &TakeoffMissionItem::launchCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TakeoffMissionItem::*)(bool );
            if (_t _q_method = &TakeoffMissionItem::launchTakeoffAtSameLocationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TakeoffMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->launchCoordinate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->launchTakeoffAtSameLocation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TakeoffMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLaunchCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setLaunchTakeoffAtSameLocation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *TakeoffMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakeoffMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTakeoffMissionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SimpleMissionItem::qt_metacast(_clname);
}

int TakeoffMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TakeoffMissionItem::launchCoordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TakeoffMissionItem::launchTakeoffAtSameLocationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
