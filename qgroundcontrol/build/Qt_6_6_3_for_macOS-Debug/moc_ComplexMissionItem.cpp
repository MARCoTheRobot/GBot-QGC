/****************************************************************************
** Meta object code from reading C++ file 'ComplexMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/ComplexMissionItem.h"
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
#error "The header file 'ComplexMissionItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSComplexMissionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSComplexMissionItemENDCLASS = QtMocHelpers::stringData(
    "ComplexMissionItem",
    "complexDistanceChanged",
    "",
    "boundingCubeChanged",
    "greatestDistanceToChanged",
    "presetNamesChanged",
    "isIncompleteChanged",
    "minAMSLAltitudeChanged",
    "maxAMSLAltitudeChanged",
    "terrainCollisionChanged",
    "terrainCollision",
    "_segmentTerrainCollisionChanged",
    "loadPreset",
    "name",
    "savePreset",
    "deletePreset",
    "patternName",
    "complexDistance",
    "presetsSupported",
    "presetNames",
    "isIncomplete",
    "minAMSLAltitude",
    "maxAMSLAltitude",
    "isSingleItem",
    "flightPathSegments",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSComplexMissionItemENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[19];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[26];
    char stringdata5[19];
    char stringdata6[20];
    char stringdata7[23];
    char stringdata8[23];
    char stringdata9[24];
    char stringdata10[17];
    char stringdata11[32];
    char stringdata12[11];
    char stringdata13[5];
    char stringdata14[11];
    char stringdata15[13];
    char stringdata16[12];
    char stringdata17[16];
    char stringdata18[17];
    char stringdata19[12];
    char stringdata20[13];
    char stringdata21[16];
    char stringdata22[16];
    char stringdata23[13];
    char stringdata24[19];
    char stringdata25[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSComplexMissionItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSComplexMissionItemENDCLASS_t qt_meta_stringdata_CLASSComplexMissionItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ComplexMissionItem"
        QT_MOC_LITERAL(19, 22),  // "complexDistanceChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 19),  // "boundingCubeChanged"
        QT_MOC_LITERAL(63, 25),  // "greatestDistanceToChanged"
        QT_MOC_LITERAL(89, 18),  // "presetNamesChanged"
        QT_MOC_LITERAL(108, 19),  // "isIncompleteChanged"
        QT_MOC_LITERAL(128, 22),  // "minAMSLAltitudeChanged"
        QT_MOC_LITERAL(151, 22),  // "maxAMSLAltitudeChanged"
        QT_MOC_LITERAL(174, 23),  // "terrainCollisionChanged"
        QT_MOC_LITERAL(198, 16),  // "terrainCollision"
        QT_MOC_LITERAL(215, 31),  // "_segmentTerrainCollisionChanged"
        QT_MOC_LITERAL(247, 10),  // "loadPreset"
        QT_MOC_LITERAL(258, 4),  // "name"
        QT_MOC_LITERAL(263, 10),  // "savePreset"
        QT_MOC_LITERAL(274, 12),  // "deletePreset"
        QT_MOC_LITERAL(287, 11),  // "patternName"
        QT_MOC_LITERAL(299, 15),  // "complexDistance"
        QT_MOC_LITERAL(315, 16),  // "presetsSupported"
        QT_MOC_LITERAL(332, 11),  // "presetNames"
        QT_MOC_LITERAL(344, 12),  // "isIncomplete"
        QT_MOC_LITERAL(357, 15),  // "minAMSLAltitude"
        QT_MOC_LITERAL(373, 15),  // "maxAMSLAltitude"
        QT_MOC_LITERAL(389, 12),  // "isSingleItem"
        QT_MOC_LITERAL(402, 18),  // "flightPathSegments"
        QT_MOC_LITERAL(421, 19)   // "QmlObjectListModel*"
    },
    "ComplexMissionItem",
    "complexDistanceChanged",
    "",
    "boundingCubeChanged",
    "greatestDistanceToChanged",
    "presetNamesChanged",
    "isIncompleteChanged",
    "minAMSLAltitudeChanged",
    "maxAMSLAltitudeChanged",
    "terrainCollisionChanged",
    "terrainCollision",
    "_segmentTerrainCollisionChanged",
    "loadPreset",
    "name",
    "savePreset",
    "deletePreset",
    "patternName",
    "complexDistance",
    "presetsSupported",
    "presetNames",
    "isIncomplete",
    "minAMSLAltitude",
    "maxAMSLAltitude",
    "isSingleItem",
    "flightPathSegments",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSComplexMissionItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      10,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,   11 /* Public */,
       3,    0,   87,    2, 0x06,   12 /* Public */,
       4,    0,   88,    2, 0x06,   13 /* Public */,
       5,    0,   89,    2, 0x06,   14 /* Public */,
       6,    0,   90,    2, 0x06,   15 /* Public */,
       7,    0,   91,    2, 0x06,   16 /* Public */,
       8,    0,   92,    2, 0x06,   17 /* Public */,
       9,    1,   93,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   96,    2, 0x09,   20 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   99,    2, 0x02,   22 /* Public */,
      14,    1,  102,    2, 0x02,   24 /* Public */,
      15,    1,  105,    2, 0x02,   26 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00015401, uint(-1), 0,
      17, QMetaType::Double, 0x00015001, uint(0), 0,
      18, QMetaType::Bool, 0x00015401, uint(-1), 0,
      19, QMetaType::QStringList, 0x00015001, uint(3), 0,
      20, QMetaType::Bool, 0x00015001, uint(4), 0,
      21, QMetaType::Double, 0x00015001, uint(5), 0,
      22, QMetaType::Double, 0x00015001, uint(6), 0,
      23, QMetaType::Bool, 0x00015401, uint(-1), 0,
      24, 0x80000000 | 25, 0x00015409, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ComplexMissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<VisualMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSComplexMissionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSComplexMissionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSComplexMissionItemENDCLASS_t,
        // property 'patternName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'complexDistance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'presetsSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'presetNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'isIncomplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minAMSLAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maxAMSLAltitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'isSingleItem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flightPathSegments'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'terrainCollision'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ComplexMissionItem, std::true_type>,
        // method 'complexDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'boundingCubeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'greatestDistanceToChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'presetNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isIncompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minAMSLAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxAMSLAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_segmentTerrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadPreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'savePreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deletePreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ComplexMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComplexMissionItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->complexDistanceChanged(); break;
        case 1: _t->boundingCubeChanged(); break;
        case 2: _t->greatestDistanceToChanged(); break;
        case 3: _t->presetNamesChanged(); break;
        case 4: _t->isIncompleteChanged(); break;
        case 5: _t->minAMSLAltitudeChanged(); break;
        case 6: _t->maxAMSLAltitudeChanged(); break;
        case 7: _t->terrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->_segmentTerrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->loadPreset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->savePreset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->deletePreset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::complexDistanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::boundingCubeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::greatestDistanceToChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::presetNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::isIncompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::minAMSLAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)();
            if (_t _q_method = &ComplexMissionItem::maxAMSLAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ComplexMissionItem::*)(bool );
            if (_t _q_method = &ComplexMissionItem::terrainCollisionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ComplexMissionItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->patternName(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->complexDistance(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->presetsSupported(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->presetNames(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isIncomplete(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->minAMSLAltitude(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->maxAMSLAltitude(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isSingleItem(); break;
        case 8: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->flightPathSegments(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->terrainCollision(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ComplexMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComplexMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSComplexMissionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return VisualMissionItem::qt_metacast(_clname);
}

int ComplexMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisualMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ComplexMissionItem::complexDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComplexMissionItem::boundingCubeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComplexMissionItem::greatestDistanceToChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ComplexMissionItem::presetNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ComplexMissionItem::isIncompleteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ComplexMissionItem::minAMSLAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ComplexMissionItem::maxAMSLAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ComplexMissionItem::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
