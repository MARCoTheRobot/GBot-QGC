/****************************************************************************
** Meta object code from reading C++ file 'MissionManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionManagerENDCLASS = QtMocHelpers::stringData(
    "MissionManager",
    "_mavlinkMessageReceived",
    "",
    "mavlink_message_t",
    "message"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionManagerENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[15];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionManagerENDCLASS_t qt_meta_stringdata_CLASSMissionManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "MissionManager"
        QT_MOC_LITERAL(15, 23),  // "_mavlinkMessageReceived"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(58, 7)   // "message"
    },
    "MissionManager",
    "_mavlinkMessageReceived",
    "",
    "mavlink_message_t",
    "message"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanManager::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionManager, std::true_type>,
        // method '_mavlinkMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mavlink_message_t &, std::false_type>
    >,
    nullptr
} };

void MissionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_mavlinkMessageReceived((*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MissionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanManager::qt_metacast(_clname);
}

int MissionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanManager::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
