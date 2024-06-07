/****************************************************************************
** Meta object code from reading C++ file 'FollowMe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FollowMe/FollowMe.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FollowMe.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFollowMeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFollowMeENDCLASS = QtMocHelpers::stringData(
    "FollowMe",
    "_sendGCSMotionReport",
    "",
    "_settingsChanged",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleRemoved",
    "_enableIfVehicleInFollow"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFollowMeENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[14];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[16];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFollowMeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFollowMeENDCLASS_t qt_meta_stringdata_CLASSFollowMeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "FollowMe"
        QT_MOC_LITERAL(9, 20),  // "_sendGCSMotionReport"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 16),  // "_settingsChanged"
        QT_MOC_LITERAL(48, 13),  // "_vehicleAdded"
        QT_MOC_LITERAL(62, 8),  // "Vehicle*"
        QT_MOC_LITERAL(71, 7),  // "vehicle"
        QT_MOC_LITERAL(79, 15),  // "_vehicleRemoved"
        QT_MOC_LITERAL(95, 24)   // "_enableIfVehicleInFollow"
    },
    "FollowMe",
    "_sendGCSMotionReport",
    "",
    "_settingsChanged",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleRemoved",
    "_enableIfVehicleInFollow"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFollowMeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       7,    1,   49,    2, 0x08,    5 /* Private */,
       8,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FollowMe::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSFollowMeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFollowMeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFollowMeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FollowMe, std::true_type>,
        // method '_sendGCSMotionReport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_settingsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_vehicleAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_vehicleRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method '_enableIfVehicleInFollow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FollowMe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FollowMe *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_sendGCSMotionReport(); break;
        case 1: _t->_settingsChanged(); break;
        case 2: _t->_vehicleAdded((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 3: _t->_vehicleRemoved((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 4: _t->_enableIfVehicleInFollow(); break;
        default: ;
        }
    }
}

const QMetaObject *FollowMe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FollowMe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFollowMeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int FollowMe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
