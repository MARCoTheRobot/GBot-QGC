/****************************************************************************
** Meta object code from reading C++ file 'APMAirframeComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMAirframeComponentController.h"
#include "QmlObjectListModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMAirframeComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS = QtMocHelpers::stringData(
    "APMAirframeComponentController",
    "_githubJsonDownloadComplete",
    "",
    "remoteFile",
    "localFile",
    "errorMsg",
    "_paramFileDownloadComplete",
    "loadParameters",
    "paramFile",
    "frameClassModel",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[31];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[9];
    char stringdata6[27];
    char stringdata7[15];
    char stringdata8[10];
    char stringdata9[16];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "APMAirframeComponentController"
        QT_MOC_LITERAL(31, 27),  // "_githubJsonDownloadComplete"
        QT_MOC_LITERAL(59, 0),  // ""
        QT_MOC_LITERAL(60, 10),  // "remoteFile"
        QT_MOC_LITERAL(71, 9),  // "localFile"
        QT_MOC_LITERAL(81, 8),  // "errorMsg"
        QT_MOC_LITERAL(90, 26),  // "_paramFileDownloadComplete"
        QT_MOC_LITERAL(117, 14),  // "loadParameters"
        QT_MOC_LITERAL(132, 9),  // "paramFile"
        QT_MOC_LITERAL(142, 15),  // "frameClassModel"
        QT_MOC_LITERAL(158, 19)   // "QmlObjectListModel*"
    },
    "APMAirframeComponentController",
    "_githubJsonDownloadComplete",
    "",
    "remoteFile",
    "localFile",
    "errorMsg",
    "_paramFileDownloadComplete",
    "loadParameters",
    "paramFile",
    "frameClassModel",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMAirframeComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   32,    2, 0x08,    2 /* Private */,
       6,    3,   39,    2, 0x08,    6 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   46,    2, 0x02,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMAirframeComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMAirframeComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS_t,
        // property 'frameClassModel'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMAirframeComponentController, std::true_type>,
        // method '_githubJsonDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_paramFileDownloadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void APMAirframeComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMAirframeComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_githubJsonDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->_paramFileDownloadComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->loadParameters((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMAirframeComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_frameClassModel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *APMAirframeComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMAirframeComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMAirframeComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMAirframeComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAPMFrameClassENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMFrameClassENDCLASS = QtMocHelpers::stringData(
    "APMFrameClass",
    "imageResourceChanged",
    "",
    "frameTypeChanged",
    "name",
    "frameClass",
    "frameType",
    "frameTypeEnumStrings",
    "frameTypeEnumValues",
    "defaultFrameType",
    "imageResource",
    "imageResourceDefault",
    "frameTypeSupported"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMFrameClassENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[11];
    char stringdata6[10];
    char stringdata7[21];
    char stringdata8[20];
    char stringdata9[17];
    char stringdata10[14];
    char stringdata11[21];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMFrameClassENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMFrameClassENDCLASS_t qt_meta_stringdata_CLASSAPMFrameClassENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "APMFrameClass"
        QT_MOC_LITERAL(14, 20),  // "imageResourceChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 16),  // "frameTypeChanged"
        QT_MOC_LITERAL(53, 4),  // "name"
        QT_MOC_LITERAL(58, 10),  // "frameClass"
        QT_MOC_LITERAL(69, 9),  // "frameType"
        QT_MOC_LITERAL(79, 20),  // "frameTypeEnumStrings"
        QT_MOC_LITERAL(100, 19),  // "frameTypeEnumValues"
        QT_MOC_LITERAL(120, 16),  // "defaultFrameType"
        QT_MOC_LITERAL(137, 13),  // "imageResource"
        QT_MOC_LITERAL(151, 20),  // "imageResourceDefault"
        QT_MOC_LITERAL(172, 18)   // "frameTypeSupported"
    },
    "APMFrameClass",
    "imageResourceChanged",
    "",
    "frameTypeChanged",
    "name",
    "frameClass",
    "frameType",
    "frameTypeEnumStrings",
    "frameTypeEnumValues",
    "defaultFrameType",
    "imageResource",
    "imageResourceDefault",
    "frameTypeSupported"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMFrameClassENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       9,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,   10 /* Public */,
       3,    0,   27,    2, 0x06,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::Int, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015001, uint(1), 0,
       7, QMetaType::QStringList, 0x00015401, uint(-1), 0,
       8, QMetaType::QVariantList, 0x00015401, uint(-1), 0,
       9, QMetaType::Int, 0x00015401, uint(-1), 0,
      10, QMetaType::QString, 0x00015001, uint(0), 0,
      11, QMetaType::QString, 0x00015401, uint(-1), 0,
      12, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMFrameClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMFrameClassENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMFrameClassENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMFrameClassENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'frameClass'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'frameType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'frameTypeEnumStrings'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'frameTypeEnumValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'defaultFrameType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'imageResource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'imageResourceDefault'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'frameTypeSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMFrameClass, std::true_type>,
        // method 'imageResourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'frameTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void APMFrameClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMFrameClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageResourceChanged(); break;
        case 1: _t->frameTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMFrameClass::*)();
            if (_t _q_method = &APMFrameClass::imageResourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMFrameClass::*)();
            if (_t _q_method = &APMFrameClass::frameTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMFrameClass *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_frameClass; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frameType(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->_frameTypeEnumStrings; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->_frameTypeEnumValues; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->_defaultFrameType; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->imageResource(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->_imageResourceDefault; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->_frameTypeSupported; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *APMFrameClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFrameClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMFrameClassENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMFrameClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void APMFrameClass::imageResourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMFrameClass::frameTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
