/****************************************************************************
** Meta object code from reading C++ file 'Viewer3DQmlVariableTypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Viewer3D/Viewer3DQmlVariableTypes.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer3DQmlVariableTypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS = QtMocHelpers::stringData(
    "GeoCoordinateType",
    "gpsRefChanged",
    "",
    "coordinateChanged",
    "localCoordinateChanged",
    "gpsRefChangedEvent",
    "coordinateChangedEvent",
    "gpsRef",
    "QGeoCoordinate",
    "coordinate",
    "localCoordinate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[23];
    char stringdata5[19];
    char stringdata6[23];
    char stringdata7[7];
    char stringdata8[15];
    char stringdata9[11];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS_t qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "GeoCoordinateType"
        QT_MOC_LITERAL(18, 13),  // "gpsRefChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17),  // "coordinateChanged"
        QT_MOC_LITERAL(51, 22),  // "localCoordinateChanged"
        QT_MOC_LITERAL(74, 18),  // "gpsRefChangedEvent"
        QT_MOC_LITERAL(93, 22),  // "coordinateChangedEvent"
        QT_MOC_LITERAL(116, 6),  // "gpsRef"
        QT_MOC_LITERAL(123, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(138, 10),  // "coordinate"
        QT_MOC_LITERAL(149, 15)   // "localCoordinate"
    },
    "GeoCoordinateType",
    "gpsRefChanged",
    "",
    "coordinateChanged",
    "localCoordinateChanged",
    "gpsRefChangedEvent",
    "coordinateChangedEvent",
    "gpsRef",
    "QGeoCoordinate",
    "coordinate",
    "localCoordinate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGeoCoordinateTypeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,
       4,    0,   46,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x09,    7 /* Protected */,
       6,    0,   48,    2, 0x09,    8 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0001510b, uint(0), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(1), 0,
      10, QMetaType::QVector3D, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GeoCoordinateType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGeoCoordinateTypeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS_t,
        // property 'gpsRef'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'coordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'localCoordinate'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GeoCoordinateType, std::true_type>,
        // method 'gpsRefChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'localCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gpsRefChangedEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coordinateChangedEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GeoCoordinateType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoCoordinateType *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gpsRefChanged(); break;
        case 1: _t->coordinateChanged(); break;
        case 2: _t->localCoordinateChanged(); break;
        case 3: _t->gpsRefChangedEvent(); break;
        case 4: _t->coordinateChangedEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoCoordinateType::*)();
            if (_t _q_method = &GeoCoordinateType::gpsRefChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeoCoordinateType::*)();
            if (_t _q_method = &GeoCoordinateType::coordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeoCoordinateType::*)();
            if (_t _q_method = &GeoCoordinateType::localCoordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        auto *_t = static_cast<GeoCoordinateType *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->gpsRef(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->localCoordinate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GeoCoordinateType *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGpsRef(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *GeoCoordinateType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoCoordinateType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGeoCoordinateTypeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GeoCoordinateType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GeoCoordinateType::gpsRefChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GeoCoordinateType::coordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GeoCoordinateType::localCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
