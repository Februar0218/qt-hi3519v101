/****************************************************************************
** Meta object code from reading C++ file 'qsqltablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/qsqltablemodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsqltablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSqlTableModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   16,   15,   15, 0x05,
      63,   56,   15,   15, 0x05,
      89,   16,   15,   15, 0x05,
     123,  119,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     146,   15,  141,   15, 0x0a,
     155,   15,   15,   15, 0x0a,
     164,   15,  141,   15, 0x0a,
     176,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QSqlTableModel[] = {
    "QSqlTableModel\0\0row,record\0"
    "primeInsert(int,QSqlRecord&)\0record\0"
    "beforeInsert(QSqlRecord&)\0"
    "beforeUpdate(int,QSqlRecord&)\0row\0"
    "beforeDelete(int)\0bool\0submit()\0"
    "revert()\0submitAll()\0revertAll()\0"
};

void QSqlTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSqlTableModel *_t = static_cast<QSqlTableModel *>(_o);
        switch (_id) {
        case 0: _t->primeInsert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSqlRecord(*)>(_a[2]))); break;
        case 1: _t->beforeInsert((*reinterpret_cast< QSqlRecord(*)>(_a[1]))); break;
        case 2: _t->beforeUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSqlRecord(*)>(_a[2]))); break;
        case 3: _t->beforeDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->revert(); break;
        case 6: { bool _r = _t->submitAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->revertAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSqlTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSqlTableModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_QSqlTableModel,
      qt_meta_data_QSqlTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSqlTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSqlTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSqlTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSqlTableModel))
        return static_cast<void*>(const_cast< QSqlTableModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int QSqlTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QSqlTableModel::primeInsert(int _t1, QSqlRecord & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSqlTableModel::beforeInsert(QSqlRecord & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSqlTableModel::beforeUpdate(int _t1, QSqlRecord & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSqlTableModel::beforeDelete(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
