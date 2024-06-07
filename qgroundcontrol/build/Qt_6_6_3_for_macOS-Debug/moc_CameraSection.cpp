/****************************************************************************
** Meta object code from reading C++ file 'CameraSection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraSection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraSection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCameraSectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCameraSectionENDCLASS = QtMocHelpers::stringData(
    "CameraSection",
    "specifyGimbalChanged",
    "",
    "specifyGimbal",
    "specifyCameraModeChanged",
    "specifyCameraMode",
    "specifiedGimbalYawChanged",
    "gimbalYaw",
    "specifiedGimbalPitchChanged",
    "gimbalPitch",
    "_setDirty",
    "_setDirtyAndUpdateItemCount",
    "_updateSpecifiedGimbalYaw",
    "_updateSpecifiedGimbalPitch",
    "_specifyChanged",
    "_updateSettingsSpecified",
    "_cameraActionChanged",
    "_dirtyIfSpecified",
    "Fact*",
    "cameraAction",
    "cameraPhotoIntervalTime",
    "cameraPhotoIntervalDistance",
    "cameraModeSupported",
    "cameraMode",
    "CameraAction",
    "CameraActionNone",
    "TakePhotosIntervalTime",
    "TakePhotoIntervalDistance",
    "StopTakingPhotos",
    "TakeVideo",
    "StopTakingVideo",
    "TakePhoto"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraSectionENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[14];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[25];
    char stringdata5[18];
    char stringdata6[26];
    char stringdata7[10];
    char stringdata8[28];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[28];
    char stringdata12[26];
    char stringdata13[28];
    char stringdata14[16];
    char stringdata15[25];
    char stringdata16[21];
    char stringdata17[18];
    char stringdata18[6];
    char stringdata19[13];
    char stringdata20[24];
    char stringdata21[28];
    char stringdata22[20];
    char stringdata23[11];
    char stringdata24[13];
    char stringdata25[17];
    char stringdata26[23];
    char stringdata27[26];
    char stringdata28[17];
    char stringdata29[10];
    char stringdata30[16];
    char stringdata31[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraSectionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraSectionENDCLASS_t qt_meta_stringdata_CLASSCameraSectionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "CameraSection"
        QT_MOC_LITERAL(14, 20),  // "specifyGimbalChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 13),  // "specifyGimbal"
        QT_MOC_LITERAL(50, 24),  // "specifyCameraModeChanged"
        QT_MOC_LITERAL(75, 17),  // "specifyCameraMode"
        QT_MOC_LITERAL(93, 25),  // "specifiedGimbalYawChanged"
        QT_MOC_LITERAL(119, 9),  // "gimbalYaw"
        QT_MOC_LITERAL(129, 27),  // "specifiedGimbalPitchChanged"
        QT_MOC_LITERAL(157, 11),  // "gimbalPitch"
        QT_MOC_LITERAL(169, 9),  // "_setDirty"
        QT_MOC_LITERAL(179, 27),  // "_setDirtyAndUpdateItemCount"
        QT_MOC_LITERAL(207, 25),  // "_updateSpecifiedGimbalYaw"
        QT_MOC_LITERAL(233, 27),  // "_updateSpecifiedGimbalPitch"
        QT_MOC_LITERAL(261, 15),  // "_specifyChanged"
        QT_MOC_LITERAL(277, 24),  // "_updateSettingsSpecified"
        QT_MOC_LITERAL(302, 20),  // "_cameraActionChanged"
        QT_MOC_LITERAL(323, 17),  // "_dirtyIfSpecified"
        QT_MOC_LITERAL(341, 5),  // "Fact*"
        QT_MOC_LITERAL(347, 12),  // "cameraAction"
        QT_MOC_LITERAL(360, 23),  // "cameraPhotoIntervalTime"
        QT_MOC_LITERAL(384, 27),  // "cameraPhotoIntervalDistance"
        QT_MOC_LITERAL(412, 19),  // "cameraModeSupported"
        QT_MOC_LITERAL(432, 10),  // "cameraMode"
        QT_MOC_LITERAL(443, 12),  // "CameraAction"
        QT_MOC_LITERAL(456, 16),  // "CameraActionNone"
        QT_MOC_LITERAL(473, 22),  // "TakePhotosIntervalTime"
        QT_MOC_LITERAL(496, 25),  // "TakePhotoIntervalDistance"
        QT_MOC_LITERAL(522, 16),  // "StopTakingPhotos"
        QT_MOC_LITERAL(539, 9),  // "TakeVideo"
        QT_MOC_LITERAL(549, 15),  // "StopTakingVideo"
        QT_MOC_LITERAL(565, 9)   // "TakePhoto"
    },
    "CameraSection",
    "specifyGimbalChanged",
    "",
    "specifyGimbal",
    "specifyCameraModeChanged",
    "specifyCameraMode",
    "specifiedGimbalYawChanged",
    "gimbalYaw",
    "specifiedGimbalPitchChanged",
    "gimbalPitch",
    "_setDirty",
    "_setDirtyAndUpdateItemCount",
    "_updateSpecifiedGimbalYaw",
    "_updateSpecifiedGimbalPitch",
    "_specifyChanged",
    "_updateSettingsSpecified",
    "_cameraActionChanged",
    "_dirtyIfSpecified",
    "Fact*",
    "cameraAction",
    "cameraPhotoIntervalTime",
    "cameraPhotoIntervalDistance",
    "cameraModeSupported",
    "cameraMode",
    "CameraAction",
    "CameraActionNone",
    "TakePhotosIntervalTime",
    "TakePhotoIntervalDistance",
    "StopTakingPhotos",
    "TakeVideo",
    "StopTakingVideo",
    "TakePhoto"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraSectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,  106, // properties
       1,  151, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   11 /* Public */,
       4,    1,   89,    2, 0x06,   13 /* Public */,
       6,    1,   92,    2, 0x06,   15 /* Public */,
       8,    1,   95,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   98,    2, 0x08,   19 /* Private */,
      11,    0,   99,    2, 0x08,   20 /* Private */,
      12,    0,  100,    2, 0x08,   21 /* Private */,
      13,    0,  101,    2, 0x08,   22 /* Private */,
      14,    0,  102,    2, 0x08,   23 /* Private */,
      15,    0,  103,    2, 0x08,   24 /* Private */,
      16,    0,  104,    2, 0x08,   25 /* Private */,
      17,    0,  105,    2, 0x08,   26 /* Private */,

 // signals: parameters
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       9, 0x80000000 | 18, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      22, QMetaType::Bool, 0x00015401, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(1), 0,
      23, 0x80000000 | 18, 0x00015409, uint(-1), 0,

 // enums: name, alias, flags, count, data
      24,   24, 0x0,    7,  156,

 // enum data: key, value
      25, uint(CameraSection::CameraActionNone),
      26, uint(CameraSection::TakePhotosIntervalTime),
      27, uint(CameraSection::TakePhotoIntervalDistance),
      28, uint(CameraSection::StopTakingPhotos),
      29, uint(CameraSection::TakeVideo),
      30, uint(CameraSection::StopTakingVideo),
      31, uint(CameraSection::TakePhoto),

       0        // eod
};

Q_CONSTINIT const QMetaObject CameraSection::staticMetaObject = { {
    QMetaObject::SuperData::link<Section::staticMetaObject>(),
    qt_meta_stringdata_CLASSCameraSectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCameraSectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCameraSectionENDCLASS_t,
        // property 'specifyGimbal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gimbalPitch'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'gimbalYaw'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraAction'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraPhotoIntervalTime'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraPhotoIntervalDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'cameraModeSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'specifyCameraMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cameraMode'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // enum 'CameraAction'
        QtPrivate::TypeAndForceComplete<CameraSection::CameraAction, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CameraSection, std::true_type>,
        // method 'specifyGimbalChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'specifyCameraModeChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'specifiedGimbalYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'specifiedGimbalPitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDirtyAndUpdateItemCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateSpecifiedGimbalYaw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateSpecifiedGimbalPitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_specifyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateSettingsSpecified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_cameraActionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_dirtyIfSpecified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CameraSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->specifyGimbalChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->specifyCameraModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->specifiedGimbalYawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->specifiedGimbalPitchChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->_setDirty(); break;
        case 5: _t->_setDirtyAndUpdateItemCount(); break;
        case 6: _t->_updateSpecifiedGimbalYaw(); break;
        case 7: _t->_updateSpecifiedGimbalPitch(); break;
        case 8: _t->_specifyChanged(); break;
        case 9: _t->_updateSettingsSpecified(); break;
        case 10: _t->_cameraActionChanged(); break;
        case 11: _t->_dirtyIfSpecified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (CameraSection::*)(bool );
            if (_t _q_method = &CameraSection::specifyGimbalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (CameraSection::*)(bool );
            if (_t _q_method = &CameraSection::specifyCameraModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraSection::*)(double );
            if (_t _q_method = &CameraSection::specifiedGimbalYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraSection::*)(double );
            if (_t _q_method = &CameraSection::specifiedGimbalPitchChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->specifyGimbal(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->gimbalPitch(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->gimbalYaw(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->cameraAction(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->cameraPhotoIntervalTime(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->cameraPhotoIntervalDistance(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->cameraModeSupported(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->specifyCameraMode(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->cameraMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpecifyGimbal(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setSpecifyCameraMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CameraSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCameraSectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Section::qt_metacast(_clname);
}

int CameraSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
bool CameraSection::specifyGimbalChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool CameraSection::specifyCameraModeChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void CameraSection::specifiedGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraSection::specifiedGimbalPitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
