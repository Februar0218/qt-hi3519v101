/****************************************************************************
** Meta object code from reading C++ file 'qsqldriver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qsqldriver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsqldriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSqlDriver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   12,   39,   11, 0x09,
      91,   12,   39,   11, 0x09,
     154,   11,  142,   11, 0x09,
     212,  196,   39,   11, 0x09,
     278,  196,  270,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QSqlDriver[] = {
    "QSqlDriver\0\0name\0notification(QString)\0"
    "bool\0subscribeToNotificationImplementation(QString)\0"
    "unsubscribeFromNotificationImplementation(QString)\0"
    "QStringList\0subscribedToNotificationsImplementation()\0"
    "identifier,type\0"
    "isIdentifierEscapedImplementation(QString,IdentifierType)\0"
    "QString\0stripDelimitersImplementation(QString,IdentifierType)\0"
};

void QSqlDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSqlDriver *_t = static_cast<QSqlDriver *>(_o);
        switch (_id) {
        case 0: _t->notification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->subscribeToNotificationImplementation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->unsubscribeFromNotificationImplementation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QStringList _r = _t->subscribedToNotificationsImplementation();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isIdentifierEscapedImplementation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< IdentifierType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->stripDelimitersImplementation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< IdentifierType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSqlDriver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSqlDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSqlDriver,
      qt_meta_data_QSqlDriver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSqlDriver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSqlDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSqlDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSqlDriver))
        return static_cast<void*>(const_cast< QSqlDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int QSqlDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSqlDriver::notification(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
