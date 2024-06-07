/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicleManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ADSB/ADSBVehicleManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicleManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS = QtMocHelpers::stringData(
    "ADSBVehicleManager",
    "adsbVehicleUpdate",
    "",
    "ADSBVehicle::ADSBVehicleInfo_t",
    "vehicleInfo",
    "_tcpError",
    "errorMsg",
    "_cleanupStaleVehicles",
    "adsbVehicles",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[22];
    char stringdata8[13];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS_t qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ADSBVehicleManager"
        QT_MOC_LITERAL(19, 17),  // "adsbVehicleUpdate"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 30),  // "ADSBVehicle::ADSBVehicleInfo_t"
        QT_MOC_LITERAL(69, 11),  // "vehicleInfo"
        QT_MOC_LITERAL(81, 9),  // "_tcpError"
        QT_MOC_LITERAL(91, 8),  // "errorMsg"
        QT_MOC_LITERAL(100, 21),  // "_cleanupStaleVehicles"
        QT_MOC_LITERAL(122, 12),  // "adsbVehicles"
        QT_MOC_LITERAL(135, 19)   // "QmlObjectListModel*"
    },
    "ADSBVehicleManager",
    "adsbVehicleUpdate",
    "",
    "ADSBVehicle::ADSBVehicleInfo_t",
    "vehicleInfo",
    "_tcpError",
    "errorMsg",
    "_cleanupStaleVehicles",
    "adsbVehicles",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSADSBVehicleManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    2 /* Public */,
       5,    1,   35,    2, 0x0a,    4 /* Public */,
       7,    0,   38,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ADSBVehicleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSADSBVehicleManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS_t,
        // property 'adsbVehicles'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ADSBVehicleManager, std::true_type>,
        // method 'adsbVehicleUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ADSBVehicle::ADSBVehicleInfo_t, std::false_type>,
        // method '_tcpError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method '_cleanupStaleVehicles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ADSBVehicleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ADSBVehicleManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adsbVehicleUpdate((*reinterpret_cast< std::add_pointer_t<ADSBVehicle::ADSBVehicleInfo_t>>(_a[1]))); break;
        case 1: _t->_tcpError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->_cleanupStaleVehicles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ADSBVehicle::ADSBVehicleInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ADSBVehicleManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->adsbVehicles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ADSBVehicleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSADSBVehicleManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int ADSBVehicleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
