/****************************************************************************
** Meta object code from reading C++ file 'UASMessageHandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/UASMessageHandler.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASMessageHandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS = QtMocHelpers::stringData(
    "UASMessageHandler",
    "textMessageReceived",
    "",
    "UASMessage*",
    "message",
    "textMessageCountChanged",
    "count",
    "handleTextMessage",
    "uasid",
    "componentid",
    "severity",
    "text",
    "description",
    "_activeVehicleChanged",
    "Vehicle*",
    "vehicle"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[24];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[6];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[12];
    char stringdata13[22];
    char stringdata14[9];
    char stringdata15[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS_t qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "UASMessageHandler"
        QT_MOC_LITERAL(18, 19),  // "textMessageReceived"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "UASMessage*"
        QT_MOC_LITERAL(51, 7),  // "message"
        QT_MOC_LITERAL(59, 23),  // "textMessageCountChanged"
        QT_MOC_LITERAL(83, 5),  // "count"
        QT_MOC_LITERAL(89, 17),  // "handleTextMessage"
        QT_MOC_LITERAL(107, 5),  // "uasid"
        QT_MOC_LITERAL(113, 11),  // "componentid"
        QT_MOC_LITERAL(125, 8),  // "severity"
        QT_MOC_LITERAL(134, 4),  // "text"
        QT_MOC_LITERAL(139, 11),  // "description"
        QT_MOC_LITERAL(151, 21),  // "_activeVehicleChanged"
        QT_MOC_LITERAL(173, 8),  // "Vehicle*"
        QT_MOC_LITERAL(182, 7)   // "vehicle"
    },
    "UASMessageHandler",
    "textMessageReceived",
    "",
    "UASMessage*",
    "message",
    "textMessageCountChanged",
    "count",
    "handleTextMessage",
    "uasid",
    "componentid",
    "severity",
    "text",
    "description",
    "_activeVehicleChanged",
    "Vehicle*",
    "vehicle"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUASMessageHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    5,   44,    2, 0x0a,    5 /* Public */,
      13,    1,   55,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    8,    9,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject UASMessageHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUASMessageHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UASMessageHandler, std::true_type>,
        // method 'textMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UASMessage *, std::false_type>,
        // method 'textMessageCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_activeVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>
    >,
    nullptr
} };

void UASMessageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UASMessageHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< std::add_pointer_t<UASMessage*>>(_a[1]))); break;
        case 1: _t->textMessageCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->handleTextMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 3: _t->_activeVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UASMessageHandler::*)(UASMessage * );
            if (_t _q_method = &UASMessageHandler::textMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UASMessageHandler::*)(int );
            if (_t _q_method = &UASMessageHandler::textMessageCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *UASMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUASMessageHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int UASMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UASMessageHandler::textMessageReceived(UASMessage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASMessageHandler::textMessageCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
