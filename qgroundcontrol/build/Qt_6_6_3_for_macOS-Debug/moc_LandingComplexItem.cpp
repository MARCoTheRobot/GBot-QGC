/****************************************************************************
** Meta object code from reading C++ file 'LandingComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/LandingComplexItem.h"
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
#include "Fact.h"
#include "MissionItem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LandingComplexItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLandingComplexItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLandingComplexItemENDCLASS = QtMocHelpers::stringData(
    "LandingComplexItem",
    "finalApproachCoordinateChanged",
    "",
    "QGeoCoordinate",
    "coordinate",
    "loiterTangentCoordinateChanged",
    "landingCoordinateChanged",
    "landingCoordSetChanged",
    "landingCoordSet",
    "altitudesAreRelativeChanged",
    "altitudesAreRelative",
    "_updateFlightPathSegmentsSignal",
    "_updateFlightPathSegmentsDontCallDirectly",
    "_recalcFromHeadingAndDistanceChange",
    "_recalcFromCoordinateChange",
    "_setDirty",
    "_recalcFromRadiusChange",
    "_signalLastSequenceNumberChanged",
    "_updateFinalApproachCoodinateAltitudeFromFact",
    "_updateLandingCoodinateAltitudeFromFact",
    "setLandingHeadingToTakeoffHeading",
    "finalApproachAltitude",
    "Fact*",
    "loiterRadius",
    "landingAltitude",
    "landingHeading",
    "landingDistance",
    "loiterClockwise",
    "useLoiterToAlt",
    "stopTakingPhotos",
    "stopTakingVideo",
    "finalApproachCoordinate",
    "loiterTangentCoordinate",
    "landingCoordinate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLandingComplexItemENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[19];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[11];
    char stringdata5[31];
    char stringdata6[25];
    char stringdata7[23];
    char stringdata8[16];
    char stringdata9[28];
    char stringdata10[21];
    char stringdata11[32];
    char stringdata12[42];
    char stringdata13[36];
    char stringdata14[28];
    char stringdata15[10];
    char stringdata16[24];
    char stringdata17[33];
    char stringdata18[46];
    char stringdata19[40];
    char stringdata20[34];
    char stringdata21[22];
    char stringdata22[6];
    char stringdata23[13];
    char stringdata24[16];
    char stringdata25[15];
    char stringdata26[16];
    char stringdata27[16];
    char stringdata28[15];
    char stringdata29[17];
    char stringdata30[16];
    char stringdata31[24];
    char stringdata32[24];
    char stringdata33[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLandingComplexItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLandingComplexItemENDCLASS_t qt_meta_stringdata_CLASSLandingComplexItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "LandingComplexItem"
        QT_MOC_LITERAL(19, 30),  // "finalApproachCoordinateChanged"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(66, 10),  // "coordinate"
        QT_MOC_LITERAL(77, 30),  // "loiterTangentCoordinateChanged"
        QT_MOC_LITERAL(108, 24),  // "landingCoordinateChanged"
        QT_MOC_LITERAL(133, 22),  // "landingCoordSetChanged"
        QT_MOC_LITERAL(156, 15),  // "landingCoordSet"
        QT_MOC_LITERAL(172, 27),  // "altitudesAreRelativeChanged"
        QT_MOC_LITERAL(200, 20),  // "altitudesAreRelative"
        QT_MOC_LITERAL(221, 31),  // "_updateFlightPathSegmentsSignal"
        QT_MOC_LITERAL(253, 41),  // "_updateFlightPathSegmentsDont..."
        QT_MOC_LITERAL(295, 35),  // "_recalcFromHeadingAndDistance..."
        QT_MOC_LITERAL(331, 27),  // "_recalcFromCoordinateChange"
        QT_MOC_LITERAL(359, 9),  // "_setDirty"
        QT_MOC_LITERAL(369, 23),  // "_recalcFromRadiusChange"
        QT_MOC_LITERAL(393, 32),  // "_signalLastSequenceNumberChanged"
        QT_MOC_LITERAL(426, 45),  // "_updateFinalApproachCoodinate..."
        QT_MOC_LITERAL(472, 39),  // "_updateLandingCoodinateAltitu..."
        QT_MOC_LITERAL(512, 33),  // "setLandingHeadingToTakeoffHea..."
        QT_MOC_LITERAL(546, 21),  // "finalApproachAltitude"
        QT_MOC_LITERAL(568, 5),  // "Fact*"
        QT_MOC_LITERAL(574, 12),  // "loiterRadius"
        QT_MOC_LITERAL(587, 15),  // "landingAltitude"
        QT_MOC_LITERAL(603, 14),  // "landingHeading"
        QT_MOC_LITERAL(618, 15),  // "landingDistance"
        QT_MOC_LITERAL(634, 15),  // "loiterClockwise"
        QT_MOC_LITERAL(650, 14),  // "useLoiterToAlt"
        QT_MOC_LITERAL(665, 16),  // "stopTakingPhotos"
        QT_MOC_LITERAL(682, 15),  // "stopTakingVideo"
        QT_MOC_LITERAL(698, 23),  // "finalApproachCoordinate"
        QT_MOC_LITERAL(722, 23),  // "loiterTangentCoordinate"
        QT_MOC_LITERAL(746, 17)   // "landingCoordinate"
    },
    "LandingComplexItem",
    "finalApproachCoordinateChanged",
    "",
    "QGeoCoordinate",
    "coordinate",
    "loiterTangentCoordinateChanged",
    "landingCoordinateChanged",
    "landingCoordSetChanged",
    "landingCoordSet",
    "altitudesAreRelativeChanged",
    "altitudesAreRelative",
    "_updateFlightPathSegmentsSignal",
    "_updateFlightPathSegmentsDontCallDirectly",
    "_recalcFromHeadingAndDistanceChange",
    "_recalcFromCoordinateChange",
    "_setDirty",
    "_recalcFromRadiusChange",
    "_signalLastSequenceNumberChanged",
    "_updateFinalApproachCoodinateAltitudeFromFact",
    "_updateLandingCoodinateAltitudeFromFact",
    "setLandingHeadingToTakeoffHeading",
    "finalApproachAltitude",
    "Fact*",
    "loiterRadius",
    "landingAltitude",
    "landingHeading",
    "landingDistance",
    "loiterClockwise",
    "useLoiterToAlt",
    "stopTakingPhotos",
    "stopTakingVideo",
    "finalApproachCoordinate",
    "loiterTangentCoordinate",
    "landingCoordinate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLandingComplexItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      14,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,   15 /* Public */,
       5,    1,  107,    2, 0x06,   17 /* Public */,
       6,    1,  110,    2, 0x06,   19 /* Public */,
       7,    1,  113,    2, 0x06,   21 /* Public */,
       9,    1,  116,    2, 0x06,   23 /* Public */,
      11,    0,  119,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  120,    2, 0x09,   26 /* Protected */,
      13,    0,  121,    2, 0x09,   27 /* Protected */,
      14,    0,  122,    2, 0x09,   28 /* Protected */,
      15,    0,  123,    2, 0x09,   29 /* Protected */,
      16,    0,  124,    2, 0x08,   30 /* Private */,
      17,    0,  125,    2, 0x08,   31 /* Private */,
      18,    0,  126,    2, 0x08,   32 /* Private */,
      19,    0,  127,    2, 0x08,   33 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  128,    2, 0x02,   34 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // slots: parameters
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
      21, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      23, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      24, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      25, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      26, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      27, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      28, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      29, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      30, 0x80000000 | 22, 0x00015409, uint(-1), 0,
      31, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      32, 0x80000000 | 3, 0x00015009, uint(1), 0,
      33, 0x80000000 | 3, 0x0001510b, uint(2), 0,
      10, QMetaType::Bool, 0x00015103, uint(4), 0,
       8, QMetaType::Bool, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject LandingComplexItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ComplexMissionItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSLandingComplexItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLandingComplexItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLandingComplexItemENDCLASS_t,
        // property 'finalApproachAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'loiterRadius'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'landingAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'landingHeading'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'landingDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'loiterClockwise'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'useLoiterToAlt'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'stopTakingPhotos'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'stopTakingVideo'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'finalApproachCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'loiterTangentCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'landingCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'altitudesAreRelative'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'landingCoordSet'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LandingComplexItem, std::true_type>,
        // method 'finalApproachCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'loiterTangentCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'landingCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'landingCoordSetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'altitudesAreRelativeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateFlightPathSegmentsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFlightPathSegmentsDontCallDirectly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcFromHeadingAndDistanceChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcFromCoordinateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcFromRadiusChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_signalLastSequenceNumberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateFinalApproachCoodinateAltitudeFromFact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateLandingCoodinateAltitudeFromFact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLandingHeadingToTakeoffHeading'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LandingComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LandingComplexItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finalApproachCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->loiterTangentCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 2: _t->landingCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 3: _t->landingCoordSetChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->altitudesAreRelativeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_updateFlightPathSegmentsSignal(); break;
        case 6: _t->_updateFlightPathSegmentsDontCallDirectly(); break;
        case 7: _t->_recalcFromHeadingAndDistanceChange(); break;
        case 8: _t->_recalcFromCoordinateChange(); break;
        case 9: _t->_setDirty(); break;
        case 10: _t->_recalcFromRadiusChange(); break;
        case 11: _t->_signalLastSequenceNumberChanged(); break;
        case 12: _t->_updateFinalApproachCoodinateAltitudeFromFact(); break;
        case 13: _t->_updateLandingCoodinateAltitudeFromFact(); break;
        case 14: _t->setLandingHeadingToTakeoffHeading(); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
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
            using _t = void (LandingComplexItem::*)(QGeoCoordinate );
            if (_t _q_method = &LandingComplexItem::finalApproachCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LandingComplexItem::*)(QGeoCoordinate );
            if (_t _q_method = &LandingComplexItem::loiterTangentCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LandingComplexItem::*)(QGeoCoordinate );
            if (_t _q_method = &LandingComplexItem::landingCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LandingComplexItem::*)(bool );
            if (_t _q_method = &LandingComplexItem::landingCoordSetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LandingComplexItem::*)(bool );
            if (_t _q_method = &LandingComplexItem::altitudesAreRelativeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LandingComplexItem::*)();
            if (_t _q_method = &LandingComplexItem::_updateFlightPathSegmentsSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LandingComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->finalApproachAltitude(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->loiterRadius(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->landingAltitude(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->landingHeading(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->landingDistance(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->loiterClockwise(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->useLoiterToAlt(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->stopTakingPhotos(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->stopTakingVideo(); break;
        case 9: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->finalApproachCoordinate(); break;
        case 10: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->loiterTangentCoordinate(); break;
        case 11: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->landingCoordinate(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->altitudesAreRelative(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->landingCoordSet(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LandingComplexItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 9: _t->setFinalApproachCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 11: _t->setLandingCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 12: _t->setAltitudesAreRelative(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LandingComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LandingComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLandingComplexItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComplexMissionItem::qt_metacast(_clname);
}

int LandingComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComplexMissionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void LandingComplexItem::finalApproachCoordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LandingComplexItem::loiterTangentCoordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LandingComplexItem::landingCoordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LandingComplexItem::landingCoordSetChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LandingComplexItem::altitudesAreRelativeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LandingComplexItem::_updateFlightPathSegmentsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
