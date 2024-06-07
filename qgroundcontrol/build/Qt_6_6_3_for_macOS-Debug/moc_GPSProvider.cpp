/****************************************************************************
** Meta object code from reading C++ file 'GPSProvider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GPS/GPSProvider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSProvider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGPSProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGPSProviderENDCLASS = QtMocHelpers::stringData(
    "GPSProvider",
    "positionUpdate",
    "",
    "GPSPositionMessage",
    "message",
    "satelliteInfoUpdate",
    "GPSSatelliteMessage",
    "RTCMDataUpdate",
    "surveyInStatus",
    "duration",
    "accuracyMM",
    "latitude",
    "longitude",
    "altitude",
    "valid",
    "active"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGPSProviderENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[8];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[9];
    char stringdata12[10];
    char stringdata13[9];
    char stringdata14[6];
    char stringdata15[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGPSProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGPSProviderENDCLASS_t qt_meta_stringdata_CLASSGPSProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "GPSProvider"
        QT_MOC_LITERAL(12, 14),  // "positionUpdate"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 18),  // "GPSPositionMessage"
        QT_MOC_LITERAL(47, 7),  // "message"
        QT_MOC_LITERAL(55, 19),  // "satelliteInfoUpdate"
        QT_MOC_LITERAL(75, 19),  // "GPSSatelliteMessage"
        QT_MOC_LITERAL(95, 14),  // "RTCMDataUpdate"
        QT_MOC_LITERAL(110, 14),  // "surveyInStatus"
        QT_MOC_LITERAL(125, 8),  // "duration"
        QT_MOC_LITERAL(134, 10),  // "accuracyMM"
        QT_MOC_LITERAL(145, 8),  // "latitude"
        QT_MOC_LITERAL(154, 9),  // "longitude"
        QT_MOC_LITERAL(164, 8),  // "altitude"
        QT_MOC_LITERAL(173, 5),  // "valid"
        QT_MOC_LITERAL(179, 6)   // "active"
    },
    "GPSProvider",
    "positionUpdate",
    "",
    "GPSPositionMessage",
    "message",
    "satelliteInfoUpdate",
    "GPSSatelliteMessage",
    "RTCMDataUpdate",
    "surveyInStatus",
    "duration",
    "accuracyMM",
    "latitude",
    "longitude",
    "altitude",
    "valid",
    "active"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGPSProviderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,
       7,    1,   44,    2, 0x06,    5 /* Public */,
       8,    7,   47,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    9,   10,   11,   12,   13,   14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject GPSProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSGPSProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGPSProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGPSProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GPSProvider, std::true_type>,
        // method 'positionUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GPSPositionMessage, std::false_type>,
        // method 'satelliteInfoUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GPSSatelliteMessage, std::false_type>,
        // method 'RTCMDataUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'surveyInStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void GPSProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionUpdate((*reinterpret_cast< std::add_pointer_t<GPSPositionMessage>>(_a[1]))); break;
        case 1: _t->satelliteInfoUpdate((*reinterpret_cast< std::add_pointer_t<GPSSatelliteMessage>>(_a[1]))); break;
        case 2: _t->RTCMDataUpdate((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->surveyInStatus((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GPSPositionMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GPSSatelliteMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPSProvider::*)(GPSPositionMessage );
            if (_t _q_method = &GPSProvider::positionUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSProvider::*)(GPSSatelliteMessage );
            if (_t _q_method = &GPSProvider::satelliteInfoUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSProvider::*)(QByteArray );
            if (_t _q_method = &GPSProvider::RTCMDataUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSProvider::*)(float , float , double , double , float , bool , bool );
            if (_t _q_method = &GPSProvider::surveyInStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *GPSProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGPSProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int GPSProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}

// SIGNAL 0
void GPSProvider::positionUpdate(GPSPositionMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSProvider::satelliteInfoUpdate(GPSSatelliteMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSProvider::RTCMDataUpdate(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSProvider::surveyInStatus(float _t1, float _t2, double _t3, double _t4, float _t5, bool _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
