/****************************************************************************
** Meta object code from reading C++ file 'TerrainQueryAirMap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Terrain/TerrainQueryAirMap.h"
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
#error "The header file 'TerrainQueryAirMap.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS = QtMocHelpers::stringData(
    "TerrainQueryInterface",
    "coordinateHeightsReceived",
    "",
    "success",
    "QList<double>",
    "heights",
    "pathHeightsReceived",
    "distanceBetween",
    "finalDistanceBetween",
    "carpetHeightsReceived",
    "minHeight",
    "maxHeight",
    "QList<QList<double>>",
    "carpet"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[22];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[20];
    char stringdata7[16];
    char stringdata8[21];
    char stringdata9[22];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[21];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS_t qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "TerrainQueryInterface"
        QT_MOC_LITERAL(22, 25),  // "coordinateHeightsReceived"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 7),  // "success"
        QT_MOC_LITERAL(57, 13),  // "QList<double>"
        QT_MOC_LITERAL(71, 7),  // "heights"
        QT_MOC_LITERAL(79, 19),  // "pathHeightsReceived"
        QT_MOC_LITERAL(99, 15),  // "distanceBetween"
        QT_MOC_LITERAL(115, 20),  // "finalDistanceBetween"
        QT_MOC_LITERAL(136, 21),  // "carpetHeightsReceived"
        QT_MOC_LITERAL(158, 9),  // "minHeight"
        QT_MOC_LITERAL(168, 9),  // "maxHeight"
        QT_MOC_LITERAL(178, 20),  // "QList<QList<double>>"
        QT_MOC_LITERAL(199, 6)   // "carpet"
    },
    "TerrainQueryInterface",
    "coordinateHeightsReceived",
    "",
    "success",
    "QList<double>",
    "heights",
    "pathHeightsReceived",
    "distanceBetween",
    "finalDistanceBetween",
    "carpetHeightsReceived",
    "minHeight",
    "maxHeight",
    "QList<QList<double>>",
    "carpet"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainQueryInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       6,    4,   37,    2, 0x06,    4 /* Public */,
       9,    4,   46,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 4,    3,    7,    8,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double, 0x80000000 | 12,    3,   10,   11,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainQueryInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainQueryInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainQueryInterface, std::true_type>,
        // method 'coordinateHeightsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<double>, std::false_type>,
        // method 'pathHeightsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<double> &, std::false_type>,
        // method 'carpetHeightsReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QList<double>> &, std::false_type>
    >,
    nullptr
} };

void TerrainQueryInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainQueryInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coordinateHeightsReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        case 1: _t->pathHeightsReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[4]))); break;
        case 2: _t->carpetHeightsReceived((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QList<QList<double>>>>(_a[4]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QList<double>> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainQueryInterface::*)(bool , QList<double> );
            if (_t _q_method = &TerrainQueryInterface::coordinateHeightsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerrainQueryInterface::*)(bool , double , double , const QList<double> & );
            if (_t _q_method = &TerrainQueryInterface::pathHeightsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerrainQueryInterface::*)(bool , double , double , const QList<QList<double>> & );
            if (_t _q_method = &TerrainQueryInterface::carpetHeightsReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *TerrainQueryInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainQueryInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainQueryInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerrainQueryInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TerrainQueryInterface::coordinateHeightsReceived(bool _t1, QList<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TerrainQueryInterface::pathHeightsReceived(bool _t1, double _t2, double _t3, const QList<double> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TerrainQueryInterface::carpetHeightsReceived(bool _t1, double _t2, double _t3, const QList<QList<double>> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS = QtMocHelpers::stringData(
    "TerrainAirMapQuery",
    "_requestError",
    "",
    "QNetworkReply::NetworkError",
    "code",
    "_requestFinished",
    "_sslErrors",
    "QList<QSslError>",
    "errors"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[5];
    char stringdata5[17];
    char stringdata6[11];
    char stringdata7[17];
    char stringdata8[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS_t qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "TerrainAirMapQuery"
        QT_MOC_LITERAL(19, 13),  // "_requestError"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(62, 4),  // "code"
        QT_MOC_LITERAL(67, 16),  // "_requestFinished"
        QT_MOC_LITERAL(84, 10),  // "_sslErrors"
        QT_MOC_LITERAL(95, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(112, 6)   // "errors"
    },
    "TerrainAirMapQuery",
    "_requestError",
    "",
    "QNetworkReply::NetworkError",
    "code",
    "_requestFinished",
    "_sslErrors",
    "QList<QSslError>",
    "errors"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainAirMapQueryENDCLASS[] = {

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
       1,    1,   32,    2, 0x08,    1 /* Private */,
       5,    0,   35,    2, 0x08,    3 /* Private */,
       6,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainAirMapQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<TerrainQueryInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainAirMapQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainAirMapQuery, std::true_type>,
        // method '_requestError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method '_requestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>
    >,
    nullptr
} };

void TerrainAirMapQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainAirMapQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_requestError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 1: _t->_requestFinished(); break;
        case 2: _t->_sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *TerrainAirMapQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainAirMapQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainAirMapQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TerrainQueryInterface::qt_metacast(_clname);
}

int TerrainAirMapQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TerrainQueryInterface::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS = QtMocHelpers::stringData(
    "TerrainOfflineAirMapQuery"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS_t qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25)   // "TerrainOfflineAirMapQuery"
    },
    "TerrainOfflineAirMapQuery"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainOfflineAirMapQueryENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject TerrainOfflineAirMapQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<TerrainQueryInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainOfflineAirMapQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainOfflineAirMapQuery, std::true_type>
    >,
    nullptr
} };

void TerrainOfflineAirMapQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *TerrainOfflineAirMapQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainOfflineAirMapQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainOfflineAirMapQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TerrainQueryInterface::qt_metacast(_clname);
}

int TerrainOfflineAirMapQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TerrainQueryInterface::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
