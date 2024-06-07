/****************************************************************************
** Meta object code from reading C++ file 'ShapeFileHelper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Utilities/ShapeFileHelper.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShapeFileHelper.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSShapeFileHelperENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSShapeFileHelperENDCLASS = QtMocHelpers::stringData(
    "ShapeFileHelper",
    "determineShapeType",
    "",
    "file",
    "fileDialogKMLFilters",
    "fileDialogKMLOrSHPFilters",
    "ShapeType",
    "Polygon",
    "Polyline",
    "Error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShapeFileHelperENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[21];
    char stringdata5[26];
    char stringdata6[10];
    char stringdata7[8];
    char stringdata8[9];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShapeFileHelperENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShapeFileHelperENDCLASS_t qt_meta_stringdata_CLASSShapeFileHelperENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ShapeFileHelper"
        QT_MOC_LITERAL(16, 18),  // "determineShapeType"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 4),  // "file"
        QT_MOC_LITERAL(41, 20),  // "fileDialogKMLFilters"
        QT_MOC_LITERAL(62, 25),  // "fileDialogKMLOrSHPFilters"
        QT_MOC_LITERAL(88, 9),  // "ShapeType"
        QT_MOC_LITERAL(98, 7),  // "Polygon"
        QT_MOC_LITERAL(106, 8),  // "Polyline"
        QT_MOC_LITERAL(115, 5)   // "Error"
    },
    "ShapeFileHelper",
    "determineShapeType",
    "",
    "file",
    "fileDialogKMLFilters",
    "fileDialogKMLOrSHPFilters",
    "ShapeType",
    "Polygon",
    "Polyline",
    "Error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShapeFileHelperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   23, // properties
       1,   33, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x02,    4 /* Public */,

 // methods: parameters
    QMetaType::QVariantList, QMetaType::QString,    3,

 // properties: name, type, flags
       4, QMetaType::QStringList, 0x00015401, uint(-1), 0,
       5, QMetaType::QStringList, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    3,   38,

 // enum data: key, value
       7, uint(ShapeFileHelper::Polygon),
       8, uint(ShapeFileHelper::Polyline),
       9, uint(ShapeFileHelper::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject ShapeFileHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSShapeFileHelperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShapeFileHelperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShapeFileHelperENDCLASS_t,
        // property 'fileDialogKMLFilters'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'fileDialogKMLOrSHPFilters'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // enum 'ShapeType'
        QtPrivate::TypeAndForceComplete<ShapeFileHelper::ShapeType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShapeFileHelper, std::true_type>,
        // method 'determineShapeType'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ShapeFileHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShapeFileHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariantList _r = _t->determineShapeType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShapeFileHelper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->fileDialogKMLFilters(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->fileDialogKMLOrSHPFilters(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ShapeFileHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeFileHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShapeFileHelperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShapeFileHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
