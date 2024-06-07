/****************************************************************************
** Meta object code from reading C++ file 'EsriMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/EsriMapProvider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EsriMapProvider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEsriMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEsriMapProviderENDCLASS = QtMocHelpers::stringData(
    "EsriMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEsriMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEsriMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEsriMapProviderENDCLASS_t qt_meta_stringdata_CLASSEsriMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "EsriMapProvider"
    },
    "EsriMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEsriMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject EsriMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSEsriMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEsriMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEsriMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EsriMapProvider, std::true_type>
    >,
    nullptr
} };

void EsriMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *EsriMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EsriMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEsriMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int EsriMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS = QtMocHelpers::stringData(
    "EsriWorldStreetMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS_t qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26)   // "EsriWorldStreetMapProvider"
    },
    "EsriWorldStreetMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEsriWorldStreetMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject EsriWorldStreetMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<EsriMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEsriWorldStreetMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EsriWorldStreetMapProvider, std::true_type>
    >,
    nullptr
} };

void EsriWorldStreetMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *EsriWorldStreetMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EsriWorldStreetMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEsriWorldStreetMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EsriMapProvider::qt_metacast(_clname);
}

int EsriWorldStreetMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EsriMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS = QtMocHelpers::stringData(
    "EsriWorldSatelliteMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS_t qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "EsriWorldSatelliteMapProvider"
    },
    "EsriWorldSatelliteMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEsriWorldSatelliteMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject EsriWorldSatelliteMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<EsriMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEsriWorldSatelliteMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EsriWorldSatelliteMapProvider, std::true_type>
    >,
    nullptr
} };

void EsriWorldSatelliteMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *EsriWorldSatelliteMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EsriWorldSatelliteMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEsriWorldSatelliteMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EsriMapProvider::qt_metacast(_clname);
}

int EsriWorldSatelliteMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EsriMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS = QtMocHelpers::stringData(
    "EsriTerrainMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS_t qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22)   // "EsriTerrainMapProvider"
    },
    "EsriTerrainMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEsriTerrainMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject EsriTerrainMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<EsriMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEsriTerrainMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EsriTerrainMapProvider, std::true_type>
    >,
    nullptr
} };

void EsriTerrainMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *EsriTerrainMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EsriTerrainMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEsriTerrainMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EsriMapProvider::qt_metacast(_clname);
}

int EsriTerrainMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EsriMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
