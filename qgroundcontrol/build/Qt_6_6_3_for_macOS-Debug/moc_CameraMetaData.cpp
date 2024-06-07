/****************************************************************************
** Meta object code from reading C++ file 'CameraMetaData.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/CameraMetaData.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraMetaData.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCameraMetaDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCameraMetaDataENDCLASS = QtMocHelpers::stringData(
    "CameraMetaData",
    "canonicalName",
    "deprecatedTranslatedName",
    "brand",
    "model",
    "sensorWidth",
    "sensorHeight",
    "imageWidth",
    "imageHeight",
    "focalLength",
    "landscape",
    "fixedOrientation",
    "minTriggerInterval"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraMetaDataENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[25];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[17];
    char stringdata12[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraMetaDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraMetaDataENDCLASS_t qt_meta_stringdata_CLASSCameraMetaDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "CameraMetaData"
        QT_MOC_LITERAL(15, 13),  // "canonicalName"
        QT_MOC_LITERAL(29, 24),  // "deprecatedTranslatedName"
        QT_MOC_LITERAL(54, 5),  // "brand"
        QT_MOC_LITERAL(60, 5),  // "model"
        QT_MOC_LITERAL(66, 11),  // "sensorWidth"
        QT_MOC_LITERAL(78, 12),  // "sensorHeight"
        QT_MOC_LITERAL(91, 10),  // "imageWidth"
        QT_MOC_LITERAL(102, 11),  // "imageHeight"
        QT_MOC_LITERAL(114, 11),  // "focalLength"
        QT_MOC_LITERAL(126, 9),  // "landscape"
        QT_MOC_LITERAL(136, 16),  // "fixedOrientation"
        QT_MOC_LITERAL(153, 18)   // "minTriggerInterval"
    },
    "CameraMetaData",
    "canonicalName",
    "deprecatedTranslatedName",
    "brand",
    "model",
    "sensorWidth",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraMetaDataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::Double, 0x00015401, uint(-1), 0,
       6, QMetaType::Double, 0x00015401, uint(-1), 0,
       7, QMetaType::Double, 0x00015401, uint(-1), 0,
       8, QMetaType::Double, 0x00015401, uint(-1), 0,
       9, QMetaType::Double, 0x00015401, uint(-1), 0,
      10, QMetaType::Bool, 0x00015401, uint(-1), 0,
      11, QMetaType::Bool, 0x00015401, uint(-1), 0,
      12, QMetaType::Double, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CameraMetaData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCameraMetaDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCameraMetaDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCameraMetaDataENDCLASS_t,
        // property 'canonicalName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'deprecatedTranslatedName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'brand'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'model'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sensorWidth'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'sensorHeight'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'imageWidth'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'imageHeight'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'focalLength'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'landscape'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fixedOrientation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minTriggerInterval'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CameraMetaData, std::true_type>
    >,
    nullptr
} };

void CameraMetaData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraMetaData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->canonicalName; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->deprecatedTranslatedName; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->brand; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->model; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->sensorWidth; break;
        case 5: *reinterpret_cast< double*>(_v) = _t->sensorHeight; break;
        case 6: *reinterpret_cast< double*>(_v) = _t->imageWidth; break;
        case 7: *reinterpret_cast< double*>(_v) = _t->imageHeight; break;
        case 8: *reinterpret_cast< double*>(_v) = _t->focalLength; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->landscape; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->fixedOrientation; break;
        case 11: *reinterpret_cast< double*>(_v) = _t->minTriggerInterval; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *CameraMetaData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraMetaData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCameraMetaDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraMetaData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
