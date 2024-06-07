/****************************************************************************
** Meta object code from reading C++ file 'VehicleGeneratorFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/FactGroups/VehicleGeneratorFactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleGeneratorFactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS = QtMocHelpers::stringData(
    "VehicleGeneratorFactGroup",
    "flagsListGeneratorChanged",
    "",
    "status",
    "Fact*",
    "genSpeed",
    "batteryCurrent",
    "loadCurrent",
    "powerGenerated",
    "busVoltage",
    "rectifierTemp",
    "batCurrentSetpoint",
    "genTemp",
    "runtime",
    "timeMaintenance",
    "flagsListGenerator"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[26];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[6];
    char stringdata5[9];
    char stringdata6[15];
    char stringdata7[12];
    char stringdata8[15];
    char stringdata9[11];
    char stringdata10[14];
    char stringdata11[19];
    char stringdata12[8];
    char stringdata13[8];
    char stringdata14[16];
    char stringdata15[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS_t qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "VehicleGeneratorFactGroup"
        QT_MOC_LITERAL(26, 25),  // "flagsListGeneratorChanged"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 6),  // "status"
        QT_MOC_LITERAL(60, 5),  // "Fact*"
        QT_MOC_LITERAL(66, 8),  // "genSpeed"
        QT_MOC_LITERAL(75, 14),  // "batteryCurrent"
        QT_MOC_LITERAL(90, 11),  // "loadCurrent"
        QT_MOC_LITERAL(102, 14),  // "powerGenerated"
        QT_MOC_LITERAL(117, 10),  // "busVoltage"
        QT_MOC_LITERAL(128, 13),  // "rectifierTemp"
        QT_MOC_LITERAL(142, 18),  // "batCurrentSetpoint"
        QT_MOC_LITERAL(161, 7),  // "genTemp"
        QT_MOC_LITERAL(169, 7),  // "runtime"
        QT_MOC_LITERAL(177, 15),  // "timeMaintenance"
        QT_MOC_LITERAL(193, 18)   // "flagsListGenerator"
    },
    "VehicleGeneratorFactGroup",
    "flagsListGeneratorChanged",
    "",
    "status",
    "Fact*",
    "genSpeed",
    "batteryCurrent",
    "loadCurrent",
    "powerGenerated",
    "busVoltage",
    "rectifierTemp",
    "batCurrentSetpoint",
    "genTemp",
    "runtime",
    "timeMaintenance",
    "flagsListGenerator"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleGeneratorFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      12,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      15, QMetaType::QVariantList, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleGeneratorFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleGeneratorFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS_t,
        // property 'status'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'genSpeed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'batteryCurrent'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'loadCurrent'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'powerGenerated'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'busVoltage'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'rectifierTemp'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'batCurrentSetpoint'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'genTemp'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'runtime'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'timeMaintenance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'flagsListGenerator'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleGeneratorFactGroup, std::true_type>,
        // method 'flagsListGeneratorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VehicleGeneratorFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleGeneratorFactGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->flagsListGeneratorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleGeneratorFactGroup::*)();
            if (_t _q_method = &VehicleGeneratorFactGroup::flagsListGeneratorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
        case 8:
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
        auto *_t = static_cast<VehicleGeneratorFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->genSpeed(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->batteryCurrent(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->loadCurrent(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->powerGenerated(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->busVoltage(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rectifierTemp(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->batCurrentSetpoint(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->genTemp(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->runtime(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->timeMaintenance(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->flagsListGenerator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VehicleGeneratorFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleGeneratorFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleGeneratorFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleGeneratorFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
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
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void VehicleGeneratorFactGroup::flagsListGeneratorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
