/****************************************************************************
** Meta object code from reading C++ file 'VehicleObjectAvoidance.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/VehicleObjectAvoidance.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleObjectAvoidance.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS = QtMocHelpers::stringData(
    "VehicleObjectAvoidance",
    "objectAvoidanceChanged",
    "",
    "start",
    "minDistance",
    "stop",
    "grid",
    "i",
    "distance",
    "available",
    "enabled",
    "distances",
    "QList<int>",
    "increment",
    "maxDistance",
    "angleOffset",
    "gridSize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[23];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[2];
    char stringdata8[9];
    char stringdata9[10];
    char stringdata10[8];
    char stringdata11[10];
    char stringdata12[11];
    char stringdata13[10];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS_t qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "VehicleObjectAvoidance"
        QT_MOC_LITERAL(23, 22),  // "objectAvoidanceChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5),  // "start"
        QT_MOC_LITERAL(53, 11),  // "minDistance"
        QT_MOC_LITERAL(65, 4),  // "stop"
        QT_MOC_LITERAL(70, 4),  // "grid"
        QT_MOC_LITERAL(75, 1),  // "i"
        QT_MOC_LITERAL(77, 8),  // "distance"
        QT_MOC_LITERAL(86, 9),  // "available"
        QT_MOC_LITERAL(96, 7),  // "enabled"
        QT_MOC_LITERAL(104, 9),  // "distances"
        QT_MOC_LITERAL(114, 10),  // "QList<int>"
        QT_MOC_LITERAL(125, 9),  // "increment"
        QT_MOC_LITERAL(135, 11),  // "maxDistance"
        QT_MOC_LITERAL(147, 11),  // "angleOffset"
        QT_MOC_LITERAL(159, 8)   // "gridSize"
    },
    "VehicleObjectAvoidance",
    "objectAvoidanceChanged",
    "",
    "start",
    "minDistance",
    "stop",
    "grid",
    "i",
    "distance",
    "available",
    "enabled",
    "distances",
    "QList<int>",
    "increment",
    "maxDistance",
    "angleOffset",
    "gridSize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleObjectAvoidanceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    9 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   45,    2, 0x02,   10 /* Public */,
       5,    0,   48,    2, 0x02,   12 /* Public */,
       6,    1,   49,    2, 0x02,   13 /* Public */,
       8,    1,   52,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::QPointF, QMetaType::Int,    7,
    QMetaType::QReal, QMetaType::Int,    7,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00015001, uint(0), 0,
      10, QMetaType::Bool, 0x00015001, uint(0), 0,
      11, 0x80000000 | 12, 0x00015009, uint(0), 0,
      13, QMetaType::QReal, 0x00015001, uint(0), 0,
       4, QMetaType::Int, 0x00015001, uint(0), 0,
      14, QMetaType::Int, 0x00015001, uint(0), 0,
      15, QMetaType::QReal, 0x00015001, uint(0), 0,
      16, QMetaType::Int, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleObjectAvoidance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleObjectAvoidanceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS_t,
        // property 'available'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'distances'
        QtPrivate::TypeAndForceComplete<QList<int>, std::true_type>,
        // property 'increment'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'minDistance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxDistance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'angleOffset'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'gridSize'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleObjectAvoidance, std::true_type>,
        // method 'objectAvoidanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'grid'
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'distance'
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void VehicleObjectAvoidance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleObjectAvoidance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->objectAvoidanceChanged(); break;
        case 1: _t->start((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->stop(); break;
        case 3: { QPointF _r = _t->grid((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        case 4: { qreal _r = _t->distance((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleObjectAvoidance::*)();
            if (_t _q_method = &VehicleObjectAvoidance::objectAvoidanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleObjectAvoidance *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->distances(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->increment(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->minDistance(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->maxDistance(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->angleOffset(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->gridSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VehicleObjectAvoidance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleObjectAvoidance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleObjectAvoidanceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleObjectAvoidance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void VehicleObjectAvoidance::objectAvoidanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
