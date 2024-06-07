/****************************************************************************
** Meta object code from reading C++ file 'SurveyComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SurveyComplexItem.h"
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
#error "The header file 'SurveyComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS = QtMocHelpers::stringData(
    "SurveyComplexItem",
    "refly90DegreesChanged",
    "",
    "refly90Degrees",
    "_updateWizardMode",
    "_rebuildTransectsPhase1",
    "_recalcCameraShots",
    "rotateEntryPoint",
    "gridAngle",
    "Fact*",
    "flyAlternateTransects",
    "splitConcavePolygons",
    "centerCoordinate",
    "QGeoCoordinate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[18];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[24];
    char stringdata6[19];
    char stringdata7[17];
    char stringdata8[10];
    char stringdata9[6];
    char stringdata10[22];
    char stringdata11[21];
    char stringdata12[17];
    char stringdata13[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS_t qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "SurveyComplexItem"
        QT_MOC_LITERAL(18, 21),  // "refly90DegreesChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 14),  // "refly90Degrees"
        QT_MOC_LITERAL(56, 17),  // "_updateWizardMode"
        QT_MOC_LITERAL(74, 23),  // "_rebuildTransectsPhase1"
        QT_MOC_LITERAL(98, 18),  // "_recalcCameraShots"
        QT_MOC_LITERAL(117, 16),  // "rotateEntryPoint"
        QT_MOC_LITERAL(134, 9),  // "gridAngle"
        QT_MOC_LITERAL(144, 5),  // "Fact*"
        QT_MOC_LITERAL(150, 21),  // "flyAlternateTransects"
        QT_MOC_LITERAL(172, 20),  // "splitConcavePolygons"
        QT_MOC_LITERAL(193, 16),  // "centerCoordinate"
        QT_MOC_LITERAL(210, 14)   // "QGeoCoordinate"
    },
    "SurveyComplexItem",
    "refly90DegreesChanged",
    "",
    "refly90Degrees",
    "_updateWizardMode",
    "_rebuildTransectsPhase1",
    "_recalcCameraShots",
    "rotateEntryPoint",
    "gridAngle",
    "Fact*",
    "flyAlternateTransects",
    "splitConcavePolygons",
    "centerCoordinate",
    "QGeoCoordinate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSurveyComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   51, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   47,    2, 0x08,    7 /* Private */,
       5,    0,   48,    2, 0x08,    8 /* Private */,
       6,    0,   49,    2, 0x08,    9 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   50,    2, 0x02,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 9, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 9, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SurveyComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<TransectStyleComplexItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSurveyComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS_t,
        // property 'gridAngle'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'flyAlternateTransects'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'splitConcavePolygons'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'centerCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SurveyComplexItem, std::true_type>,
        // method 'refly90DegreesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
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

void SurveyComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refly90DegreesChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->_updateWizardMode(); break;
        case 2: _t->_rebuildTransectsPhase1(); break;
        case 3: _t->_recalcCameraShots(); break;
        case 4: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SurveyComplexItem::*)(bool );
            if (_t _q_method = &SurveyComplexItem::refly90DegreesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->gridAngle(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->flyAlternateTransects(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->splitConcavePolygons(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->centerCoordinate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SurveyComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCenterCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SurveyComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurveyComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSurveyComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int SurveyComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SurveyComplexItem::refly90DegreesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
