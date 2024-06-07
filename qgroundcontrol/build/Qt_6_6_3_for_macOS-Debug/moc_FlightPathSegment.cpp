/****************************************************************************
** Meta object code from reading C++ file 'FlightPathSegment.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/FlightPathSegment.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlightPathSegment.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS = QtMocHelpers::stringData(
    "FlightPathSegment",
    "coordinate1Changed",
    "",
    "QGeoCoordinate",
    "coordinate",
    "coordinate2Changed",
    "coord1AMSLAltChanged",
    "coord2AMSLAltChanged",
    "specialVisualChanged",
    "specialVisual",
    "amslTerrainHeightsChanged",
    "distanceBetweenChanged",
    "distanceBetween",
    "finalDistanceBetweenChanged",
    "finalDistanceBetween",
    "totalDistanceChanged",
    "totalDistance",
    "terrainCollisionChanged",
    "terrainCollision",
    "setCoordinate1",
    "setCoordinate2",
    "setCoord1AMSLAlt",
    "alt",
    "setCoord2AMSLAlt",
    "_sendTerrainPathQuery",
    "_terrainDataReceived",
    "success",
    "TerrainPathQuery::PathHeightInfo_t",
    "pathHeightInfo",
    "_updateTotalDistance",
    "_updateTerrainCollision",
    "coordinate1",
    "coordinate2",
    "coord1AMSLAlt",
    "coord2AMSLAlt",
    "amslTerrainHeights",
    "segmentType",
    "SegmentType",
    "SegmentTypeTakeoff",
    "SegmentTypeGeneric",
    "SegmentTypeLand",
    "SegmentTypeTerrainFrame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS_t {
    uint offsetsAndSizes[84];
    char stringdata0[18];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[11];
    char stringdata5[19];
    char stringdata6[21];
    char stringdata7[21];
    char stringdata8[21];
    char stringdata9[14];
    char stringdata10[26];
    char stringdata11[23];
    char stringdata12[16];
    char stringdata13[28];
    char stringdata14[21];
    char stringdata15[21];
    char stringdata16[14];
    char stringdata17[24];
    char stringdata18[17];
    char stringdata19[15];
    char stringdata20[15];
    char stringdata21[17];
    char stringdata22[4];
    char stringdata23[17];
    char stringdata24[22];
    char stringdata25[21];
    char stringdata26[8];
    char stringdata27[35];
    char stringdata28[15];
    char stringdata29[21];
    char stringdata30[24];
    char stringdata31[12];
    char stringdata32[12];
    char stringdata33[14];
    char stringdata34[14];
    char stringdata35[19];
    char stringdata36[12];
    char stringdata37[12];
    char stringdata38[19];
    char stringdata39[19];
    char stringdata40[16];
    char stringdata41[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS_t qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "FlightPathSegment"
        QT_MOC_LITERAL(18, 18),  // "coordinate1Changed"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(53, 10),  // "coordinate"
        QT_MOC_LITERAL(64, 18),  // "coordinate2Changed"
        QT_MOC_LITERAL(83, 20),  // "coord1AMSLAltChanged"
        QT_MOC_LITERAL(104, 20),  // "coord2AMSLAltChanged"
        QT_MOC_LITERAL(125, 20),  // "specialVisualChanged"
        QT_MOC_LITERAL(146, 13),  // "specialVisual"
        QT_MOC_LITERAL(160, 25),  // "amslTerrainHeightsChanged"
        QT_MOC_LITERAL(186, 22),  // "distanceBetweenChanged"
        QT_MOC_LITERAL(209, 15),  // "distanceBetween"
        QT_MOC_LITERAL(225, 27),  // "finalDistanceBetweenChanged"
        QT_MOC_LITERAL(253, 20),  // "finalDistanceBetween"
        QT_MOC_LITERAL(274, 20),  // "totalDistanceChanged"
        QT_MOC_LITERAL(295, 13),  // "totalDistance"
        QT_MOC_LITERAL(309, 23),  // "terrainCollisionChanged"
        QT_MOC_LITERAL(333, 16),  // "terrainCollision"
        QT_MOC_LITERAL(350, 14),  // "setCoordinate1"
        QT_MOC_LITERAL(365, 14),  // "setCoordinate2"
        QT_MOC_LITERAL(380, 16),  // "setCoord1AMSLAlt"
        QT_MOC_LITERAL(397, 3),  // "alt"
        QT_MOC_LITERAL(401, 16),  // "setCoord2AMSLAlt"
        QT_MOC_LITERAL(418, 21),  // "_sendTerrainPathQuery"
        QT_MOC_LITERAL(440, 20),  // "_terrainDataReceived"
        QT_MOC_LITERAL(461, 7),  // "success"
        QT_MOC_LITERAL(469, 34),  // "TerrainPathQuery::PathHeightI..."
        QT_MOC_LITERAL(504, 14),  // "pathHeightInfo"
        QT_MOC_LITERAL(519, 20),  // "_updateTotalDistance"
        QT_MOC_LITERAL(540, 23),  // "_updateTerrainCollision"
        QT_MOC_LITERAL(564, 11),  // "coordinate1"
        QT_MOC_LITERAL(576, 11),  // "coordinate2"
        QT_MOC_LITERAL(588, 13),  // "coord1AMSLAlt"
        QT_MOC_LITERAL(602, 13),  // "coord2AMSLAlt"
        QT_MOC_LITERAL(616, 18),  // "amslTerrainHeights"
        QT_MOC_LITERAL(635, 11),  // "segmentType"
        QT_MOC_LITERAL(647, 11),  // "SegmentType"
        QT_MOC_LITERAL(659, 18),  // "SegmentTypeTakeoff"
        QT_MOC_LITERAL(678, 18),  // "SegmentTypeGeneric"
        QT_MOC_LITERAL(697, 15),  // "SegmentTypeLand"
        QT_MOC_LITERAL(713, 23)   // "SegmentTypeTerrainFrame"
    },
    "FlightPathSegment",
    "coordinate1Changed",
    "",
    "QGeoCoordinate",
    "coordinate",
    "coordinate2Changed",
    "coord1AMSLAltChanged",
    "coord2AMSLAltChanged",
    "specialVisualChanged",
    "specialVisual",
    "amslTerrainHeightsChanged",
    "distanceBetweenChanged",
    "distanceBetween",
    "finalDistanceBetweenChanged",
    "finalDistanceBetween",
    "totalDistanceChanged",
    "totalDistance",
    "terrainCollisionChanged",
    "terrainCollision",
    "setCoordinate1",
    "setCoordinate2",
    "setCoord1AMSLAlt",
    "alt",
    "setCoord2AMSLAlt",
    "_sendTerrainPathQuery",
    "_terrainDataReceived",
    "success",
    "TerrainPathQuery::PathHeightInfo_t",
    "pathHeightInfo",
    "_updateTotalDistance",
    "_updateTerrainCollision",
    "coordinate1",
    "coordinate2",
    "coord1AMSLAlt",
    "coord2AMSLAlt",
    "amslTerrainHeights",
    "segmentType",
    "SegmentType",
    "SegmentTypeTakeoff",
    "SegmentTypeGeneric",
    "SegmentTypeLand",
    "SegmentTypeTerrainFrame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlightPathSegmentENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      11,  166, // properties
       1,  221, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,   13 /* Public */,
       5,    1,  125,    2, 0x06,   15 /* Public */,
       6,    0,  128,    2, 0x06,   17 /* Public */,
       7,    0,  129,    2, 0x06,   18 /* Public */,
       8,    1,  130,    2, 0x06,   19 /* Public */,
      10,    0,  133,    2, 0x06,   21 /* Public */,
      11,    1,  134,    2, 0x06,   22 /* Public */,
      13,    1,  137,    2, 0x06,   24 /* Public */,
      15,    1,  140,    2, 0x06,   26 /* Public */,
      17,    1,  143,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    1,  146,    2, 0x0a,   30 /* Public */,
      20,    1,  149,    2, 0x0a,   32 /* Public */,
      21,    1,  152,    2, 0x0a,   34 /* Public */,
      23,    1,  155,    2, 0x0a,   36 /* Public */,
      24,    0,  158,    2, 0x08,   38 /* Private */,
      25,    2,  159,    2, 0x08,   39 /* Private */,
      29,    0,  164,    2, 0x08,   42 /* Private */,
      30,    0,  165,    2, 0x08,   43 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Bool,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 27,   26,   28,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, 0x80000000 | 3, 0x0001500b, uint(0), 0,
      32, 0x80000000 | 3, 0x0001500b, uint(1), 0,
      33, QMetaType::Double, 0x00015003, uint(2), 0,
      34, QMetaType::Double, 0x00015003, uint(3), 0,
       9, QMetaType::Bool, 0x00015103, uint(4), 0,
      35, QMetaType::QVariantList, 0x00015003, uint(5), 0,
      12, QMetaType::Double, 0x00015003, uint(6), 0,
      14, QMetaType::Double, 0x00015003, uint(7), 0,
      16, QMetaType::Double, 0x00015003, uint(8), 0,
      18, QMetaType::Bool, 0x00015003, uint(9), 0,
      36, 0x80000000 | 37, 0x00015409, uint(-1), 0,

 // enums: name, alias, flags, count, data
      37,   37, 0x0,    4,  226,

 // enum data: key, value
      38, uint(FlightPathSegment::SegmentTypeTakeoff),
      39, uint(FlightPathSegment::SegmentTypeGeneric),
      40, uint(FlightPathSegment::SegmentTypeLand),
      41, uint(FlightPathSegment::SegmentTypeTerrainFrame),

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightPathSegment::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlightPathSegmentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS_t,
        // property 'coordinate1'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'coordinate2'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'coord1AMSLAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'coord2AMSLAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'specialVisual'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'amslTerrainHeights'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'distanceBetween'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'finalDistanceBetween'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'totalDistance'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'terrainCollision'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'segmentType'
        QtPrivate::TypeAndForceComplete<SegmentType, std::true_type>,
        // enum 'SegmentType'
        QtPrivate::TypeAndForceComplete<FlightPathSegment::SegmentType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightPathSegment, std::true_type>,
        // method 'coordinate1Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'coordinate2Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'coord1AMSLAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coord2AMSLAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'specialVisualChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'amslTerrainHeightsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'distanceBetweenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'finalDistanceBetweenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'totalDistanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'terrainCollisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCoordinate1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'setCoordinate2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'setCoord1AMSLAlt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setCoord2AMSLAlt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_sendTerrainPathQuery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TerrainPathQuery::PathHeightInfo_t &, std::false_type>,
        // method '_updateTotalDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateTerrainCollision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlightPathSegment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coordinate1Changed((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->coordinate2Changed((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 2: _t->coord1AMSLAltChanged(); break;
        case 3: _t->coord2AMSLAltChanged(); break;
        case 4: _t->specialVisualChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->amslTerrainHeightsChanged(); break;
        case 6: _t->distanceBetweenChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->finalDistanceBetweenChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->totalDistanceChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->terrainCollisionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setCoordinate1((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 11: _t->setCoordinate2((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 12: _t->setCoord1AMSLAlt((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->setCoord2AMSLAlt((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->_sendTerrainPathQuery(); break;
        case 15: _t->_terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TerrainPathQuery::PathHeightInfo_t>>(_a[2]))); break;
        case 16: _t->_updateTotalDistance(); break;
        case 17: _t->_updateTerrainCollision(); break;
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
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TerrainPathQuery::PathHeightInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightPathSegment::*)(QGeoCoordinate );
            if (_t _q_method = &FlightPathSegment::coordinate1Changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(QGeoCoordinate );
            if (_t _q_method = &FlightPathSegment::coordinate2Changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (_t _q_method = &FlightPathSegment::coord1AMSLAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (_t _q_method = &FlightPathSegment::coord2AMSLAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(bool );
            if (_t _q_method = &FlightPathSegment::specialVisualChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)();
            if (_t _q_method = &FlightPathSegment::amslTerrainHeightsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (_t _q_method = &FlightPathSegment::distanceBetweenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (_t _q_method = &FlightPathSegment::finalDistanceBetweenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(double );
            if (_t _q_method = &FlightPathSegment::totalDistanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FlightPathSegment::*)(bool );
            if (_t _q_method = &FlightPathSegment::terrainCollisionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coord1; break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coord2; break;
        case 2: *reinterpret_cast< double*>(_v) = _t->_coord1AMSLAlt; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->_coord2AMSLAlt; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->specialVisual(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->_amslTerrainHeights; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->_distanceBetween; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->_finalDistanceBetween; break;
        case 8: *reinterpret_cast< double*>(_v) = _t->_totalDistance; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->_terrainCollision; break;
        case 10: *reinterpret_cast< SegmentType*>(_v) = _t->_segmentType; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightPathSegment *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_coord1 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coord1 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate1Changed(_t->_coord1);
            }
            break;
        case 1:
            if (_t->_coord2 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coord2 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate2Changed(_t->_coord2);
            }
            break;
        case 2:
            if (_t->_coord1AMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_coord1AMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->coord1AMSLAltChanged();
            }
            break;
        case 3:
            if (_t->_coord2AMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_coord2AMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->coord2AMSLAltChanged();
            }
            break;
        case 4: _t->setSpecialVisual(*reinterpret_cast< bool*>(_v)); break;
        case 5:
            if (_t->_amslTerrainHeights != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_amslTerrainHeights = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->amslTerrainHeightsChanged();
            }
            break;
        case 6:
            if (_t->_distanceBetween != *reinterpret_cast< double*>(_v)) {
                _t->_distanceBetween = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->distanceBetweenChanged(_t->_distanceBetween);
            }
            break;
        case 7:
            if (_t->_finalDistanceBetween != *reinterpret_cast< double*>(_v)) {
                _t->_finalDistanceBetween = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->finalDistanceBetweenChanged(_t->_finalDistanceBetween);
            }
            break;
        case 8:
            if (_t->_totalDistance != *reinterpret_cast< double*>(_v)) {
                _t->_totalDistance = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->totalDistanceChanged(_t->_totalDistance);
            }
            break;
        case 9:
            if (_t->_terrainCollision != *reinterpret_cast< bool*>(_v)) {
                _t->_terrainCollision = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->terrainCollisionChanged(_t->_terrainCollision);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FlightPathSegment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPathSegment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlightPathSegmentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPathSegment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FlightPathSegment::coordinate1Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightPathSegment::coordinate2Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightPathSegment::coord1AMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FlightPathSegment::coord2AMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FlightPathSegment::specialVisualChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlightPathSegment::amslTerrainHeightsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FlightPathSegment::distanceBetweenChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FlightPathSegment::finalDistanceBetweenChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FlightPathSegment::totalDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FlightPathSegment::terrainCollisionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
