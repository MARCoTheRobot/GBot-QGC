/****************************************************************************
** Meta object code from reading C++ file 'TransectStyleComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/TransectStyleComplexItem.h"
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
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransectStyleComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS = QtMocHelpers::stringData(
    "TransectStyleComplexItem",
    "cameraShotsChanged",
    "",
    "timeBetweenShotsChanged",
    "visualTransectPointsChanged",
    "coveredAreaChanged",
    "_updateFlightPathSegmentsSignal",
    "_setDirty",
    "_setIfDirty",
    "dirty",
    "_updateCoordinateAltitudes",
    "_polyPathTerrainData",
    "success",
    "QList<TerrainPathQuery::PathHeightInfo_t>",
    "rgPathHeightInfo",
    "_missionItemCoordTerrainData",
    "QList<double>",
    "heights",
    "_rebuildTransects",
    "_reallyQueryTransectsPathHeightInfo",
    "_handleHoverAndCaptureEnabled",
    "enabled",
    "_updateFlightPathSegmentsDontCallDirectly",
    "_segmentTerrainCollisionChanged",
    "terrainCollision",
    "_distanceModeChanged",
    "distanceMode",
    "surveyAreaPolygon",
    "QGCMapPolygon*",
    "cameraCalc",
    "CameraCalc*",
    "turnAroundDistance",
    "Fact*",
    "cameraTriggerInTurnAround",
    "hoverAndCapture",
    "refly90Degrees",
    "cameraShots",
    "timeBetweenShots",
    "coveredArea",
    "hoverAndCaptureAllowed",
    "visualTransectPoints",
    "terrainAdjustTolerance",
    "terrainAdjustMaxDescentRate",
    "terrainAdjustMaxClimbRate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS_t {
    uint offsetsAndSizes[88];
    char stringdata0[25];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[28];
    char stringdata5[19];
    char stringdata6[32];
    char stringdata7[10];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[27];
    char stringdata11[21];
    char stringdata12[8];
    char stringdata13[42];
    char stringdata14[17];
    char stringdata15[29];
    char stringdata16[14];
    char stringdata17[8];
    char stringdata18[18];
    char stringdata19[36];
    char stringdata20[30];
    char stringdata21[8];
    char stringdata22[42];
    char stringdata23[32];
    char stringdata24[17];
    char stringdata25[21];
    char stringdata26[13];
    char stringdata27[18];
    char stringdata28[15];
    char stringdata29[11];
    char stringdata30[12];
    char stringdata31[19];
    char stringdata32[6];
    char stringdata33[26];
    char stringdata34[16];
    char stringdata35[15];
    char stringdata36[12];
    char stringdata37[17];
    char stringdata38[12];
    char stringdata39[23];
    char stringdata40[21];
    char stringdata41[23];
    char stringdata42[28];
    char stringdata43[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS_t qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "TransectStyleComplexItem"
        QT_MOC_LITERAL(25, 18),  // "cameraShotsChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 23),  // "timeBetweenShotsChanged"
        QT_MOC_LITERAL(69, 27),  // "visualTransectPointsChanged"
        QT_MOC_LITERAL(97, 18),  // "coveredAreaChanged"
        QT_MOC_LITERAL(116, 31),  // "_updateFlightPathSegmentsSignal"
        QT_MOC_LITERAL(148, 9),  // "_setDirty"
        QT_MOC_LITERAL(158, 11),  // "_setIfDirty"
        QT_MOC_LITERAL(170, 5),  // "dirty"
        QT_MOC_LITERAL(176, 26),  // "_updateCoordinateAltitudes"
        QT_MOC_LITERAL(203, 20),  // "_polyPathTerrainData"
        QT_MOC_LITERAL(224, 7),  // "success"
        QT_MOC_LITERAL(232, 41),  // "QList<TerrainPathQuery::PathH..."
        QT_MOC_LITERAL(274, 16),  // "rgPathHeightInfo"
        QT_MOC_LITERAL(291, 28),  // "_missionItemCoordTerrainData"
        QT_MOC_LITERAL(320, 13),  // "QList<double>"
        QT_MOC_LITERAL(334, 7),  // "heights"
        QT_MOC_LITERAL(342, 17),  // "_rebuildTransects"
        QT_MOC_LITERAL(360, 35),  // "_reallyQueryTransectsPathHeig..."
        QT_MOC_LITERAL(396, 29),  // "_handleHoverAndCaptureEnabled"
        QT_MOC_LITERAL(426, 7),  // "enabled"
        QT_MOC_LITERAL(434, 41),  // "_updateFlightPathSegmentsDont..."
        QT_MOC_LITERAL(476, 31),  // "_segmentTerrainCollisionChanged"
        QT_MOC_LITERAL(508, 16),  // "terrainCollision"
        QT_MOC_LITERAL(525, 20),  // "_distanceModeChanged"
        QT_MOC_LITERAL(546, 12),  // "distanceMode"
        QT_MOC_LITERAL(559, 17),  // "surveyAreaPolygon"
        QT_MOC_LITERAL(577, 14),  // "QGCMapPolygon*"
        QT_MOC_LITERAL(592, 10),  // "cameraCalc"
        QT_MOC_LITERAL(603, 11),  // "CameraCalc*"
        QT_MOC_LITERAL(615, 18),  // "turnAroundDistance"
        QT_MOC_LITERAL(634, 5),  // "Fact*"
        QT_MOC_LITERAL(640, 25),  // "cameraTriggerInTurnAround"
        QT_MOC_LITERAL(666, 15),  // "hoverAndCapture"
        QT_MOC_LITERAL(682, 14),  // "refly90Degrees"
        QT_MOC_LITERAL(697, 11),  // "cameraShots"
        QT_MOC_LITERAL(709, 16),  // "timeBetweenShots"
        QT_MOC_LITERAL(726, 11),  // "coveredArea"
        QT_MOC_LITERAL(738, 22),  // "hoverAndCaptureAllowed"
        QT_MOC_LITERAL(761, 20),  // "visualTransectPoints"
        QT_MOC_LITERAL(782, 22),  // "terrainAdjustTolerance"
        QT_MOC_LITERAL(805, 27),  // "terrainAdjustMaxDescentRate"
        QT_MOC_LITERAL(833, 25)   // "terrainAdjustMaxClimbRate"
    },
    "TransectStyleComplexItem",
    "cameraShotsChanged",
    "",
    "timeBetweenShotsChanged",
    "visualTransectPointsChanged",
    "coveredAreaChanged",
    "_updateFlightPathSegmentsSignal",
    "_setDirty",
    "_setIfDirty",
    "dirty",
    "_updateCoordinateAltitudes",
    "_polyPathTerrainData",
    "success",
    "QList<TerrainPathQuery::PathHeightInfo_t>",
    "rgPathHeightInfo",
    "_missionItemCoordTerrainData",
    "QList<double>",
    "heights",
    "_rebuildTransects",
    "_reallyQueryTransectsPathHeightInfo",
    "_handleHoverAndCaptureEnabled",
    "enabled",
    "_updateFlightPathSegmentsDontCallDirectly",
    "_segmentTerrainCollisionChanged",
    "terrainCollision",
    "_distanceModeChanged",
    "distanceMode",
    "surveyAreaPolygon",
    "QGCMapPolygon*",
    "cameraCalc",
    "CameraCalc*",
    "turnAroundDistance",
    "Fact*",
    "cameraTriggerInTurnAround",
    "hoverAndCapture",
    "refly90Degrees",
    "cameraShots",
    "timeBetweenShots",
    "coveredArea",
    "hoverAndCaptureAllowed",
    "visualTransectPoints",
    "terrainAdjustTolerance",
    "terrainAdjustMaxDescentRate",
    "terrainAdjustMaxClimbRate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTransectStyleComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      14,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,   15 /* Public */,
       3,    0,  111,    2, 0x06,   16 /* Public */,
       4,    0,  112,    2, 0x06,   17 /* Public */,
       5,    0,  113,    2, 0x06,   18 /* Public */,
       6,    0,  114,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  115,    2, 0x09,   20 /* Protected */,
       8,    1,  116,    2, 0x09,   21 /* Protected */,
      10,    0,  119,    2, 0x09,   23 /* Protected */,
      11,    2,  120,    2, 0x09,   24 /* Protected */,
      15,    2,  125,    2, 0x09,   27 /* Protected */,
      18,    0,  130,    2, 0x09,   30 /* Protected */,
      19,    0,  131,    2, 0x08,   31 /* Private */,
      20,    1,  132,    2, 0x08,   32 /* Private */,
      22,    0,  135,    2, 0x08,   34 /* Private */,
      23,    1,  136,    2, 0x08,   35 /* Private */,
      25,    1,  139,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 13,   12,   14,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 16,   12,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Int,   26,

 // properties: name, type, flags
      27, 0x80000000 | 28, 0x00015409, uint(-1), 0,
      29, 0x80000000 | 30, 0x00015409, uint(-1), 0,
      31, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      33, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      34, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      35, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      36, QMetaType::Int, 0x00015001, uint(0), 0,
      37, QMetaType::Double, 0x00015001, uint(1), 0,
      38, QMetaType::Double, 0x00015001, uint(3), 0,
      39, QMetaType::Bool, 0x00015401, uint(-1), 0,
      40, QMetaType::QVariantList, 0x00015001, uint(2), 0,
      41, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      42, 0x80000000 | 32, 0x00015409, uint(-1), 0,
      43, 0x80000000 | 32, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TransectStyleComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTransectStyleComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS_t,
        // property 'surveyAreaPolygon'
        QtPrivate::TypeAndForceComplete<QGCMapPolygon*, std::true_type>,
        // property 'cameraCalc'
        QtPrivate::TypeAndForceComplete<CameraCalc*, std::true_type>,
        // property 'turnAroundDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraTriggerInTurnAround'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'hoverAndCapture'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'refly90Degrees'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraShots'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timeBetweenShots'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'coveredArea'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'hoverAndCaptureAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visualTransectPoints'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'terrainAdjustTolerance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'terrainAdjustMaxDescentRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'terrainAdjustMaxClimbRate'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TransectStyleComplexItem, std::true_type>,
        // method 'cameraShotsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timeBetweenShotsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visualTransectPointsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coveredAreaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFlightPathSegmentsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setIfDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateCoordinateAltitudes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_polyPathTerrainData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<TerrainPathQuery::PathHeightInfo_t> &, std::false_type>,
        // method '_missionItemCoordTerrainData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>,
        // method '_rebuildTransects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_reallyQueryTransectsPathHeightInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_handleHoverAndCaptureEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_updateFlightPathSegmentsDontCallDirectly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_segmentTerrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_distanceModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void TransectStyleComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransectStyleComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cameraShotsChanged(); break;
        case 1: _t->timeBetweenShotsChanged(); break;
        case 2: _t->visualTransectPointsChanged(); break;
        case 3: _t->coveredAreaChanged(); break;
        case 4: _t->_updateFlightPathSegmentsSignal(); break;
        case 5: _t->_setDirty(); break;
        case 6: _t->_setIfDirty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->_updateCoordinateAltitudes(); break;
        case 8: _t->_polyPathTerrainData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<TerrainPathQuery::PathHeightInfo_t>>>(_a[2]))); break;
        case 9: _t->_missionItemCoordTerrainData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        case 10: _t->_rebuildTransects(); break;
        case 11: _t->_reallyQueryTransectsPathHeightInfo(); break;
        case 12: _t->_handleHoverAndCaptureEnabled((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 13: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 14: _t->_segmentTerrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->_distanceModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<TerrainPathQuery::PathHeightInfo_t> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (_t _q_method = &TransectStyleComplexItem::cameraShotsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (_t _q_method = &TransectStyleComplexItem::timeBetweenShotsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (_t _q_method = &TransectStyleComplexItem::visualTransectPointsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (_t _q_method = &TransectStyleComplexItem::coveredAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransectStyleComplexItem::*)();
            if (_t _q_method = &TransectStyleComplexItem::_updateFlightPathSegmentsSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CameraCalc* >(); break;
        case 13:
        case 12:
        case 11:
        case 5:
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolygon* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TransectStyleComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGCMapPolygon**>(_v) = _t->surveyAreaPolygon(); break;
        case 1: *reinterpret_cast< CameraCalc**>(_v) = _t->cameraCalc(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->turnAroundDistance(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->cameraTriggerInTurnAround(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->hoverAndCapture(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->refly90Degrees(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->cameraShots(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->timeBetweenShots(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->coveredArea(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hoverAndCaptureAllowed(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->visualTransectPoints(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustTolerance(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustMaxDescentRate(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->terrainAdjustMaxClimbRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *TransectStyleComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransectStyleComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTransectStyleComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int TransectStyleComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TransectStyleComplexItem::cameraShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TransectStyleComplexItem::timeBetweenShotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TransectStyleComplexItem::visualTransectPointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TransectStyleComplexItem::coveredAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TransectStyleComplexItem::_updateFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
