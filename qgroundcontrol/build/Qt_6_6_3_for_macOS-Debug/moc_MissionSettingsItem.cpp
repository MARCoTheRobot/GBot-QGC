/****************************************************************************
** Meta object code from reading C++ file 'MissionSettingsItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionSettingsItem.h"
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
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionSettingsItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS = QtMocHelpers::stringData(
    "MissionSettingsItem",
    "specifyMissionFlightSpeedChanged",
    "",
    "specifyMissionFlightSpeed",
    "_setDirtyAndUpdateLastSequenceNumber",
    "_setDirty",
    "_sectionDirtyChanged",
    "dirty",
    "_updateAltitudeInCoordinate",
    "value",
    "_setHomeAltFromTerrain",
    "terrainAltitude",
    "_setCoordinateWorker",
    "QGeoCoordinate",
    "coordinate",
    "_updateHomePosition",
    "homePosition",
    "plannedHomePositionAltitude",
    "Fact*",
    "cameraSection",
    "speedSection"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[20];
    char stringdata1[33];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[37];
    char stringdata5[10];
    char stringdata6[21];
    char stringdata7[6];
    char stringdata8[28];
    char stringdata9[6];
    char stringdata10[23];
    char stringdata11[16];
    char stringdata12[21];
    char stringdata13[15];
    char stringdata14[11];
    char stringdata15[20];
    char stringdata16[13];
    char stringdata17[28];
    char stringdata18[6];
    char stringdata19[14];
    char stringdata20[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS_t qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "MissionSettingsItem"
        QT_MOC_LITERAL(20, 32),  // "specifyMissionFlightSpeedChanged"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 25),  // "specifyMissionFlightSpeed"
        QT_MOC_LITERAL(80, 36),  // "_setDirtyAndUpdateLastSequenc..."
        QT_MOC_LITERAL(117, 9),  // "_setDirty"
        QT_MOC_LITERAL(127, 20),  // "_sectionDirtyChanged"
        QT_MOC_LITERAL(148, 5),  // "dirty"
        QT_MOC_LITERAL(154, 27),  // "_updateAltitudeInCoordinate"
        QT_MOC_LITERAL(182, 5),  // "value"
        QT_MOC_LITERAL(188, 22),  // "_setHomeAltFromTerrain"
        QT_MOC_LITERAL(211, 15),  // "terrainAltitude"
        QT_MOC_LITERAL(227, 20),  // "_setCoordinateWorker"
        QT_MOC_LITERAL(248, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(263, 10),  // "coordinate"
        QT_MOC_LITERAL(274, 19),  // "_updateHomePosition"
        QT_MOC_LITERAL(294, 12),  // "homePosition"
        QT_MOC_LITERAL(307, 27),  // "plannedHomePositionAltitude"
        QT_MOC_LITERAL(335, 5),  // "Fact*"
        QT_MOC_LITERAL(341, 13),  // "cameraSection"
        QT_MOC_LITERAL(355, 12)   // "speedSection"
    },
    "MissionSettingsItem",
    "specifyMissionFlightSpeedChanged",
    "",
    "specifyMissionFlightSpeed",
    "_setDirtyAndUpdateLastSequenceNumber",
    "_setDirty",
    "_sectionDirtyChanged",
    "dirty",
    "_updateAltitudeInCoordinate",
    "value",
    "_setHomeAltFromTerrain",
    "terrainAltitude",
    "_setCoordinateWorker",
    "QGeoCoordinate",
    "coordinate",
    "_updateHomePosition",
    "homePosition",
    "plannedHomePositionAltitude",
    "Fact*",
    "cameraSection",
    "speedSection"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionSettingsItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   65,    2, 0x08,    6 /* Private */,
       5,    0,   66,    2, 0x08,    7 /* Private */,
       6,    1,   67,    2, 0x08,    8 /* Private */,
       8,    1,   70,    2, 0x08,   10 /* Private */,
      10,    1,   73,    2, 0x08,   12 /* Private */,
      12,    1,   76,    2, 0x08,   14 /* Private */,
      15,    1,   79,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   16,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      19, QMetaType::QObjectStar, 0x00015401, uint(-1), 0,
      20, QMetaType::QObjectStar, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionSettingsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionSettingsItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS_t,
        // property 'plannedHomePositionAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'speedSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionSettingsItem, std::true_type>,
        // method 'specifyMissionFlightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setDirtyAndUpdateLastSequenceNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sectionDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateAltitudeInCoordinate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_setHomeAltFromTerrain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_setCoordinateWorker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method '_updateHomePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>
    >,
    nullptr
} };

void MissionSettingsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->specifyMissionFlightSpeedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->_setDirtyAndUpdateLastSequenceNumber(); break;
        case 2: _t->_setDirty(); break;
        case 3: _t->_sectionDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->_updateAltitudeInCoordinate((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 5: _t->_setHomeAltFromTerrain((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->_setCoordinateWorker((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 7: _t->_updateHomePosition((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
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
            using _t = void (MissionSettingsItem::*)(bool );
            if (_t _q_method = &MissionSettingsItem::specifyMissionFlightSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionSettingsItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->plannedHomePositionAltitude(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->cameraSection(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->speedSection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MissionSettingsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionSettingsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionSettingsItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int MissionSettingsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MissionSettingsItem::specifyMissionFlightSpeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
