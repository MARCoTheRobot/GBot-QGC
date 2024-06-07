/****************************************************************************
** Meta object code from reading C++ file 'GoogleMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/GoogleMapProvider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GoogleMapProvider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17)   // "GoogleMapProvider"
    },
    "GoogleMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int GoogleMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleStreetMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "GoogleStreetMapProvider"
    },
    "GoogleStreetMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleStreetMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleStreetMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleStreetMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleStreetMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleStreetMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleStreetMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleStreetMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleStreetMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleStreetMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleSatelliteMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26)   // "GoogleSatelliteMapProvider"
    },
    "GoogleSatelliteMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleSatelliteMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleSatelliteMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleSatelliteMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleSatelliteMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleSatelliteMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleSatelliteMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleSatelliteMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleSatelliteMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleSatelliteMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleLabelsMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "GoogleLabelsMapProvider"
    },
    "GoogleLabelsMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleLabelsMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleLabelsMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleLabelsMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleLabelsMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleLabelsMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleLabelsMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleLabelsMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleLabelsMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleLabelsMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleTerrainMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24)   // "GoogleTerrainMapProvider"
    },
    "GoogleTerrainMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleTerrainMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleTerrainMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleTerrainMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleTerrainMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleTerrainMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleTerrainMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleTerrainMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleTerrainMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleTerrainMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS = QtMocHelpers::stringData(
    "GoogleHybridMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS_t qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "GoogleHybridMapProvider"
    },
    "GoogleHybridMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGoogleHybridMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject GoogleHybridMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<GoogleMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGoogleHybridMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GoogleHybridMapProvider, std::true_type>
    >,
    nullptr
} };

void GoogleHybridMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GoogleHybridMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleHybridMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGoogleHybridMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GoogleMapProvider::qt_metacast(_clname);
}

int GoogleHybridMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GoogleMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
