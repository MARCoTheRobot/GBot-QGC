/****************************************************************************
** Meta object code from reading C++ file 'SimulatedPosition.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PositionManager/SimulatedPosition.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedPosition.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSimulatedPositionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSimulatedPositionENDCLASS = QtMocHelpers::stringData(
    "SimulatedPosition",
    "startUpdates",
    "",
    "stopUpdates",
    "requestUpdate",
    "timeout",
    "_updatePosition",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleHomePositionChanged",
    "QGeoCoordinate",
    "homePosition"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSimulatedPositionENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[16];
    char stringdata7[14];
    char stringdata8[9];
    char stringdata9[8];
    char stringdata10[28];
    char stringdata11[15];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSimulatedPositionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSimulatedPositionENDCLASS_t qt_meta_stringdata_CLASSSimulatedPositionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "SimulatedPosition"
        QT_MOC_LITERAL(18, 12),  // "startUpdates"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 11),  // "stopUpdates"
        QT_MOC_LITERAL(44, 13),  // "requestUpdate"
        QT_MOC_LITERAL(58, 7),  // "timeout"
        QT_MOC_LITERAL(66, 15),  // "_updatePosition"
        QT_MOC_LITERAL(82, 13),  // "_vehicleAdded"
        QT_MOC_LITERAL(96, 8),  // "Vehicle*"
        QT_MOC_LITERAL(105, 7),  // "vehicle"
        QT_MOC_LITERAL(113, 27),  // "_vehicleHomePositionChanged"
        QT_MOC_LITERAL(141, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(156, 12)   // "homePosition"
    },
    "SimulatedPosition",
    "startUpdates",
    "",
    "stopUpdates",
    "requestUpdate",
    "timeout",
    "_updatePosition",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleHomePositionChanged",
    "QGeoCoordinate",
    "homePosition"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimulatedPositionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    1,   58,    2, 0x0a,    3 /* Public */,
       4,    0,   61,    2, 0x2a,    5 /* Public | MethodCloned */,
       6,    0,   62,    2, 0x08,    6 /* Private */,
       7,    1,   63,    2, 0x08,    7 /* Private */,
      10,    1,   66,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject SimulatedPosition::staticMetaObject = { {
    QMetaObject::SuperData::link<QGeoPositionInfoSource::staticMetaObject>(),
    qt_meta_stringdata_CLASSSimulatedPositionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSimulatedPositionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSimulatedPositionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimulatedPosition, std::true_type>,
        // method 'startUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'requestUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updatePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_vehicleHomePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>
    >,
    nullptr
} };

void SimulatedPosition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulatedPosition *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startUpdates(); break;
        case 1: _t->stopUpdates(); break;
        case 2: _t->requestUpdate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->requestUpdate(); break;
        case 4: _t->_updatePosition(); break;
        case 5: _t->_vehicleAdded((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 6: _t->_vehicleHomePositionChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
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
        }
    }
}

const QMetaObject *SimulatedPosition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimulatedPosition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSimulatedPositionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGeoPositionInfoSource::qt_metacast(_clname);
}

int SimulatedPosition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoPositionInfoSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
