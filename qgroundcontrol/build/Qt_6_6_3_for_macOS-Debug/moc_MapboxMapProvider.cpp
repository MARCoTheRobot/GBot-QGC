/****************************************************************************
** Meta object code from reading C++ file 'MapboxMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/MapboxMapProvider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapboxMapProvider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17)   // "MapboxMapProvider"
    },
    "MapboxMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int MapboxMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxStreetMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "MapboxStreetMapProvider"
    },
    "MapboxStreetMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxStreetMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxStreetMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxStreetMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxStreetMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxStreetMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxStreetMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxStreetMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxStreetMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxStreetMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxLightMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22)   // "MapboxLightMapProvider"
    },
    "MapboxLightMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxLightMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxLightMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxLightMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxLightMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxLightMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxLightMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxLightMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxLightMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxLightMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxDarkMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21)   // "MapboxDarkMapProvider"
    },
    "MapboxDarkMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxDarkMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxDarkMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxDarkMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxDarkMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxDarkMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxDarkMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxDarkMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxDarkMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxDarkMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxSatelliteMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26)   // "MapboxSatelliteMapProvider"
    },
    "MapboxSatelliteMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxSatelliteMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxSatelliteMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxSatelliteMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxSatelliteMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxSatelliteMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxSatelliteMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxSatelliteMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxSatelliteMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxSatelliteMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxHybridMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "MapboxHybridMapProvider"
    },
    "MapboxHybridMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxHybridMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxHybridMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxHybridMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxHybridMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxHybridMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxHybridMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxHybridMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxHybridMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxHybridMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxBrightMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "MapboxBrightMapProvider"
    },
    "MapboxBrightMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxBrightMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxBrightMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxBrightMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxBrightMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxBrightMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxBrightMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxBrightMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxBrightMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxBrightMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxStreetsBasicMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "MapboxStreetsBasicMapProvider"
    },
    "MapboxStreetsBasicMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxStreetsBasicMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxStreetsBasicMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxStreetsBasicMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxStreetsBasicMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxStreetsBasicMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxStreetsBasicMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxStreetsBasicMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxStreetsBasicMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxStreetsBasicMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxOutdoorsMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25)   // "MapboxOutdoorsMapProvider"
    },
    "MapboxOutdoorsMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxOutdoorsMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxOutdoorsMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxOutdoorsMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxOutdoorsMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxOutdoorsMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxOutdoorsMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxOutdoorsMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxOutdoorsMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxOutdoorsMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS = QtMocHelpers::stringData(
    "MapboxCustomMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS_t qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "MapboxCustomMapProvider"
    },
    "MapboxCustomMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMapboxCustomMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MapboxCustomMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapboxMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMapboxCustomMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MapboxCustomMapProvider, std::true_type>
    >,
    nullptr
} };

void MapboxCustomMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MapboxCustomMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapboxCustomMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMapboxCustomMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapboxMapProvider::qt_metacast(_clname);
}

int MapboxCustomMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapboxMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
