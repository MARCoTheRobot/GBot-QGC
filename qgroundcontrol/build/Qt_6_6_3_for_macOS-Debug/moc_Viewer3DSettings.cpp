/****************************************************************************
** Meta object code from reading C++ file 'Viewer3DSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/Viewer3DSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer3DSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS = QtMocHelpers::stringData(
    "Viewer3DSettings",
    "enabled",
    "Fact*",
    "osmFilePath",
    "buildingLevelHeight",
    "altitudeBias"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[17];
    char stringdata1[8];
    char stringdata2[6];
    char stringdata3[12];
    char stringdata4[20];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS_t qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "Viewer3DSettings"
        QT_MOC_LITERAL(17, 7),  // "enabled"
        QT_MOC_LITERAL(25, 5),  // "Fact*"
        QT_MOC_LITERAL(31, 11),  // "osmFilePath"
        QT_MOC_LITERAL(43, 19),  // "buildingLevelHeight"
        QT_MOC_LITERAL(63, 12)   // "altitudeBias"
    },
    "Viewer3DSettings",
    "enabled",
    "Fact*",
    "osmFilePath",
    "buildingLevelHeight",
    "altitudeBias"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewer3DSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Viewer3DSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewer3DSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS_t,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'osmFilePath'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'buildingLevelHeight'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'altitudeBias'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewer3DSettings, std::true_type>
    >,
    nullptr
} };

void Viewer3DSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Viewer3DSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->osmFilePath(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->buildingLevelHeight(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->altitudeBias(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Viewer3DSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer3DSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewer3DSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int Viewer3DSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
