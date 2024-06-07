/****************************************************************************
** Meta object code from reading C++ file 'QGCGeoBoundingCube.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCGeoBoundingCube.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCGeoBoundingCube.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS = QtMocHelpers::stringData(
    "QGCGeoBoundingCube",
    "reset",
    "",
    "isValid",
    "center",
    "QGeoCoordinate",
    "polygon2D",
    "QList<QGeoCoordinate>",
    "clipTo",
    "width",
    "height",
    "area",
    "radius",
    "pointNW",
    "pointSE"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[19];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[15];
    char stringdata6[10];
    char stringdata7[22];
    char stringdata8[7];
    char stringdata9[6];
    char stringdata10[7];
    char stringdata11[5];
    char stringdata12[7];
    char stringdata13[8];
    char stringdata14[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS_t qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QGCGeoBoundingCube"
        QT_MOC_LITERAL(19, 5),  // "reset"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 7),  // "isValid"
        QT_MOC_LITERAL(34, 6),  // "center"
        QT_MOC_LITERAL(41, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(56, 9),  // "polygon2D"
        QT_MOC_LITERAL(66, 21),  // "QList<QGeoCoordinate>"
        QT_MOC_LITERAL(88, 6),  // "clipTo"
        QT_MOC_LITERAL(95, 5),  // "width"
        QT_MOC_LITERAL(101, 6),  // "height"
        QT_MOC_LITERAL(108, 4),  // "area"
        QT_MOC_LITERAL(113, 6),  // "radius"
        QT_MOC_LITERAL(120, 7),  // "pointNW"
        QT_MOC_LITERAL(128, 7)   // "pointSE"
    },
    "QGCGeoBoundingCube",
    "reset",
    "",
    "isValid",
    "center",
    "QGeoCoordinate",
    "polygon2D",
    "QList<QGeoCoordinate>",
    "clipTo",
    "width",
    "height",
    "area",
    "radius",
    "pointNW",
    "pointSE"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCGeoBoundingCubeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x02,    3 /* Public */,
       3,    0,   69,    2, 0x102,    4 /* Public | MethodIsConst  */,
       4,    0,   70,    2, 0x102,    5 /* Public | MethodIsConst  */,
       6,    1,   71,    2, 0x102,    6 /* Public | MethodIsConst  */,
       6,    0,   74,    2, 0x122,    8 /* Public | MethodCloned | MethodIsConst  */,
       9,    0,   75,    2, 0x102,    9 /* Public | MethodIsConst  */,
      10,    0,   76,    2, 0x102,   10 /* Public | MethodIsConst  */,
      11,    0,   77,    2, 0x102,   11 /* Public | MethodIsConst  */,
      12,    0,   78,    2, 0x102,   12 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    0x80000000 | 5,
    0x80000000 | 7, QMetaType::Double,    8,
    0x80000000 | 7,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,

 // properties: name, type, flags
      13, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 5, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCGeoBoundingCube::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCGeoBoundingCubeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS_t,
        // property 'pointNW'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'pointSE'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCGeoBoundingCube, std::true_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isValid'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'center'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'polygon2D'
        QtPrivate::TypeAndForceComplete<QList<QGeoCoordinate>, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'polygon2D'
        QtPrivate::TypeAndForceComplete<QList<QGeoCoordinate>, std::false_type>,
        // method 'width'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'height'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'area'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'radius'
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void QGCGeoBoundingCube::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCGeoBoundingCube *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QGeoCoordinate _r = _t->center();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<QGeoCoordinate> _r = _t->polygon2D((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<QGeoCoordinate> _r = _t->polygon2D();
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->width();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 6: { double _r = _t->height();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 7: { double _r = _t->area();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->radius();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCGeoBoundingCube *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->pointNW; break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->pointSE; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCGeoBoundingCube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCGeoBoundingCube::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCGeoBoundingCubeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCGeoBoundingCube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
