/****************************************************************************
** Meta object code from reading C++ file 'RCToParamDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/RCToParamDialogController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RCToParamDialogController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS = QtMocHelpers::stringData(
    "RCToParamDialogController",
    "tuningFactChanged",
    "",
    "Fact*",
    "fact",
    "readyChanged",
    "ready",
    "_parameterUpdated",
    "tuningFact",
    "scale",
    "center",
    "min",
    "max"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[26];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[5];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[6];
    char stringdata10[7];
    char stringdata11[4];
    char stringdata12[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS_t qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "RCToParamDialogController"
        QT_MOC_LITERAL(26, 17),  // "tuningFactChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 5),  // "Fact*"
        QT_MOC_LITERAL(51, 4),  // "fact"
        QT_MOC_LITERAL(56, 12),  // "readyChanged"
        QT_MOC_LITERAL(69, 5),  // "ready"
        QT_MOC_LITERAL(75, 17),  // "_parameterUpdated"
        QT_MOC_LITERAL(93, 10),  // "tuningFact"
        QT_MOC_LITERAL(104, 5),  // "scale"
        QT_MOC_LITERAL(110, 6),  // "center"
        QT_MOC_LITERAL(117, 3),  // "min"
        QT_MOC_LITERAL(121, 3)   // "max"
    },
    "RCToParamDialogController",
    "tuningFactChanged",
    "",
    "Fact*",
    "fact",
    "readyChanged",
    "ready",
    "_parameterUpdated",
    "tuningFact",
    "scale",
    "center",
    "min",
    "max"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRCToParamDialogControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    7 /* Public */,
       5,    1,   35,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   38,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0001510b, uint(0), 0,
       6, QMetaType::Bool, 0x00015003, uint(1), 0,
       9, 0x80000000 | 3, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 3, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 3, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 3, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RCToParamDialogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRCToParamDialogControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS_t,
        // property 'tuningFact'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'ready'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'scale'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'center'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'min'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'max'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RCToParamDialogController, std::true_type>,
        // method 'tuningFactChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        // method 'readyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_parameterUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RCToParamDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tuningFactChanged((*reinterpret_cast< std::add_pointer_t<Fact*>>(_a[1]))); break;
        case 1: _t->readyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->_parameterUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Fact* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RCToParamDialogController::*)(Fact * );
            if (_t _q_method = &RCToParamDialogController::tuningFactChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RCToParamDialogController::*)(bool );
            if (_t _q_method = &RCToParamDialogController::readyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->tuningFact(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->_ready; break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->scale(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->center(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->min(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->max(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RCToParamDialogController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTuningFact(*reinterpret_cast< Fact**>(_v)); break;
        case 1:
            if (_t->_ready != *reinterpret_cast< bool*>(_v)) {
                _t->_ready = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->readyChanged(_t->_ready);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *RCToParamDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RCToParamDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRCToParamDialogControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RCToParamDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RCToParamDialogController::tuningFactChanged(Fact * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RCToParamDialogController::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
