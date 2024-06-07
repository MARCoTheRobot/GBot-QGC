/****************************************************************************
** Meta object code from reading C++ file 'InitialConnectStateMachine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/InitialConnectStateMachine.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InitialConnectStateMachine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS = QtMocHelpers::stringData(
    "InitialConnectStateMachine",
    "progressUpdate",
    "",
    "progress",
    "gotProgressUpdate",
    "progressValue",
    "standardModesRequestCompleted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[27];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[14];
    char stringdata6[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS_t qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "InitialConnectStateMachine"
        QT_MOC_LITERAL(27, 14),  // "progressUpdate"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 8),  // "progress"
        QT_MOC_LITERAL(52, 17),  // "gotProgressUpdate"
        QT_MOC_LITERAL(70, 13),  // "progressValue"
        QT_MOC_LITERAL(84, 29)   // "standardModesRequestCompleted"
    },
    "InitialConnectStateMachine",
    "progressUpdate",
    "",
    "progress",
    "gotProgressUpdate",
    "progressValue",
    "standardModesRequestCompleted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInitialConnectStateMachineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x08,    3 /* Private */,
       6,    0,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject InitialConnectStateMachine::staticMetaObject = { {
    QMetaObject::SuperData::link<StateMachine::staticMetaObject>(),
    qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInitialConnectStateMachineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InitialConnectStateMachine, std::true_type>,
        // method 'progressUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'gotProgressUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'standardModesRequestCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void InitialConnectStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitialConnectStateMachine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->gotProgressUpdate((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->standardModesRequestCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InitialConnectStateMachine::*)(float );
            if (_t _q_method = &InitialConnectStateMachine::progressUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *InitialConnectStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InitialConnectStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInitialConnectStateMachineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return StateMachine::qt_metacast(_clname);
}

int InitialConnectStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void InitialConnectStateMachine::progressUpdate(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
