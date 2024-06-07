/****************************************************************************
** Meta object code from reading C++ file 'QGeoMapReplyQGC.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGeoMapReplyQGC.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGeoMapReplyQGC.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS = QtMocHelpers::stringData(
    "QGeoTiledMapReplyQGC",
    "terrainDone",
    "",
    "responseBytes",
    "QNetworkReply::NetworkError",
    "error",
    "networkReplyFinished",
    "networkReplyError",
    "cacheReply",
    "QGCCacheTile*",
    "tile",
    "cacheError",
    "QGCMapTask::TaskType",
    "type",
    "errorString",
    "timeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[21];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[28];
    char stringdata5[6];
    char stringdata6[21];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[5];
    char stringdata11[11];
    char stringdata12[21];
    char stringdata13[5];
    char stringdata14[12];
    char stringdata15[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS_t qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "QGeoTiledMapReplyQGC"
        QT_MOC_LITERAL(21, 11),  // "terrainDone"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 13),  // "responseBytes"
        QT_MOC_LITERAL(48, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(76, 5),  // "error"
        QT_MOC_LITERAL(82, 20),  // "networkReplyFinished"
        QT_MOC_LITERAL(103, 17),  // "networkReplyError"
        QT_MOC_LITERAL(121, 10),  // "cacheReply"
        QT_MOC_LITERAL(132, 13),  // "QGCCacheTile*"
        QT_MOC_LITERAL(146, 4),  // "tile"
        QT_MOC_LITERAL(151, 10),  // "cacheError"
        QT_MOC_LITERAL(162, 20),  // "QGCMapTask::TaskType"
        QT_MOC_LITERAL(183, 4),  // "type"
        QT_MOC_LITERAL(188, 11),  // "errorString"
        QT_MOC_LITERAL(200, 7)   // "timeout"
    },
    "QGeoTiledMapReplyQGC",
    "terrainDone",
    "",
    "responseBytes",
    "QNetworkReply::NetworkError",
    "error",
    "networkReplyFinished",
    "networkReplyError",
    "cacheReply",
    "QGCCacheTile*",
    "tile",
    "cacheError",
    "QGCMapTask::TaskType",
    "type",
    "errorString",
    "timeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGeoTiledMapReplyQGCENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   55,    2, 0x08,    4 /* Private */,
       7,    1,   56,    2, 0x08,    5 /* Private */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
      11,    2,   62,    2, 0x08,    9 /* Private */,
      15,    0,   67,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGeoTiledMapReplyQGC::staticMetaObject = { {
    QMetaObject::SuperData::link<QGeoTiledMapReply::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGeoTiledMapReplyQGCENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGeoTiledMapReplyQGC, std::true_type>,
        // method 'terrainDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'networkReplyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'networkReplyError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'cacheReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCCacheTile *, std::false_type>,
        // method 'cacheError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGCMapTask::TaskType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGeoTiledMapReplyQGC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGeoTiledMapReplyQGC *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terrainDone((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[2]))); break;
        case 1: _t->networkReplyFinished(); break;
        case 2: _t->networkReplyError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 3: _t->cacheReply((*reinterpret_cast< std::add_pointer_t<QGCCacheTile*>>(_a[1]))); break;
        case 4: _t->cacheError((*reinterpret_cast< std::add_pointer_t<QGCMapTask::TaskType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
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
            using _t = void (QGeoTiledMapReplyQGC::*)(QByteArray , QNetworkReply::NetworkError );
            if (_t _q_method = &QGeoTiledMapReplyQGC::terrainDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QGeoTiledMapReplyQGC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMapReplyQGC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGeoTiledMapReplyQGCENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGeoTiledMapReply::qt_metacast(_clname);
}

int QGeoTiledMapReplyQGC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTiledMapReply::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}

// SIGNAL 0
void QGeoTiledMapReplyQGC::terrainDone(QByteArray _t1, QNetworkReply::NetworkError _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
