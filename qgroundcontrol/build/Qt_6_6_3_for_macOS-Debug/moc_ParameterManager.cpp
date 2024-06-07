/****************************************************************************
** Meta object code from reading C++ file 'ParameterManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/ParameterManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSParameterManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParameterManagerENDCLASS = QtMocHelpers::stringData(
    "ParameterManager",
    "parametersReadyChanged",
    "",
    "parametersReady",
    "missingParametersChanged",
    "missingParameters",
    "loadProgressChanged",
    "value",
    "pendingWritesChanged",
    "pendingWrites",
    "factAdded",
    "componentId",
    "Fact*",
    "fact",
    "_factRawValueUpdated",
    "rawValue",
    "loadProgress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParameterManagerENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[17];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[25];
    char stringdata5[18];
    char stringdata6[20];
    char stringdata7[6];
    char stringdata8[21];
    char stringdata9[14];
    char stringdata10[10];
    char stringdata11[12];
    char stringdata12[6];
    char stringdata13[5];
    char stringdata14[21];
    char stringdata15[9];
    char stringdata16[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParameterManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParameterManagerENDCLASS_t qt_meta_stringdata_CLASSParameterManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ParameterManager"
        QT_MOC_LITERAL(17, 22),  // "parametersReadyChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 15),  // "parametersReady"
        QT_MOC_LITERAL(57, 24),  // "missingParametersChanged"
        QT_MOC_LITERAL(82, 17),  // "missingParameters"
        QT_MOC_LITERAL(100, 19),  // "loadProgressChanged"
        QT_MOC_LITERAL(120, 5),  // "value"
        QT_MOC_LITERAL(126, 20),  // "pendingWritesChanged"
        QT_MOC_LITERAL(147, 13),  // "pendingWrites"
        QT_MOC_LITERAL(161, 9),  // "factAdded"
        QT_MOC_LITERAL(171, 11),  // "componentId"
        QT_MOC_LITERAL(183, 5),  // "Fact*"
        QT_MOC_LITERAL(189, 4),  // "fact"
        QT_MOC_LITERAL(194, 20),  // "_factRawValueUpdated"
        QT_MOC_LITERAL(215, 8),  // "rawValue"
        QT_MOC_LITERAL(224, 12)   // "loadProgress"
    },
    "ParameterManager",
    "parametersReadyChanged",
    "",
    "parametersReady",
    "missingParametersChanged",
    "missingParameters",
    "loadProgressChanged",
    "value",
    "pendingWritesChanged",
    "pendingWrites",
    "factAdded",
    "componentId",
    "Fact*",
    "fact",
    "_factRawValueUpdated",
    "rawValue",
    "loadProgress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParameterManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    5 /* Public */,
       4,    1,   53,    2, 0x06,    7 /* Public */,
       6,    1,   56,    2, 0x06,    9 /* Public */,
       8,    1,   59,    2, 0x06,   11 /* Public */,
      10,    2,   62,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   67,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   15,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015001, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,
      16, QMetaType::Double, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParameterManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSParameterManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParameterManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParameterManagerENDCLASS_t,
        // property 'parametersReady'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'missingParameters'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'loadProgress'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'pendingWrites'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterManager, std::true_type>,
        // method 'parametersReadyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'missingParametersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'pendingWritesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'factAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        // method '_factRawValueUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void ParameterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parametersReadyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->missingParametersChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->loadProgressChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->pendingWritesChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->factAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Fact*>>(_a[2]))); break;
        case 5: _t->_factRawValueUpdated((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Fact* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterManager::*)(bool );
            if (_t _q_method = &ParameterManager::parametersReadyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(bool );
            if (_t _q_method = &ParameterManager::missingParametersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(float );
            if (_t _q_method = &ParameterManager::loadProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(bool );
            if (_t _q_method = &ParameterManager::pendingWritesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParameterManager::*)(int , Fact * );
            if (_t _q_method = &ParameterManager::factAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->parametersReady(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->missingParameters(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->pendingWrites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ParameterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParameterManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ParameterManager::parametersReadyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterManager::missingParametersChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParameterManager::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ParameterManager::pendingWritesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ParameterManager::factAdded(int _t1, Fact * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
