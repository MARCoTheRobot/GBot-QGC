/****************************************************************************
** Meta object code from reading C++ file 'RallyPointManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/RallyPointManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RallyPointManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRallyPointManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRallyPointManagerENDCLASS = QtMocHelpers::stringData(
    "RallyPointManager",
    "loadComplete",
    "",
    "inProgressChanged",
    "inProgress",
    "error",
    "errorCode",
    "errorMsg",
    "removeAllComplete",
    "sendComplete",
    "_sendComplete",
    "_planManagerLoadComplete",
    "removeAllRequested"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRallyPointManagerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[18];
    char stringdata9[13];
    char stringdata10[14];
    char stringdata11[25];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRallyPointManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRallyPointManagerENDCLASS_t qt_meta_stringdata_CLASSRallyPointManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "RallyPointManager"
        QT_MOC_LITERAL(18, 12),  // "loadComplete"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 17),  // "inProgressChanged"
        QT_MOC_LITERAL(50, 10),  // "inProgress"
        QT_MOC_LITERAL(61, 5),  // "error"
        QT_MOC_LITERAL(67, 9),  // "errorCode"
        QT_MOC_LITERAL(77, 8),  // "errorMsg"
        QT_MOC_LITERAL(86, 17),  // "removeAllComplete"
        QT_MOC_LITERAL(104, 12),  // "sendComplete"
        QT_MOC_LITERAL(117, 13),  // "_sendComplete"
        QT_MOC_LITERAL(131, 24),  // "_planManagerLoadComplete"
        QT_MOC_LITERAL(156, 18)   // "removeAllRequested"
    },
    "RallyPointManager",
    "loadComplete",
    "",
    "inProgressChanged",
    "inProgress",
    "error",
    "errorCode",
    "errorMsg",
    "removeAllComplete",
    "sendComplete",
    "_sendComplete",
    "_planManagerLoadComplete",
    "removeAllRequested"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRallyPointManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    1,   57,    2, 0x06,    2 /* Public */,
       5,    2,   60,    2, 0x06,    4 /* Public */,
       8,    1,   65,    2, 0x06,    7 /* Public */,
       9,    1,   68,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   71,    2, 0x08,   11 /* Private */,
      11,    1,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject RallyPointManager::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanManager::staticMetaObject>(),
    qt_meta_stringdata_CLASSRallyPointManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRallyPointManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRallyPointManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RallyPointManager, std::true_type>,
        // method 'loadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeAllComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_sendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_planManagerLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void RallyPointManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RallyPointManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadComplete(); break;
        case 1: _t->inProgressChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->removeAllComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->sendComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_sendComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->_planManagerLoadComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RallyPointManager::*)();
            if (_t _q_method = &RallyPointManager::loadComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (_t _q_method = &RallyPointManager::inProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(int , const QString & );
            if (_t _q_method = &RallyPointManager::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (_t _q_method = &RallyPointManager::removeAllComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RallyPointManager::*)(bool );
            if (_t _q_method = &RallyPointManager::sendComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *RallyPointManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RallyPointManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRallyPointManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanManager::qt_metacast(_clname);
}

int RallyPointManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RallyPointManager::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RallyPointManager::inProgressChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RallyPointManager::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RallyPointManager::removeAllComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RallyPointManager::sendComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
