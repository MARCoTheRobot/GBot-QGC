/****************************************************************************
** Meta object code from reading C++ file 'BingMapProvider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/BingMapProvider.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BingMapProvider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSBingMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBingMapProviderENDCLASS = QtMocHelpers::stringData(
    "BingMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBingMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBingMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBingMapProviderENDCLASS_t qt_meta_stringdata_CLASSBingMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "BingMapProvider"
    },
    "BingMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBingMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject BingMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<MapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSBingMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBingMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBingMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BingMapProvider, std::true_type>
    >,
    nullptr
} };

void BingMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *BingMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BingMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBingMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MapProvider::qt_metacast(_clname);
}

int BingMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS = QtMocHelpers::stringData(
    "BingRoadMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS_t qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "BingRoadMapProvider"
    },
    "BingRoadMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBingRoadMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject BingRoadMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<BingMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBingRoadMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BingRoadMapProvider, std::true_type>
    >,
    nullptr
} };

void BingRoadMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *BingRoadMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BingRoadMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBingRoadMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BingMapProvider::qt_metacast(_clname);
}

int BingRoadMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BingMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS = QtMocHelpers::stringData(
    "BingSatelliteMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS_t qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24)   // "BingSatelliteMapProvider"
    },
    "BingSatelliteMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBingSatelliteMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject BingSatelliteMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<BingMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBingSatelliteMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BingSatelliteMapProvider, std::true_type>
    >,
    nullptr
} };

void BingSatelliteMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *BingSatelliteMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BingSatelliteMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBingSatelliteMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BingMapProvider::qt_metacast(_clname);
}

int BingSatelliteMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BingMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS = QtMocHelpers::stringData(
    "BingHybridMapProvider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS_t qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21)   // "BingHybridMapProvider"
    },
    "BingHybridMapProvider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBingHybridMapProviderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject BingHybridMapProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<BingMapProvider::staticMetaObject>(),
    qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBingHybridMapProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BingHybridMapProvider, std::true_type>
    >,
    nullptr
} };

void BingHybridMapProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *BingHybridMapProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BingHybridMapProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBingHybridMapProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BingMapProvider::qt_metacast(_clname);
}

int BingHybridMapProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BingMapProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
