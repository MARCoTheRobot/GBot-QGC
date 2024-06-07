/****************************************************************************
** Meta object code from reading C++ file 'DeviceInfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Utilities/DeviceInfo.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceInfo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS = QtMocHelpers::stringData(
    "QGCDeviceInfo::QGCAmbientTemperature",
    "temperatureUpdated",
    "",
    "temperature"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[37];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS_t qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS = {
    {
        QT_MOC_LITERAL(0, 36),  // "QGCDeviceInfo::QGCAmbientTemp..."
        QT_MOC_LITERAL(37, 18),  // "temperatureUpdated"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 11)   // "temperature"
    },
    "QGCDeviceInfo::QGCAmbientTemperature",
    "temperatureUpdated",
    "",
    "temperature"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCDeviceInfo::QGCAmbientTemperature::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCAmbientTemperature, std::true_type>,
        // method 'temperatureUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void QGCDeviceInfo::QGCAmbientTemperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCAmbientTemperature *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->temperatureUpdated((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCAmbientTemperature::*)(qreal );
            if (_t _q_method = &QGCAmbientTemperature::temperatureUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCDeviceInfo::QGCAmbientTemperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCDeviceInfo::QGCAmbientTemperature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCAmbientTemperatureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCDeviceInfo::QGCAmbientTemperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGCDeviceInfo::QGCAmbientTemperature::temperatureUpdated(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS = QtMocHelpers::stringData(
    "QGCDeviceInfo::QGCPressure",
    "pressureUpdated",
    "",
    "pressure",
    "temperature"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[27];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS_t qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QGCDeviceInfo::QGCPressure"
        QT_MOC_LITERAL(27, 15),  // "pressureUpdated"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 8),  // "pressure"
        QT_MOC_LITERAL(53, 11)   // "temperature"
    },
    "QGCDeviceInfo::QGCPressure",
    "pressureUpdated",
    "",
    "pressure",
    "temperature"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCDeviceInfo::QGCPressure::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCPressure, std::true_type>,
        // method 'pressureUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void QGCDeviceInfo::QGCPressure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCPressure *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pressureUpdated((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCPressure::*)(qreal , qreal );
            if (_t _q_method = &QGCPressure::pressureUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCDeviceInfo::QGCPressure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCDeviceInfo::QGCPressure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCDeviceInfoSCOPEQGCPressureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCDeviceInfo::QGCPressure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGCDeviceInfo::QGCPressure::pressureUpdated(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
