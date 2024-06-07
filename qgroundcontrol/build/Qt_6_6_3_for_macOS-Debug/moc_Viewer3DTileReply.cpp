/****************************************************************************
** Meta object code from reading C++ file 'Viewer3DTileReply.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Viewer3D/Viewer3DTileReply.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer3DTileReply.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS = QtMocHelpers::stringData(
    "Viewer3DTileReply",
    "tileDone",
    "",
    "tileInfo_t",
    "tileEmpty",
    "tileError",
    "tileGiveUp"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS_t qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "Viewer3DTileReply"
        QT_MOC_LITERAL(18, 8),  // "tileDone"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 10),  // "tileInfo_t"
        QT_MOC_LITERAL(39, 9),  // "tileEmpty"
        QT_MOC_LITERAL(49, 9),  // "tileError"
        QT_MOC_LITERAL(59, 10)   // "tileGiveUp"
    },
    "Viewer3DTileReply",
    "tileDone",
    "",
    "tileInfo_t",
    "tileEmpty",
    "tileError",
    "tileGiveUp"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewer3DTileReplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,
       5,    1,   44,    2, 0x06,    5 /* Public */,
       6,    1,   47,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Viewer3DTileReply::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewer3DTileReplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewer3DTileReply, std::true_type>,
        // method 'tileDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<tileInfo_t, std::false_type>,
        // method 'tileEmpty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<tileInfo_t, std::false_type>,
        // method 'tileError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<tileInfo_t, std::false_type>,
        // method 'tileGiveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<tileInfo_t, std::false_type>
    >,
    nullptr
} };

void Viewer3DTileReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Viewer3DTileReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileDone((*reinterpret_cast< std::add_pointer_t<tileInfo_t>>(_a[1]))); break;
        case 1: _t->tileEmpty((*reinterpret_cast< std::add_pointer_t<tileInfo_t>>(_a[1]))); break;
        case 2: _t->tileError((*reinterpret_cast< std::add_pointer_t<tileInfo_t>>(_a[1]))); break;
        case 3: _t->tileGiveUp((*reinterpret_cast< std::add_pointer_t<tileInfo_t>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Viewer3DTileReply::*)(tileInfo_t );
            if (_t _q_method = &Viewer3DTileReply::tileDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Viewer3DTileReply::*)(tileInfo_t );
            if (_t _q_method = &Viewer3DTileReply::tileEmpty; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Viewer3DTileReply::*)(tileInfo_t );
            if (_t _q_method = &Viewer3DTileReply::tileError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Viewer3DTileReply::*)(tileInfo_t );
            if (_t _q_method = &Viewer3DTileReply::tileGiveUp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Viewer3DTileReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer3DTileReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewer3DTileReplyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Viewer3DTileReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Viewer3DTileReply::tileDone(tileInfo_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Viewer3DTileReply::tileEmpty(tileInfo_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Viewer3DTileReply::tileError(tileInfo_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Viewer3DTileReply::tileGiveUp(tileInfo_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
