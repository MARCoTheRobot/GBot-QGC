/****************************************************************************
** Meta object code from reading C++ file 'Viewer3DManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Viewer3D/Viewer3DManager.h"
#include "OsmParser.h"
#include "Viewer3DQmlBackend.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer3DManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSViewer3DManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSViewer3DManagerENDCLASS = QtMocHelpers::stringData(
    "Viewer3DManager",
    "osmParser",
    "OsmParser*",
    "qmlBackend",
    "Viewer3DQmlBackend*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSViewer3DManagerENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[11];
    char stringdata3[11];
    char stringdata4[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSViewer3DManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSViewer3DManagerENDCLASS_t qt_meta_stringdata_CLASSViewer3DManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "Viewer3DManager"
        QT_MOC_LITERAL(16, 9),  // "osmParser"
        QT_MOC_LITERAL(26, 10),  // "OsmParser*"
        QT_MOC_LITERAL(37, 10),  // "qmlBackend"
        QT_MOC_LITERAL(48, 19)   // "Viewer3DQmlBackend*"
    },
    "Viewer3DManager",
    "osmParser",
    "OsmParser*",
    "qmlBackend",
    "Viewer3DQmlBackend*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewer3DManagerENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Viewer3DManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewer3DManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewer3DManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewer3DManagerENDCLASS_t,
        // property 'osmParser'
        QtPrivate::TypeAndForceComplete<OsmParser*, std::true_type>,
        // property 'qmlBackend'
        QtPrivate::TypeAndForceComplete<Viewer3DQmlBackend*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewer3DManager, std::true_type>
    >,
    nullptr
} };

void Viewer3DManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Viewer3DManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< OsmParser**>(_v) = _t->_osmParser; break;
        case 1: *reinterpret_cast< Viewer3DQmlBackend**>(_v) = _t->_qmlBackend; break;
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

const QMetaObject *Viewer3DManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer3DManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewer3DManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Viewer3DManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
