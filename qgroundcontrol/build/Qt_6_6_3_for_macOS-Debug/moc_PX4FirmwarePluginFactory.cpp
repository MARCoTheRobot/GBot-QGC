/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwarePluginFactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/PX4/PX4FirmwarePluginFactory.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwarePluginFactory.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS = QtMocHelpers::stringData(
    "PX4FirmwarePluginFactory"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS_t qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24)   // "PX4FirmwarePluginFactory"
    },
    "PX4FirmwarePluginFactory"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4FirmwarePluginFactoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject PX4FirmwarePluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<FirmwarePluginFactory::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4FirmwarePluginFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4FirmwarePluginFactory, std::true_type>
    >,
    nullptr
} };

void PX4FirmwarePluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PX4FirmwarePluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwarePluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4FirmwarePluginFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FirmwarePluginFactory::qt_metacast(_clname);
}

int PX4FirmwarePluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FirmwarePluginFactory::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
