/****************************************************************************
** Meta object code from reading C++ file 'JoystickManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Joystick/JoystickManager.h"
#include "Joystick.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJoystickManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSJoystickManagerENDCLASS = QtMocHelpers::stringData(
    "JoystickManager",
    "activeJoystickChanged",
    "",
    "Joystick*",
    "joystick",
    "activeJoystickNameChanged",
    "name",
    "availableJoysticksChanged",
    "updateAvailableJoysticksSignal",
    "init",
    "_updateAvailableJoysticks",
    "joysticks",
    "joystickNames",
    "activeJoystick",
    "activeJoystickName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJoystickManagerENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[16];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[9];
    char stringdata5[26];
    char stringdata6[5];
    char stringdata7[26];
    char stringdata8[31];
    char stringdata9[5];
    char stringdata10[26];
    char stringdata11[10];
    char stringdata12[14];
    char stringdata13[15];
    char stringdata14[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJoystickManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJoystickManagerENDCLASS_t qt_meta_stringdata_CLASSJoystickManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "JoystickManager"
        QT_MOC_LITERAL(16, 21),  // "activeJoystickChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 9),  // "Joystick*"
        QT_MOC_LITERAL(49, 8),  // "joystick"
        QT_MOC_LITERAL(58, 25),  // "activeJoystickNameChanged"
        QT_MOC_LITERAL(84, 4),  // "name"
        QT_MOC_LITERAL(89, 25),  // "availableJoysticksChanged"
        QT_MOC_LITERAL(115, 30),  // "updateAvailableJoysticksSignal"
        QT_MOC_LITERAL(146, 4),  // "init"
        QT_MOC_LITERAL(151, 25),  // "_updateAvailableJoysticks"
        QT_MOC_LITERAL(177, 9),  // "joysticks"
        QT_MOC_LITERAL(187, 13),  // "joystickNames"
        QT_MOC_LITERAL(201, 14),  // "activeJoystick"
        QT_MOC_LITERAL(216, 18)   // "activeJoystickName"
    },
    "JoystickManager",
    "activeJoystickChanged",
    "",
    "Joystick*",
    "joystick",
    "activeJoystickNameChanged",
    "name",
    "availableJoysticksChanged",
    "updateAvailableJoysticksSignal",
    "init",
    "_updateAvailableJoysticks",
    "joysticks",
    "joystickNames",
    "activeJoystick",
    "activeJoystickName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJoystickManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    5 /* Public */,
       5,    1,   53,    2, 0x06,    7 /* Public */,
       7,    0,   56,    2, 0x06,    9 /* Public */,
       8,    0,   57,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   58,    2, 0x0a,   11 /* Public */,
      10,    0,   59,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QVariantList, 0x00015001, uint(2), 0,
      12, QMetaType::QStringList, 0x00015001, uint(2), 0,
      13, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      14, QMetaType::QString, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject JoystickManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSJoystickManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJoystickManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJoystickManagerENDCLASS_t,
        // property 'joysticks'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'joystickNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'activeJoystick'
        QtPrivate::TypeAndForceComplete<Joystick*, std::true_type>,
        // property 'activeJoystickName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JoystickManager, std::true_type>,
        // method 'activeJoystickChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Joystick *, std::false_type>,
        // method 'activeJoystickNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'availableJoysticksChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateAvailableJoysticksSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateAvailableJoysticks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void JoystickManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoystickManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeJoystickChanged((*reinterpret_cast< std::add_pointer_t<Joystick*>>(_a[1]))); break;
        case 1: _t->activeJoystickNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->availableJoysticksChanged(); break;
        case 3: _t->updateAvailableJoysticksSignal(); break;
        case 4: _t->init(); break;
        case 5: _t->_updateAvailableJoysticks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoystickManager::*)(Joystick * );
            if (_t _q_method = &JoystickManager::activeJoystickChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JoystickManager::*)(const QString & );
            if (_t _q_method = &JoystickManager::activeJoystickNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JoystickManager::*)();
            if (_t _q_method = &JoystickManager::availableJoysticksChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JoystickManager::*)();
            if (_t _q_method = &JoystickManager::updateAvailableJoysticksSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JoystickManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->joysticks(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->joystickNames(); break;
        case 2: *reinterpret_cast< Joystick**>(_v) = _t->activeJoystick(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->activeJoystickName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JoystickManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveJoystick(*reinterpret_cast< Joystick**>(_v)); break;
        case 3: _t->setActiveJoystickName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *JoystickManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJoystickManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int JoystickManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void JoystickManager::activeJoystickChanged(Joystick * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickManager::activeJoystickNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickManager::availableJoysticksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JoystickManager::updateAvailableJoysticksSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
