/****************************************************************************
** Meta object code from reading C++ file 'FactValueSliderListModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactValueSliderListModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactValueSliderListModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS = QtMocHelpers::stringData(
    "FactValueSliderListModel",
    "initialValueAtPrecisionChanged",
    "",
    "resetInitialValue",
    "valueAtModelIndex",
    "index",
    "valueIndexAtModelIndex",
    "initialValueAtPrecision"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[25];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[18];
    char stringdata5[6];
    char stringdata6[23];
    char stringdata7[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS_t qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "FactValueSliderListModel"
        QT_MOC_LITERAL(25, 30),  // "initialValueAtPrecisionChanged"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 17),  // "resetInitialValue"
        QT_MOC_LITERAL(75, 17),  // "valueAtModelIndex"
        QT_MOC_LITERAL(93, 5),  // "index"
        QT_MOC_LITERAL(99, 22),  // "valueIndexAtModelIndex"
        QT_MOC_LITERAL(122, 23)   // "initialValueAtPrecision"
    },
    "FactValueSliderListModel",
    "initialValueAtPrecisionChanged",
    "",
    "resetInitialValue",
    "valueAtModelIndex",
    "index",
    "valueIndexAtModelIndex",
    "initialValueAtPrecision"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFactValueSliderListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x02,    3 /* Public */,
       4,    1,   40,    2, 0x02,    4 /* Public */,
       6,    1,   43,    2, 0x02,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Double, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int,    5,

 // properties: name, type, flags
       7, QMetaType::Double, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FactValueSliderListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFactValueSliderListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS_t,
        // property 'initialValueAtPrecision'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FactValueSliderListModel, std::true_type>,
        // method 'initialValueAtPrecisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetInitialValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'valueAtModelIndex'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'valueIndexAtModelIndex'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void FactValueSliderListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactValueSliderListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initialValueAtPrecisionChanged(); break;
        case 1: { int _r = _t->resetInitialValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { double _r = _t->valueAtModelIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->valueIndexAtModelIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FactValueSliderListModel::*)();
            if (_t _q_method = &FactValueSliderListModel::initialValueAtPrecisionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FactValueSliderListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->initialValueAtPrecision(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FactValueSliderListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactValueSliderListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFactValueSliderListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int FactValueSliderListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FactValueSliderListModel::initialValueAtPrecisionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
