/****************************************************************************
** Meta object code from reading C++ file 'qabstractfontengine_qws.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qabstractfontengine_qws.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractfontengine_qws.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFontEnginePlugin[] = {

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

static const char qt_meta_stringdata_QFontEnginePlugin[] = {
    "QFontEnginePlugin\0"
};

void QFontEnginePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QFontEnginePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFontEnginePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFontEnginePlugin,
      qt_meta_data_QFontEnginePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFontEnginePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFontEnginePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFontEnginePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFontEnginePlugin))
        return static_cast<void*>(const_cast< QFontEnginePlugin*>(this));
    if (!strcmp(_clname, "QFontEngineFactoryInterface"))
        return static_cast< QFontEngineFactoryInterface*>(const_cast< QFontEnginePlugin*>(this));
    if (!strcmp(_clname, QFontEngineFactoryInterface_iid))
        return static_cast< QFontEngineFactoryInterface*>(const_cast< QFontEnginePlugin*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QFactoryInterface"))
        return static_cast< QFactoryInterface*>(static_cast< QFontEngineFactoryInterface*>(const_cast< QFontEnginePlugin*>(this)));
    return QObject::qt_metacast(_clname);
}

int QFontEnginePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QAbstractFontEngine[] = {

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

static const char qt_meta_stringdata_QAbstractFontEngine[] = {
    "QAbstractFontEngine\0"
};

void QAbstractFontEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QAbstractFontEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAbstractFontEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractFontEngine,
      qt_meta_data_QAbstractFontEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAbstractFontEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAbstractFontEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAbstractFontEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractFontEngine))
        return static_cast<void*>(const_cast< QAbstractFontEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractFontEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
