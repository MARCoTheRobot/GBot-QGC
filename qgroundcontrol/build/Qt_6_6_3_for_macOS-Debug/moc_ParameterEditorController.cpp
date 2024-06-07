/****************************************************************************
** Meta object code from reading C++ file 'ParameterEditorController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/ParameterEditorController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterEditorController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS = QtMocHelpers::stringData(
    "ParameterEditorGroup",
    "name",
    "facts",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[21];
    char stringdata1[5];
    char stringdata2[6];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS_t qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "ParameterEditorGroup"
        QT_MOC_LITERAL(21, 4),  // "name"
        QT_MOC_LITERAL(26, 5),  // "facts"
        QT_MOC_LITERAL(32, 19)   // "QmlObjectListModel*"
    },
    "ParameterEditorGroup",
    "name",
    "facts",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParameterEditorGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParameterEditorGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParameterEditorGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'facts'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterEditorGroup, std::true_type>
    >,
    nullptr
} };

void ParameterEditorGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->getFacts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *ParameterEditorGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParameterEditorGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS = QtMocHelpers::stringData(
    "ParameterEditorCategory",
    "name",
    "groups",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[24];
    char stringdata1[5];
    char stringdata2[7];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS_t qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "ParameterEditorCategory"
        QT_MOC_LITERAL(24, 4),  // "name"
        QT_MOC_LITERAL(29, 6),  // "groups"
        QT_MOC_LITERAL(36, 19)   // "QmlObjectListModel*"
    },
    "ParameterEditorCategory",
    "name",
    "groups",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParameterEditorCategoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParameterEditorCategory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParameterEditorCategoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'groups'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterEditorCategory, std::true_type>
    >,
    nullptr
} };

void ParameterEditorCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorCategory *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->getGroups(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *ParameterEditorCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParameterEditorCategoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS = QtMocHelpers::stringData(
    "ParameterEditorDiff",
    "loadChanged",
    "",
    "load",
    "componentId",
    "name",
    "fileValue",
    "vehicleValue",
    "noVehicleValue",
    "units"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[12];
    char stringdata5[5];
    char stringdata6[10];
    char stringdata7[13];
    char stringdata8[15];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS_t qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "ParameterEditorDiff"
        QT_MOC_LITERAL(20, 11),  // "loadChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 4),  // "load"
        QT_MOC_LITERAL(38, 11),  // "componentId"
        QT_MOC_LITERAL(50, 4),  // "name"
        QT_MOC_LITERAL(55, 9),  // "fileValue"
        QT_MOC_LITERAL(65, 12),  // "vehicleValue"
        QT_MOC_LITERAL(78, 14),  // "noVehicleValue"
        QT_MOC_LITERAL(93, 5)   // "units"
    },
    "ParameterEditorDiff",
    "loadChanged",
    "",
    "load",
    "componentId",
    "name",
    "fileValue",
    "vehicleValue",
    "noVehicleValue",
    "units"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParameterEditorDiffENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00015401, uint(-1), 0,
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::QString, 0x00015401, uint(-1), 0,
       7, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::Bool, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParameterEditorDiff::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParameterEditorDiffENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS_t,
        // property 'componentId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileValue'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'vehicleValue'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'noVehicleValue'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'units'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'load'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterEditorDiff, std::true_type>,
        // method 'loadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ParameterEditorDiff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterEditorDiff::*)(bool );
            if (_t _q_method = &ParameterEditorDiff::loadChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->componentId; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileValue; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->vehicleValue; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->noVehicleValue; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->units; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->load; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParameterEditorDiff *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6:
            if (_t->load != *reinterpret_cast< bool*>(_v)) {
                _t->load = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->loadChanged(_t->load);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ParameterEditorDiff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorDiff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParameterEditorDiffENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterEditorDiff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ParameterEditorDiff::loadChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS = QtMocHelpers::stringData(
    "ParameterEditorController",
    "searchTextChanged",
    "",
    "searchText",
    "currentCategoryChanged",
    "currentGroupChanged",
    "showModifiedOnlyChanged",
    "diffOtherVehicleChanged",
    "diffOtherVehicle",
    "diffMultipleComponentsChanged",
    "diffMultipleComponents",
    "parametersChanged",
    "_currentCategoryChanged",
    "_currentGroupChanged",
    "_searchTextChanged",
    "_buildLists",
    "_buildListsForComponent",
    "compId",
    "_factAdded",
    "Fact*",
    "fact",
    "searchParameters",
    "searchInName",
    "searchInDescriptions",
    "saveToFile",
    "filename",
    "buildDiffFromFile",
    "clearDiff",
    "sendDiff",
    "refresh",
    "resetAllToDefaults",
    "resetAllToVehicleConfiguration",
    "categories",
    "QmlObjectListModel*",
    "currentCategory",
    "currentGroup",
    "parameters",
    "showModifiedOnly",
    "diffList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[26];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[23];
    char stringdata5[20];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[17];
    char stringdata9[30];
    char stringdata10[23];
    char stringdata11[18];
    char stringdata12[24];
    char stringdata13[21];
    char stringdata14[19];
    char stringdata15[12];
    char stringdata16[24];
    char stringdata17[7];
    char stringdata18[11];
    char stringdata19[6];
    char stringdata20[5];
    char stringdata21[17];
    char stringdata22[13];
    char stringdata23[21];
    char stringdata24[11];
    char stringdata25[9];
    char stringdata26[18];
    char stringdata27[10];
    char stringdata28[9];
    char stringdata29[8];
    char stringdata30[19];
    char stringdata31[31];
    char stringdata32[11];
    char stringdata33[20];
    char stringdata34[16];
    char stringdata35[13];
    char stringdata36[11];
    char stringdata37[17];
    char stringdata38[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS_t qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "ParameterEditorController"
        QT_MOC_LITERAL(26, 17),  // "searchTextChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 10),  // "searchText"
        QT_MOC_LITERAL(56, 22),  // "currentCategoryChanged"
        QT_MOC_LITERAL(79, 19),  // "currentGroupChanged"
        QT_MOC_LITERAL(99, 23),  // "showModifiedOnlyChanged"
        QT_MOC_LITERAL(123, 23),  // "diffOtherVehicleChanged"
        QT_MOC_LITERAL(147, 16),  // "diffOtherVehicle"
        QT_MOC_LITERAL(164, 29),  // "diffMultipleComponentsChanged"
        QT_MOC_LITERAL(194, 22),  // "diffMultipleComponents"
        QT_MOC_LITERAL(217, 17),  // "parametersChanged"
        QT_MOC_LITERAL(235, 23),  // "_currentCategoryChanged"
        QT_MOC_LITERAL(259, 20),  // "_currentGroupChanged"
        QT_MOC_LITERAL(280, 18),  // "_searchTextChanged"
        QT_MOC_LITERAL(299, 11),  // "_buildLists"
        QT_MOC_LITERAL(311, 23),  // "_buildListsForComponent"
        QT_MOC_LITERAL(335, 6),  // "compId"
        QT_MOC_LITERAL(342, 10),  // "_factAdded"
        QT_MOC_LITERAL(353, 5),  // "Fact*"
        QT_MOC_LITERAL(359, 4),  // "fact"
        QT_MOC_LITERAL(364, 16),  // "searchParameters"
        QT_MOC_LITERAL(381, 12),  // "searchInName"
        QT_MOC_LITERAL(394, 20),  // "searchInDescriptions"
        QT_MOC_LITERAL(415, 10),  // "saveToFile"
        QT_MOC_LITERAL(426, 8),  // "filename"
        QT_MOC_LITERAL(435, 17),  // "buildDiffFromFile"
        QT_MOC_LITERAL(453, 9),  // "clearDiff"
        QT_MOC_LITERAL(463, 8),  // "sendDiff"
        QT_MOC_LITERAL(472, 7),  // "refresh"
        QT_MOC_LITERAL(480, 18),  // "resetAllToDefaults"
        QT_MOC_LITERAL(499, 30),  // "resetAllToVehicleConfiguration"
        QT_MOC_LITERAL(530, 10),  // "categories"
        QT_MOC_LITERAL(541, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(561, 15),  // "currentCategory"
        QT_MOC_LITERAL(577, 12),  // "currentGroup"
        QT_MOC_LITERAL(590, 10),  // "parameters"
        QT_MOC_LITERAL(601, 16),  // "showModifiedOnly"
        QT_MOC_LITERAL(618, 8)   // "diffList"
    },
    "ParameterEditorController",
    "searchTextChanged",
    "",
    "searchText",
    "currentCategoryChanged",
    "currentGroupChanged",
    "showModifiedOnlyChanged",
    "diffOtherVehicleChanged",
    "diffOtherVehicle",
    "diffMultipleComponentsChanged",
    "diffMultipleComponents",
    "parametersChanged",
    "_currentCategoryChanged",
    "_currentGroupChanged",
    "_searchTextChanged",
    "_buildLists",
    "_buildListsForComponent",
    "compId",
    "_factAdded",
    "Fact*",
    "fact",
    "searchParameters",
    "searchInName",
    "searchInDescriptions",
    "saveToFile",
    "filename",
    "buildDiffFromFile",
    "clearDiff",
    "sendDiff",
    "refresh",
    "resetAllToDefaults",
    "resetAllToVehicleConfiguration",
    "categories",
    "QmlObjectListModel*",
    "currentCategory",
    "currentGroup",
    "parameters",
    "showModifiedOnly",
    "diffList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSParameterEditorControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       9,  203, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,   10 /* Public */,
       4,    0,  155,    2, 0x06,   12 /* Public */,
       5,    0,  156,    2, 0x06,   13 /* Public */,
       6,    0,  157,    2, 0x06,   14 /* Public */,
       7,    1,  158,    2, 0x06,   15 /* Public */,
       9,    1,  161,    2, 0x06,   17 /* Public */,
      11,    0,  164,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  165,    2, 0x08,   20 /* Private */,
      13,    0,  166,    2, 0x08,   21 /* Private */,
      14,    0,  167,    2, 0x08,   22 /* Private */,
      15,    0,  168,    2, 0x08,   23 /* Private */,
      16,    1,  169,    2, 0x08,   24 /* Private */,
      18,    2,  172,    2, 0x08,   26 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      21,    3,  177,    2, 0x02,   29 /* Public */,
      21,    2,  184,    2, 0x22,   33 /* Public | MethodCloned */,
      21,    1,  189,    2, 0x22,   36 /* Public | MethodCloned */,
      24,    1,  192,    2, 0x02,   38 /* Public */,
      26,    1,  195,    2, 0x02,   40 /* Public */,
      27,    0,  198,    2, 0x02,   42 /* Public */,
      28,    0,  199,    2, 0x02,   43 /* Public */,
      29,    0,  200,    2, 0x02,   44 /* Public */,
      30,    0,  201,    2, 0x02,   45 /* Public */,
      31,    0,  202,    2, 0x02,   46 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   17,   20,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,   22,   23,
    QMetaType::QStringList, QMetaType::QString, QMetaType::Bool,    3,   22,
    QMetaType::QStringList, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Bool, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015003, uint(0), 0,
      32, 0x80000000 | 33, 0x00015409, uint(-1), 0,
      34, QMetaType::QObjectStar, 0x00015103, uint(1), 0,
      35, QMetaType::QObjectStar, 0x00015103, uint(2), 0,
      36, 0x80000000 | 33, 0x0001500b, uint(6), 0,
      37, QMetaType::Bool, 0x00015003, uint(3), 0,
       8, QMetaType::Bool, 0x00015003, uint(4), 0,
      10, QMetaType::Bool, 0x00015003, uint(5), 0,
      38, 0x80000000 | 33, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ParameterEditorController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSParameterEditorControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS_t,
        // property 'searchText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'categories'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'currentCategory'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'currentGroup'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'parameters'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'showModifiedOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'diffOtherVehicle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'diffMultipleComponents'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'diffList'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ParameterEditorController, std::true_type>,
        // method 'searchTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentCategoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentGroupChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showModifiedOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'diffOtherVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'diffMultipleComponentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'parametersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_currentCategoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_currentGroupChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_searchTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_buildLists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_buildListsForComponent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_factAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        // method 'searchParameters'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'searchParameters'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'searchParameters'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'buildDiffFromFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clearDiff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendDiff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetAllToDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetAllToVehicleConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ParameterEditorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->currentCategoryChanged(); break;
        case 2: _t->currentGroupChanged(); break;
        case 3: _t->showModifiedOnlyChanged(); break;
        case 4: _t->diffOtherVehicleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->diffMultipleComponentsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->parametersChanged(); break;
        case 7: _t->_currentCategoryChanged(); break;
        case 8: _t->_currentGroupChanged(); break;
        case 9: _t->_searchTextChanged(); break;
        case 10: _t->_buildLists(); break;
        case 11: _t->_buildListsForComponent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->_factAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Fact*>>(_a[2]))); break;
        case 13: { QStringList _r = _t->searchParameters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QStringList _r = _t->searchParameters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 15: { QStringList _r = _t->searchParameters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->saveToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: { bool _r = _t->buildDiffFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->clearDiff(); break;
        case 19: _t->sendDiff(); break;
        case 20: _t->refresh(); break;
        case 21: _t->resetAllToDefaults(); break;
        case 22: _t->resetAllToVehicleConfiguration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterEditorController::*)(QString );
            if (_t _q_method = &ParameterEditorController::searchTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (_t _q_method = &ParameterEditorController::currentCategoryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (_t _q_method = &ParameterEditorController::currentGroupChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (_t _q_method = &ParameterEditorController::showModifiedOnlyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(bool );
            if (_t _q_method = &ParameterEditorController::diffOtherVehicleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)(bool );
            if (_t _q_method = &ParameterEditorController::diffMultipleComponentsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ParameterEditorController::*)();
            if (_t _q_method = &ParameterEditorController::parametersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 4:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_searchText; break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->categories(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->currentCategory(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->currentGroup(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_parameters; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_showModifiedOnly; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->_diffOtherVehicle; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->_diffMultipleComponents; break;
        case 8: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->diffList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ParameterEditorController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_searchText != *reinterpret_cast< QString*>(_v)) {
                _t->_searchText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->searchTextChanged(_t->_searchText);
            }
            break;
        case 2: _t->setCurrentCategory(*reinterpret_cast< QObject**>(_v)); break;
        case 3: _t->setCurrentGroup(*reinterpret_cast< QObject**>(_v)); break;
        case 4:
            if (_t->_parameters != *reinterpret_cast< QmlObjectListModel**>(_v)) {
                _t->_parameters = *reinterpret_cast< QmlObjectListModel**>(_v);
                Q_EMIT _t->parametersChanged();
            }
            break;
        case 5:
            if (_t->_showModifiedOnly != *reinterpret_cast< bool*>(_v)) {
                _t->_showModifiedOnly = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showModifiedOnlyChanged();
            }
            break;
        case 6:
            if (_t->_diffOtherVehicle != *reinterpret_cast< bool*>(_v)) {
                _t->_diffOtherVehicle = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->diffOtherVehicleChanged(_t->_diffOtherVehicle);
            }
            break;
        case 7:
            if (_t->_diffMultipleComponents != *reinterpret_cast< bool*>(_v)) {
                _t->_diffMultipleComponents = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->diffMultipleComponentsChanged(_t->_diffMultipleComponents);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ParameterEditorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEditorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSParameterEditorControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int ParameterEditorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ParameterEditorController::searchTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterEditorController::currentCategoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ParameterEditorController::currentGroupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ParameterEditorController::showModifiedOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ParameterEditorController::diffOtherVehicleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ParameterEditorController::diffMultipleComponentsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ParameterEditorController::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
