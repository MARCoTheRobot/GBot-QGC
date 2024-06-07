/****************************************************************************
** Meta object code from reading C++ file 'PositionManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PositionManager/PositionManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PositionManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS = QtMocHelpers::stringData(
    "QGCPositionManager",
    "gcsPositionChanged",
    "",
    "QGeoCoordinate",
    "gcsPosition",
    "gcsHeadingChanged",
    "gcsHeading",
    "positionInfoUpdated",
    "QGeoPositionInfo",
    "update",
    "gcsPositionHorizontalAccuracyChanged",
    "_positionUpdated",
    "_error",
    "QGeoPositionInfoSource::Error",
    "positioningError",
    "gcsPositionHorizontalAccuracy"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[18];
    char stringdata6[11];
    char stringdata7[20];
    char stringdata8[17];
    char stringdata9[7];
    char stringdata10[37];
    char stringdata11[17];
    char stringdata12[7];
    char stringdata13[30];
    char stringdata14[17];
    char stringdata15[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS_t qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QGCPositionManager"
        QT_MOC_LITERAL(19, 18),  // "gcsPositionChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(54, 11),  // "gcsPosition"
        QT_MOC_LITERAL(66, 17),  // "gcsHeadingChanged"
        QT_MOC_LITERAL(84, 10),  // "gcsHeading"
        QT_MOC_LITERAL(95, 19),  // "positionInfoUpdated"
        QT_MOC_LITERAL(115, 16),  // "QGeoPositionInfo"
        QT_MOC_LITERAL(132, 6),  // "update"
        QT_MOC_LITERAL(139, 36),  // "gcsPositionHorizontalAccuracy..."
        QT_MOC_LITERAL(176, 16),  // "_positionUpdated"
        QT_MOC_LITERAL(193, 6),  // "_error"
        QT_MOC_LITERAL(200, 29),  // "QGeoPositionInfoSource::Error"
        QT_MOC_LITERAL(230, 16),  // "positioningError"
        QT_MOC_LITERAL(247, 29)   // "gcsPositionHorizontalAccuracy"
    },
    "QGCPositionManager",
    "gcsPositionChanged",
    "",
    "QGeoCoordinate",
    "gcsPosition",
    "gcsHeadingChanged",
    "gcsHeading",
    "positionInfoUpdated",
    "QGeoPositionInfo",
    "update",
    "gcsPositionHorizontalAccuracyChanged",
    "_positionUpdated",
    "_error",
    "QGeoPositionInfoSource::Error",
    "positioningError",
    "gcsPositionHorizontalAccuracy"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCPositionManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    4 /* Public */,
       5,    1,   53,    2, 0x06,    6 /* Public */,
       7,    1,   56,    2, 0x06,    8 /* Public */,
      10,    0,   59,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   60,    2, 0x08,   11 /* Private */,
      12,    1,   63,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 13,   14,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00015009, uint(0), 0,
       6, QMetaType::QReal, 0x00015001, uint(1), 0,
      15, QMetaType::QReal, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCPositionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCPositionManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS_t,
        // property 'gcsPosition'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'gcsHeading'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'gcsPositionHorizontalAccuracy'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCPositionManager, std::true_type>,
        // method 'gcsPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'gcsHeadingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'positionInfoUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoPositionInfo, std::false_type>,
        // method 'gcsPositionHorizontalAccuracyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_positionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoPositionInfo &, std::false_type>,
        // method '_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoPositionInfoSource::Error, std::false_type>
    >,
    nullptr
} };

void QGCPositionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCPositionManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gcsPositionChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->gcsHeadingChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->positionInfoUpdated((*reinterpret_cast< std::add_pointer_t<QGeoPositionInfo>>(_a[1]))); break;
        case 3: _t->gcsPositionHorizontalAccuracyChanged(); break;
        case 4: _t->_positionUpdated((*reinterpret_cast< std::add_pointer_t<QGeoPositionInfo>>(_a[1]))); break;
        case 5: _t->_error((*reinterpret_cast< std::add_pointer_t<QGeoPositionInfoSource::Error>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoPositionInfo >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoPositionInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCPositionManager::*)(QGeoCoordinate );
            if (_t _q_method = &QGCPositionManager::gcsPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)(qreal );
            if (_t _q_method = &QGCPositionManager::gcsHeadingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)(QGeoPositionInfo );
            if (_t _q_method = &QGCPositionManager::positionInfoUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCPositionManager::*)();
            if (_t _q_method = &QGCPositionManager::gcsPositionHorizontalAccuracyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCPositionManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->gcsPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->gcsHeading(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->gcsPositionHorizontalAccuracy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCPositionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPositionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCPositionManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCPositionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGCPositionManager::gcsPositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCPositionManager::gcsHeadingChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCPositionManager::positionInfoUpdated(QGeoPositionInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCPositionManager::gcsPositionHorizontalAccuracyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
