/****************************************************************************
** Meta object code from reading C++ file 'QGCMapCircle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCMapCircle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapCircle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMapCircleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMapCircleENDCLASS = QtMocHelpers::stringData(
    "QGCMapCircle",
    "dirtyChanged",
    "",
    "dirty",
    "centerChanged",
    "QGeoCoordinate",
    "center",
    "interactiveChanged",
    "interactive",
    "showRotationChanged",
    "showRotation",
    "clockwiseRotationChanged",
    "clockwiseRotation",
    "_setDirty",
    "radius",
    "Fact*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMapCircleENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[7];
    char stringdata7[19];
    char stringdata8[12];
    char stringdata9[20];
    char stringdata10[13];
    char stringdata11[25];
    char stringdata12[18];
    char stringdata13[10];
    char stringdata14[7];
    char stringdata15[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMapCircleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMapCircleENDCLASS_t qt_meta_stringdata_CLASSQGCMapCircleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QGCMapCircle"
        QT_MOC_LITERAL(13, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "dirty"
        QT_MOC_LITERAL(33, 13),  // "centerChanged"
        QT_MOC_LITERAL(47, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(62, 6),  // "center"
        QT_MOC_LITERAL(69, 18),  // "interactiveChanged"
        QT_MOC_LITERAL(88, 11),  // "interactive"
        QT_MOC_LITERAL(100, 19),  // "showRotationChanged"
        QT_MOC_LITERAL(120, 12),  // "showRotation"
        QT_MOC_LITERAL(133, 24),  // "clockwiseRotationChanged"
        QT_MOC_LITERAL(158, 17),  // "clockwiseRotation"
        QT_MOC_LITERAL(176, 9),  // "_setDirty"
        QT_MOC_LITERAL(186, 6),  // "radius"
        QT_MOC_LITERAL(193, 5)   // "Fact*"
    },
    "QGCMapCircle",
    "dirtyChanged",
    "",
    "dirty",
    "centerChanged",
    "QGeoCoordinate",
    "center",
    "interactiveChanged",
    "interactive",
    "showRotationChanged",
    "showRotation",
    "clockwiseRotationChanged",
    "clockwiseRotation",
    "_setDirty",
    "radius",
    "Fact*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMapCircleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    7 /* Public */,
       4,    1,   53,    2, 0x06,    9 /* Public */,
       7,    1,   56,    2, 0x06,   11 /* Public */,
       9,    1,   59,    2, 0x06,   13 /* Public */,
      11,    1,   62,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   65,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       6, 0x80000000 | 5, 0x0001510b, uint(1), 0,
      14, 0x80000000 | 15, 0x00015409, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(2), 0,
      10, QMetaType::Bool, 0x00015103, uint(3), 0,
      12, QMetaType::Bool, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMapCircle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMapCircleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMapCircleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCMapCircleENDCLASS_t,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'center'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'radius'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'interactive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showRotation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'clockwiseRotation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCMapCircle, std::true_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'centerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'interactiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clockwiseRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCMapCircle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->centerChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 2: _t->interactiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->showRotationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->clockwiseRotationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_setDirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (_t _q_method = &QGCMapCircle::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(QGeoCoordinate );
            if (_t _q_method = &QGCMapCircle::centerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (_t _q_method = &QGCMapCircle::interactiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (_t _q_method = &QGCMapCircle::showRotationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapCircle::*)(bool );
            if (_t _q_method = &QGCMapCircle::clockwiseRotationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showRotation(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->clockwiseRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapCircle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 3: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowRotation(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setClockwiseRotation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMapCircle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapCircle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMapCircleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapCircle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGCMapCircle::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapCircle::centerChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCMapCircle::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapCircle::showRotationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCMapCircle::clockwiseRotationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
