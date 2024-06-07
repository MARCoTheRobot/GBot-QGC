/****************************************************************************
** Meta object code from reading C++ file 'StructureScanComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/StructureScanComplexItem.h"
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
#error "The header file 'StructureScanComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS = QtMocHelpers::stringData(
    "StructureScanComplexItem",
    "cameraShotsChanged",
    "",
    "cameraShots",
    "timeBetweenShotsChanged",
    "bottomFlightAltChanged",
    "topFlightAltChanged",
    "_updateFlightPathSegmentsSignal",
    "_segmentTerrainCollisionChanged",
    "terrainCollision",
    "_setDirty",
    "_polygonDirtyChanged",
    "dirty",
    "_flightPathChanged",
    "_clearInternal",
    "_updateCoordinateAltitudes",
    "_rebuildFlightPolygon",
    "_recalcCameraShots",
    "_recalcLayerInfo",
    "_updateLastSequenceNumber",
    "_updateGimbalPitch",
    "_signalTopBottomAltChanged",
    "_recalcScanDistance",
    "_updateWizardMode",
    "_updateFlightPathSegmentsDontCallDirectly",
    "rotateEntryPoint",
    "cameraCalc",
    "CameraCalc*",
    "entranceAlt",
    "Fact*",
    "structureHeight",
    "scanBottomAlt",
    "layers",
    "gimbalPitch",
    "startFromTop",
    "bottomFlightAlt",
    "topFlightAlt",
    "timeBetweenShots",
    "structurePolygon",
    "QGCMapPolygon*",
    "flightPolygon"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS_t {
    uint offsetsAndSizes[82];
    char stringdata0[25];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[24];
    char stringdata5[23];
    char stringdata6[20];
    char stringdata7[32];
    char stringdata8[32];
    char stringdata9[17];
    char stringdata10[10];
    char stringdata11[21];
    char stringdata12[6];
    char stringdata13[19];
    char stringdata14[15];
    char stringdata15[27];
    char stringdata16[22];
    char stringdata17[19];
    char stringdata18[17];
    char stringdata19[26];
    char stringdata20[19];
    char stringdata21[27];
    char stringdata22[20];
    char stringdata23[18];
    char stringdata24[42];
    char stringdata25[17];
    char stringdata26[11];
    char stringdata27[12];
    char stringdata28[12];
    char stringdata29[6];
    char stringdata30[16];
    char stringdata31[14];
    char stringdata32[7];
    char stringdata33[12];
    char stringdata34[13];
    char stringdata35[16];
    char stringdata36[13];
    char stringdata37[17];
    char stringdata38[17];
    char stringdata39[15];
    char stringdata40[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS_t qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "StructureScanComplexItem"
        QT_MOC_LITERAL(25, 18),  // "cameraShotsChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 11),  // "cameraShots"
        QT_MOC_LITERAL(57, 23),  // "timeBetweenShotsChanged"
        QT_MOC_LITERAL(81, 22),  // "bottomFlightAltChanged"
        QT_MOC_LITERAL(104, 19),  // "topFlightAltChanged"
        QT_MOC_LITERAL(124, 31),  // "_updateFlightPathSegmentsSignal"
        QT_MOC_LITERAL(156, 31),  // "_segmentTerrainCollisionChanged"
        QT_MOC_LITERAL(188, 16),  // "terrainCollision"
        QT_MOC_LITERAL(205, 9),  // "_setDirty"
        QT_MOC_LITERAL(215, 20),  // "_polygonDirtyChanged"
        QT_MOC_LITERAL(236, 5),  // "dirty"
        QT_MOC_LITERAL(242, 18),  // "_flightPathChanged"
        QT_MOC_LITERAL(261, 14),  // "_clearInternal"
        QT_MOC_LITERAL(276, 26),  // "_updateCoordinateAltitudes"
        QT_MOC_LITERAL(303, 21),  // "_rebuildFlightPolygon"
        QT_MOC_LITERAL(325, 18),  // "_recalcCameraShots"
        QT_MOC_LITERAL(344, 16),  // "_recalcLayerInfo"
        QT_MOC_LITERAL(361, 25),  // "_updateLastSequenceNumber"
        QT_MOC_LITERAL(387, 18),  // "_updateGimbalPitch"
        QT_MOC_LITERAL(406, 26),  // "_signalTopBottomAltChanged"
        QT_MOC_LITERAL(433, 19),  // "_recalcScanDistance"
        QT_MOC_LITERAL(453, 17),  // "_updateWizardMode"
        QT_MOC_LITERAL(471, 41),  // "_updateFlightPathSegmentsDont..."
        QT_MOC_LITERAL(513, 16),  // "rotateEntryPoint"
        QT_MOC_LITERAL(530, 10),  // "cameraCalc"
        QT_MOC_LITERAL(541, 11),  // "CameraCalc*"
        QT_MOC_LITERAL(553, 11),  // "entranceAlt"
        QT_MOC_LITERAL(565, 5),  // "Fact*"
        QT_MOC_LITERAL(571, 15),  // "structureHeight"
        QT_MOC_LITERAL(587, 13),  // "scanBottomAlt"
        QT_MOC_LITERAL(601, 6),  // "layers"
        QT_MOC_LITERAL(608, 11),  // "gimbalPitch"
        QT_MOC_LITERAL(620, 12),  // "startFromTop"
        QT_MOC_LITERAL(633, 15),  // "bottomFlightAlt"
        QT_MOC_LITERAL(649, 12),  // "topFlightAlt"
        QT_MOC_LITERAL(662, 16),  // "timeBetweenShots"
        QT_MOC_LITERAL(679, 16),  // "structurePolygon"
        QT_MOC_LITERAL(696, 14),  // "QGCMapPolygon*"
        QT_MOC_LITERAL(711, 13)   // "flightPolygon"
    },
    "StructureScanComplexItem",
    "cameraShotsChanged",
    "",
    "cameraShots",
    "timeBetweenShotsChanged",
    "bottomFlightAltChanged",
    "topFlightAltChanged",
    "_updateFlightPathSegmentsSignal",
    "_segmentTerrainCollisionChanged",
    "terrainCollision",
    "_setDirty",
    "_polygonDirtyChanged",
    "dirty",
    "_flightPathChanged",
    "_clearInternal",
    "_updateCoordinateAltitudes",
    "_rebuildFlightPolygon",
    "_recalcCameraShots",
    "_recalcLayerInfo",
    "_updateLastSequenceNumber",
    "_updateGimbalPitch",
    "_signalTopBottomAltChanged",
    "_recalcScanDistance",
    "_updateWizardMode",
    "_updateFlightPathSegmentsDontCallDirectly",
    "rotateEntryPoint",
    "cameraCalc",
    "CameraCalc*",
    "entranceAlt",
    "Fact*",
    "structureHeight",
    "scanBottomAlt",
    "layers",
    "gimbalPitch",
    "startFromTop",
    "bottomFlightAlt",
    "topFlightAlt",
    "timeBetweenShots",
    "structurePolygon",
    "QGCMapPolygon*",
    "flightPolygon"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStructureScanComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      13,  167, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,   14 /* Public */,
       4,    0,  143,    2, 0x06,   16 /* Public */,
       5,    0,  144,    2, 0x06,   17 /* Public */,
       6,    0,  145,    2, 0x06,   18 /* Public */,
       7,    0,  146,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,  147,    2, 0x08,   20 /* Private */,
      10,    0,  150,    2, 0x08,   22 /* Private */,
      11,    1,  151,    2, 0x08,   23 /* Private */,
      13,    0,  154,    2, 0x08,   25 /* Private */,
      14,    0,  155,    2, 0x08,   26 /* Private */,
      15,    0,  156,    2, 0x08,   27 /* Private */,
      16,    0,  157,    2, 0x08,   28 /* Private */,
      17,    0,  158,    2, 0x08,   29 /* Private */,
      18,    0,  159,    2, 0x08,   30 /* Private */,
      19,    0,  160,    2, 0x08,   31 /* Private */,
      20,    0,  161,    2, 0x08,   32 /* Private */,
      21,    0,  162,    2, 0x08,   33 /* Private */,
      22,    0,  163,    2, 0x08,   34 /* Private */,
      23,    0,  164,    2, 0x08,   35 /* Private */,
      24,    0,  165,    2, 0x08,   36 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      25,    0,  166,    2, 0x02,   37 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      26, 0x80000000 | 27, 0x00015409, uint(-1), 0,
      28, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      30, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      31, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      32, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      33, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      34, 0x80000000 | 29, 0x00015409, uint(-1), 0,
      35, QMetaType::Double, 0x00015001, uint(2), 0,
      36, QMetaType::Double, 0x00015001, uint(3), 0,
       3, QMetaType::Int, 0x00015001, uint(0), 0,
      37, QMetaType::Double, 0x00015001, uint(1), 0,
      38, 0x80000000 | 39, 0x00015409, uint(-1), 0,
      40, 0x80000000 | 39, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject StructureScanComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStructureScanComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS_t,
        // property 'cameraCalc'
        QtPrivate::TypeAndForceComplete<CameraCalc*, std::true_type>,
        // property 'entranceAlt'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'structureHeight'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'scanBottomAlt'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'layers'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'gimbalPitch'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'startFromTop'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'bottomFlightAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'topFlightAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'cameraShots'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timeBetweenShots'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'structurePolygon'
        QtPrivate::TypeAndForceComplete<QGCMapPolygon*, std::true_type>,
        // property 'flightPolygon'
        QtPrivate::TypeAndForceComplete<QGCMapPolygon*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StructureScanComplexItem, std::true_type>,
        // method 'cameraShotsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'timeBetweenShotsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bottomFlightAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'topFlightAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFlightPathSegmentsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_segmentTerrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_polygonDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_flightPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_clearInternal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateCoordinateAltitudes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rebuildFlightPolygon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcCameraShots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcLayerInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateLastSequenceNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateGimbalPitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_signalTopBottomAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcScanDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateWizardMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFlightPathSegmentsDontCallDirectly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotateEntryPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void StructureScanComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StructureScanComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cameraShotsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->timeBetweenShotsChanged(); break;
        case 2: _t->bottomFlightAltChanged(); break;
        case 3: _t->topFlightAltChanged(); break;
        case 4: _t->_updateFlightPathSegmentsSignal(); break;
        case 5: _t->_segmentTerrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->_setDirty(); break;
        case 7: _t->_polygonDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->_flightPathChanged(); break;
        case 9: _t->_clearInternal(); break;
        case 10: _t->_updateCoordinateAltitudes(); break;
        case 11: _t->_rebuildFlightPolygon(); break;
        case 12: _t->_recalcCameraShots(); break;
        case 13: _t->_recalcLayerInfo(); break;
        case 14: _t->_updateLastSequenceNumber(); break;
        case 15: _t->_updateGimbalPitch(); break;
        case 16: _t->_signalTopBottomAltChanged(); break;
        case 17: _t->_recalcScanDistance(); break;
        case 18: _t->_updateWizardMode(); break;
        case 19: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 20: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StructureScanComplexItem::*)(int );
            if (_t _q_method = &StructureScanComplexItem::cameraShotsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)();
            if (_t _q_method = &StructureScanComplexItem::timeBetweenShotsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)();
            if (_t _q_method = &StructureScanComplexItem::bottomFlightAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)();
            if (_t _q_method = &StructureScanComplexItem::topFlightAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StructureScanComplexItem::*)();
            if (_t _q_method = &StructureScanComplexItem::_updateFlightPathSegmentsSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CameraCalc* >(); break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 12:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolygon* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StructureScanComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CameraCalc**>(_v) = _t->cameraCalc(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->entranceAlt(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->structureHeight(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->scanBottomAlt(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->layers(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->gimbalPitch(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->startFromTop(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->bottomFlightAlt(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->topFlightAlt(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->cameraShots(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->timeBetweenShots(); break;
        case 11: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->structurePolygon(); break;
        case 12: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->flightPolygon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *StructureScanComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StructureScanComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStructureScanComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int StructureScanComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void StructureScanComplexItem::cameraShotsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StructureScanComplexItem::timeBetweenShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StructureScanComplexItem::bottomFlightAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StructureScanComplexItem::topFlightAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void StructureScanComplexItem::_updateFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
