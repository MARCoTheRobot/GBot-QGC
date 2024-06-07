/****************************************************************************
** Meta object code from reading C++ file 'CorridorScanComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CorridorScanComplexItem.h"
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
#error "The header file 'CorridorScanComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS = QtMocHelpers::stringData(
    "CorridorScanComplexItem",
    "_polylineDirtyChanged",
    "",
    "dirty",
    "_rebuildCorridorPolygon",
    "_updateWizardMode",
    "_rebuildTransectsPhase1",
    "_recalcCameraShots",
    "rotateEntryPoint",
    "corridorPolyline",
    "QGCMapPolyline*",
    "corridorWidth",
    "Fact*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[24];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[24];
    char stringdata5[18];
    char stringdata6[24];
    char stringdata7[19];
    char stringdata8[17];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[14];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS_t qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "CorridorScanComplexItem"
        QT_MOC_LITERAL(24, 21),  // "_polylineDirtyChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5),  // "dirty"
        QT_MOC_LITERAL(53, 23),  // "_rebuildCorridorPolygon"
        QT_MOC_LITERAL(77, 17),  // "_updateWizardMode"
        QT_MOC_LITERAL(95, 23),  // "_rebuildTransectsPhase1"
        QT_MOC_LITERAL(119, 18),  // "_recalcCameraShots"
        QT_MOC_LITERAL(138, 16),  // "rotateEntryPoint"
        QT_MOC_LITERAL(155, 16),  // "corridorPolyline"
        QT_MOC_LITERAL(172, 15),  // "QGCMapPolyline*"
        QT_MOC_LITERAL(188, 13),  // "corridorWidth"
        QT_MOC_LITERAL(202, 5)   // "Fact*"
    },
    "CorridorScanComplexItem",
    "_polylineDirtyChanged",
    "",
    "dirty",
    "_rebuildCorridorPolygon",
    "_updateWizardMode",
    "_rebuildTransectsPhase1",
    "_recalcCameraShots",
    "rotateEntryPoint",
    "corridorPolyline",
    "QGCMapPolyline*",
    "corridorWidth",
    "Fact*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCorridorScanComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    3 /* Private */,
       4,    0,   53,    2, 0x08,    5 /* Private */,
       5,    0,   54,    2, 0x08,    6 /* Private */,
       6,    0,   55,    2, 0x08,    7 /* Private */,
       7,    0,   56,    2, 0x08,    8 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   57,    2, 0x02,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 12, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CorridorScanComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<TransectStyleComplexItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCorridorScanComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS_t,
        // property 'corridorPolyline'
        QtPrivate::TypeAndForceComplete<QGCMapPolyline*, std::true_type>,
        // property 'corridorWidth'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CorridorScanComplexItem, std::true_type>,
        // method '_polylineDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_rebuildCorridorPolygon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateWizardMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rebuildTransectsPhase1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcCameraShots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotateEntryPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CorridorScanComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorridorScanComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_polylineDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->_rebuildCorridorPolygon(); break;
        case 2: _t->_updateWizardMode(); break;
        case 3: _t->_rebuildTransectsPhase1(); break;
        case 4: _t->_recalcCameraShots(); break;
        case 5: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolyline* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CorridorScanComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGCMapPolyline**>(_v) = _t->corridorPolyline(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->corridorWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CorridorScanComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorridorScanComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCorridorScanComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int CorridorScanComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
