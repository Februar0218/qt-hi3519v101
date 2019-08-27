/****************************************************************************
** Meta object code from reading C++ file 'qkbddriverplugin_qws.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../embedded/qkbddriverplugin_qws.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkbddriverplugin_qws.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QKbdDriverPlugin[] = {

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

static const char qt_meta_stringdata_QKbdDriverPlugin[] = {
    "QKbdDriverPlugin\0"
};

void QKbdDriverPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QKbdDriverPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QKbdDriverPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QKbdDriverPlugin,
      qt_meta_data_QKbdDriverPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QKbdDriverPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QKbdDriverPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QKbdDriverPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QKbdDriverPlugin))
        return static_cast<void*>(const_cast< QKbdDriverPlugin*>(this));
    if (!strcmp(_clname, "QWSKeyboardHandlerFactoryInterface"))
        return static_cast< QWSKeyboardHandlerFactoryInterface*>(const_cast< QKbdDriverPlugin*>(this));
    if (!strcmp(_clname, QWSKeyboardHandlerFactoryInterface_iid))
        return static_cast< QWSKeyboardHandlerFactoryInterface*>(const_cast< QKbdDriverPlugin*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QFactoryInterface"))
        return static_cast< QFactoryInterface*>(static_cast< QWSKeyboardHandlerFactoryInterface*>(const_cast< QKbdDriverPlugin*>(this)));
    return QObject::qt_metacast(_clname);
}

int QKbdDriverPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
