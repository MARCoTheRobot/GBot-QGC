/****************************************************************************
** Meta object code from reading C++ file 'CameraSpec.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraSpec.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraSpec.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCameraSpecENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCameraSpecENDCLASS = QtMocHelpers::stringData(
    "CameraSpec",
    "dirtyChanged",
    "",
    "dirty",
    "sensorWidth",
    "Fact*",
    "sensorHeight",
    "imageWidth",
    "imageHeight",
    "focalLength",
    "landscape",
    "fixedOrientation",
    "minTriggerInterval"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraSpecENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[17];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraSpecENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraSpecENDCLASS_t qt_meta_stringdata_CLASSCameraSpecENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "CameraSpec"
        QT_MOC_LITERAL(11, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 5),  // "dirty"
        QT_MOC_LITERAL(31, 11),  // "sensorWidth"
        QT_MOC_LITERAL(43, 5),  // "Fact*"
        QT_MOC_LITERAL(49, 12),  // "sensorHeight"
        QT_MOC_LITERAL(62, 10),  // "imageWidth"
        QT_MOC_LITERAL(73, 11),  // "imageHeight"
        QT_MOC_LITERAL(85, 11),  // "focalLength"
        QT_MOC_LITERAL(97, 9),  // "landscape"
        QT_MOC_LITERAL(107, 16),  // "fixedOrientation"
        QT_MOC_LITERAL(124, 18)   // "minTriggerInterval"
    },
    "CameraSpec",
    "dirtyChanged",
    "",
    "dirty",
    "sensorWidth",
    "Fact*",
    "sensorHeight",
    "imageWidth",
    "imageHeight",
    "focalLength",
    "landscape",
    "fixedOrientation",
    "minTriggerInterval"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraSpecENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 5, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CameraSpec::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCameraSpecENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCameraSpecENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCameraSpecENDCLASS_t,
        // property 'sensorWidth'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'sensorHeight'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'imageWidth'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'imageHeight'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'focalLength'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'landscape'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'fixedOrientation'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'minTriggerInterval'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CameraSpec, std::true_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void CameraSpec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraSpec *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraSpec::*)(bool );
            if (_t _q_method = &CameraSpec::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraSpec *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->sensorWidth(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->sensorHeight(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->imageWidth(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->imageHeight(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->landscape(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->fixedOrientation(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->minTriggerInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CameraSpec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSpec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCameraSpecENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraSpec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CameraSpec::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
