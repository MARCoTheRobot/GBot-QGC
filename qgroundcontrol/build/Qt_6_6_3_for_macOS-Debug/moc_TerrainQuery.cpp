/****************************************************************************
** Meta object code from reading C++ file 'TerrainQuery.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Terrain/TerrainQuery.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainQuery.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS = QtMocHelpers::stringData(
    "TerrainAtCoordinateQuery",
    "terrainDataReceived",
    "",
    "success",
    "QList<double>",
    "heights"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[25];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[14];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS_t qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "TerrainAtCoordinateQuery"
        QT_MOC_LITERAL(25, 19),  // "terrainDataReceived"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 7),  // "success"
        QT_MOC_LITERAL(54, 13),  // "QList<double>"
        QT_MOC_LITERAL(68, 7)   // "heights"
    },
    "TerrainAtCoordinateQuery",
    "terrainDataReceived",
    "",
    "success",
    "QList<double>",
    "heights"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainAtCoordinateQueryENDCLASS[] = {

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
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainAtCoordinateQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainAtCoordinateQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainAtCoordinateQuery, std::true_type>,
        // method 'terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>
    >,
    nullptr
} };

void TerrainAtCoordinateQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAtCoordinateQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainAtCoordinateQuery::*)(bool , QList<double> );
            if (_t _q_method = &TerrainAtCoordinateQuery::terrainDataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TerrainAtCoordinateQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAtCoordinateQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainAtCoordinateQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainAtCoordinateQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TerrainAtCoordinateQuery::terrainDataReceived(bool _t1, QList<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS = QtMocHelpers::stringData(
    "TerrainPathQuery",
    "terrainDataReceived",
    "",
    "success",
    "PathHeightInfo_t",
    "pathHeightInfo",
    "_pathHeights",
    "distanceBetween",
    "finalDistanceBetween",
    "QList<double>",
    "heights"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[17];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[21];
    char stringdata9[14];
    char stringdata10[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS_t qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "TerrainPathQuery"
        QT_MOC_LITERAL(17, 19),  // "terrainDataReceived"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 7),  // "success"
        QT_MOC_LITERAL(46, 16),  // "PathHeightInfo_t"
        QT_MOC_LITERAL(63, 14),  // "pathHeightInfo"
        QT_MOC_LITERAL(78, 12),  // "_pathHeights"
        QT_MOC_LITERAL(91, 15),  // "distanceBetween"
        QT_MOC_LITERAL(107, 20),  // "finalDistanceBetween"
        QT_MOC_LITERAL(128, 13),  // "QList<double>"
        QT_MOC_LITERAL(142, 7)   // "heights"
    },
    "TerrainPathQuery",
    "terrainDataReceived",
    "",
    "success",
    "PathHeightInfo_t",
    "pathHeightInfo",
    "_pathHeights",
    "distanceBetween",
    "finalDistanceBetween",
    "QList<double>",
    "heights"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainPathQueryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    4,   31,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 9,    3,    7,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainPathQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainPathQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainPathQuery, std::true_type>,
        // method 'terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PathHeightInfo_t &, std::false_type>,
        // method '_pathHeights'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<double> &, std::false_type>
    >,
    nullptr
} };

void TerrainPathQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainPathQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PathHeightInfo_t>>(_a[2]))); break;
        case 1: _t->_pathHeights((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainPathQuery::*)(bool , const PathHeightInfo_t & );
            if (_t _q_method = &TerrainPathQuery::terrainDataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TerrainPathQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainPathQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainPathQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainPathQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TerrainPathQuery::terrainDataReceived(bool _t1, const PathHeightInfo_t & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS = QtMocHelpers::stringData(
    "TerrainPolyPathQuery",
    "terrainDataReceived",
    "",
    "success",
    "QList<TerrainPathQuery::PathHeightInfo_t>",
    "rgPathHeightInfo",
    "_terrainDataReceived",
    "TerrainPathQuery::PathHeightInfo_t",
    "pathHeightInfo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[21];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[42];
    char stringdata5[17];
    char stringdata6[21];
    char stringdata7[35];
    char stringdata8[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS_t qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "TerrainPolyPathQuery"
        QT_MOC_LITERAL(21, 19),  // "terrainDataReceived"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 7),  // "success"
        QT_MOC_LITERAL(50, 41),  // "QList<TerrainPathQuery::PathH..."
        QT_MOC_LITERAL(92, 16),  // "rgPathHeightInfo"
        QT_MOC_LITERAL(109, 20),  // "_terrainDataReceived"
        QT_MOC_LITERAL(130, 34),  // "TerrainPathQuery::PathHeightI..."
        QT_MOC_LITERAL(165, 14)   // "pathHeightInfo"
    },
    "TerrainPolyPathQuery",
    "terrainDataReceived",
    "",
    "success",
    "QList<TerrainPathQuery::PathHeightInfo_t>",
    "rgPathHeightInfo",
    "_terrainDataReceived",
    "TerrainPathQuery::PathHeightInfo_t",
    "pathHeightInfo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainPolyPathQueryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    2,   31,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    3,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainPolyPathQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainPolyPathQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainPolyPathQuery, std::true_type>,
        // method 'terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<TerrainPathQuery::PathHeightInfo_t> &, std::false_type>,
        // method '_terrainDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TerrainPathQuery::PathHeightInfo_t &, std::false_type>
    >,
    nullptr
} };

void TerrainPolyPathQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainPolyPathQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<TerrainPathQuery::PathHeightInfo_t>>>(_a[2]))); break;
        case 1: _t->_terrainDataReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TerrainPathQuery::PathHeightInfo_t>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<TerrainPathQuery::PathHeightInfo_t> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TerrainPathQuery::PathHeightInfo_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainPolyPathQuery::*)(bool , const QList<TerrainPathQuery::PathHeightInfo_t> & );
            if (_t _q_method = &TerrainPolyPathQuery::terrainDataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TerrainPolyPathQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainPolyPathQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainPolyPathQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainPolyPathQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TerrainPolyPathQuery::terrainDataReceived(bool _t1, const QList<TerrainPathQuery::PathHeightInfo_t> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS = QtMocHelpers::stringData(
    "TerrainAtCoordinateBatchManager",
    "_sendNextBatch",
    "",
    "_queryObjectDestroyed",
    "elevationProvider",
    "_coordinateHeights",
    "success",
    "QList<double>",
    "heights"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[32];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[8];
    char stringdata7[14];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS_t qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "TerrainAtCoordinateBatchManager"
        QT_MOC_LITERAL(32, 14),  // "_sendNextBatch"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 21),  // "_queryObjectDestroyed"
        QT_MOC_LITERAL(70, 17),  // "elevationProvider"
        QT_MOC_LITERAL(88, 18),  // "_coordinateHeights"
        QT_MOC_LITERAL(107, 7),  // "success"
        QT_MOC_LITERAL(115, 13),  // "QList<double>"
        QT_MOC_LITERAL(129, 7)   // "heights"
    },
    "TerrainAtCoordinateBatchManager",
    "_sendNextBatch",
    "",
    "_queryObjectDestroyed",
    "elevationProvider",
    "_coordinateHeights",
    "success",
    "QList<double>",
    "heights"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainAtCoordinateBatchManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       5,    2,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainAtCoordinateBatchManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainAtCoordinateBatchManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainAtCoordinateBatchManager, std::true_type>,
        // method '_sendNextBatch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_queryObjectDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method '_coordinateHeights'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>
    >,
    nullptr
} };

void TerrainAtCoordinateBatchManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAtCoordinateBatchManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_sendNextBatch(); break;
        case 1: _t->_queryObjectDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->_coordinateHeights((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *TerrainAtCoordinateBatchManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAtCoordinateBatchManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainAtCoordinateBatchManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainAtCoordinateBatchManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}
QT_WARNING_POP
