/****************************************************************************
** Meta object code from reading C++ file 'PlanElementController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/PlanElementController.h"
#include "PlanMasterController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanElementController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlanElementControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPlanElementControllerENDCLASS = QtMocHelpers::stringData(
    "PlanElementController",
    "supportedChanged",
    "",
    "supported",
    "containsItemsChanged",
    "containsItems",
    "syncInProgressChanged",
    "syncInProgress",
    "dirtyChanged",
    "dirty",
    "sendComplete",
    "removeAllComplete",
    "masterController",
    "PlanMasterController*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlanElementControllerENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[22];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[21];
    char stringdata5[14];
    char stringdata6[22];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[6];
    char stringdata10[13];
    char stringdata11[18];
    char stringdata12[17];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlanElementControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlanElementControllerENDCLASS_t qt_meta_stringdata_CLASSPlanElementControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "PlanElementController"
        QT_MOC_LITERAL(22, 16),  // "supportedChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 9),  // "supported"
        QT_MOC_LITERAL(50, 20),  // "containsItemsChanged"
        QT_MOC_LITERAL(71, 13),  // "containsItems"
        QT_MOC_LITERAL(85, 21),  // "syncInProgressChanged"
        QT_MOC_LITERAL(107, 14),  // "syncInProgress"
        QT_MOC_LITERAL(122, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(135, 5),  // "dirty"
        QT_MOC_LITERAL(141, 12),  // "sendComplete"
        QT_MOC_LITERAL(154, 17),  // "removeAllComplete"
        QT_MOC_LITERAL(172, 16),  // "masterController"
        QT_MOC_LITERAL(189, 21)   // "PlanMasterController*"
    },
    "PlanElementController",
    "supportedChanged",
    "",
    "supported",
    "containsItemsChanged",
    "containsItems",
    "syncInProgressChanged",
    "syncInProgress",
    "dirtyChanged",
    "dirty",
    "sendComplete",
    "removeAllComplete",
    "masterController",
    "PlanMasterController*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlanElementControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    6 /* Public */,
       4,    1,   53,    2, 0x06,    8 /* Public */,
       6,    1,   56,    2, 0x06,   10 /* Public */,
       8,    1,   59,    2, 0x06,   12 /* Public */,
      10,    0,   62,    2, 0x06,   14 /* Public */,
      11,    0,   63,    2, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00015409, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,
       7, QMetaType::Bool, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlanElementController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlanElementControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlanElementControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlanElementControllerENDCLASS_t,
        // property 'masterController'
        QtPrivate::TypeAndForceComplete<PlanMasterController*, std::true_type>,
        // property 'supported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'containsItems'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'syncInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlanElementController, std::true_type>,
        // method 'supportedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'containsItemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'syncInProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeAllComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlanElementController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanElementController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->supportedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->containsItemsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->syncInProgressChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->sendComplete(); break;
        case 5: _t->removeAllComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlanElementController::*)(bool );
            if (_t _q_method = &PlanElementController::supportedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (_t _q_method = &PlanElementController::containsItemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (_t _q_method = &PlanElementController::syncInProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)(bool );
            if (_t _q_method = &PlanElementController::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)();
            if (_t _q_method = &PlanElementController::sendComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlanElementController::*)();
            if (_t _q_method = &PlanElementController::removeAllComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlanElementController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PlanMasterController**>(_v) = _t->masterController(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->supported(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->containsItems(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->syncInProgress(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlanElementController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PlanElementController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanElementController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlanElementControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlanElementController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlanElementController::supportedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanElementController::containsItemsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlanElementController::syncInProgressChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlanElementController::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlanElementController::sendComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlanElementController::removeAllComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
