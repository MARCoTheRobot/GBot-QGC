/****************************************************************************
** Meta object code from reading C++ file 'Viewer3DQmlBackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Viewer3D/Viewer3DQmlBackend.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer3DQmlBackend.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS = QtMocHelpers::stringData(
    "Viewer3DQmlBackend",
    "gpsRefChanged",
    "",
    "_gpsRefChangedEvent",
    "QGeoCoordinate",
    "newGpsRef",
    "isRefSet",
    "_activeVehicleChangedEvent",
    "Vehicle*",
    "vehicle",
    "_activeVehicleCoordinateChanged",
    "newCoordinate",
    "gpsRef"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[15];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[27];
    char stringdata8[9];
    char stringdata9[8];
    char stringdata10[32];
    char stringdata11[14];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS_t qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "Viewer3DQmlBackend"
        QT_MOC_LITERAL(19, 13),  // "gpsRefChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 19),  // "_gpsRefChangedEvent"
        QT_MOC_LITERAL(54, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(69, 9),  // "newGpsRef"
        QT_MOC_LITERAL(79, 8),  // "isRefSet"
        QT_MOC_LITERAL(88, 26),  // "_activeVehicleChangedEvent"
        QT_MOC_LITERAL(115, 8),  // "Vehicle*"
        QT_MOC_LITERAL(124, 7),  // "vehicle"
        QT_MOC_LITERAL(132, 31),  // "_activeVehicleCoordinateChanged"
        QT_MOC_LITERAL(164, 13),  // "newCoordinate"
        QT_MOC_LITERAL(178, 6)   // "gpsRef"
    },
    "Viewer3DQmlBackend",
    "gpsRefChanged",
    "",
    "_gpsRefChangedEvent",
    "QGeoCoordinate",
    "newGpsRef",
    "isRefSet",
    "_activeVehicleChangedEvent",
    "Vehicle*",
    "vehicle",
    "_activeVehicleCoordinateChanged",
    "newCoordinate",
    "gpsRef"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewer3DQmlBackendENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   39,    2, 0x09,    3 /* Protected */,
       7,    1,   44,    2, 0x09,    6 /* Protected */,
      10,    1,   47,    2, 0x09,    8 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 4,   11,

 // properties: name, type, flags
      12, 0x80000000 | 4, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Viewer3DQmlBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewer3DQmlBackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS_t,
        // property 'gpsRef'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewer3DQmlBackend, std::true_type>,
        // method 'gpsRefChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_gpsRefChangedEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_activeVehicleChangedEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_activeVehicleCoordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>
    >,
    nullptr
} };

void Viewer3DQmlBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Viewer3DQmlBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gpsRefChanged(); break;
        case 1: _t->_gpsRefChangedEvent((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->_activeVehicleChangedEvent((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 3: _t->_activeVehicleCoordinateChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
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
            using _t = void (Viewer3DQmlBackend::*)();
            if (_t _q_method = &Viewer3DQmlBackend::gpsRefChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Viewer3DQmlBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->gpsRef(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Viewer3DQmlBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer3DQmlBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewer3DQmlBackendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Viewer3DQmlBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Viewer3DQmlBackend::gpsRefChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
