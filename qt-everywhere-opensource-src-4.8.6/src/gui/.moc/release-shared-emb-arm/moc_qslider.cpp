/****************************************************************************
** Meta object code from reading C++ file 'qslider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      21,    8, 0x0009510b,
      38,   34, 0x02095103,

 // enums: name, flags, count, data
       8, 0x0,    6,   24,

 // enum data: key, value
      51, uint(QSlider::NoTicks),
      59, uint(QSlider::TicksAbove),
      70, uint(QSlider::TicksLeft),
      80, uint(QSlider::TicksBelow),
      91, uint(QSlider::TicksRight),
     102, uint(QSlider::TicksBothSides),

       0        // eod
};

static const char qt_meta_stringdata_QSlider[] = {
    "QSlider\0TickPosition\0tickPosition\0int\0"
    "tickInterval\0NoTicks\0TicksAbove\0"
    "TicksLeft\0TicksBelow\0TicksRight\0"
    "TicksBothSides\0"
};

void QSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_QSlider,
      qt_meta_data_QSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSlider))
        return static_cast<void*>(const_cast< QSlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int QSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TickPosition*>(_v) = tickPosition(); break;
        case 1: *reinterpret_cast< int*>(_v) = tickInterval(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTickPosition(*reinterpret_cast< TickPosition*>(_v)); break;
        case 1: setTickInterval(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
