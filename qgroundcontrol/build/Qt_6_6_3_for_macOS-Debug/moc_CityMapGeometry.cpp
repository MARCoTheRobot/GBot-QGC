/****************************************************************************
** Meta object code from reading C++ file 'CityMapGeometry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Viewer3D/CityMapGeometry.h"
#include "OsmParser.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CityMapGeometry.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCityMapGeometryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCityMapGeometryENDCLASS = QtMocHelpers::stringData(
    "CityMapGeometry",
    "modelNameChanged",
    "",
    "osmFilePathChanged",
    "osmParserChanged",
    "setOsmFilePath",
    "value",
    "modelName",
    "osmParser",
    "OsmParser*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCityMapGeometryENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[15];
    char stringdata6[6];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCityMapGeometryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCityMapGeometryENDCLASS_t qt_meta_stringdata_CLASSCityMapGeometryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "CityMapGeometry"
        QT_MOC_LITERAL(16, 16),  // "modelNameChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 18),  // "osmFilePathChanged"
        QT_MOC_LITERAL(53, 16),  // "osmParserChanged"
        QT_MOC_LITERAL(70, 14),  // "setOsmFilePath"
        QT_MOC_LITERAL(85, 5),  // "value"
        QT_MOC_LITERAL(91, 9),  // "modelName"
        QT_MOC_LITERAL(101, 9),  // "osmParser"
        QT_MOC_LITERAL(111, 10)   // "OsmParser*"
    },
    "CityMapGeometry",
    "modelNameChanged",
    "",
    "osmFilePathChanged",
    "osmParserChanged",
    "setOsmFilePath",
    "value",
    "modelName",
    "osmParser",
    "OsmParser*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCityMapGeometryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,
       4,    0,   40,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015103, uint(0), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CityMapGeometry::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuick3DGeometry::staticMetaObject>(),
    qt_meta_stringdata_CLASSCityMapGeometryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCityMapGeometryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCityMapGeometryENDCLASS_t,
        // property 'modelName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'osmParser'
        QtPrivate::TypeAndForceComplete<OsmParser*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CityMapGeometry, std::true_type>,
        // method 'modelNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'osmFilePathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'osmParserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOsmFilePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void CityMapGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CityMapGeometry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modelNameChanged(); break;
        case 1: _t->osmFilePathChanged(); break;
        case 2: _t->osmParserChanged(); break;
        case 3: _t->setOsmFilePath((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CityMapGeometry::*)();
            if (_t _q_method = &CityMapGeometry::modelNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CityMapGeometry::*)();
            if (_t _q_method = &CityMapGeometry::osmFilePathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CityMapGeometry::*)();
            if (_t _q_method = &CityMapGeometry::osmParserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CityMapGeometry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 1: *reinterpret_cast< OsmParser**>(_v) = _t->osmParser(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CityMapGeometry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModelName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOsmParser(*reinterpret_cast< OsmParser**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CityMapGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CityMapGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCityMapGeometryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuick3DGeometry::qt_metacast(_clname);
}

int CityMapGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuick3DGeometry::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CityMapGeometry::modelNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CityMapGeometry::osmFilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CityMapGeometry::osmParserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
