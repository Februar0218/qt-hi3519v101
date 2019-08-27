/****************************************************************************
** Meta object code from reading C++ file 'qwindowsystem_qws.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../embedded/qwindowsystem_qws.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsystem_qws.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWSServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      70,   62,   10,   10, 0x05,
      90,   62,   10,   10, 0x05,
     114,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     134,   10,   10,   10, 0x08,
     155,   10,   10,   10, 0x08,
     177,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QWSServer[] = {
    "QWSServer\0\0w,e\0"
    "windowEvent(QWSWindow*,QWSServer::WindowEvent)\0"
    "channel\0newChannel(QString)\0"
    "removedChannel(QString)\0markedText(QString)\0"
    "_q_screenSaverWake()\0_q_screenSaverSleep()\0"
    "_q_screenSaverTimeout()\0"
};

void QWSServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWSServer *_t = static_cast<QWSServer *>(_o);
        switch (_id) {
        case 0: _t->windowEvent((*reinterpret_cast< QWSWindow*(*)>(_a[1])),(*reinterpret_cast< QWSServer::WindowEvent(*)>(_a[2]))); break;
        case 1: _t->newChannel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removedChannel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->markedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_screenSaverWake(); break;
        case 5: _t->d_func()->_q_screenSaverSleep(); break;
        case 6: _t->d_func()->_q_screenSaverTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWSServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWSServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWSServer,
      qt_meta_data_QWSServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWSServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWSServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWSServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWSServer))
        return static_cast<void*>(const_cast< QWSServer*>(this));
    return QObject::qt_metacast(_clname);
}

int QWSServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QWSServer::windowEvent(QWSWindow * _t1, QWSServer::WindowEvent _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWSServer::newChannel(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWSServer::removedChannel(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWSServer::markedText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_QWSInputMethod[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_QWSInputMethod[] = {
    "QWSInputMethod\0"
};

void QWSInputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWSInputMethod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWSInputMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWSInputMethod,
      qt_meta_data_QWSInputMethod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWSInputMethod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWSInputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWSInputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWSInputMethod))
        return static_cast<void*>(const_cast< QWSInputMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int QWSInputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QWSClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      30,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   10,   10,   10, 0x08,
      57,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QWSClient[] = {
    "QWSClient\0\0connectionClosed()\0readyRead()\0"
    "closeHandler()\0errorHandler()\0"
};

void QWSClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWSClient *_t = static_cast<QWSClient *>(_o);
        switch (_id) {
        case 0: _t->connectionClosed(); break;
        case 1: _t->readyRead(); break;
        case 2: _t->closeHandler(); break;
        case 3: _t->errorHandler(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWSClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWSClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWSClient,
      qt_meta_data_QWSClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWSClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWSClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWSClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWSClient))
        return static_cast<void*>(const_cast< QWSClient*>(this));
    return QObject::qt_metacast(_clname);
}

int QWSClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QWSClient::connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QWSClient::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
