/****************************************************************************
** Meta object code from reading C++ file 'GPSManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GPS/GPSManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGPSManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGPSManagerENDCLASS = QtMocHelpers::stringData(
    "GPSManager",
    "onConnect",
    "",
    "onDisconnect",
    "surveyInStatus",
    "duration",
    "accuracyMM",
    "latitude",
    "longitude",
    "altitude",
    "valid",
    "active",
    "satelliteUpdate",
    "numSats",
    "GPSPositionUpdate",
    "GPSPositionMessage",
    "msg",
    "GPSSatelliteUpdate",
    "GPSSatelliteMessage",
    "_onGPSConnect",
    "_onGPSDisconnect",
    "_gpsSurveyInStatus",
    "_gpsNumSatellites",
    "numSatellites"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGPSManagerENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[15];
    char stringdata5[9];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[10];
    char stringdata9[9];
    char stringdata10[6];
    char stringdata11[7];
    char stringdata12[16];
    char stringdata13[8];
    char stringdata14[18];
    char stringdata15[19];
    char stringdata16[4];
    char stringdata17[19];
    char stringdata18[20];
    char stringdata19[14];
    char stringdata20[17];
    char stringdata21[19];
    char stringdata22[18];
    char stringdata23[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGPSManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGPSManagerENDCLASS_t qt_meta_stringdata_CLASSGPSManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GPSManager"
        QT_MOC_LITERAL(11, 9),  // "onConnect"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "onDisconnect"
        QT_MOC_LITERAL(35, 14),  // "surveyInStatus"
        QT_MOC_LITERAL(50, 8),  // "duration"
        QT_MOC_LITERAL(59, 10),  // "accuracyMM"
        QT_MOC_LITERAL(70, 8),  // "latitude"
        QT_MOC_LITERAL(79, 9),  // "longitude"
        QT_MOC_LITERAL(89, 8),  // "altitude"
        QT_MOC_LITERAL(98, 5),  // "valid"
        QT_MOC_LITERAL(104, 6),  // "active"
        QT_MOC_LITERAL(111, 15),  // "satelliteUpdate"
        QT_MOC_LITERAL(127, 7),  // "numSats"
        QT_MOC_LITERAL(135, 17),  // "GPSPositionUpdate"
        QT_MOC_LITERAL(153, 18),  // "GPSPositionMessage"
        QT_MOC_LITERAL(172, 3),  // "msg"
        QT_MOC_LITERAL(176, 18),  // "GPSSatelliteUpdate"
        QT_MOC_LITERAL(195, 19),  // "GPSSatelliteMessage"
        QT_MOC_LITERAL(215, 13),  // "_onGPSConnect"
        QT_MOC_LITERAL(229, 16),  // "_onGPSDisconnect"
        QT_MOC_LITERAL(246, 18),  // "_gpsSurveyInStatus"
        QT_MOC_LITERAL(265, 17),  // "_gpsNumSatellites"
        QT_MOC_LITERAL(283, 13)   // "numSatellites"
    },
    "GPSManager",
    "onConnect",
    "",
    "onDisconnect",
    "surveyInStatus",
    "duration",
    "accuracyMM",
    "latitude",
    "longitude",
    "altitude",
    "valid",
    "active",
    "satelliteUpdate",
    "numSats",
    "GPSPositionUpdate",
    "GPSPositionMessage",
    "msg",
    "GPSSatelliteUpdate",
    "GPSSatelliteMessage",
    "_onGPSConnect",
    "_onGPSDisconnect",
    "_gpsSurveyInStatus",
    "_gpsNumSatellites",
    "numSatellites"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGPSManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    7,   76,    2, 0x06,    3 /* Public */,
      12,    1,   91,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   94,    2, 0x08,   13 /* Private */,
      17,    1,   97,    2, 0x08,   15 /* Private */,
      19,    0,  100,    2, 0x08,   17 /* Private */,
      20,    0,  101,    2, 0x08,   18 /* Private */,
      21,    7,  102,    2, 0x08,   19 /* Private */,
      22,    1,  117,    2, 0x08,   27 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject GPSManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSGPSManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGPSManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGPSManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GPSManager, std::true_type>,
        // method 'onConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'surveyInStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'satelliteUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'GPSPositionUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GPSPositionMessage, std::false_type>,
        // method 'GPSSatelliteUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GPSSatelliteMessage, std::false_type>,
        // method '_onGPSConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_onGPSDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_gpsSurveyInStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_gpsNumSatellites'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void GPSManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPSManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConnect(); break;
        case 1: _t->onDisconnect(); break;
        case 2: _t->surveyInStatus((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 3: _t->satelliteUpdate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->GPSPositionUpdate((*reinterpret_cast< std::add_pointer_t<GPSPositionMessage>>(_a[1]))); break;
        case 5: _t->GPSSatelliteUpdate((*reinterpret_cast< std::add_pointer_t<GPSSatelliteMessage>>(_a[1]))); break;
        case 6: _t->_onGPSConnect(); break;
        case 7: _t->_onGPSDisconnect(); break;
        case 8: _t->_gpsSurveyInStatus((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 9: _t->_gpsNumSatellites((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GPSPositionMessage >(); break;
            }
            break;
        case 5:
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
            using _t = void (GPSManager::*)();
            if (_t _q_method = &GPSManager::onConnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPSManager::*)();
            if (_t _q_method = &GPSManager::onDisconnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPSManager::*)(float , float , double , double , float , bool , bool );
            if (_t _q_method = &GPSManager::surveyInStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GPSManager::*)(int );
            if (_t _q_method = &GPSManager::satelliteUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *GPSManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGPSManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int GPSManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GPSManager::onConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GPSManager::onDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GPSManager::surveyInStatus(float _t1, float _t2, double _t3, double _t4, float _t5, bool _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSManager::satelliteUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
