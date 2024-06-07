/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngineData.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCMapEngineData.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngineData.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCCacheTileENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCCacheTileENDCLASS = QtMocHelpers::stringData(
    "QGCCacheTile"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCCacheTileENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCCacheTileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCCacheTileENDCLASS_t qt_meta_stringdata_CLASSQGCCacheTileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12)   // "QGCCacheTile"
    },
    "QGCCacheTile"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCCacheTileENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCCacheTile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCCacheTileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCCacheTileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCCacheTileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCCacheTile, std::true_type>
    >,
    nullptr
} };

void QGCCacheTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGCCacheTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCacheTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCCacheTileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCacheTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCMapTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMapTaskENDCLASS = QtMocHelpers::stringData(
    "QGCMapTask",
    "error",
    "",
    "QGCMapTask::TaskType",
    "type",
    "errorString"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMapTaskENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[5];
    char stringdata5[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMapTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMapTaskENDCLASS_t qt_meta_stringdata_CLASSQGCMapTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QGCMapTask"
        QT_MOC_LITERAL(11, 5),  // "error"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 20),  // "QGCMapTask::TaskType"
        QT_MOC_LITERAL(39, 4),  // "type"
        QT_MOC_LITERAL(44, 11)   // "errorString"
    },
    "QGCMapTask",
    "error",
    "",
    "QGCMapTask::TaskType",
    "type",
    "errorString"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMapTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMapTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMapTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMapTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCMapTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCMapTask, std::true_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCMapTask::TaskType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void QGCMapTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<QGCMapTask::TaskType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapTask::*)(QGCMapTask::TaskType , QString );
            if (_t _q_method = &QGCMapTask::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCMapTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMapTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCMapTask::error(QGCMapTask::TaskType _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS = QtMocHelpers::stringData(
    "QGCFetchTileSetTask",
    "tileSetFetched",
    "",
    "QGCCachedTileSet*",
    "tileSet"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS_t qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QGCFetchTileSetTask"
        QT_MOC_LITERAL(20, 14),  // "tileSetFetched"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 17),  // "QGCCachedTileSet*"
        QT_MOC_LITERAL(54, 7)   // "tileSet"
    },
    "QGCFetchTileSetTask",
    "tileSetFetched",
    "",
    "QGCCachedTileSet*",
    "tileSet"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCFetchTileSetTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCFetchTileSetTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCFetchTileSetTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCFetchTileSetTask, std::true_type>,
        // method 'tileSetFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>
    >,
    nullptr
} };

void QGCFetchTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCFetchTileSetTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileSetFetched((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCFetchTileSetTask::*)(QGCCachedTileSet * );
            if (_t _q_method = &QGCFetchTileSetTask::tileSetFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCFetchTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFetchTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCFetchTileSetTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCFetchTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCFetchTileSetTask::tileSetFetched(QGCCachedTileSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS = QtMocHelpers::stringData(
    "QGCCreateTileSetTask",
    "tileSetSaved",
    "",
    "QGCCachedTileSet*",
    "tileSet"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[21];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS_t qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "QGCCreateTileSetTask"
        QT_MOC_LITERAL(21, 12),  // "tileSetSaved"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 17),  // "QGCCachedTileSet*"
        QT_MOC_LITERAL(53, 7)   // "tileSet"
    },
    "QGCCreateTileSetTask",
    "tileSetSaved",
    "",
    "QGCCachedTileSet*",
    "tileSet"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCCreateTileSetTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCCreateTileSetTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCCreateTileSetTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCCreateTileSetTask, std::true_type>,
        // method 'tileSetSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCachedTileSet *, std::false_type>
    >,
    nullptr
} };

void QGCCreateTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCCreateTileSetTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileSetSaved((*reinterpret_cast< std::add_pointer_t<QGCCachedTileSet*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCCreateTileSetTask::*)(QGCCachedTileSet * );
            if (_t _q_method = &QGCCreateTileSetTask::tileSetSaved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCCreateTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCreateTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCCreateTileSetTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCCreateTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCCreateTileSetTask::tileSetSaved(QGCCachedTileSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS = QtMocHelpers::stringData(
    "QGCFetchTileTask",
    "tileFetched",
    "",
    "QGCCacheTile*",
    "tile"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS_t qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QGCFetchTileTask"
        QT_MOC_LITERAL(17, 11),  // "tileFetched"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "QGCCacheTile*"
        QT_MOC_LITERAL(44, 4)   // "tile"
    },
    "QGCFetchTileTask",
    "tileFetched",
    "",
    "QGCCacheTile*",
    "tile"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCFetchTileTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCFetchTileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCFetchTileTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCFetchTileTask, std::true_type>,
        // method 'tileFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCacheTile *, std::false_type>
    >,
    nullptr
} };

void QGCFetchTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCFetchTileTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileFetched((*reinterpret_cast< std::add_pointer_t<QGCCacheTile*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGCCacheTile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCFetchTileTask::*)(QGCCacheTile * );
            if (_t _q_method = &QGCFetchTileTask::tileFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCFetchTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFetchTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCFetchTileTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCFetchTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGCFetchTileTask::tileFetched(QGCCacheTile * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS = QtMocHelpers::stringData(
    "QGCSaveTileTask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS_t qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "QGCSaveTileTask"
    },
    "QGCSaveTileTask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCSaveTileTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCSaveTileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCSaveTileTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCSaveTileTask, std::true_type>
    >,
    nullptr
} };

void QGCSaveTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGCSaveTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCSaveTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCSaveTileTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCSaveTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS = QtMocHelpers::stringData(
    "QGCGetTileDownloadListTask",
    "tileListFetched",
    "",
    "QList<QGCTile*>",
    "tiles"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[27];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS_t qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QGCGetTileDownloadListTask"
        QT_MOC_LITERAL(27, 15),  // "tileListFetched"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 15),  // "QList<QGCTile*>"
        QT_MOC_LITERAL(60, 5)   // "tiles"
    },
    "QGCGetTileDownloadListTask",
    "tileListFetched",
    "",
    "QList<QGCTile*>",
    "tiles"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCGetTileDownloadListTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCGetTileDownloadListTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCGetTileDownloadListTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCGetTileDownloadListTask, std::true_type>,
        // method 'tileListFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QGCTile*>, std::false_type>
    >,
    nullptr
} };

void QGCGetTileDownloadListTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCGetTileDownloadListTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileListFetched((*reinterpret_cast< std::add_pointer_t<QList<QGCTile*>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCGetTileDownloadListTask::*)(QList<QGCTile*> );
            if (_t _q_method = &QGCGetTileDownloadListTask::tileListFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCGetTileDownloadListTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCGetTileDownloadListTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCGetTileDownloadListTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCGetTileDownloadListTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCGetTileDownloadListTask::tileListFetched(QList<QGCTile*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS = QtMocHelpers::stringData(
    "QGCUpdateTileDownloadStateTask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS_t qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30)   // "QGCUpdateTileDownloadStateTask"
    },
    "QGCUpdateTileDownloadStateTask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCUpdateTileDownloadStateTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCUpdateTileDownloadStateTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCUpdateTileDownloadStateTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCUpdateTileDownloadStateTask, std::true_type>
    >,
    nullptr
} };

void QGCUpdateTileDownloadStateTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGCUpdateTileDownloadStateTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUpdateTileDownloadStateTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCUpdateTileDownloadStateTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCUpdateTileDownloadStateTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS = QtMocHelpers::stringData(
    "QGCDeleteTileSetTask",
    "tileSetDeleted",
    "",
    "setID"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS_t qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "QGCDeleteTileSetTask"
        QT_MOC_LITERAL(21, 14),  // "tileSetDeleted"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 5)   // "setID"
    },
    "QGCDeleteTileSetTask",
    "tileSetDeleted",
    "",
    "setID"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCDeleteTileSetTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCDeleteTileSetTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCDeleteTileSetTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCDeleteTileSetTask, std::true_type>,
        // method 'tileSetDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qulonglong, std::false_type>
    >,
    nullptr
} };

void QGCDeleteTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCDeleteTileSetTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tileSetDeleted((*reinterpret_cast< std::add_pointer_t<qulonglong>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCDeleteTileSetTask::*)(qulonglong );
            if (_t _q_method = &QGCDeleteTileSetTask::tileSetDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGCDeleteTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCDeleteTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCDeleteTileSetTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCDeleteTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCDeleteTileSetTask::tileSetDeleted(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS = QtMocHelpers::stringData(
    "QGCRenameTileSetTask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS_t qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20)   // "QGCRenameTileSetTask"
    },
    "QGCRenameTileSetTask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCRenameTileSetTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCRenameTileSetTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCRenameTileSetTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCRenameTileSetTask, std::true_type>
    >,
    nullptr
} };

void QGCRenameTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QGCRenameTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCRenameTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCRenameTileSetTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCRenameTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS = QtMocHelpers::stringData(
    "QGCPruneCacheTask",
    "pruned",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[18];
    char stringdata1[7];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS_t qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGCPruneCacheTask"
        QT_MOC_LITERAL(18, 6),  // "pruned"
        QT_MOC_LITERAL(25, 0)   // ""
    },
    "QGCPruneCacheTask",
    "pruned",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCPruneCacheTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCPruneCacheTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCPruneCacheTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCPruneCacheTask, std::true_type>,
        // method 'pruned'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCPruneCacheTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCPruneCacheTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pruned(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCPruneCacheTask::*)();
            if (_t _q_method = &QGCPruneCacheTask::pruned; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QGCPruneCacheTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPruneCacheTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCPruneCacheTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCPruneCacheTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCPruneCacheTask::pruned()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCResetTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCResetTaskENDCLASS = QtMocHelpers::stringData(
    "QGCResetTask",
    "resetCompleted",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCResetTaskENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[13];
    char stringdata1[15];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCResetTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCResetTaskENDCLASS_t qt_meta_stringdata_CLASSQGCResetTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "QGCResetTask"
        QT_MOC_LITERAL(13, 14),  // "resetCompleted"
        QT_MOC_LITERAL(28, 0)   // ""
    },
    "QGCResetTask",
    "resetCompleted",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCResetTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCResetTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCResetTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCResetTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCResetTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCResetTask, std::true_type>,
        // method 'resetCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCResetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCResetTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCResetTask::*)();
            if (_t _q_method = &QGCResetTask::resetCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *QGCResetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCResetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCResetTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCResetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCResetTask::resetCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS = QtMocHelpers::stringData(
    "QGCExportTileTask",
    "actionCompleted",
    "",
    "actionProgress",
    "percentage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[18];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS_t qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGCExportTileTask"
        QT_MOC_LITERAL(18, 15),  // "actionCompleted"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "actionProgress"
        QT_MOC_LITERAL(50, 10)   // "percentage"
    },
    "QGCExportTileTask",
    "actionCompleted",
    "",
    "actionProgress",
    "percentage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCExportTileTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCExportTileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCExportTileTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCExportTileTask, std::true_type>,
        // method 'actionCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QGCExportTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCExportTileTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionCompleted(); break;
        case 1: _t->actionProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCExportTileTask::*)();
            if (_t _q_method = &QGCExportTileTask::actionCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCExportTileTask::*)(int );
            if (_t _q_method = &QGCExportTileTask::actionProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QGCExportTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCExportTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCExportTileTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCExportTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QGCExportTileTask::actionCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCExportTileTask::actionProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS = QtMocHelpers::stringData(
    "QGCImportTileTask",
    "actionCompleted",
    "",
    "actionProgress",
    "percentage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[18];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS_t qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGCImportTileTask"
        QT_MOC_LITERAL(18, 15),  // "actionCompleted"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "actionProgress"
        QT_MOC_LITERAL(50, 10)   // "percentage"
    },
    "QGCImportTileTask",
    "actionCompleted",
    "",
    "actionProgress",
    "percentage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCImportTileTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCImportTileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCMapTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCImportTileTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCImportTileTask, std::true_type>,
        // method 'actionCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QGCImportTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCImportTileTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actionCompleted(); break;
        case 1: _t->actionProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCImportTileTask::*)();
            if (_t _q_method = &QGCImportTileTask::actionCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCImportTileTask::*)(int );
            if (_t _q_method = &QGCImportTileTask::actionProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QGCImportTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCImportTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCImportTileTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCImportTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QGCImportTileTask::actionCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCImportTileTask::actionProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
